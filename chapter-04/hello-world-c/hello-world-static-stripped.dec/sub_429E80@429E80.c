__int64 __fastcall sub_429E80(__int64 result)
{
  _QWORD *v1; // x1
  __int64 v2; // x19
  double v3; // d0
  double v4; // d1
  double v5; // d2
  double v6; // d3
  double v7; // d4
  double v8; // d5
  double v9; // d6
  double v10; // d7
  int v11; // w2
  _QWORD *v12; // x21
  char *v13; // x20

  v1 = *(_QWORD **)(result + 160);
  if ( !v1[6] )
  {
    v2 = result;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v11 = *(_DWORD *)(result + 116);
      v12 = v1 + 27;
      v13 = (char *)v1 + 220;
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1[28] + 104LL))(result, *(_QWORD *)(v1[28] + 104LL));
      if ( (_DWORD)result != -1 )
        return result;
      v1 = *(_QWORD **)(v2 + 160);
      v11 = *(_DWORD *)(v2 + 116);
      v12 = v1 + 27;
      v13 = (char *)v1 + 220;
      result = v1[6];
      if ( result )
      {
        if ( (v11 & 8) == 0 )
        {
          result = sub_40C1A0(result, v3, v4, v5, v6, v7, v8, v9, v10);
          v1 = *(_QWORD **)(v2 + 160);
          v11 = *(_DWORD *)(v2 + 116);
        }
      }
    }
    v1[6] = v12;
    v1[7] = v13;
    *(_DWORD *)(v2 + 116) = v11 | 8;
  }
  return result;
}
