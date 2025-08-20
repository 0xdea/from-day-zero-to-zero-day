__int64 __fastcall sigaction(int a1)
{
  if ( (unsigned int)(a1 - 1) <= 0x3F && (unsigned int)(a1 - 32) > 1 )
    return _libc_sigaction();
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  return 0xFFFFFFFFLL;
}
