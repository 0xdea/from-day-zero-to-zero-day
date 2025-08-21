__int64 __fastcall sub_42B400(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned int v11; // w0
  _QWORD *v12; // x3
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x6
  __int64 v17; // x2
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x7
  unsigned int *v21; // x4
  _QWORD *v22; // x0
  double v25; // d0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  __int64 v33; // x0
  unsigned __int64 StatusReg; // x2
  _BOOL4 v35; // w0

  v11 = *(_DWORD *)a1;
  if ( (v11 & 8) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)a1 = v11 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    return 0xFFFFFFFFLL;
  }
  v12 = *(_QWORD **)(a1 + 160);
  v14 = v12[3];
  if ( (v11 & 0x800) != 0 )
  {
    if ( v14 )
      goto LABEL_8;
  }
  else if ( v14 )
  {
    v15 = *v12;
    v16 = v12[7];
    if ( *v12 == v16 )
    {
      v15 = v12[6];
      v17 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 16) = v17;
      v19 = v15;
      *v12 = v15;
      v12[1] = v15;
      v18 = v17;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_QWORD *)(a1 + 16);
      v19 = v12[1];
    }
    goto LABEL_6;
  }
  sub_429E80(a1);
  sub_42A030((unsigned int *)a1, v25, v26, v27, v28, v29, v30, v31, v32);
  v12 = *(_QWORD **)(a1 + 160);
  v33 = *(_QWORD *)(a1 + 32);
  v15 = v12[6];
  *v12 = v15;
  v12[1] = v15;
  v12[2] = v15;
  if ( v33 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = v15;
    v16 = v12[7];
  }
  else
  {
    sub_404C44((int *)a1, a3, a4, a5, a6, a7, a8, a9, a10);
    v12 = *(_QWORD **)(a1 + 160);
    v17 = *(_QWORD *)(a1 + 56);
    v15 = *v12;
    v19 = v12[1];
    v18 = v17;
    v16 = v12[7];
    *(_QWORD *)(a1 + 16) = v17;
  }
  v11 = *(_DWORD *)a1;
LABEL_6:
  v20 = *(_QWORD *)(a1 + 64);
  *v12 = v19;
  v12[2] = v19;
  v12[3] = v15;
  v12[4] = v15;
  v12[5] = v16;
  *(_DWORD *)a1 = v11 | 0x800;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 32) = v17;
  *(_QWORD *)(a1 + 40) = v17;
  *(_QWORD *)(a1 + 48) = v20;
  if ( (v11 & 0x202) != 0 )
    v12[5] = v15;
LABEL_8:
  if ( a2 != -1 )
  {
    v21 = (unsigned int *)v12[4];
    v22 = v12;
    if ( v21 == (unsigned int *)v12[7] )
    {
      if ( *(int *)(a1 + 192) <= 0 )
        v35 = sub_402270(
                a1,
                *(_QWORD *)(a1 + 32),
                *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10) == -1;
      else
        v35 = sub_42A900(a1, v12[3], ((__int64)v21 - v12[3]) >> 2, a3, a4, a5, a6, a7, a8, a9, a10) == -1;
      if ( v35 )
        return 0xFFFFFFFFLL;
      v22 = *(_QWORD **)(a1 + 160);
      v21 = (unsigned int *)v22[4];
    }
    v22[4] = v21 + 1;
    *v21 = a2;
    if ( (*(_DWORD *)a1 & 2) == 0 && ((*(_DWORD *)a1 & 0x200LL) == 0 || a2 != 10) )
      return a2;
    if ( *(int *)(a1 + 192) <= 0 )
    {
      if ( (unsigned int)sub_402270(
                           a1,
                           *(_QWORD *)(a1 + 32),
                           *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10) == -1 )
        return 0xFFFFFFFFLL;
    }
    else if ( (unsigned int)sub_42A900(a1, v22[3], ((__int64)v21 - v22[3] + 4) >> 2, a3, a4, a5, a6, a7, a8, a9, a10) == -1 )
    {
      return 0xFFFFFFFFLL;
    }
    return a2;
  }
  if ( *(int *)(a1 + 192) <= 0 )
    return sub_402270(
             a1,
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return sub_42A900(a1, v12[3], (__int64)(v12[4] - v12[3]) >> 2, a3, a4, a5, a6, a7, a8, a9, a10);
}
