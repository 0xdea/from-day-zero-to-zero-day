void __fastcall __noreturn sub_4108D0(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  void *v7; // x1
  _DWORD *StatusReg; // x2
  unsigned __int64 v9; // x0

  v7 = (void *)a1;
  StatusReg = (_DWORD *)_ReadStatusReg(TPIDR_EL0);
  v9 = linux_eabi_syscall(__NR_exit_group, v7, v7, StatusReg, (void *)0x28, a5, a6, a7);
  if ( v9 > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_4;
  while ( 1 )
  {
    __break(0x3E8u);
    while ( 1 )
    {
      v9 = linux_eabi_syscall(__NR_exit_group, v7, v7, StatusReg, (void *)0x28, a5, a6, a7);
      if ( v9 <= 0xFFFFFFFFFFFFF000LL )
        break;
LABEL_4:
      StatusReg[10] = -(int)v9;
      __break(0x3E8u);
    }
  }
}
