__int64 __fastcall IO_wsetb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x5
  int v13; // w4
  __int64 v16; // x0
  __int64 result; // x0
  int v20; // w4

  v12 = *(_QWORD *)(a1 + 160);
  v13 = *(_DWORD *)(a1 + 116);
  v16 = *(_QWORD *)(v12 + 48);
  if ( v16 && (v13 & 8) == 0 )
  {
    free(v16, a5, a6, a7, a8, a9, a10, a11, a12);
    v12 = *(_QWORD *)(a1 + 160);
    v13 = *(_DWORD *)(a1 + 116);
  }
  result = v13 & 0xFFFFFFF7;
  v20 = v13 | 8;
  *(_QWORD *)(v12 + 48) = a2;
  *(_QWORD *)(v12 + 56) = a3;
  if ( a4 )
    v20 = result;
  *(_DWORD *)(a1 + 116) = v20;
  return result;
}
