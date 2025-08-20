__int64 tcache_init_part_0()
{
  unsigned __int64 StatusReg; // x21
  int *retry; // x19
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  __int64 v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  __int64 result; // x0
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  bool v32; // zf
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  void *v44; // x4
  void *v45; // x5
  void *v46; // x6

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  retry = *(int **)(StatusReg + 48);
  if ( retry )
  {
    if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
      _lll_lock_wait_private(retry, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
    v16 = int_malloc(retry, 0x280u, v8, v9, v10, v11, v12, v13, v14, v15);
    if ( v16 )
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)retry) > 1 )
        _lll_lock_wake_private(retry, v17, v18, v19, v20, v21, v22);
LABEL_7:
      *(_QWORD *)(StatusReg + 48 + 8) = v16;
      return memset(v16, 0, 640);
    }
  }
  else
  {
    retry = arena_get2((int *)0x280, 0);
    result = int_malloc(retry, 0x280u, v24, v25, v26, v27, v28, v29, v30, v31);
    v16 = result;
    if ( result )
      v32 = 1;
    else
      v32 = retry == 0;
    if ( v32 )
      goto LABEL_13;
  }
  retry = arena_get_retry(retry, (int *)0x280);
  result = int_malloc(retry, 0x280u, v33, v34, v35, v36, v37, v38, v39, v40);
  v16 = result;
LABEL_13:
  if ( retry )
  {
    result = _aarch64_swp4_rel(0, (atomic_uint *)retry);
    if ( (int)result > 1 )
      result = _lll_lock_wake_private(retry, v41, v42, v43, v44, v45, v46);
  }
  if ( v16 )
    goto LABEL_7;
  return result;
}
