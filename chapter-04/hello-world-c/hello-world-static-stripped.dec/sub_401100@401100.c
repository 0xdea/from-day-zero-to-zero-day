__int64 sub_401100()
{
  __int64 result; // x0

  result = sub_4071C0();
  if ( (_DWORD)result )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = result;
    return 0xFFFFFFFFLL;
  }
  return result;
}
