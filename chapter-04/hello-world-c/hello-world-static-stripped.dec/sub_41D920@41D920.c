__int64 __fastcall sub_41D920(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // x20
  __int64 v7; // x22
  __int64 v8; // x3
  unsigned __int64 v9; // x0
  unsigned __int16 v10; // w3
  __int64 *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  _QWORD *v20; // x2
  __int64 result; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 (__fastcall *v24)(_QWORD *); // x1
  __int64 v25; // [xsp+10h] [xbp-10020h] BYREF
  _BYTE v26[1008]; // [xsp+20h] [xbp-10010h] BYREF
  __int64 v27; // [xsp+410h] [xbp-FC20h]
  _BYTE v28[24]; // [xsp+10010h] [xbp-20h] BYREF
  __int64 v29; // [xsp+10028h] [xbp-8h]

  v29 = qword_48DD60;
  v6 = ifunc_40DFD0(a1);
  v7 = ifunc_40DFD0(a2) + 1;
  v8 = v6 + v7 + 15;
  v9 = v8 & 0xFFFFFFFFFFFF0000LL;
  v10 = v8 & 0xFFF0;
  v11 = (__int64 *)&v28[-v9];
  if ( v28 != (_BYTE *)v11 )
  {
    do
      v27 = 0;
    while ( &v25 != v11 );
  }
  v25 = 0;
  if ( v10 >= 0x400uLL )
    v27 = 0;
  v12 = j_ifunc_40DC90(v26, a1, v6);
  j_ifunc_40DC90(v12 + v6, a2, v7);
  v20 = (_QWORD *)sub_41E330(v26, v13, v14, v15, v16, v17, v18, v19);
  *a3 = v20;
  result = 1;
  if ( v20 )
  {
    v22 = v20[4];
    a3[5] = v20[3];
    v23 = v20[5];
    a3[1] = 0;
    a3[6] = 0;
    a3[7] = v22;
    a3[8] = v23;
    v24 = (__int64 (__fastcall *)(_QWORD *))(v22 ^ qword_48DD68);
    a3[12] = 0;
    result = 0;
    if ( v24 )
    {
      result = v24(a3);
      a3[6] ^= qword_48DD68;
    }
  }
  if ( v29 != qword_48DD60 )
  {
    sub_412340();
    return qword_496898;
  }
  return result;
}
