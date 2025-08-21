_QWORD *__fastcall IO_unsave_wmarkers(
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
  _QWORD *result; // x0
  __int64 *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x2

  if ( *(_QWORD *)(a1 + 96) )
    *(_QWORD *)(a1 + 96) = 0;
  result = *(_QWORD **)(a1 + 72);
  if ( result )
  {
    v11 = *(__int64 **)(a1 + 160);
    v12 = v11[8];
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v13 = v11[2];
      v14 = v11[10];
      *(_DWORD *)a1 &= ~0x100u;
      v15 = v11[1];
      *v11 = v12;
      v11[1] = v14;
      v11[2] = v12;
      v12 = v13;
      v11[8] = v13;
      v11[10] = v15;
    }
    free(v12, a2, a3, a4, a5, a6, a7, a8, a9);
    result = *(_QWORD **)(a1 + 160);
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
  }
  return result;
}
