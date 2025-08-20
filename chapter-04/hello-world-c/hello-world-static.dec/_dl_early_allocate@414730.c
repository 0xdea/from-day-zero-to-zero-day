void *__fastcall dl_early_allocate(size_t a1)
{
  __int64 v2; // x2
  void *v4; // x0

  if ( _curbrk )
  {
    v2 = sbrk(a1);
    if ( v2 == -1 )
      goto LABEL_6;
  }
  else
  {
    v2 = linux_eabi_syscall(__NR_brk, 0);
    if ( v2 == linux_eabi_syscall(__NR_brk, (void *)(v2 + a1)) )
      goto LABEL_6;
  }
  if ( v2 )
    return (void *)v2;
LABEL_6:
  v4 = linux_eabi_syscall(__NR_mmap, 0, a1, 3, 34, -1, 0);
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFF000LL )
    return 0;
  else
    return v4;
}
