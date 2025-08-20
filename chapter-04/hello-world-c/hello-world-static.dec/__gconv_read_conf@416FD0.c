__int64 *_gconv_read_conf()
{
  __int64 *result; // x0
  __int64 v1; // x24
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  __int64 v15; // x1
  __int64 i; // x23
  __int64 v17; // x22
  __int64 v18; // x0
  const char *v19; // x21
  char *v20; // x19
  __int64 v21; // x19
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 j; // x27
  unsigned __int64 v31; // x0
  __int64 v32; // x0
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 *v41; // x19
  __int64 v42; // x0
  const char *v43; // x20
  __int64 k; // x0
  __int64 v45; // x21
  __int64 v46; // x0
  __int64 v47; // x3
  void *v48; // x4
  void *v49; // x5
  void *v50; // x6
  double v51; // d0
  double v52; // d1
  double v53; // d2
  double v54; // d3
  double v55; // d4
  double v56; // d5
  double v57; // d6
  double v58; // d7
  _QWORD *v59; // x19
  __int64 v60; // x24
  __int64 v61; // x23
  int v62; // w0
  int v63; // [xsp+Ch] [xbp-B4h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-B0h]
  __int64 v65[2]; // [xsp+28h] [xbp-98h] BYREF
  char v66[16]; // [xsp+38h] [xbp-88h] BYREF
  int v67; // [xsp+48h] [xbp-78h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v63 = *(_DWORD *)(StatusReg + 40);
  if ( !(unsigned int)_gconv_load_cache(&_stack_chk_guard, 0) )
    goto LABEL_2;
  v1 = 16;
  _gconv_get_path();
  v15 = _gconv_path_elem;
  for ( i = *(_QWORD *)_gconv_path_elem; i; v1 += 16 )
  {
    v17 = *(_QWORD *)(v15 + 8);
    v18 = malloc(v17 + 16, v7, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6);
    v19 = (const char *)v18;
    if ( v18 )
    {
      v20 = (char *)(j_memcpy(v18) + v17);
      strcpy(v20, "gconv-modules");
      read_conf_file_isra_0((__int64)v19, i, v17);
      strcpy(v20 + 13, ".d");
      v21 = opendir(v19);
      if ( v21 )
      {
LABEL_6:
        for ( j = readdir64(v21); j; j = readdir64(v21) )
        {
          if ( (*(_BYTE *)(j + 18) & 0xF7) != 0 )
            goto LABEL_6;
          v31 = strlen(j + 19);
          if ( v31 <= 5
            || (unsigned int)strcmp(j + 19 + v31 - 5, ".conf")
            || (_asprintf_chk(v65, 2, "%s/%s", v19, (const char *)(j + 19)) & 0x80000000) != 0 )
          {
            goto LABEL_6;
          }
          v32 = v65[0];
          if ( !*(_BYTE *)(j + 18) )
          {
            if ( (unsigned int)lstat64(v65[0], v66) == -1 || (v67 & 0xF000) != 0x8000 )
              goto LABEL_14;
            v32 = v65[0];
          }
          read_conf_file_isra_0(v32, i, v17);
LABEL_14:
          free(v65[0], v33, v34, v35, v36, v37, v38, v39, v40);
        }
        closedir(v21);
      }
      free((__int64)v19, v22, v23, v24, v25, v26, v27, v28, v29);
    }
    v15 = _gconv_path_elem + v1;
    i = *(_QWORD *)(_gconv_path_elem + v1);
  }
  v41 = (__int64 *)&builtin_modules;
  do
  {
    while ( 1 )
    {
      v65[0] = *v41;
      if ( !tfind(v65, &_gconv_alias_db, _gconv_alias_compare) )
        break;
      v41 += 7;
      if ( v41 == (__int64 *)&unk_491818 )
        goto LABEL_22;
    }
    v42 = (__int64)v41;
    v41 += 7;
    insert_module(v42, 0);
  }
  while ( v41 != (__int64 *)&unk_491818 );
LABEL_22:
  v43 = "UCS4//";
  for ( k = 6; ; k = strlen(v61) )
  {
    v45 = (__int64)&v43[k + 1];
    v46 = strlen(v45);
    v59 = (_QWORD *)_gconv_modules_db;
    v60 = v45 + v46;
    v61 = v45 + v46 + 1;
LABEL_24:
    if ( v59 )
    {
      while ( 1 )
      {
        v62 = strcmp(v43, *v59);
        if ( !v62 )
          break;
        if ( v62 < 0 )
        {
          v59 = (_QWORD *)v59[4];
          goto LABEL_24;
        }
        v59 = (_QWORD *)v59[6];
        if ( !v59 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      add_alias2_part_0((__int64)v43, v45, v61, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
    }
    if ( !*(_BYTE *)(v60 + 1) )
      break;
    v43 = (const char *)v61;
  }
LABEL_2:
  result = &_stack_chk_guard;
  *(_DWORD *)(StatusReg + 40) = v63;
  return result;
}
