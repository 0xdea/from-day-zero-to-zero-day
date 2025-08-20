__int64 __fastcall _gconv_lookup_cache(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5)
{
  __int64 v5; // x19
  unsigned __int16 v10; // w25
  unsigned __int16 v11; // w26
  __int64 v12; // x20
  unsigned int module_idx; // w21
  __int64 v15; // x2
  void *v16; // x5
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  void *v26; // x4
  __int64 v27; // x28
  void *v28; // x3
  __int64 v29; // x26
  __int64 v30; // x28
  __int64 v31; // x1
  _BOOL4 v32; // w0
  __int64 v33; // x25
  __int64 v34; // x3
  _WORD *v35; // x20
  __int64 v36; // x0
  __int64 v37; // x23
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  unsigned int v42; // w0
  double v43; // d0
  double v44; // d1
  double v45; // d2
  double v46; // d3
  double v47; // d4
  double v48; // d5
  double v49; // d6
  double v50; // d7
  void *v51; // x4
  unsigned int v52; // w20
  __int64 v53; // x3
  __int64 v54; // x0
  __int64 v55; // x4
  __int64 v56; // x1
  __int64 v57; // x5
  int v58; // w19
  __int64 v59; // x0
  __int64 v60; // x0
  _WORD *v61; // x27
  unsigned int v62; // w0
  __int64 v63; // x0
  __int64 v64; // x3
  void *v65; // x4
  unsigned __int16 *v66; // x8
  __int64 v67; // x2
  __int64 v68; // x19
  int v69; // w23
  int module_constprop_0; // w0
  double v71; // d0
  double v72; // d1
  double v73; // d2
  double v74; // d3
  double v75; // d4
  double v76; // d5
  double v77; // d6
  double v78; // d7
  __int64 v79; // x2
  unsigned __int16 *v80; // x8
  _BYTE *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x7
  void *v84; // [xsp+0h] [xbp-50h]
  unsigned __int16 *v85; // [xsp+0h] [xbp-50h]
  void *v86; // [xsp+8h] [xbp-48h]
  void *v87; // [xsp+8h] [xbp-48h]
  __int64 v88; // [xsp+8h] [xbp-48h]
  __int64 v89; // [xsp+8h] [xbp-48h]
  __int64 v90; // [xsp+10h] [xbp-40h]
  __int64 v91; // [xsp+10h] [xbp-40h]
  void *v92; // [xsp+10h] [xbp-40h]
  unsigned __int16 *v93; // [xsp+18h] [xbp-38h]
  __int64 v94; // [xsp+20h] [xbp-30h]
  __int64 v95; // [xsp+28h] [xbp-28h]
  void *v96; // [xsp+38h] [xbp-18h] BYREF
  void *v97; // [xsp+40h] [xbp-10h] BYREF

  v5 = gconv_cache;
  if ( !gconv_cache )
    return 2;
  v10 = *(_WORD *)(gconv_cache + 4);
  v11 = *(_WORD *)(gconv_cache + 10);
  if ( (unsigned int)find_module_idx(a2, &v96) )
    return 1;
  v84 = v96;
  v12 = 12LL * ((_QWORD)v96 + 1);
  if ( (unsigned __int64)*(unsigned __int16 *)(v5 + 10) + v12 > cache_size )
    return 1;
  module_idx = find_module_idx(a1, &v97);
  if ( module_idx )
    return 1;
  v26 = v97;
  v27 = 12LL * ((_QWORD)v97 + 1);
  if ( (unsigned __int64)*(unsigned __int16 *)(v5 + 10) + v27 > cache_size )
    return 1;
  v28 = v84;
  v29 = v5 + v11;
  v30 = v27 - 12;
  v31 = v29 + v30;
  v32 = v84 == v97;
  v85 = (unsigned __int16 *)(v29 + v30);
  if ( (a5 & v32) != 0 )
    return (unsigned int)-1;
  v33 = v5 + v10;
  if ( !v28 )
  {
    if ( v97 && *(_WORD *)(v29 + v30 + 8) )
    {
      v54 = malloc(0xD0u, v18, v19, v20, v21, v22, v23, v24, v25, v31, v15, 0, v97, v16, v17);
      v37 = v54;
      if ( v54 )
      {
        LODWORD(v53) = 0;
        *a3 = v54;
        *a4 = 0;
        goto LABEL_22;
      }
      return 3;
    }
    return 1;
  }
  v34 = v12 - 12;
  v35 = (_WORD *)(v29 + v12 - 12);
  if ( !v97 )
  {
    if ( !v35[2] )
      return 1;
    goto LABEL_12;
  }
  if ( !v35[5]
    || (v15 = gconv_cache,
        v31 = *(unsigned __int16 *)(v5 + 12) - 1LL,
        v61 = (_WORD *)(gconv_cache + v31 + (unsigned __int16)v35[5]),
        v62 = (unsigned __int16)*v61,
        !*v61) )
  {
LABEL_26:
    if ( !v35[2] )
      return 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v15 = 2LL * (int)(v62 - 1);
    v31 = (unsigned __int16)v61[3 * (v62 - 1) + 1];
    if ( v97 == (void *)v31 )
      break;
    v61 += 3 * v62 + 1;
    v62 = (unsigned __int16)*v61;
    if ( !*v61 )
      goto LABEL_26;
  }
  *a4 = v62;
  v87 = v26;
  v91 = v34;
  v63 = malloc(104LL * v62, v18, v19, v20, v21, v22, v23, v24, v25, 104, v62, v34, v26, v16, v17);
  *a3 = v63;
  v95 = v63;
  v65 = v87;
  v64 = v91;
  if ( !v63 )
    return 3;
  v66 = v61 + 1;
  v67 = v63;
  v68 = v33 + *(unsigned __int16 *)(v29 + v91);
  v69 = 0;
  while ( 1 )
  {
    v92 = v65;
    v93 = v66;
    v81 = (_BYTE *)(v33 + v66[1]);
    v82 = v33 + v66[2];
    v94 = v64;
    v83 = *(unsigned __int16 *)(v29 + 12LL * *v66);
    *(_DWORD *)(v67 + 16) = 1;
    *(_QWORD *)(v67 + 24) = v68;
    v68 = v33 + v83;
    *(_QWORD *)(v67 + 32) = v33 + v83;
    *(_QWORD *)(v67 + 96) = 0;
    if ( !*v81 )
    {
      v89 = v67;
      _gconv_get_builtin_trans(v82, v67);
      v79 = v89;
      v65 = v92;
      v80 = v93;
      v64 = v94;
      goto LABEL_41;
    }
    v88 = v67;
    module_constprop_0 = find_module_constprop_0((__int64)v81, v82, (_QWORD *)v67);
    v79 = v88;
    v65 = v92;
    v80 = v93;
    v64 = v94;
    if ( module_constprop_0 )
      break;
LABEL_41:
    ++v69;
    v67 = v79 + 104;
    v66 = v80 + 3;
    if ( (unsigned __int16)*v61 <= v69 )
      return module_idx;
  }
  free(v95, v71, v72, v73, v74, v75, v76, v77, v78);
  v26 = v92;
  v34 = v94;
  if ( !v35[2] )
    return 1;
LABEL_27:
  if ( !v85[4] )
    return 1;
LABEL_12:
  v86 = v26;
  v90 = v34;
  v36 = malloc(0xD0u, v18, v19, v20, v21, v22, v23, v24, v25, v31, v15, v34, v26, v16, v17);
  v37 = v36;
  if ( !v36 )
    return 3;
  v38 = (unsigned __int16)v35[3];
  v39 = *(unsigned __int16 *)(v29 + v90);
  *(_DWORD *)(v36 + 16) = 1;
  *(_QWORD *)(v36 + 24) = v33 + v39;
  *(_QWORD *)(v36 + 32) = "INTERNAL";
  v40 = (unsigned __int16)v35[4];
  *a3 = v36;
  *a4 = 0;
  v41 = v33 + v40;
  *(_QWORD *)(v36 + 96) = 0;
  if ( *(_BYTE *)(v33 + v38) )
  {
    v42 = find_module_constprop_0(v33 + v38, v41, (_QWORD *)v36);
    v51 = v86;
    v52 = v42;
    if ( !v42 )
      goto LABEL_15;
LABEL_33:
    module_idx = v52;
    free(v37, v43, v44, v45, v46, v47, v48, v49, v50);
    return module_idx;
  }
  _gconv_get_builtin_trans(v41, v36);
  v51 = v86;
LABEL_15:
  v53 = *a4 + 1;
  *a4 = v53;
  if ( !v51 )
    return module_idx;
LABEL_22:
  v55 = v33 + *(unsigned __int16 *)(v29 + v30);
  v56 = v37 + 104LL * (int)v53;
  v57 = v85[1];
  v58 = v53;
  v59 = v85[2];
  *(_DWORD *)(v56 + 16) = 1;
  *(_QWORD *)(v56 + 24) = "INTERNAL";
  *(_QWORD *)(v56 + 32) = v55;
  v60 = v33 + v59;
  *(_QWORD *)(v56 + 96) = 0;
  if ( *(_BYTE *)(v33 + v57) )
  {
    v52 = find_module_constprop_0(v33 + v57, v60, (_QWORD *)v56);
    if ( v52 )
    {
      if ( v58 )
        _gconv_release_step(v37);
      goto LABEL_33;
    }
  }
  else
  {
    _gconv_get_builtin_trans(v60, v56);
  }
  ++*a4;
  return module_idx;
}
