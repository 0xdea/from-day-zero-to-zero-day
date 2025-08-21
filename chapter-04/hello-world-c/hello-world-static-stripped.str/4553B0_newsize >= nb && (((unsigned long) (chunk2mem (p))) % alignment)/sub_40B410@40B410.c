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
        double a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v16; // x2
  bool v17; // cc
  unsigned __int64 v18; // x2
  unsigned __int64 v19; // x19
  unsigned __int64 v20; // x0
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  _QWORD *v29; // x20
  char *v30; // x24
  unsigned __int64 v31; // x2
  __int64 *v32; // x3
  signed __int64 v33; // x2
  __int64 v34; // x0
  unsigned __int64 v35; // x20
  __int64 v36; // x5
  __int64 v37; // x1
  char *result; // x0
  char *v39; // x3
  unsigned __int64 v40; // x2
  unsigned __int64 v41; // x4
  long double v42; // q0
  __int64 v43; // x0
  __int64 v52; // x0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    v29 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return (char *)v29;
  }
  if ( (byte_4966A1 & 1) != 0 )
    a3 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = a3 + 23;
  v17 = v16 > 0x1F;
  v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v17 )
    v19 = v18;
  else
    v19 = 32;
  v20 = sub_40A0A0(a1, a2 + 32 + v19, v18, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  v29 = (_QWORD *)v20;
  if ( !v20 )
    return 0;
  v30 = (char *)(v20 - 16);
  v31 = v20 % a2;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v20 - 16;
    __asm { LDG             X0, [X0] }
    v32 = _X0;
    if ( !v31 )
    {
      v29 = _X0 + 2;
      v30 = (char *)_X0;
      goto LABEL_15;
    }
    _X0 = (((unsigned __int64)v29 + a2 - 1) & -(__int64)a2) - 16;
    __asm { LDG             X0, [X0] }
    v30 = _X0;
  }
  else
  {
    if ( !v31 )
      goto LABEL_15;
    v32 = (__int64 *)(v20 - 16);
    v30 = (char *)(((v20 + a2 - 1) & -(__int64)a2) - 16);
  }
  v33 = v30 - (char *)v32;
  if ( (unsigned __int64)(v30 - (char *)v32) > 0x1F )
  {
    v34 = v32[1];
    v35 = (v34 & 0xFFFFFFFFFFFFFFF8LL) - v33;
    if ( (v34 & 2) == 0 )
      goto LABEL_13;
LABEL_25:
    *(_QWORD *)v30 = *v32 + v33;
    *((_QWORD *)v30 + 1) = v35 | 2;
    return v30 + 16;
  }
  v43 = v32[1];
  v30 += a2;
  v33 = v30 - (char *)v32;
  v35 = (v43 & 0xFFFFFFFFFFFFFFF8LL) - (v30 - (char *)v32);
  if ( (v43 & 2) != 0 )
    goto LABEL_25;
LABEL_13:
  v36 = 4LL * (a1 != (_QWORD *)&unk_490670);
  *((_QWORD *)v30 + 1) = v35 | v36 | 1;
  *(_QWORD *)&v30[v35 + 8] |= 1uLL;
  v32[1] = v32[1] & 7 | v36 | v33;
  sub_409394((__int64)a1, v32, v33, v21, v22, v23, v24, v25, v26, v27, v28);
  if ( v35 >= v19 )
  {
    v29 = v30 + 16;
    if ( !((unsigned __int64)(v30 + 16) % a2) )
    {
LABEL_15:
      v37 = *((_QWORD *)v30 + 1);
      if ( (v37 & 2) == 0 )
      {
        v39 = &v30[v37 & 0xFFFFFFFFFFFFFFF8LL];
        if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) > v19 )
        {
          v40 = (v37 & 0xFFFFFFFFFFFFFFF8LL) - v19;
          v41 = *((_QWORD *)v39 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v40 > 0x1F || (char *)a1[12] == v39 || (*(_QWORD *)&v39[v41 + 8] & 1) == 0 )
          {
            *((_QWORD *)v30 + 1) = *((_QWORD *)v30 + 1) & 7LL | v19;
            if ( sub_407ED0((__int64)a1, &v30[v19], v40, v39, v41, v21, v22, v23, v24, v25, v26, v27, v28) > 0xFFFF )
              sub_408F00((__int64)a1, v42);
          }
        }
      }
      return (char *)v29;
    }
  }
  sub_41F250("newsize >= nb && (((unsigned long) (chunk2mem (p))) % alignment) == 0", v21);
  if ( (byte_4966A0 & 1) != 0 )
    return 0;
  result = (char *)sub_4118E0(v52);
  if ( result == (char *)-1LL )
    return 0;
  return result;
}
