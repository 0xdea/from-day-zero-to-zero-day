__int64 __fastcall sub_42B660(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v9; // x3
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x2
  __int64 v13; // x22
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  _QWORD *v27; // x1
  __int64 v28; // x4

  v9 = *(_QWORD **)(a1 + 160);
  v11 = v9[3];
  v12 = v9[4];
  if ( v12 <= v11 )
  {
    if ( *v9 == v9[1] )
      goto LABEL_10;
    v13 = *(_QWORD *)(a1 + 152);
    if ( (int)((__int64 (__fastcall *)(__int64))loc_42C400)(v13) > 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( *(int *)(a1 + 192) > 0 )
  {
    if ( !(unsigned int)sub_42A900(a1, v11, (__int64)(v12 - v11) >> 2, a2, a3, a4, a5, a6, a7, a8, a9) )
      goto LABEL_4;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)sub_402270(
                       a1,
                       *(_QWORD *)(a1 + 32),
                       *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( **(_QWORD **)(a1 + 160) == *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 144) = -1;
    return 0;
  }
  v13 = *(_QWORD *)(a1 + 152);
  if ( (int)((__int64 (__fastcall *)(__int64))loc_42C400)(v13) > 0 )
    goto LABEL_6;
LABEL_13:
  v26 = *(_QWORD *)(a1 + 16);
  v25 = *(_QWORD *)(a1 + 24);
  v27 = *(_QWORD **)(a1 + 160);
  v28 = *v27 - v27[2];
  v27[11] = v27[12];
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24) + (int)sub_42C430(v13, v27 + 11, v25, v26, v28 >> 2);
LABEL_6:
  v22 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v22 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v14, v15, v16, v17, v18, v19, v20, v21);
  if ( (*(__int64 (__fastcall **)(__int64))(v22 + 128))(a1) != -1 )
  {
    v23 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) = **(_QWORD **)(a1 + 160);
    *(_QWORD *)(a1 + 16) = v23;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) == 29 )
    goto LABEL_10;
  return 0xFFFFFFFFLL;
}
