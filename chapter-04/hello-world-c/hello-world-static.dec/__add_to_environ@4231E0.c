__int64 __fastcall _add_to_environ(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  char **v22; // x20
  char *v23; // x19
  __int64 v24; // x28
  _DWORD *v25; // x3
  char *v26; // t1
  unsigned __int64 v27; // x27
  unsigned __int64 v28; // x19
  char **v29; // x20
  __int64 v30; // x0
  char **v31; // x28
  unsigned __int64 v32; // x27
  bool v33; // zf
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  __int64 v41; // x0
  __int64 v42; // x0
  char **v43; // x0
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  char *v52; // x21
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  void *v57; // x4
  void *v58; // x5
  void *v59; // x6
  __int64 v61; // [xsp+78h] [xbp+78h]

  v7 = strlen(a1);
  if ( a3 )
  {
    if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)envlock) )
      goto LABEL_3;
LABEL_25:
    _lll_lock_wait_private(envlock, v14, v15, v16, v17, v18, v19, v20, v21, v8, v9, v10, v11, v12, v13);
    v22 = environ;
    if ( !environ )
      goto LABEL_26;
    goto LABEL_4;
  }
  v61 = strlen(a2) + 1;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)envlock) )
    goto LABEL_25;
LABEL_3:
  v22 = environ;
  if ( !environ )
    goto LABEL_26;
LABEL_4:
  v23 = *v22;
  if ( *v22 )
  {
    v24 = 0;
    while ( (unsigned int)strncmp(v23, a1, v7) || v23[v7] != 61 )
    {
      v26 = v22[1];
      ++v22;
      v23 = v26;
      v27 = v24 + 1;
      if ( !v26 )
      {
        v28 = 8 * (v24 + 3);
        goto LABEL_11;
      }
      ++v24;
    }
    goto LABEL_15;
  }
LABEL_26:
  v28 = 16;
  v27 = 0;
LABEL_11:
  v29 = (char **)last_environ;
  v30 = realloc(last_environ, v28, v14, v15, v16, v17, v18, v19, v20, v21, v9, (__int64)envlock, v11, v12, v13);
  v25 = envlock;
  v31 = (char **)v30;
  if ( !v30 )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) <= 1 )
      return 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  v32 = v27;
  if ( environ != v29 )
    _memcpy_chk(v30, (__int64)environ, v32 * 8, v28);
  v22 = &v31[v32];
  environ = v31;
  *v22 = 0;
  v22[1] = 0;
  last_environ = (__int64)v31;
LABEL_15:
  if ( *v22 )
    v33 = a4 == 0;
  else
    v33 = 0;
  if ( v33 )
    goto LABEL_21;
  if ( !a3 )
  {
    v41 = malloc(v7 + 1 + v61, v14, v15, v16, v17, v18, v19, v20, v21, v61, v9, (__int64)v25, v11, v12, v13);
    a3 = (char *)v41;
    if ( v41 )
    {
      v42 = j_memcpy(v41);
      *(_BYTE *)(v42 + v7) = 61;
      j_memcpy(v42 + v7 + 1);
      v43 = (char **)tfind(a3, &known_values, strcmp);
      if ( v43 && (v52 = *v43) != 0 )
      {
        v53 = (__int64)a3;
        a3 = v52;
        free(v53, v44, v45, v46, v47, v48, v49, v50, v51);
      }
      else
      {
        tsearch(a3, &known_values, strcmp);
      }
      goto LABEL_20;
    }
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) <= 1 )
      return 0xFFFFFFFFLL;
LABEL_35:
    _lll_lock_wake_private(envlock, v54, v55, v56, v57, v58, v59);
    return 0xFFFFFFFFLL;
  }
LABEL_20:
  *v22 = a3;
LABEL_21:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) > 1 )
    _lll_lock_wake_private(envlock, v34, v35, v36, v37, v38, v39);
  return 0;
}
