_BYTE *__fastcall sub_E7DC(const char *a1)
{
  const char *v1; // r4
  size_t v2; // r0
  _BYTE *result; // r0
  _BYTE *v4; // r2
  int v5; // r3
  int v6; // t1

  v1 = a1;
  v2 = strlen(a1);
  result = malloc(v2 + 1);
  if ( result )
  {
    v4 = result;
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)v1++;
      v5 = v6;
      if ( !v6 )
        break;
      if ( v5 != 13 )
        *v4++ = v5;
    }
    *v4 = 0;
  }
  return result;
}
