unsigned __int64 __fastcall IO_file_xsgetn(
        int *a1,
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
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x20
  __int64 v16; // x3
  unsigned __int64 v17; // x0
  __int64 v18; // x20
  unsigned __int64 v19; // x2
  __int64 v20; // x0
  bool v21; // zf
  __int64 v22; // x1
  unsigned __int64 result; // x0
  int v24; // w1
  int v25; // w0
  __int64 v26; // x0
  unsigned __int64 v27; // [xsp+48h] [xbp+48h]

  if ( !*((_QWORD *)a1 + 7) )
  {
    v26 = *((_QWORD *)a1 + 9);
    if ( v26 )
    {
      free(v26);
      *a1 &= ~0x100u;
    }
    IO_doallocbuf(a1);
  }
  v14 = a3;
  if ( !a3 )
    return a3;
  while ( 2 )
  {
    v15 = *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1);
    if ( v15 >= v14 )
    {
LABEL_24:
      j_memcpy(a2);
      *((_QWORD *)a1 + 1) += v14;
      return a3;
    }
    while ( !v15 )
    {
      if ( (*a1 & 0x100) == 0 )
        goto LABEL_6;
LABEL_23:
      IO_switch_to_main_get_area(a1);
      v15 = *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1);
      if ( v15 >= v14 )
        goto LABEL_24;
    }
    a2 = j_memcpy(a2) + v15;
    v14 -= v15;
    v25 = *a1;
    *((_QWORD *)a1 + 1) += v15;
    if ( (v25 & 0x100) != 0 )
      goto LABEL_23;
LABEL_6:
    v16 = *((_QWORD *)a1 + 7);
    if ( v16 )
    {
      v17 = *((_QWORD *)a1 + 8) - v16;
      if ( v17 > v14 )
      {
        if ( (unsigned int)_underflow(a1) == -1 )
          return a3 - v14;
        continue;
      }
      if ( v17 > 0x7F )
      {
        *((_QWORD *)a1 + 1) = v16;
        *((_QWORD *)a1 + 2) = v16;
        v18 = *((_QWORD *)a1 + 27);
        *((_QWORD *)a1 + 3) = v16;
        *((_QWORD *)a1 + 4) = v16;
        *((_QWORD *)a1 + 5) = v16;
        *((_QWORD *)a1 + 6) = v16;
        v19 = v14 - v14 % v17;
        if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) <= 0x92F )
          goto LABEL_10;
LABEL_17:
        v27 = v19;
        IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
        v20 = (*(__int64 (__fastcall **)(int *, unsigned __int64, unsigned __int64))(v18 + 112))(a1, a2, v27);
        v21 = v20 == 0;
        if ( v20 <= 0 )
          goto LABEL_18;
LABEL_11:
        v22 = *((_QWORD *)a1 + 18);
        a2 += v20;
        v14 -= v20;
        if ( v22 != -1 )
          *((_QWORD *)a1 + 18) = v22 + v20;
        if ( !v14 )
          return a3;
        continue;
      }
    }
    break;
  }
  v18 = *((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 1) = v16;
  *((_QWORD *)a1 + 2) = v16;
  v19 = v14;
  *((_QWORD *)a1 + 3) = v16;
  *((_QWORD *)a1 + 4) = v16;
  *((_QWORD *)a1 + 5) = v16;
  *((_QWORD *)a1 + 6) = v16;
  if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) > 0x92F )
    goto LABEL_17;
LABEL_10:
  v20 = (*(__int64 (__fastcall **)(int *, unsigned __int64, unsigned __int64))(v18 + 112))(a1, a2, v19);
  v21 = v20 == 0;
  if ( v20 > 0 )
    goto LABEL_11;
LABEL_18:
  result = a3 - v14;
  v24 = *a1 | 0x20;
  if ( v21 )
    v24 = *a1 | 0x10;
  *a1 = v24;
  return result;
}
