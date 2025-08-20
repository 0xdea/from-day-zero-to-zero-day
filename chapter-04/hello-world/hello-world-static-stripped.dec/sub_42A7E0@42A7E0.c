__int64 __fastcall sub_42A7E0(__int64 a1, char a2)
{
  __int64 v3; // x21
  unsigned __int8 v4; // w20
  int v5; // w0
  __int64 v6; // x0
  int v7; // w0
  _QWORD *v8; // x2
  __int64 v9; // x1
  __int64 result; // x0

  v3 = *(_QWORD *)(a1 + 152);
  v4 = a2 ^ 1;
  v5 = ((__int64 (__fastcall *)(__int64, _QWORD))loc_42C400)(v3, 0);
  if ( ((v5 > 0) & v4) != 0 )
  {
    v8 = *(_QWORD **)(a1 + 160);
    v9 = v8[1] + 4 * ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 24)) / v5);
    v8[1] = v9;
LABEL_5:
    result = 0;
    *v8 = v9;
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(v6 + 96) = *(_QWORD *)(v6 + 88);
      v7 = sub_42C310(v3, v6 + 88);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        v8 = *(_QWORD **)(a1 + 160);
        v9 = v8[1];
        goto LABEL_5;
      }
    }
    result = 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x20u;
  }
  return result;
}
