__int64 __fastcall save_for_wbackup(
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
  __int64 v13; // x25
  __int64 v14; // x2
  __int64 v15; // x0
  __int64 v16; // x4
  __int64 v17; // x24
  __int64 v19; // x1
  __int64 v20; // x19
  unsigned __int64 v21; // x22
  __int64 v22; // x4
  __int64 v23; // x23
  __int64 v24; // x26
  __int64 v25; // x0
  __int64 v27; // x0
  __int64 v28; // x26
  __int64 v29; // x22
  __int64 v30; // x1
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  _QWORD *v39; // x4
  __int64 v40; // x2
  __int64 v41; // x0

  v10 = *(_QWORD **)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 96);
  v13 = v10[2];
  v14 = v11;
  v15 = v10[8];
  v16 = a2 - v13;
  v17 = v10[10];
  v19 = (a2 - v13) >> 2;
  v20 = v19;
  v21 = (v17 - v15) >> 2;
  if ( !v11 )
  {
    v24 = v17 - v15;
    v25 = v10[10];
    if ( (v16 & 0x8000000000000000LL) == 0 )
    {
      v10[9] = v17;
      return 0;
    }
LABEL_17:
    wmemmove(v25, v17 + 4 * v20, -v20);
    wmemcpy(
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 64LL) + 4 * (v21 - v20),
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL),
      (a2 - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL)) >> 2);
    v39 = *(_QWORD **)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 96);
    v29 = v39[8] + v24;
    v19 = (a2 - v39[2]) >> 2;
    goto LABEL_15;
  }
  do
  {
    v22 = *(int *)(v14 + 16);
    v14 = *(_QWORD *)v14;
    if ( v20 > v22 )
      v20 = v22;
  }
  while ( v14 );
  v23 = v19 - v20;
  if ( v19 - v20 <= v21 )
  {
    v21 -= v23;
    v24 = 4 * v21;
    v25 = v15 + 4 * v21;
    if ( (v20 & 0x8000000000000000LL) == 0 )
    {
      if ( !v23 )
      {
        v10[9] = v25;
        goto LABEL_9;
      }
      wmemcpy(v25, v13 + 4 * v20, v23);
      v39 = *(_QWORD **)(a1 + 160);
      v11 = *(_QWORD *)(a1 + 96);
      v29 = v39[8] + v24;
      v19 = (a2 - v39[2]) >> 2;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  v27 = malloc(4 * (v23 + 100), a3, a4, a5, a6, a7, a8, a9, a10, v19, 0, v11, (void *)v22, v10, (void *)(v17 - v15));
  v28 = v27;
  if ( v27 )
  {
    v29 = v27 + 400;
    v30 = 4 * v20;
    if ( v20 < 0 )
    {
      v41 = wmempcpy(v27 + 400, v17 + v30, -v20);
      wmempcpy(v41, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL), (a2 - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL)) >> 2);
    }
    else
    {
      v31 = wmemcpy(v27 + 400, v13 + v30, v23);
    }
    free(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 64LL), v31, v32, v33, v34, v35, v36, v37, v38);
    v39 = *(_QWORD **)(a1 + 160);
    v11 = *(_QWORD *)(a1 + 96);
    v40 = v39[2];
    v39[10] = v28 + 4 * (v23 + 100);
    v39[8] = v28;
    v19 = (a2 - v40) >> 2;
LABEL_15:
    for ( v39[9] = v29; v11; v11 = *(_QWORD *)v11 )
LABEL_9:
      *(_DWORD *)(v11 + 16) -= v19;
    return 0;
  }
  return 0xFFFFFFFFLL;
}
