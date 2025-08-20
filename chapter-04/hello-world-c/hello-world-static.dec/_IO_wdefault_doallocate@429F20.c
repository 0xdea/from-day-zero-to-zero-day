__int64 __fastcall IO_wdefault_doallocate(
        __int64 a1,
        __int64 a2,
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
  __int64 v16; // x0
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  __int64 v25; // x2
  __int64 v26; // x20
  int v27; // w1
  __int64 v28; // x0
  __int64 result; // x0

  v16 = malloc(0x2000u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  if ( !v16 )
    return 0xFFFFFFFFLL;
  v25 = *(_QWORD *)(a1 + 160);
  v26 = v16;
  v27 = *(_DWORD *)(a1 + 116);
  v28 = *(_QWORD *)(v25 + 48);
  if ( v28 )
  {
    if ( (v27 & 8) == 0 )
    {
      free(v28, v17, v18, v19, v20, v21, v22, v23, v24);
      v25 = *(_QWORD *)(a1 + 160);
      v27 = *(_DWORD *)(a1 + 116);
    }
  }
  *(_QWORD *)(v25 + 48) = v26;
  *(_QWORD *)(v25 + 56) = v26 + 0x2000;
  result = 1;
  *(_DWORD *)(a1 + 116) = v27 & 0xFFFFFFF7;
  return result;
}
