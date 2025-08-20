__int64 __fastcall IO_new_file_xsputn(
        _QWORD *a1,
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
  __int64 v13; // x23
  __int64 v14; // x2
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x2
  unsigned __int64 v17; // x2
  __int64 v18; // x24
  unsigned __int64 v19; // x20
  unsigned __int64 v20; // x21
  unsigned __int64 v22; // x3
  __int64 v23; // x20
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x20
  int v34; // t1
  unsigned __int64 v35; // x0
  unsigned __int64 v36; // x3
  unsigned __int64 v37; // x19

  if ( !a3 )
    return 0;
  v13 = a2;
  v14 = *a1 & 0xA00LL;
  v15 = a1[5];
  if ( v14 == 2560 )
  {
    v22 = a2 + a3;
    v17 = a1[8] - v15;
    if ( a3 <= v17 )
    {
      while ( a2 < v22 )
      {
        v34 = *(unsigned __int8 *)--v22;
        if ( v34 == 10 )
        {
          v36 = v22 - a2;
          v17 = v36 + 1;
          if ( v36 == -1 )
          {
            v20 = a3;
            v18 = 1;
            goto LABEL_10;
          }
          v18 = 1;
          goto LABEL_6;
        }
      }
      goto LABEL_5;
    }
    v18 = 0;
    if ( v17 )
      goto LABEL_6;
LABEL_14:
    v20 = a3;
    goto LABEL_15;
  }
  v16 = a1[6];
  if ( v16 <= v15 )
    goto LABEL_14;
  v17 = v16 - v15;
LABEL_5:
  v18 = 0;
LABEL_6:
  if ( a3 > v17 )
    v19 = v17;
  else
    v19 = a3;
  v13 = a2 + v19;
  v20 = a3 - v19;
  a1[5] = j_memcpy(v15) + v19;
LABEL_10:
  if ( !(v20 + v18) )
    return a3 - v20;
LABEL_15:
  v23 = a1[27];
  if ( (unsigned __int64)(v23 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))(v23 + 24))(a1, 0xFFFFFFFFLL) == -1 )
  {
    v37 = a3 - v20;
    if ( v20 )
      return v37;
    else
      return -1;
  }
  else
  {
    v32 = a1[8] - a1[7];
    if ( v32 <= 0x7F )
    {
      if ( !v20 )
        return a3;
      v33 = v20;
    }
    else
    {
      v33 = v20 - v20 % v32;
      if ( v20 == v20 % v32 )
        goto LABEL_20;
    }
    v35 = new_do_write((__int64)a1, v13, v33, v24, v25, v26, v27, v28, v29, v30, v31);
    if ( v35 >= v33 )
    {
      v20 -= v35;
LABEL_20:
      if ( v20 )
        return IO_default_xsputn(a1, v13 + v33, v20) - v20 + a3;
      return a3;
    }
    return a3 - v20 + v35;
  }
}
