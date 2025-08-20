unsigned __int64 __fastcall sub_4312B0(_QWORD *a1, void (__fastcall *a2)(_QWORD))
{
  unsigned __int64 v4; // x0
  __int64 v5; // x0
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7

  v4 = a1[1];
  if ( v4 > 1 )
    sub_4312B0(v4 & 0xFFFFFFFFFFFFFFFELL);
  v5 = a1[2];
  if ( v5 )
    sub_4312B0(v5);
  a2(*a1);
  return sub_40C1A0((unsigned __int64)a1, v6, v7, v8, v9, v10, v11, v12, v13);
}
