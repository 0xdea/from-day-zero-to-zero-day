__int64 __fastcall _strtoll_internal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ___strtoll_l_internal(a1, a2, a3, a4, 0, *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 24));
}
