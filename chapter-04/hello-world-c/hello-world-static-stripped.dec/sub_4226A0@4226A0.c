__int64 __fastcall sub_4226A0(unsigned int a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = sub_42E660();
  result = sub_42C8B0(v2, a1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = result;
    return 0xFFFFFFFFLL;
  }
  return result;
}
