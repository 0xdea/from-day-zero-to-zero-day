__int64 __fastcall sub_42A340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v14; // x22
  __int64 *v15; // x4
  __int64 v16; // x1
  __int64 v17; // x3
  __int64 v18; // x0
  int v19; // w0
  __int64 v20; // x3
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v24; // x23
  __int64 *v25; // x1
  __int64 v26; // x0

  v14 = a3;
  while ( 1 )
  {
    v15 = *(__int64 **)(a1 + 160);
    v16 = *v15;
    v17 = v15[1] - *v15;
    if ( v17 <= 0 )
      goto LABEL_9;
    v18 = v17 >> 2;
    if ( v17 >> 2 <= (unsigned __int64)v14 )
    {
      if ( v17 <= 80 )
      {
        v14 -= v18;
        v19 = v18 - 1;
        goto LABEL_6;
      }
      v24 = v14 - v18;
      v14 = v17 >> 2;
LABEL_16:
      a2 = wmempcpy(a2, v16, v14);
      v25 = *(__int64 **)(a1 + 160);
      v26 = *v25 + 4 * v14;
      v14 = v24;
      *v25 = v26;
      goto LABEL_9;
    }
    if ( v14 > 20 )
    {
      v24 = 0;
      goto LABEL_16;
    }
    if ( !v14 )
      return a3;
    v19 = v14 - 1;
    v14 = 0;
LABEL_6:
    v20 = 0;
    v21 = v19 + 1;
    do
    {
      *(_DWORD *)(a2 + 4 * v20) = *(_DWORD *)(v16 + 4 * v20);
      ++v20;
    }
    while ( v20 != v21 );
    v22 = 4 * v20;
    a2 += v22;
    *v15 = v16 + v22;
LABEL_9:
    if ( !v14 )
      return a3;
    if ( (unsigned int)sub_42A200(a1, a4, a5, a6, a7, a8, a9, a10, a11) == -1 )
      return a3 - v14;
  }
}
