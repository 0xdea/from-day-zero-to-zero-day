signed __int64 __fastcall _wcsmbs_clone_conv(_OWORD *a1)
{
  __int64 v2; // x0
  _OWORD **v3; // x20
  _OWORD *v4; // x1
  __int128 v5; // q1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x1
  char v21; // w21
  int v22; // w0
  __int64 v23; // x1
  int v24; // w0
  bool v25; // w0
  signed __int64 result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  void *v30; // x4
  void *v31; // x5
  void *v32; // x6
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7

  v2 = **(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16);
  v3 = *(_OWORD ***)(v2 + 32);
  v4 = *v3;
  if ( !*v3 )
  {
    _wcsmbs_load_conv(v2);
    v4 = *v3;
  }
  v5 = v4[1];
  *a1 = *v4;
  a1[1] = v5;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)_gconv_lock) )
    _lll_lock_wait_private(_gconv_lock, v12, v13, v14, v15, v16, v17, v18, v19, v6, v7, v8, v9, v10, v11);
  v20 = *(_QWORD *)a1;
  v21 = 0;
  if ( **(_QWORD **)a1 )
  {
    v22 = *(_DWORD *)(v20 + 16);
    *(_DWORD *)(v20 + 16) = v22 + 1;
    v21 = __OFADD__(v22, 1);
  }
  v23 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)v23 )
  {
    v24 = *(_DWORD *)(v23 + 16);
    *(_DWORD *)(v23 + 16) = v24 + 1;
    v25 = __OFADD__(v24, 1);
    v21 |= v25;
  }
  result = _aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock);
  if ( (int)result > 1 )
    result = _lll_lock_wake_private(_gconv_lock, v27, v28, v29, v30, v31, v32);
  if ( (v21 & 1) != 0 )
    _libc_fatal(
      (__int64)"Fatal glibc error: gconv module reference counter overflow\n",
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  return result;
}
