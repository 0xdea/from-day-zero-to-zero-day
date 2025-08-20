__int64 __fastcall sub_44A2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x4
  __int64 v8; // x3
  __int64 v9; // x6
  unsigned __int64 v10; // x5
  bool v11; // cf
  unsigned __int64 v12; // x3
  __int64 v13; // x6

  v4 = a3 + 8 * a4;
  v5 = a2 + 8 * a4;
  v6 = a1 + 8 * a4;
  v7 = -a4;
  v8 = 0;
  do
  {
    v9 = *(_QWORD *)(v4 + 8 * v7);
    v10 = *(_QWORD *)(v5 + 8 * v7);
    v11 = __CFADD__(v8, v9);
    v12 = v8 + v9;
    v13 = v11;
    *(_QWORD *)(v6 + 8 * v7) = v10 - v12;
    if ( v10 >= v12 )
      v8 = v13;
    else
      v8 = v13 + 1;
    ++v7;
  }
  while ( v7 );
  return v8;
}
