__int64 *__fastcall _set_vma_name(void *a1)
{
  int v3; // [xsp+4h] [xbp-Ch] BYREF

  if ( prctl_supported_0 )
  {
    _tunable_get_val(28, &v3, 0);
    if ( !v3 || linux_eabi_syscall(__NR_prctl, 1398164801, 0, a1) == -22 )
      prctl_supported_0 = 0;
  }
  return &_stack_chk_guard;
}
