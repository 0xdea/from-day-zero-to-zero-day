__int64 __fastcall IO_wdefault_pbackfail(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 *v15; // x19
  int v16; // w23
  __int64 v19; // x20
  __int64 v20; // x1
  unsigned __int64 v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v27; // x20
  __int64 v28; // x25
  unsigned __int64 v29; // x19
  __int64 v30; // x0
  __int64 v31; // x23
  __int64 v32; // x20
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  unsigned __int64 v41; // x0
  __int64 *v42; // x19

  v15 = *(__int64 **)(a1 + 160);
  v16 = *(_DWORD *)a1;
  v19 = *v15;
  v20 = *(_DWORD *)a1 & 0x100;
  v21 = v15[2];
  if ( *v15 <= v21 )
  {
    if ( (_DWORD)v20 )
    {
      v27 = v15[1] - v21;
      v28 = v27 >> 2;
      v29 = 8 * (v27 >> 2);
      v30 = malloc(v29, a8, a9, a10, a11, a12, a13, a14, a15, v20, a3, a4, a5, a6, a7);
      v31 = v30;
      if ( v30 )
      {
        v32 = v30 + v27;
        v33 = wmemcpy(v32, v21, v28);
        free(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL), v33, v34, v35, v36, v37, v38, v39, v40);
        v41 = v31 + v29;
        v42 = *(__int64 **)(a1 + 160);
        *v42 = v32;
        v42[1] = v41;
        *v42 = v32 - 4;
        v42[2] = v31;
        v42[9] = v32;
        *(_DWORD *)(v32 - 4) = a2;
        return a2;
      }
      return 0xFFFFFFFFLL;
    }
    v24 = v15[8];
    if ( v24 )
    {
      v23 = *v15;
      v19 = v15[10];
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( (_DWORD)v20 )
  {
LABEL_11:
    *v15 = v19 - 4;
    *(_DWORD *)(v19 - 4) = a2;
    return a2;
  }
  v22 = *(_QWORD *)(a1 + 8);
  a3 = *(unsigned __int8 *)(v22 - 1);
  if ( (_DWORD)a3 == a2 )
  {
    *(_QWORD *)(a1 + 8) = v22 - 1;
    return a2;
  }
  v20 = v15[8];
  if ( !v20 )
  {
LABEL_15:
    v24 = malloc(0x200u, a8, a9, a10, a11, a12, a13, a14, a15, v20, a3, a4, a5, a6, a7);
    if ( v24 )
    {
      v23 = v19;
      v19 = v24 + 512;
      v15[8] = v24;
      v15[9] = v24 + 512;
      v15[10] = v24 + 512;
      goto LABEL_10;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned int)save_for_wbackup(a1, *v15, a8, a9, a10, a11, a12, a13, a14, a15) )
  {
    v15 = *(__int64 **)(a1 + 160);
    v16 = *(_DWORD *)a1;
    v23 = *v15;
    v24 = v15[8];
    v19 = v15[10];
LABEL_10:
    v25 = v15[1];
    *(_DWORD *)a1 = v16 | 0x100;
    *v15 = v19;
    v15[1] = v19;
    v15[2] = v24;
    v15[8] = v23;
    v15[10] = v25;
    goto LABEL_11;
  }
  return 0xFFFFFFFFLL;
}
