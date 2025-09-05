#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utdbf.h"

int main(int argc, char **argv)
{
    char *filename = argv[1];
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("File not found\n");
        return -1;
    }

    Field  *field;
    Record *record = NULL;
    char   buf[256];
    int    i = 0;
    int    n;

    Header *header = parse_header(fp);
    int     num_fields = (header->header_size - 33) / 32;
    printf("Total number of fields\t%d\n", num_fields);

    Field **array = malloc(sizeof(Field *) * num_fields);
    printf("\n>>>> Field descriptor array\n");

    while ((field = parse_field(fp)) != NULL)
    {
        array[i] = field;
        i++;
    }

    while(record_prepend(&record, parse_record(fp, header)) == 0)
        ;
    record_reverse(&record);

    while (1)
    {
        printf("\n>>> Enter the number of the record: ");
        scanf("%s", buf);
        n = atoi(buf);
        if (n == 0)
            break;
        record_nth_print(record, header, array, n);
    }

    record_free(record);
    for (i = 0; i < num_fields; i++)
        free(array[i]);
    free(array);
    free(header);
    fclose(fp);
    return 0;
}
