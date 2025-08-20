__int64 __fastcall _syscall_error(int a1)
{
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = -a1;
  return -1;
}
