__int64 *_gconv_read_conf()
{
  __int64 *result; // x0
  __int64 v1; // x24
  __int16 *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x1
  __int64 i; // x23
  __int64 v8; // x22
  __int64 v9; // x0
  const char *v10; // x21
  char *v11; // x19
  __int64 v12; // x19
  __int64 j; // x27
  unsigned __int64 v14; // x0
  __int64 v15; // x0
  _UNKNOWN **v16; // x19
  _UNKNOWN **v17; // x0
  const char *v18; // x20
  __int64 k; // x0
  const char *v20; // x21
  __int64 v21; // x0
  _QWORD *v22; // x19
  const char *v23; // x24
  __int64 v24; // x23
  int v25; // w0
  int v26; // [xsp+Ch] [xbp-B4h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-B0h]
  _QWORD v28[2]; // [xsp+28h] [xbp-98h] BYREF
  char v29[16]; // [xsp+38h] [xbp-88h] BYREF
  int v30; // [xsp+48h] [xbp-78h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v26 = *(_DWORD *)(StatusReg + 40);
  if ( !(unsigned int)_gconv_load_cache(&_stack_chk_guard, 0) )
    goto LABEL_2;
  v1 = 16;
  _gconv_get_path();
  v6 = _gconv_path_elem;
  for ( i = *(_QWORD *)_gconv_path_elem; i; v1 += 16 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    v9 = malloc(v8 + 16, v6, v2, v3, v4, v5);
    v10 = (const char *)v9;
    if ( v9 )
    {
      v11 = (char *)(j_memcpy(v9) + v8);
      strcpy(v11, "gconv-modules");
      read_conf_file_isra_0(v10, i, v8);
      strcpy(v11 + 13, ".d");
      v12 = opendir(v10);
      if ( v12 )
      {
LABEL_6:
        for ( j = readdir64(v12); j; j = readdir64(v12) )
        {
          if ( (*(_BYTE *)(j + 18) & 0xF7) != 0 )
            goto LABEL_6;
          v14 = strlen(j + 19);
          if ( v14 <= 5
            || (unsigned int)strcmp(j + 19 + v14 - 5, ".conf")
            || (_asprintf_chk(v28, 2, "%s/%s", v10, (const char *)(j + 19)) & 0x80000000) != 0 )
          {
            goto LABEL_6;
          }
          v15 = v28[0];
          if ( !*(_BYTE *)(j + 18) )
          {
            if ( (unsigned int)lstat64(v28[0], v29) == -1 || (v30 & 0xF000) != 0x8000 )
              goto LABEL_14;
            v15 = v28[0];
          }
          read_conf_file_isra_0(v15, i, v8);
LABEL_14:
          free(v28[0]);
        }
        closedir(v12);
      }
      free(v10);
    }
    v6 = _gconv_path_elem + v1;
    i = *(_QWORD *)(_gconv_path_elem + v1);
  }
  v16 = &builtin_modules;
  do
  {
    while ( 1 )
    {
      v28[0] = *v16;
      if ( !tfind(v28, &_gconv_alias_db, _gconv_alias_compare) )
        break;
      v16 += 7;
      if ( v16 == (_UNKNOWN **)&unk_491818 )
        goto LABEL_22;
    }
    v17 = v16;
    v16 += 7;
    insert_module(v17);
  }
  while ( v16 != (_UNKNOWN **)&unk_491818 );
LABEL_22:
  v18 = "UCS4//";
  for ( k = 6; ; k = strlen(v24) )
  {
    v20 = &v18[k + 1];
    v21 = strlen(v20);
    v22 = (_QWORD *)_gconv_modules_db;
    v23 = &v20[v21];
    v24 = (__int64)&v20[v21 + 1];
LABEL_24:
    if ( v22 )
    {
      while ( 1 )
      {
        v25 = strcmp(v18, *v22);
        if ( !v25 )
          break;
        if ( v25 < 0 )
        {
          v22 = (_QWORD *)v22[4];
          goto LABEL_24;
        }
        v22 = (_QWORD *)v22[6];
        if ( !v22 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      add_alias2_part_0(v18, v20, v24);
    }
    if ( !v23[1] )
      break;
    v18 = (const char *)v24;
  }
LABEL_2:
  result = &_stack_chk_guard;
  *(_DWORD *)(StatusReg + 40) = v26;
  return result;
}
