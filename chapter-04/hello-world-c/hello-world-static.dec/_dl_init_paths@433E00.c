// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall dl_init_paths(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  _QWORD *v32; // x19
  _QWORD *v33; // x0
  _QWORD *v34; // x3
  _QWORD *v35; // x7
  const char *v36; // x1
  _QWORD *v37; // x0
  __int64 v38; // x4
  _QWORD *v39; // x2
  int v40; // w6
  __int64 *v41; // x19
  char v42; // w0
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 result; // x0
  __int64 v46; // x0
  unsigned __int16 v47; // w1
  _QWORD *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x1
  unsigned __int8 *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  unsigned __int8 *v54; // x4
  void *v55; // x5
  void *v56; // x6
  double v57; // d0
  double v58; // d1
  double v59; // d2
  double v60; // d3
  double v61; // d4
  double v62; // d5
  double v63; // d6
  double v64; // d7
  __int64 v65; // x2
  __int64 v66; // x20
  __int64 v67; // x3
  unsigned int v68; // t1
  unsigned __int64 v69; // x0
  double v70; // d0
  double v71; // d1
  double v72; // d2
  double v73; // d3
  double v74; // d4
  double v75; // d5
  double v76; // d6
  double v77; // d7
  const char *v78; // x3
  _QWORD v79[2]; // [xsp+FC00h] [xbp-10h] BYREF
  __int64 v80; // [xsp+FC10h] [xbp+0h] BYREF

  v17 = malloc(0x28u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  _rtld_search_dirs = v17;
  if ( !v17 )
  {
    v78 = "cannot create search path array";
    goto LABEL_38;
  }
  v32 = (_QWORD *)v17;
  v33 = (_QWORD *)malloc(0x140u, v24, v25, v26, v27, v28, v29, v30, v31, v18, v19, v20, v21, v22, v23);
  *v32 = v33;
  if ( !v33 )
    goto LABEL_39;
  v34 = system_dirs_len;
  v35 = v33 + 30;
  dl_all_dirs = (__int64)v33;
  v33[1] = "system search path";
  v33[2] = 0;
  v36 = "/usr/lib/aarch64-linux-gnu/";
  v33[3] = "/lib/aarch64-linux-gnu/";
  v33[4] = 23;
  v37 = v33 + 10;
  v38 = 27;
  *((_DWORD *)v37 - 10) = 0;
  *(v37 - 10) = v37;
  v32[1] = v37;
  v39 = v32 + 2;
  v37[1] = "system search path";
  v37[2] = 0;
  dword_48FB10 = 0;
  v37[3] = "/usr/lib/aarch64-linux-gnu/";
  v37[4] = 27;
  while ( 1 )
  {
    *((_DWORD *)v37 + 10) = 0;
    if ( v35 == v37 )
      break;
    ++v34;
    v36 += v38 + 1;
    v37 += 10;
    *v39++ = v37;
    v38 = v34[1];
    *(v37 - 10) = v37;
    v40 = *(unsigned __int8 *)v36;
    v37[1] = "system search path";
    v37[2] = 0;
    v37[3] = v36;
    v37[4] = v38;
    if ( v40 != 47 )
      _libc_assert_fail("pelem->dirname[0] == '/'", (__int64)"dl-load.c", 0x2FEu, (__int64)"_dl_init_paths");
  }
  *v39 = 0;
  v41 = dl_ns;
  max_dirnamelen = 27;
  v42 = *((_WORD *)dl_ns + 434);
  *v35 = 0;
  if ( (v42 & 3) == 2 )
    _libc_assert_fail("l->l_type != lt_loaded", (__int64)"dl-load.c", 0x313u, (__int64)"_dl_init_paths");
  v43 = v41[37];
  if ( v43 )
  {
    v44 = 0;
    if ( (*((_BYTE *)v41 + 870) & 0x20) != 0 )
      v44 = *v41;
    decompose_rpath(
      (__int64)(v41 + 127),
      (_BYTE *)(*(_QWORD *)(v41[13] + 8) + *(_QWORD *)(v43 + 8) + v44),
      (__int64)v41,
      (__int64)"RUNPATH");
    *((_DWORD *)v41 + 256) = 0;
    v41[110] = -1;
  }
  else
  {
    v49 = v41[23];
    v41[127] = -1;
    if ( v49 )
    {
      v50 = 0;
      if ( (*((_BYTE *)v41 + 870) & 0x20) != 0 )
        v50 = *v41;
      decompose_rpath(
        (__int64)(v41 + 110),
        (_BYTE *)(*(_QWORD *)(v41[13] + 8) + *(_QWORD *)(v49 + 8) + v50),
        (__int64)v41,
        (__int64)"RPATH");
      *((_DWORD *)v41 + 222) = 0;
    }
    else
    {
      v41[110] = -1;
    }
  }
  if ( !a1 || !*a1 )
  {
    result = -1;
    _rtld_env_path_list = -1;
    return result;
  }
  v46 = strlen(a1);
  v47 = (v46 + 16) & 0xFFF0;
  v48 = (_QWORD *)((char *)v79 - ((v46 + 16) & 0xFFFFFFFFFFFF0000LL));
  while ( v79 != v48 )
    ;
  v79[0] = 0;
  if ( v47 >= 0x400uLL )
    STACK[0x10000] = 0;
  v51 = (unsigned __int8 *)j_memcpy(&v80);
  v65 = *v51;
  v66 = (__int64)v51;
  if ( *v51 )
  {
    v54 = v51;
    v67 = 1;
    do
    {
      LOBYTE(v52) = v65 - 58;
      v68 = *++v54;
      v65 = v68;
      v52 = (unsigned __int8)v52;
      if ( (unsigned __int8)v52 < 2u )
        ++v67;
    }
    while ( (_DWORD)v65 );
    v53 = v67 + 1;
    v69 = 8 * v53;
  }
  else
  {
    v69 = 16;
  }
  _rtld_env_path_list = malloc(v69, v57, v58, v59, v60, v61, v62, v63, v64, v52, v65, v53, v54, v55, v56);
  if ( !_rtld_env_path_list )
  {
LABEL_39:
    v78 = "cannot create cache for search path";
LABEL_38:
    dl_signal_error(12, 0, 0, v78);
  }
  fillin_rpath_isra_0(v66, _rtld_env_path_list, (__int64)":;", a2, 0, (__int64)v41);
  result = _rtld_env_path_list;
  if ( !*(_QWORD *)_rtld_env_path_list )
  {
    free(_rtld_env_path_list, v70, v71, v72, v73, v74, v75, v76, v77);
    result = -1;
    _rtld_env_path_list = -1;
  }
  dword_48FB00 = 0;
  return result;
}
