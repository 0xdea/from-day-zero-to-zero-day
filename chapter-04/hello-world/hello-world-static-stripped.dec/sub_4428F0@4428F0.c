__int64 __fastcall sub_4428F0(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  __int64 v16; // x1
  _QWORD *v17; // x2
  __int64 v18; // x3
  __int64 v19; // x3
  __int64 v20; // x1
  __int64 result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_4967B8) )
    sub_406F40(dword_4967B8, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  v16 = a1 + 192;
  qword_4967C0 = a1 + 192;
  __dmb(0xBu);
  v18 = *(_QWORD *)(a1 + 192);
  v17 = *(_QWORD **)(a1 + 200);
  *(_QWORD *)(v18 + 8) = v17;
  *v17 = v18;
  __dmb(0xBu);
  LOBYTE(v17) = *(_BYTE *)(a1 + 1042);
  qword_4967C0 = 0;
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    sub_412B44((void **)(a1 + 1856), 0, v8, v9, v10, v11, v12, v13, v14, v15);
    result = _aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8);
    if ( (int)result <= 1 )
      return result;
    return sub_407040(dword_4967B8, v22, v23, v24, v25, v26, v27);
  }
  qword_4967C0 = v16 | 1;
  __dmb(0xBu);
  v19 = qword_4967D0;
  *(_QWORD *)(a1 + 192) = qword_4967D0;
  *(_QWORD *)(a1 + 200) = &qword_4967D0;
  *(_QWORD *)(v19 + 8) = v16;
  __dmb(0xBu);
  qword_4967D0 = a1 + 192;
  __dmb(0xBu);
  v20 = *(_QWORD *)(a1 + 1176);
  qword_4967C0 = 0;
  qword_4967C8 += v20;
  if ( qword_4967C8 > (unsigned __int64)qword_491938 )
    sub_442814(qword_491938, v8, v9, v10, v11, v12, v13, v14, v15);
  result = _aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8);
  if ( (int)result > 1 )
    return sub_407040(dword_4967B8, v22, v23, v24, v25, v26, v27);
  return result;
}
