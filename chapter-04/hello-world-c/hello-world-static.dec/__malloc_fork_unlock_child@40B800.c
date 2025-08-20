int *_malloc_fork_unlock_child()
{
  int *result; // x0
  unsigned __int64 StatusReg; // x2
  __int64 v2; // x3
  __int64 v3; // x2

  result = (int *)&global_max_fast;
  if ( (_malloc_initialized & 1) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    free_list_lock = 0;
    v2 = *(_QWORD *)(StatusReg + 48);
    if ( v2 )
      *(_QWORD *)(v2 + 2176) = 1;
    result = &main_arena;
    free_list = 0;
    do
    {
      *result = 0;
      if ( (int *)v2 != result )
      {
        v3 = free_list;
        free_list = (__int64)result;
        *((_QWORD *)result + 271) = v3;
        *((_QWORD *)result + 272) = 0;
      }
      result = (int *)*((_QWORD *)result + 270);
    }
    while ( result != &main_arena );
    list_lock = 0;
  }
  return result;
}
