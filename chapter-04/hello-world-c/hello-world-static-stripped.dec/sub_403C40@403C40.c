unsigned __int64 __fastcall sub_403C40(
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
  __int64 v13; // x24
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x20
  unsigned __int64 v16; // x22
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  __int64 v26; // x20
  unsigned __int64 v27; // x22

  v13 = *(_QWORD *)(a1 + 8);
  v14 = a3;
  v15 = *(_QWORD *)(a1 + 16) - v13;
  if ( v15 >= a3 )
  {
    v16 = a2;
    if ( v15 )
      goto LABEL_10;
    return v16 - a2;
  }
  v16 = a2;
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v14 = a3 - v15;
    v16 = j_ifunc_40DC90(a2, v13, v15) + v15;
    sub_404764(a1);
    v13 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)(a1 + 16) - v13;
    if ( v14 <= v15 )
    {
LABEL_10:
      if ( v14 > v15 )
        v14 = v15;
      v16 = j_ifunc_40DC90(v16, v13, v14) + v14;
      *(_QWORD *)(a1 + 8) = v13 + v14;
      return v16 - a2;
    }
  }
  if ( !(unsigned int)sub_401BC0(a1, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)(a1 + 16) - v13;
    if ( v15 >= v14 )
      goto LABEL_10;
    *(_DWORD *)a1 |= 0x10u;
    if ( v15 )
      goto LABEL_10;
    return v16 - a2;
  }
  v26 = *(_QWORD *)(a1 + 216);
  v27 = v16 - a2;
  if ( (unsigned __int64)(v26 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v17, v18, v19, v20, v21, v22, v23, v24);
  return v27 + (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(v26 + 64))(a1, a2, v14);
}
