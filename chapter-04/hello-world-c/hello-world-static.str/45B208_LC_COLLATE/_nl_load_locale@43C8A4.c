__int64 *__fastcall nl_load_locale(__int64 *a1, int a2)
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
  int *v15; // x21
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  _QWORD *v19; // x0
  int v20; // w1
  __int64 v22; // x26
  __int64 v23; // x0
  int *v24; // x27
  __int64 v25; // x28
  __int64 nocancel; // x0
  __int64 v27; // x21
  __int64 v28; // x20
  __int64 v29; // x3
  unsigned __int64 v30; // x0
  unsigned __int16 v31; // w3
  __int64 *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // [xsp+0h] [xbp-100A0h] BYREF
  _BYTE v40[1008]; // [xsp+10h] [xbp-10090h] BYREF
  __int64 v41; // [xsp+400h] [xbp-FCA0h]
  _BYTE v42[24]; // [xsp+10000h] [xbp-A0h] BYREF
  _BYTE v43[16]; // [xsp+10018h] [xbp-88h] BYREF
  int v44; // [xsp+10028h] [xbp-78h]
  unsigned __int64 v45; // [xsp+10048h] [xbp-58h]

  v4 = *a1;
  *((_DWORD *)a1 + 2) = 1;
  a1[2] = 0;
  v5 = _open_nocancel(v4, 0x80000, &_stack_chk_guard);
  if ( (v5 & 0x80000000) != 0 )
    return &_stack_chk_guard;
  v6 = v5;
  if ( (fstat64(v5, v43) & 0x80000000) != 0 )
    goto LABEL_18;
  if ( (v44 & 0xF000) == 0x4000 )
  {
    _close_nocancel(v6);
    v28 = strlen(*a1);
    v29 = v28 + nl_category_name_sizes[a2] + 21;
    v30 = v29 & 0xFFFFFFFFFFFF0000LL;
    v31 = v29 & 0xFFF0;
    v32 = (__int64 *)&v42[-v30];
    if ( v42 != (_BYTE *)v32 )
    {
      do
        v41 = 0;
      while ( &v39 != v32 );
    }
    v39 = 0;
    if ( v31 >= 0x400uLL )
      v41 = 0;
    v33 = j_memcpy(v40);
    qmemcpy((void *)(v33 + v28), "/SYS_", 5);
    j_memcpy(v33 + v28 + 5);
    v35 = _open_nocancel(v40, 0x80000, v34);
    v6 = v35;
    if ( (v35 & 0x80000000) != 0 )
      return &_stack_chk_guard;
    if ( (fstat64(v35, v43) & 0x80000000) != 0 )
    {
LABEL_18:
      _close_nocancel(v6);
      return &_stack_chk_guard;
    }
  }
  v7 = v45;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_DWORD *)(StatusReg + 40);
  v15 = (int *)mmap64(0, v7, 1, 2, v6, 0);
  if ( v15 == (int *)-1LL )
  {
    if ( *(_DWORD *)(StatusReg + 40) == 38 )
    {
      v22 = v45;
      v23 = malloc(v45, v10, v11, v12, v13, v14);
      v24 = (int *)v23;
      if ( v23 )
      {
        v25 = v23;
        if ( v22 <= 0 )
        {
LABEL_26:
          *(_DWORD *)(StatusReg + 40) = v9;
          _close_nocancel(v6);
          v19 = nl_intern_locale_data(a2, v24, v45, v36, v37, v38);
          v20 = 0;
          if ( !v19 )
            return &_stack_chk_guard;
          goto LABEL_8;
        }
        while ( 1 )
        {
          nocancel = _read_nocancel(v6, v25, v22);
          v27 = nocancel;
          if ( nocancel <= 0 )
            break;
          v22 -= nocancel;
          v25 += nocancel;
          if ( v22 <= 0 )
            goto LABEL_26;
        }
        free(v24);
        if ( !v27 )
          *(_DWORD *)(StatusReg + 40) = 22;
      }
    }
    goto LABEL_18;
  }
  _close_nocancel(v6);
  if ( v15 )
  {
    v19 = nl_intern_locale_data(a2, v15, v45, v16, v17, v18);
    if ( !v19 )
    {
      munmap(v15, v45);
      return &_stack_chk_guard;
    }
    v20 = 1;
LABEL_8:
    *v19 = 0;
    *((_DWORD *)v19 + 6) = v20;
    a1[2] = (__int64)v19;
  }
  return &_stack_chk_guard;
}
