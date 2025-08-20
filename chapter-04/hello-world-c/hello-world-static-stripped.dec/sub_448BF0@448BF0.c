__int64 __fastcall sub_448BF0(int a1)
{
  return *(_QWORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 24) + 8LL * a1 + 128);
}
