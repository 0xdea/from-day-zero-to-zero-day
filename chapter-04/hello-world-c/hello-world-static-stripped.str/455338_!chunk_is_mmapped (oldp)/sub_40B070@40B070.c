char *__fastcall sub_40B070(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        long double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x4
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x2
  __int64 v18; // x26
  unsigned __int64 v19; // x5
  unsigned __int64 v20; // x6
  _BYTE *v23; // x24
  __int64 v24; // x21
  __int64 v25; // x25
  __int64 v26; // x21
  __int64 v28; // x0
  __int64 v29; // x25
  unsigned __int64 v30; // x0
  __int64 v31; // x20
  unsigned __int64 v32; // x2
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  unsigned __int64 v41; // x1
  __int64 v42; // x0
  char v43; // w1
  __int64 v50; // x2
  __int64 v58; // x3
  __int64 v62; // x0
  _QWORD *v63; // x0
  unsigned __int64 v64; // x1
  unsigned __int64 v65; // x2
  __int64 v66; // x3
  long double v67; // q0
  double v68; // d1
  double v69; // d2
  double v70; // d3
  double v71; // d4
  double v72; // d5
  double v73; // d6
  double v74; // d7
  unsigned __int64 v75; // [xsp+68h] [xbp+68h]

  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 <= 0x10
    || (v14 = a1[273], v16 = a3, v14 <= a3)
    || (v17 = v13 & 0xFFFFFFFFFFFFFFF8LL, (v13 & 0xFFFFFFFFFFFFFFF8LL) != v16) )
  {
    sub_407374((__int64)"realloc(): invalid old size", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
  }
  if ( (v13 & 2) != 0 )
  {
    a5 = sub_41F250(
           "!chunk_is_mmapped (oldp)",
           "malloc.c",
           4933,
           "_int_realloc",
           *(double *)&a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
    goto LABEL_38;
  }
  v18 = a2 + v17;
  v19 = *(_QWORD *)(a2 + v17 + 8);
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 <= (v19 & 0xFFFFFFFFFFFFFFF8LL) || v19 <= 0x10 )
    sub_407374((__int64)"realloc(): invalid next size", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
  v23 = (_BYTE *)&unk_496000;
  if ( v17 >= a4 )
  {
LABEL_11:
    v24 = v16 - a4;
    v25 = 4LL * (a1 != (_QWORD *)&unk_490670);
    if ( v16 - a4 > 0x1F )
    {
      v41 = a2 + a4;
      if ( (v23[1697] & 1) != 0 )
        v41 = sub_411CC0(a2 + a4, v24);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 7LL | v25 | a4;
      *(_QWORD *)(v41 + 8) = v24 | v25 | 1;
      *(_QWORD *)(v41 + v24 + 8) |= 1uLL;
      sub_4094D4((__int64)a1, v41, 1, *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 8) & 7LL | v25 | v16;
      *(_QWORD *)(a2 + v16 + 8) |= 1uLL;
    }
    v26 = a2 + 16;
    if ( (v23[1697] & 1) == 0 )
      return (char *)v26;
    goto LABEL_33;
  }
  if ( a1[12] == v18 )
  {
    v17 += v20;
    if ( a4 + 32 <= v17 )
    {
      v42 = v13 & 7 | (4LL * (a1 != (_QWORD *)&unk_490670));
      v43 = byte_4966A1;
      *(_QWORD *)(a2 + 8) = v42 | a4;
      a1[12] = a2 + a4;
      *(_QWORD *)(a2 + a4 + 8) = (v17 - a4) | 1;
      v26 = a2 + 16;
      if ( (v43 & 1) != 0 )
      {
LABEL_33:
        _X0 = a2;
        __asm { LDG             X0, [X0] }
        v50 = _X0;
        _X0 = v26;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return (char *)sub_411CC0(_X0, (*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
      return (char *)v26;
    }
  }
  else if ( (*(_QWORD *)(v18 + v20 + 8) & 1) == 0 && a4 <= v16 + v20 )
  {
    v16 += v20;
    v23 = (_BYTE *)&unk_496000;
    sub_407C70((_QWORD *)(a2 + v17), *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
    goto LABEL_11;
  }
  v28 = sub_40A0A0(a1, a4 - 15, v17, a4, a5, a6, a7, a8, a9, a10, a11, a12, v14, v19);
  v26 = v28;
  if ( !v28 )
    return (char *)v26;
  v23 = &unk_496000;
  v29 = v28 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v28 - 16;
    __asm { LDG             X0, [X0] }
    if ( v18 != _X0 )
    {
      v31 = a2 + 16;
      v75 = (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
      sub_411CC0(a2 + 16, v75);
      v32 = v75;
      if ( (byte_4966A1 & 1) != 0 )
      {
        _X0 = v29;
        __asm { LDG             X0, [X0] }
        v58 = _X0;
        _X0 = v26;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v62 = sub_411CC0(_X0, (*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        v32 = v75;
        v26 = v62;
      }
      goto LABEL_21;
    }
    v30 = *(_QWORD *)(_X0 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v30 = *(_QWORD *)(v28 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v29 != v18 )
    {
      v31 = a2 + 16;
      v32 = (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((*(_QWORD *)(a2 + 8) ^ 2uLL) >> 1) & 1);
LABEL_21:
      j_ifunc_40DC90(v26, v31, v32);
      sub_4094D4((__int64)a1, a2, 1, v33, v34, v35, v36, v37, v38, v39, v40);
      return (char *)v26;
    }
  }
  v16 += v30;
  if ( a4 <= v16 )
    goto LABEL_11;
LABEL_38:
  v67 = sub_41F250(
          "(unsigned long) (newsize) >= (unsigned long) (nb)",
          "malloc.c",
          5006,
          "_int_realloc",
          *(double *)&a5);
  return sub_40B410(v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74);
}
