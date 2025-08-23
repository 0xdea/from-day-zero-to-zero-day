char *__fastcall sub_E6BC(const char *a1)
{
  const char *v1; // r6
  size_t v2; // r0
  char *v3; // r0
  char *v4; // r5
  char *v5; // r4
  bool v6; // zf
  int v7; // r7
  int v8; // t1

  v1 = a1;
  v2 = strlen(a1);
  v3 = (char *)malloc(4 * v2 + 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)v1++;
      v7 = v8;
      if ( !v8 )
        break;
      v6 = v7 == 34;
      if ( v7 != 34 )
        v6 = v7 == 39;
      if ( v6 || v7 == 92 || ((*_ctype_b_loc())[v7] & 0x40) == 0 )
        v5 += sprintf(v5, "\\x%02x", v7);
      else
        *v5++ = v7;
    }
    *v5 = 0;
  }
  return v4;
}
