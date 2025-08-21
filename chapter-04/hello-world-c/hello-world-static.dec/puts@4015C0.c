__int64 __fastcall puts(__int64 a1)
{
  __int64 v1; // x19
  int *v2; // x20
  int *v3; // x0
  int v4; // w1
  __int64 v5; // x23
  _BYTE *v6; // x1
  unsigned __int64 v7; // x19
  __int64 v8; // x20
  int v9; // w0
  unsigned __int64 StatusReg; // x23
  __int64 v12; // x24
  unsigned __int64 v13; // x23
  __int64 v14; // x0

  v1 = strlen(a1);
  v2 = stdout;
  if ( (*stdout & 0x8000) != 0 )
    goto LABEL_2;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v12 = *((_QWORD *)v2 + 17);
  v13 = StatusReg - 1856;
  v14 = *(_QWORD *)(v12 + 8);
  if ( _libc_single_threaded && !v14 )
  {
    *(_DWORD *)v12 = 1;
    *(_QWORD *)(v12 + 8) = v13;
LABEL_2:
    v3 = v2;
    goto LABEL_3;
  }
  if ( v13 == v14 )
  {
    ++*(_DWORD *)(v12 + 4);
    goto LABEL_2;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v2 + 17)) )
    _lll_lock_wait_private(v12);
  v3 = stdout;
  *(_QWORD *)(*((_QWORD *)v2 + 17) + 8LL) = v13;
LABEL_3:
  v4 = v3[48];
  if ( v4 )
  {
    if ( v4 != -1 )
    {
LABEL_18:
      LODWORD(v7) = -1;
      goto LABEL_12;
    }
  }
  else
  {
    v3[48] = -1;
  }
  v5 = *((_QWORD *)v3 + 27);
  if ( (unsigned __int64)(v5 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check();
  if ( v1 != (*(__int64 (**)(void))(v5 + 0x38))() )
    goto LABEL_18;
  v6 = (_BYTE *)*((_QWORD *)stdout + 5);
  if ( (unsigned __int64)v6 >= *((_QWORD *)stdout + 6) )
  {
    if ( (unsigned int)_overflow(stdout, 10) == -1 )
    {
      LODWORD(v7) = -1;
      goto LABEL_12;
    }
  }
  else
  {
    *((_QWORD *)stdout + 5) = v6 + 1;
    *v6 = 10;
  }
  v7 = v1 + 1;
  if ( v7 > 0x7FFFFFFF )
    LODWORD(v7) = 0x7FFFFFFF;
LABEL_12:
  if ( (*v2 & 0x8000) != 0 )
    return (unsigned int)v7;
  v8 = *((_QWORD *)v2 + 17);
  v9 = *(_DWORD *)(v8 + 4);
  if ( _libc_single_threaded )
  {
    if ( !v9 )
    {
      *(_DWORD *)v8 = 0;
      *(_QWORD *)(v8 + 8) = 0;
      return (unsigned int)v7;
    }
  }
  else if ( !v9 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v8) > 1 )
      _lll_lock_wake_private(v8);
    return (unsigned int)v7;
  }
  *(_DWORD *)(v8 + 4) = v9 - 1;
  return (unsigned int)v7;
}
