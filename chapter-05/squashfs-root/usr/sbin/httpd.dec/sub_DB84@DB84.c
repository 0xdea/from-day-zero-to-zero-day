int __fastcall sub_DB84(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // r5
  char *v6; // r0
  int result; // r0
  int v8; // r3
  bool v9; // nf

  v5 = (_DWORD *)*a4;
  v6 = (char *)wl_nvname(*(_DWORD *)*a4 + 3, a2, a3);
  result = sub_D940(v5, v6, a4[1]);
  v9 = result < 0;
  if ( result < 0 )
    result = 1;
  else
    v8 = a4[2];
  if ( !v9 )
  {
    a4[2] = v8 | result;
    return 0;
  }
  return result;
}
