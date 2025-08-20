signed __int64 __fastcall _malloc_arena_thread_freeres(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 StatusReg; // x21
  __int64 v9; // x20
  unsigned __int64 *v10; // x19
  unsigned __int64 v11; // x0
  signed __int64 result; // x0
  __int64 v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  void *v17; // x4
  void *v18; // x5
  void *v19; // x6
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  __int64 v37; // x0

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_QWORD *)(StatusReg + 48 + 8);
  *(_BYTE *)(StatusReg + 48 + 0x10) = 1;
  if ( v9 )
  {
    v10 = (unsigned __int64 *)(v9 + 128);
    *(_QWORD *)(StatusReg + 48 + 8) = 0;
    do
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( !*v10 )
          break;
        if ( (v11 & 0xF) != 0 )
          malloc_printerr(
            (__int64)"tcache_thread_shutdown(): unaligned tcache chunk detected",
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
        *v10 = *(_QWORD *)v11 ^ (v11 >> 12);
        free(v11, a1, a2, a3, a4, a5, a6, a7, a8);
      }
      ++v10;
    }
    while ( v10 != (unsigned __int64 *)(v9 + 640) );
    free(v9, a1, a2, a3, a4, a5, a6, a7, a8);
  }
  result = 48;
  v13 = *(_QWORD *)(StatusReg + 48);
  *(_QWORD *)(StatusReg + 48) = 0;
  if ( v13 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
      _lll_lock_wait_private(&free_list_lock, v20, v21, v22, v23, v24, v25, v26, v27, v14, v15, v16, v17, v18, v19);
    v28 = *(_QWORD *)(v13 + 2176);
    if ( v28 )
    {
      v29 = v28 - 1;
      *(_QWORD *)(v13 + 2176) = v29;
      if ( !v29 )
      {
        v30 = free_list;
        free_list = v13;
        *(_QWORD *)(v13 + 2168) = v30;
      }
      result = _aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock);
      if ( (int)result > 1 )
        return _lll_lock_wake_private(&free_list_lock, v31, v32, v33, v34, v35, v36);
    }
    else
    {
      v37 = _libc_assert_fail("a->attached_threads > 0", "arena.c", 907, "__malloc_arena_thread_freeres");
      return realloc(v37);
    }
  }
  return result;
}
