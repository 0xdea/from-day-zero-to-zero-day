unsigned __int64 __fastcall sub_407ED0(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  unsigned __int64 result; // x0
  __int64 v18; // x1

  if ( *(_QWORD **)(a1 + 96) == a4 )
  {
    result = a3 + a5;
    a2[1] = (a3 + a5) | 1;
    *(_QWORD *)(a1 + 96) = a2;
  }
  else
  {
    if ( (*(_QWORD *)((char *)a4 + a5 + 8) & 1) != 0 )
    {
      result = a3;
      a4[1] &= ~1uLL;
    }
    else
    {
      sub_407C70(a4, a6, a7, a8, a9, a10, a11, a12, a13);
      result = a3 + a5;
    }
    v18 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(v18 + 24) != a1 + 96 )
      sub_407374((__int64)"free(): corrupted unsorted chunks", a6, a7, a8, a9, a10, a11, a12, a13);
    a2[2] = v18;
    a2[3] = a1 + 96;
    if ( result > 0x3FF )
    {
      a2[4] = 0;
      a2[5] = 0;
    }
    *(_QWORD *)(a1 + 112) = a2;
    *(_QWORD *)(v18 + 24) = a2;
    a2[1] = result | 1;
    *(_QWORD *)((char *)a2 + result) = result;
  }
  return result;
}
