__int64 __fastcall dl_rtld_di_serinfo(__int64 *a1, __int64 a2, char a3)
{
  int v5; // w23
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 result; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 *v11; // x19
  char v13; // w0
  _BYTE v14[4]; // [xsp+58h] [xbp+58h] BYREF
  int v15; // [xsp+5Ch] [xbp+5Ch]
  __int64 v16; // [xsp+60h] [xbp+60h]
  __int64 v17; // [xsp+68h] [xbp+68h]

  v5 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    *(_QWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
    v9 = a1[37];
    v14[0] = a3;
    v15 = 0;
    v16 = a2;
    v17 = a2 + 16;
    if ( v9 )
      goto LABEL_3;
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 8);
    v7 = a1[37];
    v14[0] = a3;
    v15 = 0;
    v16 = a2;
    v17 = a2 + 16 * (v6 + 1);
    if ( v7 )
      goto LABEL_3;
  }
  v10 = (__int64)a1;
  do
  {
    while ( (cache_rpath(v10, (_QWORD *)(v10 + 880), 15, (__int64)"RPATH") & 1) == 0 )
    {
      v10 = *(_QWORD *)(v10 + 808);
      if ( !v10 )
        goto LABEL_15;
    }
    add_path_constprop_0_isra_0((__int64)v14, *(__int64 **)(v10 + 880));
    v10 = *(_QWORD *)(v10 + 808);
  }
  while ( v10 );
LABEL_15:
  if ( !a1[6] )
  {
    v11 = dl_ns;
    if ( dl_ns )
    {
      if ( (*((_WORD *)dl_ns + 434) & 3) != 2 && a1 != dl_ns )
      {
        v13 = cache_rpath((__int64)dl_ns, dl_ns + 110, 15, (__int64)"RPATH");
        if ( (v13 & 1) != 0 )
          add_path_constprop_0_isra_0((__int64)v14, (__int64 *)v11[110]);
      }
    }
  }
LABEL_3:
  add_path_constprop_0_isra_0((__int64)v14, (__int64 *)_rtld_env_path_list);
  if ( (cache_rpath((__int64)a1, a1 + 127, 29, (__int64)"RUNPATH") & 1) != 0 )
    add_path_constprop_0_isra_0((__int64)v14, (__int64 *)a1[127]);
  result = *((unsigned int *)a1 + 265);
  if ( (result & 0x800) == 0 )
    result = add_path_constprop_0_isra_0((__int64)v14, (__int64 *)_rtld_search_dirs);
  if ( v5 )
  {
    result = *(_QWORD *)a2 + 16 * (*(unsigned int *)(a2 + 8) + 1LL);
    *(_QWORD *)a2 = result;
  }
  return result;
}
