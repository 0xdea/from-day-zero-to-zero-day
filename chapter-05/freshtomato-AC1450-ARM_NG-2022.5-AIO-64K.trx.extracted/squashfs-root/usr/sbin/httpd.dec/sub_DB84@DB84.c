int __fastcall sub_DB84(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  char *v6; // r0
  int result; // r0
  int v8; // r3
  bool v9; // nf

  v5 = *(_DWORD **)a4;
  v6 = (char *)wl_nvname(**(_DWORD **)a4 + 3);
  result = sub_D940(v5, v6, *(_DWORD *)(a4 + 4));
  v9 = result < 0;
  if ( result < 0 )
    result = 1;
  else
    v8 = *(_DWORD *)(a4 + 8);
  if ( !v9 )
  {
    *(_DWORD *)(a4 + 8) = v8 | result;
    return 0;
  }
  return result;
}
