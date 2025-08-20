__int64 __fastcall sub_423460(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v5; // w21

  if ( a1 )
  {
    if ( *a1 )
    {
      v5 = a3;
      if ( !sub_42F180(a1, 61, a3) )
        return sub_4231E0((__int64)a1, a2, 0, v5);
    }
  }
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  return 0xFFFFFFFFLL;
}
