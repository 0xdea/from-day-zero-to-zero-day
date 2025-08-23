char *__fastcall sub_D8BC(int a1, int a2)
{
  char *result; // r0
  void *v4; // r0

  result = (char *)dword_30CB0;
  if ( dword_30CB0 == 1 )
  {
    if ( a2 >= 0x8000 )
      goto LABEL_6;
    if ( dword_30C98 )
      free((void *)dword_30C98);
    v4 = malloc(a2 + 1);
    dword_30C98 = (int)v4;
    if ( !v4 || sub_13BB0(v4) != a2 )
LABEL_6:
      exit(1);
    *(_BYTE *)(dword_30C98 + a2) = 0;
    return sub_D0A8((char *)dword_30C98);
  }
  return result;
}
