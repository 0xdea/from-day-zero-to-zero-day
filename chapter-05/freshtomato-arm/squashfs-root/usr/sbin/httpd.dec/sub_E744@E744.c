char *__fastcall sub_E744(const char *a1)
{
  const char *v1; // r6
  size_t v2; // r0
  char *v3; // r0
  char *v4; // r5
  char *v5; // r4
  bool v6; // zf
  bool v7; // zf
  int v8; // r7
  int v9; // t1

  v1 = a1;
  v2 = strlen(a1);
  v3 = (char *)malloc(6 * v2 + 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3;
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)v1++;
      v8 = v9;
      if ( !v9 )
        break;
      v6 = v8 == 38;
      if ( v8 != 38 )
        v6 = v8 == 60;
      if ( v6 )
        goto LABEL_13;
      v7 = v8 == 62;
      if ( v8 != 62 )
        v7 = v8 == 34;
      if ( v7 || v8 == 39 || ((*_ctype_b_loc())[v8] & 0x40) == 0 )
LABEL_13:
        v5 += sprintf(v5, "&#%d;", v8);
      else
        *v5++ = v8;
    }
    *v5 = 0;
  }
  return v4;
}
