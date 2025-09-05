#ifndef __UTDBF_H
#define __UTDBF_H

typedef struct header {
    int   record_num;
    short header_size;
    short record_size;
} Header;

typedef struct field {
    char          name[12];
    char          type;
    unsigned char len;
} Field;

typedef struct record {
    unsigned char  is_deleted;
    unsigned char *content;
    struct record *next;
} Record;

Header *parse_header(FILE *fp);
Field  *parse_field(FILE *fp);
Record *parse_record(FILE *fp, Header *header);
void    parse_int32(unsigned char *buf, int *p, int n);
void    parse_int16(unsigned char *buf, short *p, int n);
void    record_nth_print(Record *head, Header *header, Field **array, int n);
int     record_prepend(Record **p_head, Record *new_record);
void    record_reverse(Record **p_head);
void    record_free(Record *head);
void    parse_str(unsigned char *buf, char *string);

#endif
