__int64 *__fastcall nl_load_locale(const char **a1, int a2)
{
  const char *v4; // x0
  int v5; // w0
  int v6; // w20
  size_t st_size; // x1
  unsigned __int64 StatusReg; // x23
  int v9; // w25
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  int *v16; // x21
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  __int64 v25; // x3
  void *v26; // x4
  void *v27; // x5
  void *v28; // x6
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  __int64 v37; // x0
  int v38; // w1
  signed __int64 v40; // x26
  __int64 v41; // x0
  int *v42; // x27
  char *v43; // x28
  signed __int64 nocancel; // x0
  double v45; // d0
  double v46; // d1
  double v47; // d2
  double v48; // d3
  double v49; // d4
  double v50; // d5
  double v51; // d6
  double v52; // d7
  signed __int64 v53; // x21
  __int64 v54; // x20
  __int64 v55; // x3
  unsigned __int64 v56; // x0
  unsigned __int16 v57; // w3
  __int64 *v58; // x0
  __int64 v59; // x0
  int v60; // w0
  __int64 v61; // x3
  void *v62; // x4
  void *v63; // x5
  void *v64; // x6
  double v65; // d0
  double v66; // d1
  double v67; // d2
  double v68; // d3
  double v69; // d4
  double v70; // d5
  double v71; // d6
  double v72; // d7
  __int64 v73; // [xsp+0h] [xbp-100A0h] BYREF
  char v74[1008]; // [xsp+10h] [xbp-10090h] BYREF
  __int64 v75; // [xsp+400h] [xbp-FCA0h]
  _BYTE v76[24]; // [xsp+10000h] [xbp-A0h] BYREF
  struct stat var88; // [xsp+10018h] [xbp-88h] BYREF

  v4 = *a1;
  *((_DWORD *)a1 + 2) = 1;
  a1[2] = 0;
  v5 = _open_nocancel(v4, 0x80000);
  if ( v5 < 0 )
    return &_stack_chk_guard;
  v6 = v5;
  if ( (fstat64(v5, &var88) & 0x80000000) != 0 )
    goto LABEL_18;
  if ( (var88.st_nlink & 0xF000) == 0x4000 )
  {
    _close_nocancel(v6);
    v54 = strlen(*a1);
    v55 = v54 + nl_category_name_sizes[a2] + 21;
    v56 = v55 & 0xFFFFFFFFFFFF0000LL;
    v57 = v55 & 0xFFF0;
    v58 = (__int64 *)&v76[-v56];
    if ( v76 != (_BYTE *)v58 )
    {
      do
        v75 = 0;
      while ( &v73 != v58 );
    }
    v73 = 0;
    if ( v57 >= 0x400uLL )
      v75 = 0;
    v59 = j_memcpy(v74);
    qmemcpy((void *)(v59 + v54), "/SYS_", 5);
    j_memcpy(v59 + v54 + 5);
    v60 = _open_nocancel(v74, 0x80000);
    v6 = v60;
    if ( v60 < 0 )
      return &_stack_chk_guard;
    if ( (fstat64(v60, &var88) & 0x80000000) != 0 )
    {
LABEL_18:
      _close_nocancel(v6);
      return &_stack_chk_guard;
    }
  }
  st_size = var88.st_size;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_DWORD *)(StatusReg + 40);
  v16 = (int *)mmap64(0, st_size, 1, 2, v6, 0);
  if ( v16 == (int *)-1LL )
  {
    if ( *(_DWORD *)(StatusReg + 40) == 38 )
    {
      v40 = var88.st_size;
      v41 = malloc(var88.st_size, v17, v18, v19, v20, v21, v22, v23, v24, v10, v11, v12, v13, v14, v15);
      v42 = (int *)v41;
      if ( v41 )
      {
        v43 = (char *)v41;
        if ( v40 <= 0 )
        {
LABEL_26:
          *(_DWORD *)(StatusReg + 40) = v9;
          _close_nocancel(v6);
          v37 = nl_intern_locale_data(
                  a2,
                  v42,
                  var88.st_size,
                  v61,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72);
          v38 = 0;
          if ( !v37 )
            return &_stack_chk_guard;
          goto LABEL_8;
        }
        while ( 1 )
        {
          nocancel = _read_nocancel(v6, v43, v40);
          v53 = nocancel;
          if ( nocancel <= 0 )
            break;
          v40 -= nocancel;
          v43 += nocancel;
          if ( v40 <= 0 )
            goto LABEL_26;
        }
        free((__int64)v42, v45, v46, v47, v48, v49, v50, v51, v52);
        if ( !v53 )
          *(_DWORD *)(StatusReg + 40) = 22;
      }
    }
    goto LABEL_18;
  }
  _close_nocancel(v6);
  if ( v16 )
  {
    v37 = nl_intern_locale_data(a2, v16, var88.st_size, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36);
    if ( !v37 )
    {
      munmap(v16, var88.st_size);
      return &_stack_chk_guard;
    }
    v38 = 1;
LABEL_8:
    *(_QWORD *)v37 = 0;
    *(_DWORD *)(v37 + 24) = v38;
    a1[2] = (const char *)v37;
  }
  return &_stack_chk_guard;
}
