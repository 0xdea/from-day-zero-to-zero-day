long double __fastcall sub_40EE00(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  char *v3; // x4
  char *v4; // x5
  __int128 v5; // q3
  unsigned __int64 v6; // x6
  _OWORD *v7; // x1
  _OWORD *v8; // x3
  unsigned __int64 v9; // x2
  __int128 v10; // q0
  __int128 v11; // q1
  __int128 v12; // q2
  __int128 v13; // q3
  bool v14; // cc
  unsigned __int64 i; // x2
  __int128 v16; // q4
  __int128 v17; // q5
  long double result; // q0
  __int128 v19; // q1

  v3 = (char *)(a2 + a3);
  v4 = (char *)a1 + a3;
  v5 = *(_OWORD *)a2;
  v6 = a2 & 0xF;
  v7 = (_OWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (_OWORD *)((char *)a1 - v6);
  v9 = a3 + v6;
  v10 = v7[1];
  v11 = v7[2];
  *a1 = v5;
  v12 = v7[3];
  v13 = v7[4];
  v14 = v9 > 0x90;
  for ( i = v9 - 144; v14; i -= 64LL )
  {
    v8[1] = v10;
    v8[2] = v11;
    v10 = v7[5];
    v11 = v7[6];
    v8[3] = v12;
    v8[4] = v13;
    v12 = v7[7];
    v13 = v7[8];
    v7 += 4;
    v8 += 4;
    v14 = i > 0x40;
  }
  v16 = *((_OWORD *)v3 - 4);
  v17 = *((_OWORD *)v3 - 3);
  v8[1] = v10;
  v8[2] = v11;
  result = *((long double *)v3 - 2);
  v19 = *((_OWORD *)v3 - 1);
  v8[3] = v12;
  v8[4] = v13;
  *((_OWORD *)v4 - 4) = v16;
  *((_OWORD *)v4 - 3) = v17;
  *((long double *)v4 - 2) = result;
  *((_OWORD *)v4 - 1) = v19;
  return result;
}
