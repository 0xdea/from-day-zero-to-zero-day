__int64 *__fastcall nl_load_locale(__int64 *a1, unsigned int a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  unsigned int v6; // w20
  unsigned __int64 v7; // x1
  unsigned __int64 StatusReg; // x23
  int v9; // w25
  __int64 v10; // x1
  __int16 *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x21
  __int64 v16; // x0
  int v17; // w1
  __int64 v19; // x26
  __int64 v20; // x0
  __int64 v21; // x27
  __int64 v22; // x28
  __int64 nocancel; // x0
  __int64 v24; // x21
  __int64 v25; // x20
  __int64 v26; // x3
  unsigned __int64 v27; // x0
  unsigned __int16 v28; // w3
  __int64 *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x0
  __int64 v33; // [xsp+0h] [xbp-100A0h] BYREF
  _BYTE v34[1008]; // [xsp+10h] [xbp-10090h] BYREF
  __int64 v35; // [xsp+400h] [xbp-FCA0h]
  _BYTE v36[24]; // [xsp+10000h] [xbp-A0h] BYREF
  _BYTE v37[16]; // [xsp+10018h] [xbp-88h] BYREF
  int v38; // [xsp+10028h] [xbp-78h]
  unsigned __int64 v39; // [xsp+10048h] [xbp-58h]

  v4 = *a1;
  *((_DWORD *)a1 + 2) = 1;
  a1[2] = 0;
  v5 = _open_nocancel(v4, 0x80000, &_stack_chk_guard);
  if ( (v5 & 0x80000000) != 0 )
    return &_stack_chk_guard;
  v6 = v5;
  if ( (fstat64(v5, v37) & 0x80000000) != 0 )
    goto LABEL_18;
  if ( (v38 & 0xF000) == 0x4000 )
  {
    _close_nocancel(v6);
    v25 = strlen(*a1);
    v26 = v25 + nl_category_name_sizes[a2] + 21;
    v27 = v26 & 0xFFFFFFFFFFFF0000LL;
    v28 = v26 & 0xFFF0;
    v29 = (__int64 *)&v36[-v27];
    if ( v36 != (_BYTE *)v29 )
    {
      do
        v35 = 0;
      while ( &v33 != v29 );
    }
    v33 = 0;
    if ( v28 >= 0x400uLL )
      v35 = 0;
    v30 = j_memcpy(v34);
    qmemcpy((void *)(v30 + v25), "/SYS_", 5);
    j_memcpy(v30 + v25 + 5);
    v32 = _open_nocancel(v34, 0x80000, v31);
    v6 = v32;
    if ( (v32 & 0x80000000) != 0 )
      return &_stack_chk_guard;
    if ( (fstat64(v32, v37) & 0x80000000) != 0 )
    {
LABEL_18:
      _close_nocancel(v6);
      return &_stack_chk_guard;
    }
  }
  v7 = v39;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_DWORD *)(StatusReg + 40);
  v15 = mmap64(0, v7, 1, 2, v6, 0);
  if ( v15 == -1 )
  {
    if ( *(_DWORD *)(StatusReg + 40) == 38 )
    {
      v19 = v39;
      v20 = malloc(v39, v10, v11, v12, v13, v14);
      v21 = v20;
      if ( v20 )
      {
        v22 = v20;
        if ( v19 <= 0 )
        {
LABEL_26:
          *(_DWORD *)(StatusReg + 40) = v9;
          _close_nocancel(v6);
          v16 = nl_intern_locale_data(a2, v21, v39);
          v17 = 0;
          if ( !v16 )
            return &_stack_chk_guard;
          goto LABEL_8;
        }
        while ( 1 )
        {
          nocancel = _read_nocancel(v6, v22, v19);
          v24 = nocancel;
          if ( nocancel <= 0 )
            break;
          v19 -= nocancel;
          v22 += nocancel;
          if ( v19 <= 0 )
            goto LABEL_26;
        }
        free(v21);
        if ( !v24 )
          *(_DWORD *)(StatusReg + 40) = 22;
      }
    }
    goto LABEL_18;
  }
  _close_nocancel(v6);
  if ( v15 )
  {
    v16 = nl_intern_locale_data(a2, v15, v39);
    if ( !v16 )
    {
      munmap(v15, v39);
      return &_stack_chk_guard;
    }
    v17 = 1;
LABEL_8:
    *(_QWORD *)v16 = 0;
    *(_DWORD *)(v16 + 24) = v17;
    a1[2] = v16;
  }
  return &_stack_chk_guard;
}
