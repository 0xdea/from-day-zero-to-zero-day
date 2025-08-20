__int64 __fastcall _nptl_deallocate_stack(__int64 a1)
{
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
  __int64 v16; // x1
  _QWORD *v17; // x2
  __int64 v18; // x3
  __int64 v19; // x3
  __int64 v20; // x1
  __int64 result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dl_stack_cache_lock) )
    _lll_lock_wait_private(dl_stack_cache_lock, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  v16 = a1 + 192;
  dl_in_flight_stack = a1 + 192;
  __dmb(0xBu);
  v18 = *(_QWORD *)(a1 + 192);
  v17 = *(_QWORD **)(a1 + 200);
  *(_QWORD *)(v18 + 8) = v17;
  *v17 = v18;
  __dmb(0xBu);
  LOBYTE(v17) = *(_BYTE *)(a1 + 1042);
  dl_in_flight_stack = 0;
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    dl_deallocate_tls((void **)(a1 + 1856), 0, v8, v9, v10, v11, v12, v13, v14, v15);
    result = _aarch64_swp4_rel(0, (atomic_uint *)dl_stack_cache_lock);
    if ( (int)result <= 1 )
      return result;
    return _lll_lock_wake_private(dl_stack_cache_lock, v22, v23, v24, v25, v26, v27);
  }
  dl_in_flight_stack = v16 | 1;
  __dmb(0xBu);
  v19 = dl_stack_cache;
  *(_QWORD *)(a1 + 192) = dl_stack_cache;
  *(_QWORD *)(a1 + 200) = &dl_stack_cache;
  *(_QWORD *)(v19 + 8) = v16;
  __dmb(0xBu);
  dl_stack_cache = a1 + 192;
  __dmb(0xBu);
  v20 = *(_QWORD *)(a1 + 1176);
  dl_in_flight_stack = 0;
  dl_stack_cache_actsize += v20;
  if ( dl_stack_cache_actsize > (unsigned __int64)_nptl_stack_cache_maxsize )
    _nptl_free_stacks(_nptl_stack_cache_maxsize, v8, v9, v10, v11, v12, v13, v14, v15);
  result = _aarch64_swp4_rel(0, (atomic_uint *)dl_stack_cache_lock);
  if ( (int)result > 1 )
    return _lll_lock_wake_private(dl_stack_cache_lock, v22, v23, v24, v25, v26, v27);
  return result;
}
