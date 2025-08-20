__int64 __fastcall decompose_rpath(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // x6
  unsigned __int8 *v8; // x24
  _BYTE *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  __int64 v24; // x22
  __int64 v25; // x1
  __int64 v26; // x6
  unsigned int v27; // t1
  unsigned __int64 v28; // x0
  __int64 v29; // x0
  double v30; // d0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7
  _QWORD *v38; // x23
  double v39; // d0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  int v55; // w8
  __int64 v56; // x9
  int v57; // w7
  int v58; // t1
  int v59; // t1
  int v60; // w7
  bool v61; // zf
  const char *v62; // x3

  v4 = (_BYTE *)dl_inhibit_rpath;
  v8 = *(unsigned __int8 **)(a3 + 8);
  if ( dl_inhibit_rpath && !_libc_enable_secure )
  {
    v55 = *(unsigned __int8 *)dl_inhibit_rpath;
    do
    {
      v56 = *(_QWORD *)(a3 + 8);
      v57 = v55;
      if ( v55 == *v8 )
      {
        while ( v57 )
        {
          v58 = (unsigned __int8)*++v4;
          v55 = v58;
          v59 = *(unsigned __int8 *)++v56;
          v57 = v59;
          if ( v55 != v59 )
            goto LABEL_19;
        }
      }
      else
      {
        v57 = *v8;
LABEL_19:
        if ( v57 )
          goto LABEL_20;
      }
      v61 = v55 == 58 || v55 == 0;
      if ( v61 )
        goto LABEL_3;
      do
      {
LABEL_20:
        v60 = (unsigned __int8)*v4;
        if ( !*v4 )
          goto LABEL_2;
        ++v4;
      }
      while ( v60 != 58 );
      v55 = (unsigned __int8)*v4;
    }
    while ( *v4 );
  }
LABEL_2:
  if ( !*a2 )
  {
LABEL_3:
    *(_QWORD *)a1 = -1;
    return 0;
  }
  v10 = (_BYTE *)strdup((__int64)a2);
  v24 = (__int64)v10;
  if ( !v10 )
  {
    v62 = "cannot create RUNPATH/RPATH copy";
LABEL_34:
    dl_signal_error(12, 0, 0, v62);
  }
  v25 = (unsigned __int8)*v10;
  if ( *v10 )
  {
    v12 = (__int64)v10;
    v26 = 0;
    do
    {
      v61 = (_DWORD)v25 == 58;
      v27 = *(unsigned __int8 *)++v12;
      v25 = v27;
      if ( v61 )
        ++v26;
    }
    while ( (_DWORD)v25 );
    v15 = (void *)(v26 + 2);
    v28 = 8LL * (_QWORD)v15;
  }
  else
  {
    v28 = 16;
  }
  v29 = malloc(v28, v16, v17, v18, v19, v20, v21, v22, v23, v25, v11, v12, v13, v14, v15);
  v38 = (_QWORD *)v29;
  if ( !v29 )
  {
    free(v24, v30, v31, v32, v33, v34, v35, v36, v37);
    v62 = "cannot create cache for search path";
    goto LABEL_34;
  }
  fillin_rpath_isra_0(v24, v29, (__int64)":", a4, (__int64)v8, a3);
  free(v24, v39, v40, v41, v42, v43, v44, v45, v46);
  if ( !*v38 )
  {
    free((__int64)v38, v47, v48, v49, v50, v51, v52, v53, v54);
    goto LABEL_3;
  }
  *(_QWORD *)a1 = v38;
  *(_DWORD *)(a1 + 8) = 1;
  return 1;
}
