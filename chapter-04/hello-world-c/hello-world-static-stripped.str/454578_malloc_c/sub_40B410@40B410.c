char *__fastcall sub_40B410(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        long double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  unsigned __int64 v14; // x2
  bool v15; // cc
  unsigned __int64 v16; // x2
  unsigned __int64 v17; // x19
  unsigned __int64 v18; // x0
  _QWORD *v19; // x20
  char *v20; // x24
  unsigned __int64 v21; // x2
  char *v22; // x3
  signed __int64 v23; // x2
  __int64 v24; // x0
  unsigned __int64 v25; // x20
  __int64 v26; // x5
  double v27; // d0
  __int64 v28; // x1
  char *result; // x0
  char *v30; // x3
  __int64 v31; // x0
  __int64 v40; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    v19 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return (char *)v19;
  }
  if ( (byte_4966A1 & 1) != 0 )
    a3 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = a3 + 23;
  v15 = v14 > 0x1F;
  v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v15 )
    v17 = v16;
  else
    v17 = 32;
  v18 = sub_40A0A0(a1, a2 + 32 + v17, v16, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  v19 = (_QWORD *)v18;
  if ( !v18 )
    return 0;
  v20 = (char *)(v18 - 16);
  v21 = v18 % a2;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v18 - 16;
    __asm { LDG             X0, [X0] }
    v22 = (char *)_X0;
    if ( !v21 )
    {
      v19 = _X0 + 2;
      v20 = (char *)_X0;
      goto LABEL_15;
    }
    _X0 = (((unsigned __int64)v19 + a2 - 1) & -(__int64)a2) - 16;
    __asm { LDG             X0, [X0] }
    v20 = _X0;
  }
  else
  {
    if ( !v21 )
      goto LABEL_15;
    v22 = (char *)(v18 - 16);
    v20 = (char *)(((v18 + a2 - 1) & -(__int64)a2) - 16);
  }
  v23 = v20 - v22;
  if ( (unsigned __int64)(v20 - v22) > 0x1F )
  {
    v24 = *((_QWORD *)v22 + 1);
    v25 = (v24 & 0xFFFFFFFFFFFFFFF8LL) - v23;
    if ( (v24 & 2) == 0 )
      goto LABEL_13;
LABEL_25:
    *(_QWORD *)v20 = *(_QWORD *)v22 + v23;
    *((_QWORD *)v20 + 1) = v25 | 2;
    return v20 + 16;
  }
  v31 = *((_QWORD *)v22 + 1);
  v20 += a2;
  v23 = v20 - v22;
  v25 = (v31 & 0xFFFFFFFFFFFFFFF8LL) - (v20 - v22);
  if ( (v31 & 2) != 0 )
    goto LABEL_25;
LABEL_13:
  v26 = 4LL * (a1 != (_QWORD *)&unk_490670);
  *((_QWORD *)v20 + 1) = v25 | v26 | 1;
  *(_QWORD *)&v20[v25 + 8] |= 1uLL;
  *((_QWORD *)v22 + 1) = *((_QWORD *)v22 + 1) & 7LL | v26 | v23;
  sub_409394(a1);
  if ( v25 >= v17 )
  {
    v19 = v20 + 16;
    if ( !((unsigned __int64)(v20 + 16) % a2) )
    {
LABEL_15:
      v28 = *((_QWORD *)v20 + 1);
      if ( (v28 & 2) == 0 )
      {
        v30 = &v20[v28 & 0xFFFFFFFFFFFFFFF8LL];
        if ( (v28 & 0xFFFFFFFFFFFFFFF8LL) > v17
          && ((v28 & 0xFFFFFFFFFFFFFFF8LL) - v17 > 0x1F
           || (char *)a1[12] == v30
           || (*(_QWORD *)&v30[(*((_QWORD *)v30 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8] & 1) == 0) )
        {
          *((_QWORD *)v20 + 1) = *((_QWORD *)v20 + 1) & 7LL | v17;
          if ( (unsigned __int64)sub_407ED0(a1, &v20[v17]) > 0xFFFF )
            sub_408F00((__int64)a1);
        }
      }
      return (char *)v19;
    }
  }
  sub_41F250("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0", v27);
  if ( (byte_4966A0 & 1) != 0 )
    return 0;
  result = (char *)sub_4118E0(v40);
  if ( result == (char *)-1LL )
    return 0;
  return result;
}
