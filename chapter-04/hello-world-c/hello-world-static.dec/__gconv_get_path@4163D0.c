__int64 *_gconv_get_path()
{
  __int64 v0; // x26
  __int64 v1; // x22
  __int64 v2; // x19
  __int64 v3; // x23
  char *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x2
  __int64 v7; // x20
  char *v8; // x21
  __int64 v9; // x24
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  __int64 v15; // x25
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  __int64 v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x0
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  __int64 v37; // x19
  _BYTE *v38; // x27
  __int64 *v39; // x28
  int v40; // w21
  __int64 v41; // x0
  _BYTE *v42; // x19
  unsigned __int64 v43; // x1
  unsigned __int64 v44; // x0
  __int64 *v45; // x0
  __int64 v47; // x0
  __int64 v48; // [xsp+0h] [xbp-10030h] BYREF
  _BYTE v49[1008]; // [xsp+10h] [xbp-10020h] BYREF
  __int64 v50; // [xsp+400h] [xbp-FC30h]
  __int64 v51; // [xsp+FFD8h] [xbp-58h]
  char v52[56]; // [xsp+FFE0h] [xbp-50h] BYREF
  __int64 *v53; // [xsp+10018h] [xbp-18h]
  char *v54; // [xsp+10020h] [xbp-10h] BYREF

  v0 = _gconv_path_elem;
  if ( _gconv_path_elem )
  {
    v47 = _libc_assert_fail("result == NULL", "gconv_conf.c", 362, "__gconv_get_path");
    return (__int64 *)insert_module(v47);
  }
  v1 = _gconv_path_envvar;
  if ( _gconv_path_envvar )
  {
    v2 = strlen(_gconv_path_envvar);
    v3 = v2 + 34;
    v4 = &v52[-((v2 + 49) & 0xFFFFFFFFFFFF0000LL) + 32];
    if ( &v52[32] != v4 )
    {
      do
        v50 = 0;
      while ( &v48 != (__int64 *)v4 );
    }
    v48 = 0;
    if ( (((_WORD)v2 + 49) & 0xFFF0u) >= 0x400uLL )
      v50 = 0;
    v54 = v49;
    strcpy((char *)(j_memcpy(v49) + v2), ":/usr/lib/aarch64-linux-gnu/gconv");
    v5 = getcwd(0, 0);
    v1 = v5;
    if ( v5 )
    {
      v7 = strlen(v5);
      v8 = v54;
      v9 = v7 + 1;
    }
    else
    {
      v8 = v54;
      v9 = 1;
      v7 = 0;
    }
    v15 = strchr(v8, 58, v6);
    if ( v15 )
      goto LABEL_10;
  }
  else
  {
    v51 = 0;
    v8 = v52;
    v9 = 1;
    v7 = 0;
    v3 = 33;
    v54 = v52;
    strcpy(v52, "/usr/lib/aarch64-linux-gnu/gconv");
    v15 = strchr(v52, 58, 0);
    if ( v15 )
    {
LABEL_10:
      LODWORD(v24) = 1;
      while ( 1 )
      {
        if ( v15 != v0 + 1 )
          LODWORD(v24) = v24 + 1;
        v0 = v15;
        v25 = strchr(v15 + 1, 58, v10);
        if ( !v25 )
          break;
        v15 = v25;
      }
      v24 = (int)v24;
      v26 = 16LL * ((int)v24 + 1);
      v27 = ((int)v24 - 1) * v9;
      goto LABEL_16;
    }
  }
  v27 = 0;
  v24 = 1;
  v26 = 32;
LABEL_16:
  v28 = malloc(v26 + v24 + v3 + v27, v16, v17, v18, v19, v20, v21, v22, v23, v26 + v24, v10, v11, v12, v13, v14);
  v53 = (__int64 *)v28;
  if ( v28 )
  {
    v37 = v28 + 16 * (v24 + 1);
    _gconv_max_path_elem_len = 0;
    v38 = (_BYTE *)strtok_r(v8, ":", &v54);
    if ( !v38 )
      _libc_assert_fail("elem != NULL", "gconv_conf.c", 424, "__gconv_get_path");
    v39 = v53;
    v40 = 0;
    while ( 1 )
    {
      *v39 = v37;
      if ( *v38 != 47 )
      {
        if ( !v1 )
        {
          _libc_assert_fail("cwd != NULL", "gconv_conf.c", 430, "__gconv_get_path");
          break;
        }
        v41 = j_memcpy(v37);
        *(_BYTE *)(v41 + v7) = 47;
        v37 = v41 + v7 + 1;
      }
      v42 = (_BYTE *)stpcpy(v37, v38);
      if ( *(v42 - 1) != 47 )
        *v42++ = 47;
      v43 = _gconv_max_path_elem_len;
      v44 = (unsigned __int64)&v42[-*v39];
      v39[1] = v44;
      if ( v44 > v43 )
        _gconv_max_path_elem_len = v44;
      *v42 = 0;
      v37 = (__int64)(v42 + 1);
      ++v40;
      v39 += 2;
      v38 = (_BYTE *)strtok_r(0, ":", &v54);
      if ( !v38 )
      {
        v45 = &v53[2 * v40];
        *v45 = 0;
        v45[1] = 0;
        goto LABEL_28;
      }
    }
  }
  v53 = (__int64 *)&empty_path_elem;
LABEL_28:
  _gconv_path_elem = (__int64)v53;
  free(v1, v29, v30, v31, v32, v33, v34, v35, v36);
  return &_stack_chk_guard;
}
