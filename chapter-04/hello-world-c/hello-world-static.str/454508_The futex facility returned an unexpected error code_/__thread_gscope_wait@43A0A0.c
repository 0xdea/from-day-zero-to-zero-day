__int64 _thread_gscope_wait()
{
  __int64 v0; // x1
  __int64 v1; // x2
  __int64 v2; // x3
  void *v3; // x4
  void *v4; // x5
  void *v5; // x6
  unsigned __int64 v6; // x21
  __int64 *v7; // x19
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  unsigned __int64 v11; // x0
  __int64 *v12; // x19
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  unsigned __int64 v16; // x0
  __int64 result; // x0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dl_stack_cache_lock) )
    _lll_lock_wait_private(dl_stack_cache_lock, v0, v1, v2, v3, v4, v5);
  v6 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v7 = (__int64 *)dl_stack_used;
  if ( (__int64 *)dl_stack_used != &dl_stack_used )
  {
    while ( (__int64 *)v6 == v7 - 24
         || !*((_DWORD *)v7 - 47)
         || _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v7 - 188)) != 1 )
    {
LABEL_13:
      v7 = (__int64 *)*v7;
      if ( v7 == &dl_stack_used )
        goto LABEL_14;
    }
    while ( 1 )
    {
      v11 = linux_eabi_syscall(__NR_futex, (char *)v7 - 188, (void *)0x80, (void *)2, 0, v8, v9, v10);
      if ( v11 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v11 != -11 && (_DWORD)v11 != -4 )
        break;
      if ( *((_DWORD *)v7 - 47) != 2 )
        goto LABEL_13;
    }
LABEL_12:
    _libc_fatal("The futex facility returned an unexpected error code.\n");
  }
LABEL_14:
  v12 = (__int64 *)dl_stack_user;
  if ( (__int64 *)dl_stack_user != &dl_stack_user )
  {
    while ( (__int64 *)v6 == v12 - 24
         || !*((_DWORD *)v12 - 47)
         || _aarch64_cas4_acq(1u, 2u, (atomic_uint *)((char *)v12 - 188)) != 1 )
    {
LABEL_24:
      v12 = (__int64 *)*v12;
      if ( v12 == &dl_stack_user )
        goto LABEL_25;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = linux_eabi_syscall(__NR_futex, (char *)v12 - 188, (void *)0x80, (void *)2, 0, v13, v14, v15);
        if ( v16 > 0xFFFFFFFFFFFFF000LL && (_DWORD)v16 != -11 )
          break;
        if ( *((_DWORD *)v12 - 47) != 2 )
          goto LABEL_24;
      }
      if ( (_DWORD)v16 != -4 )
        goto LABEL_12;
      if ( *((_DWORD *)v12 - 47) != 2 )
        goto LABEL_24;
    }
  }
LABEL_25:
  result = _aarch64_swp4_rel(0, (atomic_uint *)dl_stack_cache_lock);
  if ( (int)result > 1 )
    return _lll_lock_wake_private(dl_stack_cache_lock);
  return result;
}
