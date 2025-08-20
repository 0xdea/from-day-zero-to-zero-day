__int64 __fastcall sub_43ADA0(unsigned __int64 *a1)
{
  _QWORD *v2; // x0
  unsigned __int8 v3; // w0
  double v4; // d0
  double v5; // d1
  double v6; // d2
  double v7; // d3
  double v8; // d4
  double v9; // d5
  double v10; // d6
  double v11; // d7
  unsigned int v12; // w1
  unsigned __int64 v13; // x0
  __int64 v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2

  v2 = (_QWORD *)*a1;
  if ( v2 )
  {
    v3 = sub_43ADA0(v2 + 1);
    v12 = v3;
    if ( (v3 & 1) == 0 )
      return v12;
    v13 = *a1;
    v14 = *(_QWORD *)*a1;
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = 16 * v15++;
        if ( *(_QWORD *)(v13 + 24 + v16) )
          return 0;
      }
      while ( v15 != v14 );
    }
    sub_40C1A0(v13, v4, v5, v6, v7, v8, v9, v10, v11);
    *a1 = 0;
  }
  return 1;
}
