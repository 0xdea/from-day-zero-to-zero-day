int __fastcall sub_13078(FILE *a1, _DWORD *a2, unsigned int *a3)
{
  bool v3; // zf
  unsigned int v7; // r4
  unsigned int v8; // r7
  char *v9; // r5
  int result; // r0
  char *v11; // r0
  size_t v12; // r0
  _BYTE *v13; // r0

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( v3 || !a3 )
    return -1;
  v7 = ferror(a1);
  if ( v7 )
    return -2;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 + 262145 > v8 )
    {
      if ( v7 + 262145 <= v7 )
      {
        free(v9);
        return -3;
      }
      v11 = (char *)realloc(v9, v7 + 262145);
      if ( !v11 )
        goto LABEL_17;
      v8 = v7 + 262145;
      v9 = v11;
    }
    v12 = fread(&v9[v7], 1u, 0x40000u, a1);
    if ( !v12 )
      break;
    v7 += v12;
  }
  if ( ferror(a1) )
  {
    free(v9);
    return -2;
  }
  v13 = realloc(v9, v7 + 1);
  if ( !v13 )
  {
LABEL_17:
    free(v9);
    return -4;
  }
  v13[v7] = 0;
  *a2 = v13;
  result = 0;
  *a3 = v7;
  return result;
}
