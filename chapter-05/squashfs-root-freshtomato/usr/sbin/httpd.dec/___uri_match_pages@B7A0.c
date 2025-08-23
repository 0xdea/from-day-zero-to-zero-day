bool __fastcall __uri_match_pages(unsigned __int8 *str_a, int len_str_a, const char *str_b)
{
  unsigned __int8 *v3; // r3
  int v7; // r2
  int v8; // t1
  unsigned __int8 *v9; // r6
  size_t v10; // r0
  int v11; // r5
  unsigned __int8 *v12; // r7
  unsigned __int8 *v13; // r1

  v3 = str_a;
  while ( 1 )
  {
    v13 = v3;
    if ( v3 - str_a >= len_str_a )
      return *str_b == 0;
    v8 = *v3++;
    v7 = v8;
    if ( v8 == 63 )
    {
      if ( *str_b )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( v7 == 42 )
      break;
LABEL_14:
    if ( *(unsigned __int8 *)str_b != v7 )
      return 0;
LABEL_15:
    ++str_b;
  }
  v9 = v13 + 1;
  if ( v13[1] == 42 )
  {
    v9 = v13 + 2;
    v10 = strlen(str_b);
  }
  else
  {
    v10 = strcspn(str_b, "/");
  }
  v11 = v10;
  v12 = (unsigned __int8 *)(&str_a[len_str_a] - v9);
  while ( v11 >= 0 )
  {
    if ( __uri_match_pages(v9, (int)v12, &str_b[v11]) )
      return 1;
    --v11;
  }
  return 0;
}
