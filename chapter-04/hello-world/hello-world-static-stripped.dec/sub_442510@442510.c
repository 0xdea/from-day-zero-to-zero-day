__int64 __fastcall sub_442510(__int64 result, int a2)
{
  *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xF8) = *(_QWORD *)(result + 24);
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD))result)(*(_QWORD *)(result + 8));
  return result;
}
