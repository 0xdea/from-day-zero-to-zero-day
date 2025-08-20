bool __fastcall _libc_alloca_cutoff(unsigned __int64 a1)
{
  unsigned __int64 v1; // x1

  v1 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0x498) >> 2;
  if ( v1 - 1 > 0xFFFF )
    v1 = 0x10000;
  return v1 >= a1;
}
