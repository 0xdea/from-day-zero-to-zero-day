unsigned __int64 __fastcall fwrite(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x20
  unsigned __int64 StatusReg; // x21
  __int64 v18; // x25
  unsigned __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  int v27; // w0
  __int64 v28; // x21
  unsigned __int64 v29; // x21
  _BOOL4 v30; // w23
  bool v31; // zf
  _DWORD *v33; // x19
  int v34; // w0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  void *v38; // x4
  void *v39; // x5
  void *v40; // x6
  bool v41; // zf

  v12 = a2 * a3;
  if ( !(a2 * a3) )
    return v12;
  if ( (*(_DWORD *)a4 & 0x8000) == 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v18 = *(_QWORD *)(a4 + 136);
    v19 = StatusReg - 1856;
    v20 = *(_QWORD *)(v18 + 8);
    if ( _libc_single_threaded && !v20 )
    {
      *(_DWORD *)v18 = 1;
      *(_QWORD *)(v18 + 8) = v19;
    }
    else if ( v19 == v20 )
    {
      ++*(_DWORD *)(v18 + 4);
    }
    else
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(a4 + 136)) )
        _lll_lock_wait_private((_DWORD *)v18, a5, a6, a7, a8, a9, a10, a11, a12, v21, v22, v23, v24, v25, v26);
      *(_QWORD *)(*(_QWORD *)(a4 + 136) + 8LL) = v19;
    }
  }
  v27 = *(_DWORD *)(a4 + 192);
  if ( v27 )
  {
    if ( v27 != -1 )
    {
      if ( (*(_DWORD *)a4 & 0x8000) != 0 )
        return 0;
      v30 = 0;
      v29 = 0;
      goto LABEL_24;
    }
  }
  else
  {
    *(_DWORD *)(a4 + 192) = -1;
  }
  v28 = *(_QWORD *)(a4 + 216);
  if ( (unsigned __int64)(v28 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a5, a6, a7, a8, a9, a10, a11, a12);
  v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v28 + 56))(a4, a1, v12);
  v30 = v29 == -1;
  if ( (*(_DWORD *)a4 & 0x8000) == 0 )
  {
LABEL_24:
    v33 = *(_DWORD **)(a4 + 136);
    v34 = v33[1];
    if ( _libc_single_threaded )
    {
      if ( !v34 )
      {
        *v33 = 0;
        *((_QWORD *)v33 + 1) = 0;
        goto LABEL_14;
      }
    }
    else if ( !v34 )
    {
      *((_QWORD *)v33 + 1) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v33) > 1 )
        _lll_lock_wake_private(v33, v35, v36, v37, v38, v39, v40);
      goto LABEL_14;
    }
    v33[1] = v34 - 1;
    v41 = v30 || v12 == v29;
    v12 = a3;
    if ( !v41 )
      return v29 / a2;
    return v12;
  }
LABEL_14:
  v31 = v30 || v12 == v29;
  v12 = a3;
  if ( v31 )
    return v12;
  return v29 / a2;
}
