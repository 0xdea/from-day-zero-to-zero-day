__int64 _malloc_arena_thread_freeres()
{
  unsigned __int64 StatusReg; // x21
  __int64 v1; // x20
  unsigned __int64 *v2; // x19
  unsigned __int64 v3; // x0
  __int64 result; // x0
  __int64 v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x0
  unsigned __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD *)(StatusReg + 48 + 8);
  *(_BYTE *)(StatusReg + 48 + 0x10) = 1;
  if ( v1 )
  {
    v2 = (unsigned __int64 *)(v1 + 128);
    *(_QWORD *)(StatusReg + 48 + 8) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 )
          break;
LABEL_7:
        if ( ++v2 == (unsigned __int64 *)(v1 + 640) )
        {
          free(v1);
          goto LABEL_9;
        }
      }
      if ( (v3 & 0xF) != 0 )
      {
        malloc_printerr("tcache_thread_shutdown(): unaligned tcache chunk detected");
        goto LABEL_7;
      }
      *v2 = *(_QWORD *)v3 ^ (v3 >> 12);
      free(v3);
    }
  }
LABEL_9:
  result = 48;
  v5 = *(_QWORD *)(StatusReg + 48);
  *(_QWORD *)(StatusReg + 48) = 0;
  if ( v5 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&free_list_lock) )
      _lll_lock_wait_private(&free_list_lock, v6, v7, v8, v9, v10, v11);
    v12 = *(_QWORD *)(v5 + 2176);
    if ( v12 )
    {
      v13 = v12 - 1;
      *(_QWORD *)(v5 + 2176) = v13;
      if ( !v13 )
      {
        v14 = free_list;
        free_list = v5;
        *(_QWORD *)(v5 + 2168) = v14;
      }
      result = _aarch64_swp4_rel(0, (atomic_uint *)&free_list_lock);
      if ( (int)result > 1 )
        return _lll_lock_wake_private(&free_list_lock);
    }
    else
    {
      v15 = _libc_assert_fail("a->attached_threads > 0", "arena.c", 907, "__malloc_arena_thread_freeres");
      return (__int64)realloc(v15, v16, v17, v18, v19, v20);
    }
  }
  return result;
}
