__int64 __fastcall _wcsmbs_clone_conv(_OWORD *a1)
{
  _OWORD **v2; // x20
  _OWORD *v3; // x1
  __int128 v4; // q1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  __int64 v11; // x1
  char v12; // w21
  int v13; // w0
  __int64 v14; // x1
  int v15; // w0
  bool v16; // w0
  __int64 result; // x0

  v2 = *(_OWORD ***)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 32LL);
  v3 = *v2;
  if ( !*v2 )
  {
    _wcsmbs_load_conv();
    v3 = *v2;
  }
  v4 = v3[1];
  *a1 = *v3;
  a1[1] = v4;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)_gconv_lock) )
    _lll_lock_wait_private(_gconv_lock, v5, v6, v7, v8, v9, v10);
  v11 = *(_QWORD *)a1;
  v12 = 0;
  if ( **(_QWORD **)a1 )
  {
    v13 = *(_DWORD *)(v11 + 16);
    *(_DWORD *)(v11 + 16) = v13 + 1;
    v12 = __OFADD__(v13, 1);
  }
  v14 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)v14 )
  {
    v15 = *(_DWORD *)(v14 + 16);
    *(_DWORD *)(v14 + 16) = v15 + 1;
    v16 = __OFADD__(v15, 1);
    v12 |= v16;
  }
  result = _aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock);
  if ( (int)result > 1 )
    result = _lll_lock_wake_private(_gconv_lock);
  if ( (v12 & 1) != 0 )
    _libc_fatal("Fatal glibc error: gconv module reference counter overflow\n");
  return result;
}
