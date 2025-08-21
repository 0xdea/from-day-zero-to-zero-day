__int64 *__fastcall _gconv_read_conf(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *result; // x0
  __int64 v6; // x24
  __int16 *v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x1
  __int64 i; // x23
  __int64 v13; // x22
  __int64 v14; // x0
  const char *v15; // x21
  char *v16; // x19
  __int64 v17; // x19
  __int64 j; // x27
  unsigned __int64 v19; // x0
  __int64 v20; // x0
  _UNKNOWN **v21; // x19
  _UNKNOWN **v22; // x0
  const char *v23; // x20
  __int64 k; // x0
  const char *v25; // x21
  __int64 v26; // x0
  _QWORD *v27; // x19
  const char *v28; // x24
  __int64 v29; // x23
  int v30; // w0
  int v31; // [xsp+Ch] [xbp-B4h]
  __int64 StatusReg; // [xsp+10h] [xbp-B0h]
  _QWORD v33[2]; // [xsp+28h] [xbp-98h] BYREF
  char v34[16]; // [xsp+38h] [xbp-88h] BYREF
  int v35; // [xsp+48h] [xbp-78h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v31 = *(_DWORD *)(StatusReg + 40);
  if ( !(unsigned int)_gconv_load_cache((__int64)&_stack_chk_guard, 0, StatusReg, a4, a5) )
    goto LABEL_2;
  v6 = 16;
  _gconv_get_path();
  v11 = _gconv_path_elem;
  for ( i = *(_QWORD *)_gconv_path_elem; i; v6 += 16 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = malloc(v13 + 16, v11, v7, v8, v9, v10);
    v15 = (const char *)v14;
    if ( v14 )
    {
      v16 = (char *)(j_memcpy(v14) + v13);
      strcpy(v16, "gconv-modules");
      read_conf_file_isra_0(v15, i, v13);
      strcpy(v16 + 13, ".d");
      v17 = opendir(v15);
      if ( v17 )
      {
LABEL_6:
        for ( j = readdir64(v17); j; j = readdir64(v17) )
        {
          if ( (*(_BYTE *)(j + 18) & 0xF7) != 0 )
            goto LABEL_6;
          v19 = strlen(j + 19);
          if ( v19 <= 5
            || (unsigned int)strcmp(j + 19 + v19 - 5, ".conf")
            || (_asprintf_chk(v33, 2, "%s/%s", v15, (const char *)(j + 19)) & 0x80000000) != 0 )
          {
            goto LABEL_6;
          }
          v20 = v33[0];
          if ( !*(_BYTE *)(j + 18) )
          {
            if ( (unsigned int)lstat64(v33[0], v34) == -1 || (v35 & 0xF000) != 0x8000 )
              goto LABEL_14;
            v20 = v33[0];
          }
          read_conf_file_isra_0(v20, i, v13);
LABEL_14:
          free(v33[0]);
        }
        closedir(v17);
      }
      free(v15);
    }
    v11 = _gconv_path_elem + v6;
    i = *(_QWORD *)(_gconv_path_elem + v6);
  }
  v21 = &builtin_modules;
  do
  {
    while ( 1 )
    {
      v33[0] = *v21;
      if ( !tfind(v33, &_gconv_alias_db, _gconv_alias_compare) )
        break;
      v21 += 7;
      if ( v21 == (_UNKNOWN **)&unk_491818 )
        goto LABEL_22;
    }
    v22 = v21;
    v21 += 7;
    insert_module(v22);
  }
  while ( v21 != (_UNKNOWN **)&unk_491818 );
LABEL_22:
  v23 = "UCS4//";
  for ( k = 6; ; k = strlen(v29) )
  {
    v25 = &v23[k + 1];
    v26 = strlen(v25);
    v27 = (_QWORD *)_gconv_modules_db;
    v28 = &v25[v26];
    v29 = (__int64)&v25[v26 + 1];
LABEL_24:
    if ( v27 )
    {
      while ( 1 )
      {
        v30 = strcmp(v23, *v27);
        if ( !v30 )
          break;
        if ( v30 < 0 )
        {
          v27 = (_QWORD *)v27[4];
          goto LABEL_24;
        }
        v27 = (_QWORD *)v27[6];
        if ( !v27 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      add_alias2_part_0(v23, v25, v29);
    }
    if ( !v28[1] )
      break;
    v23 = (const char *)v29;
  }
LABEL_2:
  result = &_stack_chk_guard;
  *(_DWORD *)(StatusReg + 40) = v31;
  return result;
}
