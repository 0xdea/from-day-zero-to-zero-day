signed __int64 _malloc_fork_unlock_parent()
{
  signed __int64 result; // x0
  int *v1; // x19
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6

  result = (unsigned __int8)_malloc_initialized;
  if ( (_malloc_initialized & 1) != 0 )
  {
    v1 = &main_arena;
    do
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
        _lll_lock_wake_private(v1, v2, v3, v4, v5, v6, v7);
      v1 = (int *)*((_QWORD *)v1 + 270);
    }
    while ( v1 != &main_arena );
    result = _aarch64_swp4_rel(0, (atomic_uint *)&list_lock);
    if ( (int)result > 1 )
      return _lll_lock_wake_private(&list_lock, v8, v9, v10, v11, v12, v13);
  }
  return result;
}
