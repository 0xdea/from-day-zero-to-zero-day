#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utdbf.h"

Header *parse_header(FILE *fp)
{
    Header       *head = malloc(sizeof(Header));
    unsigned char header[32];
    int           num;
    short         head_record[2];

    fread(header, sizeof(header), 1, fp);
    parse_int32(header + 4, &num, 1);           // Parse num of records
    parse_int16(header + 8, head_record, 2);    // Parse num of bytes in header & record

    head->record_num  = num;
    head->header_size = head_record[0];
    head->record_size = head_record[1];

    printf("File type\t\t0x%02x\n", header[0]); //0x03 dBase IV memo file
    printf("YYYY MM DD\t\t%i %02i %02i\n", header[1] + 1900, header[2], header[3]);
    printf("Number of records     \t%d\n", num);
    printf("Num of bytes in header\t%hu\n", head_record[0]);
    printf("Num of bytes in record\t%hu\n", head_record[1]);
    // 2 bytes reserved
    printf("Incomplete transaction flag %02x\n", header[14]);
    printf("Encryption flag        \t%02x\n", header[15]);
    // 12 bytes reserved
    printf("Production MDX flag    \t%02x ", header[28]);
    if (header[28] == 0x01)
        printf("(has MDX)\n");
    else
        printf("(no MDX)\n");
    printf("Language driver ID     \t%02x\n", header[29]);
    // 2 bytes reserved

    return head;
}

Field *parse_field(FILE *fp)
{
    Field        *fd = malloc(sizeof(Field));
    unsigned char field[32];
    unsigned char name[12];

    fread(field, 1, 1, fp);
    if (field[0] == 0x0D)
        return NULL;

    fread(field + 1, 31, 1, fp);

    fd->type = field[11];
    fd->len  = field[16];

    printf("\nField name       \t");
    for (int i = 0; i < 11; i++)
        name[i] = field[i];
    parse_str(name, fd->name);
    printf("%s\n", fd->name);

    printf("Field type         \t%c\n", field[11]);
    // 4 bytes reserved
    printf("Field length       \t%u\n", field[16]);
    printf("Field decimal count\t%u\n", field[17]);
    // 2 bytes reserved
    printf("Work area ID        \t0x%02x\n", field[20]);
    // 10 bytes reserved
    printf("MDX flag            \t0x%02x ", field[31]);
    if (field[31] == 0x01)
        printf("(has index tag)\n");
    else
        printf("(no index tag)\n");

    return fd;
}

Record *parse_record(FILE *fp, Header *header)
{
    int           size = header->record_size;
    Record       *rec = malloc(sizeof(Record));
    unsigned char record[size];

    int nitems = fread(record, sizeof(record), 1, fp);
    if (nitems != 1)     // EOF
        return NULL;

    rec->is_deleted = record[0];
    rec->next       = NULL;

    rec->content    = malloc(size - 1);
    for (int i = 1, j = 0; i < size; i++, j++)
        rec->content[j] = record[i];

    return rec;
}

void record_nth_print(Record *head, Header *header, Field **array, int n)
{
    Record *record = head;
    int     num_fields = (header->header_size - 33) / 32;
    int     i, j;
    int     field_len = 0;
    char    type;
    int     ptr = 0;

    if (n > header->record_num)
    {
        printf("This record doesn't exist\n");
        return;
    }

    for (i = 0; i < n - 1; i++)
        record = record->next;

    if (record->is_deleted == 0x2A)
    {
        printf("Status: Record is deleted\n");
        return;
    }

    for (i = 0; i < num_fields; i++)     // Transverse field array
    {
        type      = array[i]->type;
        field_len += array[i]->len;
        printf("%s\n", array[i]->name);
        switch (type)
        {
            case 'N':
                for (j = ptr; j < field_len; j++)
                {
                    if (record->content[j] != 0x20)
                        printf("%c", record->content[j]);
                    ptr++;
                }
                printf("\n");
                break;
            default:
                printf("Unknown data types\n");
                break;
        }
    }
}

int record_prepend(Record **p_head, Record *new_record)
{
    if (new_record == NULL)
        return -1;

    new_record->next = *p_head;
    *p_head = new_record;

    return 0;
}

void record_reverse(Record **p_head)
{
    Record *prev = NULL;
    Record *current = *p_head;
    Record *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *p_head = prev;
}

void record_free(Record *head)
{
    for (Record *p = head; p != NULL; p = head)
    {
        head = head->next;
        free(p->content);
        free(p);
    }
}

void parse_int32(unsigned char *buf, int *p, int n)
{
    int *q = (int *)buf;
    for (int i = 0; i < n; i++, q++)
        p[i] = *q;
}

void parse_int16(unsigned char *buf, short *p, int n)
{
    short *q = (short *)buf;
    for (int i = 0; i < n; i++, q++)
        p[i] = *q;
}

void parse_str(unsigned char *buf, char *string)
{
    char *str = (char *)buf;
    for(int i = 0; i < strlen(str); i++)
        string[i] = str[i];
}
