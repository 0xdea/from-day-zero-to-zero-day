__int64 __fastcall sub_400C30(__int64 a1, unsigned int a2)
{
  int v3; // w19
  __int64 result; // x0
  const char *v5; // x0
  __int64 v6; // x21
  int v7; // [xsp+40h] [xbp+40h]
  __int64 v8; // [xsp+50h] [xbp+50h]

  v3 = a1;
  result = sub_410D20(a1, 1);
  if ( (_DWORD)result == -1 )
  {
    result = *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (_DWORD)result == 9 )
    {
      if ( a2 == 0x8000 )
      {
        v5 = "/dev/null";
        v6 = 259;
      }
      else
      {
        v6 = 263;
        v5 = "/dev/full";
      }
      if ( v3 != (unsigned int)sub_410EE0(v5, a2, 0)
        || (unsigned int)sub_410930()
        || (v7 & 0xF000) != 0x2000
        || (result = v8, v8 != v6) )
      {
        while ( 1 )
        {
          __break(0x3E8u);
          __break(0x3E8u);
        }
      }
    }
  }
  return result;
}
