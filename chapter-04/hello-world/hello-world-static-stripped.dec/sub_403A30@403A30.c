unsigned __int64 __fastcall sub_403A30(
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
  __int64 v15; // x1
  unsigned __int64 v16; // x20
  __int64 v17; // x3
  unsigned __int64 v18; // x0
  __int64 v19; // x20
  unsigned __int64 v20; // x2
  __int64 v21; // x0
  bool v22; // zf
  __int64 v23; // x1
  unsigned __int64 result; // x0
  int v25; // w1
  int v26; // w0
  __int64 v27; // x0
  unsigned __int64 v28; // [xsp+48h] [xbp+48h]

  if ( !*((_QWORD *)a1 + 7) )
  {
    v27 = *((_QWORD *)a1 + 9);
    if ( v27 )
    {
      sub_40C1A0(v27);
      *a1 &= ~0x100u;
    }
    sub_404C44(a1);
  }
  v14 = a3;
  if ( !a3 )
    return a3;
  while ( 2 )
  {
    v15 = *((_QWORD *)a1 + 1);
    v16 = *((_QWORD *)a1 + 2) - v15;
    if ( v16 >= v14 )
    {
LABEL_24:
      j_ifunc_40DC90(a2, v15, v14);
      *((_QWORD *)a1 + 1) += v14;
      return a3;
    }
    while ( !v16 )
    {
      if ( (*a1 & 0x100) == 0 )
        goto LABEL_6;
LABEL_23:
      sub_404764(a1);
      v15 = *((_QWORD *)a1 + 1);
      v16 = *((_QWORD *)a1 + 2) - v15;
      if ( v16 >= v14 )
        goto LABEL_24;
    }
    a2 = j_ifunc_40DC90(a2, v15, v16) + v16;
    v14 -= v16;
    v26 = *a1;
    *((_QWORD *)a1 + 1) += v16;
    if ( (v26 & 0x100) != 0 )
      goto LABEL_23;
LABEL_6:
    v17 = *((_QWORD *)a1 + 7);
    if ( v17 )
    {
      v18 = *((_QWORD *)a1 + 8) - v17;
      if ( v18 > v14 )
      {
        if ( (unsigned int)sub_404950(a1) == -1 )
          return a3 - v14;
        continue;
      }
      if ( v18 > 0x7F )
      {
        *((_QWORD *)a1 + 1) = v17;
        *((_QWORD *)a1 + 2) = v17;
        v19 = *((_QWORD *)a1 + 27);
        *((_QWORD *)a1 + 3) = v17;
        *((_QWORD *)a1 + 4) = v17;
        *((_QWORD *)a1 + 5) = v17;
        *((_QWORD *)a1 + 6) = v17;
        v20 = v14 - v14 % v18;
        if ( (unsigned __int64)(v19 - (_QWORD)&unk_48DD70) <= 0x92F )
          goto LABEL_10;
LABEL_17:
        v28 = v20;
        sub_401A50(a4, a5, a6, a7, a8, a9, a10, a11);
        v21 = (*(__int64 (__fastcall **)(int *, unsigned __int64, unsigned __int64))(v19 + 112))(a1, a2, v28);
        v22 = v21 == 0;
        if ( v21 <= 0 )
          goto LABEL_18;
LABEL_11:
        v23 = *((_QWORD *)a1 + 18);
        a2 += v21;
        v14 -= v21;
        if ( v23 != -1 )
          *((_QWORD *)a1 + 18) = v23 + v21;
        if ( !v14 )
          return a3;
        continue;
      }
    }
    break;
  }
  v19 = *((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 1) = v17;
  *((_QWORD *)a1 + 2) = v17;
  v20 = v14;
  *((_QWORD *)a1 + 3) = v17;
  *((_QWORD *)a1 + 4) = v17;
  *((_QWORD *)a1 + 5) = v17;
  *((_QWORD *)a1 + 6) = v17;
  if ( (unsigned __int64)(v19 - (_QWORD)&unk_48DD70) > 0x92F )
    goto LABEL_17;
LABEL_10:
  v21 = (*(__int64 (__fastcall **)(int *, unsigned __int64, unsigned __int64))(v19 + 112))(a1, a2, v20);
  v22 = v21 == 0;
  if ( v21 > 0 )
    goto LABEL_11;
LABEL_18:
  result = a3 - v14;
  v25 = *a1 | 0x20;
  if ( v22 )
    v25 = *a1 | 0x10;
  *a1 = v25;
  return result;
}
