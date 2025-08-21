// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall dl_init_paths(_BYTE *a1, __int64 a2, __int16 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // x0
  __int64 v9; // x1
  __int16 *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  _QWORD *v14; // x19
  _QWORD *v15; // x0
  _QWORD *v16; // x3
  _QWORD *v17; // x7
  const char *v18; // x1
  _QWORD *v19; // x0
  __int64 v20; // x4
  _QWORD *v21; // x2
  int v22; // w6
  __int64 *v23; // x19
  char v24; // w0
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 result; // x0
  __int64 v28; // x0
  unsigned __int16 v29; // w1
  _QWORD *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x1
  _BYTE *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  unsigned __int64 v38; // x2
  __int64 v39; // x20
  __int64 v40; // x3
  unsigned int v41; // t1
  unsigned __int64 v42; // x0
  const char *v43; // x3
  _QWORD v44[2]; // [xsp+FC00h] [xbp-10h] BYREF
  __int64 v45; // [xsp+FC10h] [xbp+0h] BYREF

  v8 = malloc(0x28u, a2, a3, a4, a5, a6);
  _rtld_search_dirs = v8;
  if ( !v8 )
  {
    v43 = "cannot create search path array";
    goto LABEL_38;
  }
  v14 = (_QWORD *)v8;
  v15 = (_QWORD *)malloc(0x140u, v9, v10, v11, v12, v13);
  *v14 = v15;
  if ( !v15 )
    goto LABEL_39;
  v16 = system_dirs_len;
  v17 = v15 + 30;
  dl_all_dirs = (__int64)v15;
  v15[1] = "system search path";
  v15[2] = 0;
  v18 = "/usr/lib/aarch64-linux-gnu/";
  v15[3] = "/lib/aarch64-linux-gnu/";
  v15[4] = 23;
  v19 = v15 + 10;
  v20 = 27;
  *((_DWORD *)v19 - 10) = 0;
  *(v19 - 10) = v19;
  v14[1] = v19;
  v21 = v14 + 2;
  v19[1] = "system search path";
  v19[2] = 0;
  dword_48FB10 = 0;
  v19[3] = "/usr/lib/aarch64-linux-gnu/";
  v19[4] = 27;
  while ( 1 )
  {
    *((_DWORD *)v19 + 10) = 0;
    if ( v17 == v19 )
      break;
    ++v16;
    v18 += v20 + 1;
    v19 += 10;
    *v21++ = v19;
    v20 = v16[1];
    *(v19 - 10) = v19;
    v22 = *(unsigned __int8 *)v18;
    v19[1] = "system search path";
    v19[2] = 0;
    v19[3] = v18;
    v19[4] = v20;
    if ( v22 != 47 )
      _libc_assert_fail("pelem->dirname[0] == '/'", (__int64)"dl-load.c", 0x2FEu, (__int64)"_dl_init_paths");
  }
  *v21 = 0;
  v23 = dl_ns;
  max_dirnamelen = 27;
  v24 = *((_WORD *)dl_ns + 434);
  *v17 = 0;
  if ( (v24 & 3) == 2 )
    _libc_assert_fail("l->l_type != lt_loaded", (__int64)"dl-load.c", 0x313u, (__int64)"_dl_init_paths");
  v25 = v23[37];
  if ( v25 )
  {
    v26 = 0;
    if ( (*((_BYTE *)v23 + 870) & 0x20) != 0 )
      v26 = *v23;
    decompose_rpath(
      (__int64)(v23 + 127),
      (_BYTE *)(*(_QWORD *)(v23[13] + 8) + *(_QWORD *)(v25 + 8) + v26),
      (__int64)v23,
      (__int64)"RUNPATH");
    *((_DWORD *)v23 + 256) = 0;
    v23[110] = -1;
  }
  else
  {
    v31 = v23[23];
    v23[127] = -1;
    if ( v31 )
    {
      v32 = 0;
      if ( (*((_BYTE *)v23 + 870) & 0x20) != 0 )
        v32 = *v23;
      decompose_rpath(
        (__int64)(v23 + 110),
        (_BYTE *)(*(_QWORD *)(v23[13] + 8) + *(_QWORD *)(v31 + 8) + v32),
        (__int64)v23,
        (__int64)"RPATH");
      *((_DWORD *)v23 + 222) = 0;
    }
    else
    {
      v23[110] = -1;
    }
  }
  if ( !a1 || !*a1 )
  {
    result = -1;
    _rtld_env_path_list = -1;
    return result;
  }
  v28 = strlen(a1);
  v29 = (v28 + 16) & 0xFFF0;
  v30 = (_QWORD *)((char *)v44 - ((v28 + 16) & 0xFFFFFFFFFFFF0000LL));
  while ( v44 != v30 )
    ;
  v44[0] = 0;
  if ( v29 >= 0x400uLL )
    STACK[0x10000] = 0;
  v33 = (_BYTE *)j_memcpy(&v45);
  v38 = (unsigned __int8)*v33;
  v39 = (__int64)v33;
  if ( *v33 )
  {
    v36 = (__int64)v33;
    v40 = 1;
    do
    {
      LOBYTE(v34) = v38 - 58;
      v41 = *(unsigned __int8 *)++v36;
      v38 = v41;
      v34 = (unsigned __int8)v34;
      if ( (unsigned __int8)v34 < 2u )
        ++v40;
    }
    while ( (_DWORD)v38 );
    v35 = v40 + 1;
    v42 = 8 * v35;
  }
  else
  {
    v42 = 16;
  }
  _rtld_env_path_list = malloc(v42, v34, (__int16 *)v38, v35, v36, v37);
  if ( !_rtld_env_path_list )
  {
LABEL_39:
    v43 = "cannot create cache for search path";
LABEL_38:
    dl_signal_error(12, 0, 0, v43);
  }
  fillin_rpath_isra_0(v39, _rtld_env_path_list, (__int64)":;", a2, 0, (__int64)v23);
  result = _rtld_env_path_list;
  if ( !*(_QWORD *)_rtld_env_path_list )
  {
    free(_rtld_env_path_list);
    result = -1;
    _rtld_env_path_list = -1;
  }
  dword_48FB00 = 0;
  return result;
}
