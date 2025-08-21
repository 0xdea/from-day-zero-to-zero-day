void __noreturn exit(int status)
{
  void *v1; // x4
  void *v2; // x5
  void *v3; // x6
  void *v4; // x1
  _DWORD *StatusReg; // x2
  unsigned __int64 v6; // x0

  v4 = (void *)status;
  StatusReg = (_DWORD *)_ReadStatusReg(TPIDR_EL0);
  v6 = linux_eabi_syscall(__NR_exit_group, v4, v4, StatusReg, (void *)0x28, v1, v2, v3);
  if ( v6 > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_4;
  while ( 1 )
  {
    __break(0x3E8u);
    while ( 1 )
    {
      v6 = linux_eabi_syscall(__NR_exit_group, v4, v4, StatusReg, (void *)0x28, v1, v2, v3);
      if ( v6 <= 0xFFFFFFFFFFFFF000LL )
        break;
LABEL_4:
      StatusReg[10] = -(int)v6;
      __break(0x3E8u);
    }
  }
}
