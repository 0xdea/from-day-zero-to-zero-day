unsigned __int64 __fastcall IO_wfile_xsputn(
        _QWORD *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  unsigned __int64 v11; // x23
  _QWORD *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x0
  int v18; // w24
  unsigned __int64 v19; // x1
  unsigned __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  unsigned int *v25; // x2
  int v26; // t1
  __int64 v27; // x3
  unsigned __int64 v28; // x22
  __int64 v29; // x0
  unsigned int *v30; // x1

  v11 = 0;
  if ( !a3 )
    return v11;
  v15 = (_QWORD *)a1[20];
  v16 = *a1 & 0xA00LL;
  v17 = v15[4];
  if ( v16 == 2560 )
  {
    v19 = (v15[7] - v17) >> 2;
    if ( a3 > v19 )
    {
      v18 = 0;
    }
    else
    {
      v25 = &a2[a3];
      do
      {
        if ( v25 <= a2 )
        {
          v18 = 0;
          goto LABEL_14;
        }
        v26 = *--v25;
      }
      while ( v26 != 10 );
      v18 = 1;
      v19 = v25 - a2 + 1;
    }
  }
  else
  {
    v18 = 0;
    v19 = (v15[5] - v17) >> 2;
  }
  v20 = a3;
  if ( !v19 )
  {
LABEL_5:
    v11 = IO_wdefault_xsputn((__int64)a1, a2, v20, a4, a5, a6, a7, a8, a9, a10, a11) - v20 + a3;
    if ( !v18 )
      return v11;
    goto LABEL_6;
  }
LABEL_14:
  v27 = 0;
  if ( v19 > a3 )
    v28 = a3;
  else
    v28 = v19;
  if ( v28 > 0x14 )
  {
    v30 = a2;
    a2 += v28;
    v29 = wmempcpy(v17, v30, v28);
  }
  else
  {
    do
    {
      *(_DWORD *)(v17 + v27 * 4) = a2[v27];
      ++v27;
    }
    while ( v27 != (unsigned int)v28 );
    a2 = (unsigned int *)((char *)a2 + v27 * 4);
    v29 = v17 + v27 * 4;
  }
  v15[4] = v29;
  v20 = a3 - v28;
  v11 = a3;
  if ( v20 )
    goto LABEL_5;
  if ( !v18 )
    return v11;
LABEL_6:
  v21 = a1[20];
  v22 = *(_QWORD *)(v21 + 24);
  v23 = *(_QWORD *)(v21 + 32);
  if ( v23 != v22 )
  {
    IO_wdo_write((__int64)a1, v22, (v23 - v22) >> 2, a4, a5, a6, a7, a8, a9, a10, a11);
    return v11;
  }
  return v11;
}
