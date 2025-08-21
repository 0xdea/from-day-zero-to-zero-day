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
  __int16 *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x25
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x19
  _BYTE *v21; // x27
  __int64 *v22; // x28
  int v23; // w21
  __int64 v24; // x0
  _BYTE *v25; // x19
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x0
  __int64 *v28; // x0
  __int64 v30; // x0
  __int64 v31; // [xsp+0h] [xbp-10030h] BYREF
  _BYTE v32[1008]; // [xsp+10h] [xbp-10020h] BYREF
  __int64 v33; // [xsp+400h] [xbp-FC30h]
  __int64 v34; // [xsp+FFD8h] [xbp-58h]
  char v35[56]; // [xsp+FFE0h] [xbp-50h] BYREF
  __int64 *v36; // [xsp+10018h] [xbp-18h]
  char *v37; // [xsp+10020h] [xbp-10h] BYREF

  v0 = _gconv_path_elem;
  if ( _gconv_path_elem )
  {
    v30 = _libc_assert_fail("result == NULL", "gconv_conf.c", 362, "__gconv_get_path");
    return (__int64 *)insert_module(v30);
  }
  v1 = _gconv_path_envvar;
  if ( _gconv_path_envvar )
  {
    v2 = strlen(_gconv_path_envvar);
    v3 = v2 + 34;
    v4 = &v35[-((v2 + 49) & 0xFFFFFFFFFFFF0000LL) + 32];
    if ( &v35[32] != v4 )
    {
      do
        v33 = 0;
      while ( &v31 != (__int64 *)v4 );
    }
    v31 = 0;
    if ( (((_WORD)v2 + 49) & 0xFFF0u) >= 0x400uLL )
      v33 = 0;
    v37 = v32;
    strcpy((char *)(j_memcpy(v32) + v2), ":/usr/lib/aarch64-linux-gnu/gconv");
    v5 = getcwd(0, 0);
    v1 = v5;
    if ( v5 )
    {
      v7 = strlen(v5);
      v8 = v37;
      v9 = v7 + 1;
    }
    else
    {
      v8 = v37;
      v9 = 1;
      v7 = 0;
    }
    v14 = strchr(v8, 58, v6);
    if ( v14 )
      goto LABEL_10;
  }
  else
  {
    v34 = 0;
    v8 = v35;
    v9 = 1;
    v7 = 0;
    v3 = 33;
    v37 = v35;
    strcpy(v35, "/usr/lib/aarch64-linux-gnu/gconv");
    v14 = strchr(v35, 58, 0);
    if ( v14 )
    {
LABEL_10:
      LODWORD(v15) = 1;
      while ( 1 )
      {
        if ( v14 != v0 + 1 )
          LODWORD(v15) = v15 + 1;
        v0 = v14;
        v16 = strchr(v14 + 1, 58, v10);
        if ( !v16 )
          break;
        v14 = v16;
      }
      v15 = (int)v15;
      v17 = 16LL * ((int)v15 + 1);
      v18 = ((int)v15 - 1) * v9;
      goto LABEL_16;
    }
  }
  v18 = 0;
  v15 = 1;
  v17 = 32;
LABEL_16:
  v19 = malloc(v17 + v15 + v3 + v18, v17 + v15, v10, v11, v12, v13);
  v36 = (__int64 *)v19;
  if ( v19 )
  {
    v20 = v19 + 16 * (v15 + 1);
    _gconv_max_path_elem_len = 0;
    v21 = (_BYTE *)strtok_r(v8, ":", &v37);
    if ( !v21 )
      _libc_assert_fail("elem != NULL", "gconv_conf.c", 424, "__gconv_get_path");
    v22 = v36;
    v23 = 0;
    while ( 1 )
    {
      *v22 = v20;
      if ( *v21 != 47 )
      {
        if ( !v1 )
        {
          _libc_assert_fail("cwd != NULL", "gconv_conf.c", 430, "__gconv_get_path");
          break;
        }
        v24 = j_memcpy(v20);
        *(_BYTE *)(v24 + v7) = 47;
        v20 = v24 + v7 + 1;
      }
      v25 = (_BYTE *)stpcpy(v20, v21);
      if ( *(v25 - 1) != 47 )
        *v25++ = 47;
      v26 = _gconv_max_path_elem_len;
      v27 = (unsigned __int64)&v25[-*v22];
      v22[1] = v27;
      if ( v27 > v26 )
        _gconv_max_path_elem_len = v27;
      *v25 = 0;
      v20 = (__int64)(v25 + 1);
      ++v23;
      v22 += 2;
      v21 = (_BYTE *)strtok_r(0, ":", &v37);
      if ( !v21 )
      {
        v28 = &v36[2 * v23];
        *v28 = 0;
        v28[1] = 0;
        goto LABEL_28;
      }
    }
  }
  v36 = (__int64 *)&empty_path_elem;
LABEL_28:
  _gconv_path_elem = (__int64)v36;
  free(v1);
  return &_stack_chk_guard;
}
