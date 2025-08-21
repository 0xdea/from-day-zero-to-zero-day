unsigned __int64 __fastcall sub_452700(unsigned __int64 a1)
{
  unsigned __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  unsigned __int64 v5; // x19
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  unsigned __int64 v15[2]; // [xsp+20h] [xbp+20h] BYREF

  v1 = sub_451AF0((__int64)&unk_496D08, a1);
  v5 = v1;
  if ( !v1 )
  {
    if ( (byte_496D38 & 1) == 0 )
      sub_4002C0((unsigned __int8)byte_496D38, v2, v3, v4);
    return v5;
  }
  sub_452660(v1, v15);
  if ( v15[0] == v15[1] )
  {
    if ( (*(_DWORD *)(v5 + 32) & 1) == 0 )
      return v5;
  }
  else
  {
    sub_451AF0((__int64)&qword_496D20, v15[0]);
    if ( (*(_DWORD *)(v5 + 32) & 1) == 0 )
      return v5;
  }
  sub_40C1A0(*(_QWORD *)(v5 + 24), v6, v7, v8, v9, v10, v11, v12, v13);
  return v5;
}
