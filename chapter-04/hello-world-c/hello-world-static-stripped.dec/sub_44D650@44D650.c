__int64 __fastcall sub_44D650(long double a1, long double a2)
{
  __int64 v2; // x7
  unsigned __int64 v3; // x12
  __int64 v4; // x1
  unsigned __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x0
  unsigned __int64 v8; // x6
  __int64 result; // x0
  _BOOL4 v10; // w0
  bool v12; // zf

  _ReadStatusReg(FPCR);
  v2 = HIWORD(*((_QWORD *)&a1 + 1)) & 0x7FFFLL;
  v3 = *((_QWORD *)&a1 + 1) & 0xFFFFFFFFFFFFLL;
  v4 = *((_QWORD *)&a1 + 1) >> 63;
  v5 = *((_QWORD *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
  v6 = HIWORD(*((_QWORD *)&a2 + 1)) & 0x7FFFLL;
  v7 = *((_QWORD *)&a2 + 1) >> 63;
  if ( v2 == 0x7FFF )
  {
    if ( !(v3 | *(_QWORD *)&a1) )
    {
      if ( v6 == 0x7FFF )
      {
        if ( v5 | *(_QWORD *)&a2 )
          goto LABEL_41;
        if ( v4 == v7 )
        {
          v10 = 1;
          goto LABEL_31;
        }
      }
LABEL_14:
      if ( a1 >= 0.0 )
        return 1;
      else
        return 0xFFFFFFFFLL;
    }
LABEL_41:
    sub_44D890(1, v4, *(_QWORD *)&a1, *((_QWORD *)&a1 + 1), *(_QWORD *)&a2);
    return 2;
  }
  if ( v6 == 0x7FFF )
  {
    if ( !(v5 | *(_QWORD *)&a2) )
    {
      if ( !v2 && !(v3 | *(_QWORD *)&a1) )
        goto LABEL_7;
      goto LABEL_13;
    }
    goto LABEL_41;
  }
  if ( v2 )
  {
    if ( !v6 || v4 != v7 || v2 > v6 )
      goto LABEL_14;
    if ( v2 >= v6 )
      goto LABEL_26;
    goto LABEL_36;
  }
  v8 = v3 | *(_QWORD *)&a1;
  if ( v6 )
  {
    if ( !v8 )
    {
LABEL_7:
      if ( a2 >= 0.0 )
        return 0xFFFFFFFFLL;
      else
        return 1;
    }
LABEL_13:
    if ( v4 != v7 )
      goto LABEL_14;
LABEL_36:
    if ( a1 >= 0.0 )
      return 0xFFFFFFFFLL;
    else
      return 1;
  }
  if ( !(v5 | *(_QWORD *)&a2) )
  {
    result = 0;
    if ( !v8 )
      return result;
    goto LABEL_14;
  }
  if ( !v8 )
    goto LABEL_7;
  if ( v4 != v7 )
    goto LABEL_14;
LABEL_26:
  if ( v3 > v5 )
    goto LABEL_14;
  v10 = v3 == v5;
  if ( v3 == v5 && *(_QWORD *)&a1 > *(_QWORD *)&a2 )
    goto LABEL_14;
LABEL_31:
  if ( v3 < v5 )
    goto LABEL_36;
  v12 = !v10;
  result = 0;
  if ( !v12 && *(_QWORD *)&a1 < *(_QWORD *)&a2 )
    goto LABEL_36;
  return result;
}
