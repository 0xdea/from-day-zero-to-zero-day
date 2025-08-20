unsigned __int64 __fastcall IO_default_xsgetn(
        __int64 a1,
        unsigned __int64 a2,
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
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x3
  unsigned __int64 v16; // x23
  unsigned __int64 v17; // x3
  unsigned __int64 v18; // x19
  unsigned __int64 v19; // x3
  unsigned __int64 v20; // x3
  __int64 v21; // x3

  v12 = a3;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 16);
  v16 = a3;
  if ( v13 >= v14 )
    goto LABEL_7;
  v17 = v14 - v13;
  if ( v17 > a3 )
    v18 = a3;
  else
    v18 = v17;
  if ( v18 > 0x14 )
    goto LABEL_14;
LABEL_6:
  if ( v18 )
  {
    v21 = 0;
    do
    {
      *(_BYTE *)(a2 + v21) = *(_BYTE *)(v13 + v21);
      ++v21;
    }
    while ( (unsigned int)v18 != v21 );
    a2 += (unsigned int)v18;
    v12 -= v18;
    *(_QWORD *)(a1 + 8) = v13 + (unsigned int)v18;
  }
LABEL_7:
  while ( v12 )
  {
    do
    {
      if ( (unsigned int)_underflow(a1, a4, a5, a6, a7, a8, a9, a10, a11) == -1 )
      {
        v16 -= v12;
        return v16;
      }
      v13 = *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(a1 + 16);
    }
    while ( v19 <= v13 );
    v20 = v19 - v13;
    if ( v20 > v12 )
      v18 = v12;
    else
      v18 = v20;
    if ( v18 <= 0x14 )
      goto LABEL_6;
LABEL_14:
    v12 -= v18;
    a2 = j_memcpy(a2) + v18;
    *(_QWORD *)(a1 + 8) += v18;
  }
  return v16;
}
