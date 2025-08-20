__int64 __fastcall sub_42B230(
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
  int v9; // w2
  unsigned int **v11; // x1
  __int64 v12; // x20
  unsigned int *v13; // x5
  unsigned int **v14; // x0
  unsigned __int64 v15; // x2
  int v16; // w0
  unsigned __int64 v18; // x0
  unsigned __int64 StatusReg; // x1
  __int64 v20; // [xsp+20h] [xbp-10h]

  v9 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)a1 = v9 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    return 0xFFFFFFFFLL;
  }
  v11 = *(unsigned int ***)(a1 + 160);
  if ( *v11 < v11[1] )
    return **v11;
  v12 = *(_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 8) < *(_QWORD *)(a1 + 16) )
  {
    v13 = v11[6];
    v20 = *(_QWORD *)(a1 + 8);
    if ( v13 )
      goto LABEL_5;
LABEL_12:
    v18 = (unsigned __int64)v11[8];
    if ( v18 )
    {
      sub_40C1A0(v18, a2, a3, a4, a5, a6, a7, a8, a9);
      *(_DWORD *)a1 &= ~0x100u;
    }
    sub_429E80(a1);
    v11 = *(unsigned int ***)(a1 + 160);
    v13 = v11[6];
    goto LABEL_5;
  }
  if ( (unsigned int)sub_402C80(a1, a2, a3, a4, a5, a6, a7, a8, a9) == -1 )
    return 0xFFFFFFFFLL;
  v11 = *(unsigned int ***)(a1 + 160);
  v20 = *(_QWORD *)(a1 + 8);
  v13 = v11[6];
  if ( !v13 )
    goto LABEL_12;
LABEL_5:
  *v11 = v13;
  v11[2] = v13;
  v11[12] = v11[11];
  sub_42C310(v12, v11 + 11);
  v14 = *(unsigned int ***)(a1 + 160);
  *(_QWORD *)(a1 + 8) = v20;
  if ( *v14 >= v14[1] )
  {
    v15 = _ReadStatusReg(TPIDR_EL0);
    v16 = *(_DWORD *)a1 | 0x20;
    *(_DWORD *)(v15 + 40) = 84;
    *(_DWORD *)a1 = v16;
    return 0xFFFFFFFFLL;
  }
  return **v14;
}
