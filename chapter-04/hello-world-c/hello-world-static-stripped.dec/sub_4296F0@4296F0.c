__int64 __fastcall sub_4296F0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  _QWORD *v10; // x5
  __int64 v11; // x3
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x4
  __int64 v16; // x24
  __int64 v18; // x1
  __int64 v19; // x19
  unsigned __int64 v20; // x22
  __int64 v21; // x4
  __int64 v22; // x23
  __int64 v23; // x26
  __int64 v24; // x0
  __int64 v26; // x0
  __int64 v27; // x26
  __int64 v28; // x22
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  _QWORD *v37; // x4
  __int64 v38; // x2
  __int64 v39; // x0

  v10 = *(_QWORD **)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 96);
  v13 = v11;
  v14 = v10[8];
  v15 = a2 - v10[2];
  v16 = v10[10];
  v18 = v15 >> 2;
  v19 = v15 >> 2;
  v20 = (v16 - v14) >> 2;
  if ( !v11 )
  {
    v23 = v16 - v14;
    v24 = v10[10];
    if ( (v15 & 0x8000000000000000LL) == 0 )
    {
      v10[9] = v16;
      return 0;
    }
LABEL_17:
    sub_42FFA0(v24, v16 + 4 * v19, -v19);
    sub_42FF80(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 64LL) + 4 * (v20 - v19));
    v37 = *(_QWORD **)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 96);
    v28 = v37[8] + v23;
    v18 = (a2 - v37[2]) >> 2;
    goto LABEL_15;
  }
  do
  {
    v21 = *(int *)(v13 + 16);
    v13 = *(_QWORD *)v13;
    if ( v19 > v21 )
      v19 = v21;
  }
  while ( v13 );
  v22 = v18 - v19;
  if ( v18 - v19 <= v20 )
  {
    v20 -= v22;
    v23 = 4 * v20;
    v24 = v14 + 4 * v20;
    if ( (v19 & 0x8000000000000000LL) == 0 )
    {
      if ( !v22 )
      {
        v10[9] = v24;
        goto LABEL_9;
      }
      sub_42FF80(v24);
      v37 = *(_QWORD **)(a1 + 160);
      v11 = *(_QWORD *)(a1 + 96);
      v28 = v37[8] + v23;
      v18 = (a2 - v37[2]) >> 2;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  v26 = sub_40B890(4 * (v22 + 100), a3, a4, a5, a6, a7, a8, a9, a10, v18, 0, v11, (void *)v21, v10, (void *)(v16 - v14));
  v27 = v26;
  if ( v26 )
  {
    v28 = v26 + 400;
    if ( v19 < 0 )
    {
      v39 = wmempcpy(v26 + 400, v16 + 4 * v19, -v19);
      wmempcpy(v39, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL), (a2 - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL)) >> 2);
    }
    else
    {
      sub_42FF80(v26 + 400);
    }
    sub_40C1A0(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 64LL), v29, v30, v31, v32, v33, v34, v35, v36);
    v37 = *(_QWORD **)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 96);
    v38 = v37[2];
    v37[10] = v27 + 4 * (v22 + 100);
    v37[8] = v27;
    v18 = (a2 - v38) >> 2;
LABEL_15:
    for ( v37[9] = v28; v11; v11 = *(_QWORD *)v11 )
LABEL_9:
      *(_DWORD *)(v11 + 16) -= v18;
    return 0;
  }
  return 0xFFFFFFFFLL;
}
