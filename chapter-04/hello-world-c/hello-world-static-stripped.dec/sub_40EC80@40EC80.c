long double __fastcall sub_40EC80(char *a1, unsigned __int64 a2, unsigned __int64 a3, long double result)
{
  __int64 v4; // x7
  int v5; // w8
  char v6; // w10
  char v7; // w8
  __int128 v8; // q1
  __int128 v9; // q2
  __int128 v10; // q3
  __int128 v11; // q4
  __int128 v12; // q5
  __int128 v13; // q7
  long double v14; // q3
  unsigned __int64 v15; // x14
  _OWORD *v16; // x1
  char *v17; // x3
  unsigned __int64 v18; // x2
  __int128 v19; // q0
  __int128 v20; // q1
  __int128 v21; // q2
  __int128 v22; // q3
  unsigned __int64 i; // x2
  __int128 v24; // q4
  __int128 v25; // q5
  __int128 v26; // q1
  unsigned __int64 v27; // x4
  char *v28; // x5
  __int128 v29; // q1
  __int128 v30; // q3
  unsigned __int64 v31; // x14
  unsigned __int64 v32; // x4
  unsigned __int64 v33; // x2
  __int128 v34; // q0
  __int128 v35; // q1
  __int128 v36; // q2
  __int128 v37; // q3
  char *v38; // x5
  bool v39; // cc
  unsigned __int64 j; // x2
  __int128 v41; // q4
  __int128 v42; // q5
  __int128 v43; // q1

  v27 = a2 + a3;
  v28 = &a1[a3];
  if ( a3 > 0x80 )
  {
    if ( a1 != (char *)a2 )
    {
      if ( (unsigned __int64)&a1[-a2] >= a3 )
      {
        v14 = *(long double *)a2;
        v15 = a2 & 0xF;
        v16 = (_OWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        v17 = &a1[-v15];
        v18 = a3 + v15;
        v19 = v16[1];
        v20 = v16[2];
        *(long double *)a1 = v14;
        v21 = v16[3];
        v22 = v16[4];
        v39 = v18 > 0x90;
        for ( i = v18 - 144; v39; i -= 64LL )
        {
          *((_OWORD *)v17 + 1) = v19;
          *((_OWORD *)v17 + 2) = v20;
          v19 = v16[5];
          v20 = v16[6];
          *((_OWORD *)v17 + 3) = v21;
          *((_OWORD *)v17 + 4) = v22;
          v21 = v16[7];
          v22 = v16[8];
          v16 += 4;
          v17 += 64;
          v39 = i > 0x40;
        }
        v24 = *(_OWORD *)(v27 - 64);
        v25 = *(_OWORD *)(v27 - 48);
        *((_OWORD *)v17 + 1) = v19;
        *((_OWORD *)v17 + 2) = v20;
        result = *(long double *)(v27 - 32);
        v26 = *(_OWORD *)(v27 - 16);
        *((_OWORD *)v17 + 3) = v21;
        *((_OWORD *)v17 + 4) = v22;
        *((_OWORD *)v28 - 4) = v24;
        *((_OWORD *)v28 - 3) = v25;
        *((long double *)v28 - 2) = result;
        *((_OWORD *)v28 - 1) = v26;
      }
      else
      {
        v30 = *(_OWORD *)(v27 - 16);
        v31 = v27 & 0xF;
        v32 = v27 & 0xFFFFFFFFFFFFFFF0LL;
        v33 = a3 - v31;
        v34 = *(_OWORD *)(v32 - 32);
        v35 = *(_OWORD *)(v32 - 16);
        *((_OWORD *)v28 - 1) = v30;
        v36 = *(_OWORD *)(v32 - 64);
        v37 = *(_OWORD *)(v32 - 48);
        v38 = &v28[-v31];
        v39 = v33 > 0x80;
        for ( j = v33 - 128; v39; j -= 64LL )
        {
          *((_OWORD *)v38 - 1) = v35;
          *((_OWORD *)v38 - 2) = v34;
          v34 = *(_OWORD *)(v32 - 96);
          v35 = *(_OWORD *)(v32 - 80);
          *((_OWORD *)v38 - 3) = v37;
          *((_OWORD *)v38 - 4) = v36;
          v38 -= 64;
          v36 = *(_OWORD *)(v32 - 128);
          v37 = *(_OWORD *)(v32 - 112);
          v32 -= 64LL;
          v39 = j > 0x40;
        }
        v41 = *(_OWORD *)(a2 + 32);
        v42 = *(_OWORD *)(a2 + 48);
        *((_OWORD *)v38 - 2) = v34;
        *((_OWORD *)v38 - 1) = v35;
        result = *(long double *)a2;
        v43 = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v38 - 4) = v36;
        *((_OWORD *)v38 - 3) = v37;
        *((_OWORD *)a1 + 2) = v41;
        *((_OWORD *)a1 + 3) = v42;
        *(long double *)a1 = result;
        *((_OWORD *)a1 + 1) = v43;
      }
    }
  }
  else if ( a3 > 0x20 )
  {
    result = *(long double *)a2;
    v8 = *(_OWORD *)(a2 + 16);
    v9 = *(_OWORD *)(v27 - 32);
    v10 = *(_OWORD *)(v27 - 16);
    if ( a3 > 0x40 )
    {
      v11 = *(_OWORD *)(a2 + 32);
      v12 = *(_OWORD *)(a2 + 48);
      if ( a3 > 0x60 )
      {
        v13 = *(_OWORD *)(v27 - 48);
        *((_OWORD *)v28 - 4) = *(_OWORD *)(v27 - 64);
        *((_OWORD *)v28 - 3) = v13;
      }
      *(long double *)a1 = result;
      *((_OWORD *)a1 + 1) = v8;
      *((_OWORD *)a1 + 2) = v11;
      *((_OWORD *)a1 + 3) = v12;
      *((_OWORD *)v28 - 2) = v9;
      *((_OWORD *)v28 - 1) = v10;
    }
    else
    {
      *(long double *)a1 = result;
      *((_OWORD *)a1 + 1) = v8;
      *((_OWORD *)v28 - 2) = v9;
      *((_OWORD *)v28 - 1) = v10;
    }
  }
  else if ( a3 < 0x10 )
  {
    if ( (a3 & 8) != 0 )
    {
      v4 = *(_QWORD *)(v27 - 8);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *((_QWORD *)v28 - 1) = v4;
    }
    else if ( (a3 & 4) != 0 )
    {
      v5 = *(_DWORD *)(v27 - 4);
      *(_DWORD *)a1 = *(_DWORD *)a2;
      *((_DWORD *)v28 - 1) = v5;
    }
    else if ( a3 )
    {
      v6 = *(_BYTE *)(v27 - 1);
      v7 = *(_BYTE *)(a2 + (a3 >> 1));
      *a1 = *(_BYTE *)a2;
      a1[a3 >> 1] = v7;
      *(v28 - 1) = v6;
    }
  }
  else
  {
    result = *(long double *)a2;
    v29 = *(_OWORD *)(v27 - 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_OWORD *)v28 - 1) = v29;
  }
  return result;
}
