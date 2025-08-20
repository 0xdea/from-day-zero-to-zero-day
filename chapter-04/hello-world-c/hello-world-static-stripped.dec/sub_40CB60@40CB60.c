__int64 __fastcall sub_40CB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((unsigned __int8)byte_496690, a2, (__int64)&unk_496000, a4, a5, a6, a7);
  if ( ((a1 - 1) & a1) == 0 && a1 != 0 )
    JUMPOUT(0x40BCB0);
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  return 0;
}
