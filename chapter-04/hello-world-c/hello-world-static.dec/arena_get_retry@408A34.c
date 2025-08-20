int *__fastcall arena_get_retry(int *a1, int *a2)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  void *v28; // x4
  void *v29; // x5
  void *v30; // x6

  if ( a1 == &main_arena )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      _lll_lock_wake_private(a1, v25, v26, v27, v28, v29, v30);
    return arena_get2(a2, &main_arena);
  }
  else
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      _lll_lock_wake_private(a1, v3, v4, v5, v6, v7, v8);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&main_arena) )
      _lll_lock_wait_private(&main_arena, v15, v16, v17, v18, v19, v20, v21, v22, v9, v10, v11, v12, v13, v14);
    return &main_arena;
  }
}
