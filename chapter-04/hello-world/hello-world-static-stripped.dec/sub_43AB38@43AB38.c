__int64 __fastcall sub_43AB38(__int64 a1)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)(a1 + 8);
  return v1 - _ReadStatusReg(TPIDR_EL0);
}
