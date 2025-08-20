__int64 __fastcall sub_40CC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 result; // x0

  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((unsigned __int8)byte_496690, (__int64)&unk_496000, a3, a4, a5, a6, a7);
  if ( !__CFADD__(qword_490F10 - 1, a1) )
    JUMPOUT(0x40BCB0);
  result = 0;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
  return result;
}
