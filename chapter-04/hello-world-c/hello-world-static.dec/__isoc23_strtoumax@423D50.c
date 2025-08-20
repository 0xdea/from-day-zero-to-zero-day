__int64 __fastcall _isoc23_strtoumax(__int64 a1, __int64 a2, __int64 a3)
{
  return ___strtoull_l_internal(a1, a2, a3, 0, 1, *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 24));
}
