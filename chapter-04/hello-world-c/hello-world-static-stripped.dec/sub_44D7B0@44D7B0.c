__int64 __fastcall sub_44D7B0(long double a1, long double a2)
{
  unsigned __int64 v2; // x1
  unsigned __int64 v3; // x7
  __int64 v4; // x4
  __int64 v5; // x2
  __int64 result; // x0
  bool v7; // cc

  _ReadStatusReg(FPCR);
  v2 = *(_QWORD *)&a2;
  v3 = *((_QWORD *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
  v4 = HIWORD(*((_QWORD *)&a2 + 1)) & 0x7FFFLL;
  if ( (HIWORD(a1) & 0x7FFF) == 0x7FFF )
  {
    v5 = *((_QWORD *)&a1 + 1) & 0xFFFFFFFFFFFFLL | *(_QWORD *)&a1;
    if ( v5 )
    {
      if ( (*((_QWORD *)&a1 + 1) & 0xFFFFFFFFFFFFuLL) <= 0x7FFFFFFFFFFFLL )
      {
LABEL_19:
        sub_44D890(1, v2, v5, *((_QWORD *)&a1 + 1), v4);
        return 1;
      }
      if ( v4 != 0x7FFF )
        return 1;
      v2 = *(_QWORD *)&a2 | v3;
LABEL_5:
      if ( v2 )
        v7 = v3 > 0x7FFFFFFFFFFFLL;
      else
        v7 = 1;
      if ( !v7 )
        goto LABEL_19;
      return 1;
    }
    v5 = 0x7FFF;
    result = 0;
    if ( v4 == 0x7FFF )
    {
      v2 = *(_QWORD *)&a2 | v3;
      if ( *(_QWORD *)&a2 | v3 )
        goto LABEL_5;
    }
  }
  else
  {
    v5 = 0x7FFF;
    result = 0;
    if ( v4 == 0x7FFF )
    {
      v2 = *(_QWORD *)&a2 | v3;
      if ( *(_QWORD *)&a2 | v3 )
        goto LABEL_5;
    }
  }
  return result;
}
