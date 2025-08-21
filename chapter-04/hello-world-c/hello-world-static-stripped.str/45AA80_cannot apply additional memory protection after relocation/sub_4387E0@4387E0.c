__int64 __fastcall sub_4387E0(_QWORD *a1)
{
  __int64 v2; // x1
  __int64 v3; // x3
  __int64 result; // x0
  __int64 v5; // x1
  long double v6; // q0

  v2 = *a1 + a1[149];
  v3 = a1[150];
  result = v2 & -qword_490F10;
  v5 = (v2 + v3) & -qword_490F10;
  if ( result != v5 )
  {
    result = sub_411880(result, v5 - result, 1);
    if ( (result & 0x80000000) != 0 )
      sub_432250(
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40),
        a1[1],
        v6,
        0,
        "cannot apply additional memory protection after relocation");
  }
  return result;
}
