unsigned __int64 __fastcall sub_410C00(int a1, const void *a2, size_t a3)
{
  unsigned __int64 v4; // x19
  unsigned int v8; // w3
  unsigned __int64 v9; // x19
  int v10; // w2
  int v11; // w2

  if ( byte_490F08 )
  {
    v4 = linux_eabi_syscall(__NR_write, a1, a2, a3);
    if ( v4 > 0xFFFFFFFFFFFFF000LL )
    {
      v10 = -(int)v4;
      v4 = -1;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v10;
    }
    return v4;
  }
  else
  {
    v8 = sub_42C5F0();
    v9 = linux_eabi_syscall(__NR_write, a1, a2, a3);
    if ( v9 > 0xFFFFFFFFFFFFF000LL )
    {
      v11 = -(int)v9;
      v9 = -1;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v11;
    }
    sub_42C680(v8);
    return v9;
  }
}
