unsigned __int64 __fastcall sub_4387E0(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x3
  unsigned __int64 result; // x0
  __int64 v5; // x1

  v2 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 1192);
  v3 = *(_QWORD *)(a1 + 1200);
  result = v2 & -qword_490F10;
  v5 = (v2 + v3) & -qword_490F10;
  if ( result != v5 )
  {
    result = sub_411880((void *)result, v5 - result, 1);
    if ( (result & 0x80000000) != 0 )
      sub_432250(
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40),
        *(const char **)(a1 + 8),
        0,
        "cannot apply additional memory protection after relocation");
  }
  return result;
}
