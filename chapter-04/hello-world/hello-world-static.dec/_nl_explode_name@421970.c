__int64 __fastcall nl_explode_name(
        unsigned __int8 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int8 **a4,
        _QWORD *a5,
        _QWORD *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14)
{
  unsigned int v14; // w19
  int v16; // w6
  unsigned __int8 *i; // x7
  unsigned __int8 *v20; // x1
  int v22; // w1
  int v25; // t1
  unsigned int v26; // w0
  unsigned __int8 *v28; // x0
  unsigned __int8 *v29; // x20
  unsigned __int8 *v30; // x22
  unsigned __int64 v31; // x6
  unsigned int v32; // t1
  _DWORD *v33; // x0
  __int64 v34; // x26
  int v35; // w0
  double v36; // d0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  unsigned __int8 **v45; // [xsp+58h] [xbp+58h]

  v14 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a2 = a1;
  v16 = *a1;
  if ( v16 == 95 || v16 == 0 )
  {
LABEL_18:
    if ( *a4 && !**a4 )
      v14 &= ~4u;
    if ( *a5 && !*(_BYTE *)*a5 )
      v14 &= ~2u;
    return v14;
  }
  for ( i = a1; ; ++i )
  {
    if ( v16 == 64 || v16 == 46 )
    {
      if ( a1 != i )
        goto LABEL_14;
LABEL_25:
      v14 = 0;
      goto LABEL_18;
    }
    v16 = i[1];
    v20 = i + 1;
    if ( v16 == 95 || v16 == 0 )
      break;
  }
  if ( a1 == v20 )
    goto LABEL_25;
  if ( v16 != 95 )
  {
    ++i;
LABEL_14:
    v22 = *i;
    v14 = 0;
    if ( v22 == 46 )
      goto LABEL_38;
    goto LABEL_15;
  }
  *v20 = 0;
  i += 2;
  *a4 = i;
  v22 = v20[1];
  if ( v22 != 46 && (v22 & 0xFFFFFFBF) != 0 )
  {
    do
    {
      v25 = *++i;
      v22 = v25;
      v26 = v25 & 0xFFFFFFBF;
    }
    while ( v25 != 46 && v26 != 0 );
  }
  v14 = 4;
  if ( v22 != 46 )
    goto LABEL_15;
LABEL_38:
  *i = 0;
  v28 = i + 1;
  *a5 = i + 1;
  v22 = i[1];
  if ( (v22 & 0xBF) == 0 )
    goto LABEL_46;
  v29 = i + 1;
  do
  {
    v30 = v29;
    v32 = *++v29;
    v31 = v32;
  }
  while ( (v32 & 0xBF) != 0 );
  if ( v28 == v29 )
  {
LABEL_46:
    v14 |= 2u;
    ++i;
LABEL_15:
    if ( v22 == 64 )
    {
      *i = 0;
      *a3 = i + 1;
      if ( i[1] )
        v14 |= 8u;
    }
    goto LABEL_18;
  }
  v45 = a4;
  v33 = nl_normalize_codeset(
          v28,
          v30 - i,
          191,
          (__int64)a4,
          (void *)0xBF,
          a6,
          (void *)v31,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14);
  v34 = (__int64)v33;
  *a6 = v33;
  if ( v33 )
  {
    v35 = strcmp(*a5, v33);
    a4 = v45;
    if ( v35 )
    {
      v14 |= 3u;
      v22 = v30[1];
      i = v29;
    }
    else
    {
      free(v34, v36, v37, v38, v39, v40, v41, v42, v43);
      v14 |= 2u;
      i = v29;
      a4 = v45;
      v22 = v30[1];
    }
    goto LABEL_15;
  }
  return (unsigned int)-1;
}
