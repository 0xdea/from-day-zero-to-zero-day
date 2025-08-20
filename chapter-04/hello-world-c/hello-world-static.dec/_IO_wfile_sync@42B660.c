__int64 __fastcall IO_wfile_sync(
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
  _QWORD *v9; // x3
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x22
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  __int64 v23; // x20
  __int64 v24; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  _QWORD *v28; // x1
  __int64 v29; // x4

  v9 = *(_QWORD **)(a1 + 160);
  v11 = v9[3];
  v12 = v9[4];
  if ( v12 <= v11 )
  {
    if ( *v9 == v9[1] )
      goto LABEL_10;
    v14 = *(_QWORD *)(a1 + 152);
    if ( (int)_libio_codecvt_encoding(v14, v11) > 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( *(int *)(a1 + 192) > 0 )
  {
    if ( !(unsigned int)IO_wdo_write(a1, v11, (__int64)(v12 - v11) >> 2, a2, a3, a4, a5, a6, a7, a8, a9) )
      goto LABEL_4;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)IO_new_do_write(
                       a1,
                       *(_QWORD *)(a1 + 32),
                       *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( **(_QWORD **)(a1 + 160) == *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 144) = -1;
    return 0;
  }
  v14 = *(_QWORD *)(a1 + 152);
  if ( (int)_libio_codecvt_encoding(v14, v13) > 0 )
    goto LABEL_6;
LABEL_13:
  v27 = *(_QWORD *)(a1 + 16);
  v26 = *(_QWORD *)(a1 + 24);
  v28 = *(_QWORD **)(a1 + 160);
  v29 = *v28 - v28[2];
  v28[11] = v28[12];
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 24) + (int)_libio_codecvt_length(v14, v28 + 11, v26, v27, v29 >> 2);
LABEL_6:
  v23 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v23 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(v15, v16, v17, v18, v19, v20, v21, v22);
  if ( (*(__int64 (__fastcall **)(__int64))(v23 + 128))(a1) != -1 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) = **(_QWORD **)(a1 + 160);
    *(_QWORD *)(a1 + 16) = v24;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) == 29 )
    goto LABEL_10;
  return 0xFFFFFFFFLL;
}
