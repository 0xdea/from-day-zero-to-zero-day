__int64 __fastcall _futex_abstimed_wait_cancelable64(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        void *a7)
{
  unsigned __int64 v8; // x20
  void *v9; // x19
  int v10; // w19
  unsigned int v12; // w6

  if ( a4 && (*a4 & 0x8000000000000000LL) != 0 )
    return 110;
  if ( a3 > 1 )
    return 22;
  v8 = a2;
  v9 = (void *)(int)(((a3 << 8) ^ 0x100 | 0x89) ^ a5);
  if ( _libc_single_threaded )
  {
    v10 = linux_eabi_syscall(__NR_futex, a1, v9, (void *)a2, a4, 0, (void *)0xFFFFFFFFLL, a7);
  }
  else
  {
    v12 = _pthread_enable_asynccancel();
    v10 = linux_eabi_syscall(__NR_futex, a1, v9, (void *)v8, a4, 0, (void *)0xFFFFFFFFLL, (void *)v12);
    _pthread_disable_asynccancel(v12);
  }
  if ( v10 > 0 )
    goto LABEL_14;
  if ( v10 < -22 )
  {
    if ( v10 == -110 || v10 == -75 )
      return (unsigned int)-v10;
LABEL_14:
    _libc_fatal("The futex facility returned an unexpected error code.\n");
  }
  if ( ((0x440801uLL >> ((unsigned __int8)v10 + 22)) & 1) == 0 )
    goto LABEL_14;
  return (unsigned int)-v10;
}
