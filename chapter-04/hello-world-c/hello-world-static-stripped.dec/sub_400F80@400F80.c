__int64 __fastcall sub_400F80(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)_ReadStatusReg(TPIDR_EL0) + 16LL) + *(_QWORD *)(a1 + 8);
}
