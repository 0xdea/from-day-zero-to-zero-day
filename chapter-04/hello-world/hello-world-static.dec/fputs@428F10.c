__int64 __fastcall fputs(__int64 a1, __int64 a2)
{
  __int64 v4; // x20
  double v5; // d0
  double v6; // d1
  double v7; // d2
  double v8; // d3
  double v9; // d4
  double v10; // d5
  double v11; // d6
  double v12; // d7
  unsigned __int64 StatusReg; // x22
  __int64 v14; // x23
  unsigned __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  int v23; // w0
  __int64 v24; // x22
  unsigned int v25; // w20
  _DWORD *v26; // x19
  int v27; // w0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6

  v4 = strlen(a1);
  if ( (*(_DWORD *)a2 & 0x8000) == 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v14 = *(_QWORD *)(a2 + 136);
    v15 = StatusReg - 1856;
    v16 = *(_QWORD *)(v14 + 8);
    if ( !_libc_single_threaded || v16 )
    {
      if ( v15 == v16 )
      {
        ++*(_DWORD *)(v14 + 4);
      }
      else
      {
        if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(a2 + 136)) )
          _lll_lock_wait_private((_DWORD *)v14, v5, v6, v7, v8, v9, v10, v11, v12, v17, v18, v19, v20, v21, v22);
        *(_QWORD *)(*(_QWORD *)(a2 + 136) + 8LL) = v15;
      }
    }
    else
    {
      *(_DWORD *)v14 = 1;
      *(_QWORD *)(v14 + 8) = v15;
    }
  }
  v23 = *(_DWORD *)(a2 + 192);
  if ( v23 )
  {
    if ( v23 != -1 )
    {
LABEL_12:
      v25 = -1;
      goto LABEL_13;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 192) = -1;
  }
  v24 = *(_QWORD *)(a2 + 216);
  if ( (unsigned __int64)(v24 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(v5, v6, v7, v8, v9, v10, v11, v12);
  if ( v4 != (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v24 + 56))(a2, a1, v4) )
    goto LABEL_12;
  v25 = 1;
LABEL_13:
  if ( (*(_DWORD *)a2 & 0x8000) != 0 )
    return v25;
  v26 = *(_DWORD **)(a2 + 136);
  v27 = v26[1];
  if ( _libc_single_threaded )
  {
    if ( !v27 )
    {
      *v26 = 0;
      *((_QWORD *)v26 + 1) = 0;
      return v25;
    }
  }
  else if ( !v27 )
  {
    *((_QWORD *)v26 + 1) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v26) > 1 )
      _lll_lock_wake_private(v26, v29, v30, v31, v32, v33, v34);
    return v25;
  }
  v26[1] = v27 - 1;
  return v25;
}
