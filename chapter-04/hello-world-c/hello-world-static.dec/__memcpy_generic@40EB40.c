long double __fastcall _memcpy_generic(_OWORD *a1, unsigned __int64 a2, unsigned __int64 a3, long double result)
{
  char *v4; // x4
  char *v5; // x5
  __int128 v6; // q1
  __int64 v7; // x7
  int v8; // w8
  char v9; // w10
  char v10; // w8
  __int128 v11; // q1
  __int128 v12; // q2
  __int128 v13; // q3
  __int128 v14; // q4
  __int128 v15; // q5
  __int128 v16; // q7
  long double v17; // q3
  unsigned __int64 v18; // x14
  _OWORD *v19; // x1
  _OWORD *v20; // x3
  unsigned __int64 v21; // x2
  __int128 v22; // q0
  __int128 v23; // q1
  __int128 v24; // q2
  __int128 v25; // q3
  bool v26; // cc
  unsigned __int64 i; // x2
  __int128 v28; // q4
  __int128 v29; // q5
  __int128 v30; // q1

  v4 = (char *)(a2 + a3);
  v5 = (char *)a1 + a3;
  if ( a3 > 0x80 )
  {
    v17 = *(long double *)a2;
    v18 = a2 & 0xF;
    v19 = (_OWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = (_OWORD *)((char *)a1 - v18);
    v21 = a3 + v18;
    v22 = v19[1];
    v23 = v19[2];
    *(long double *)a1 = v17;
    v24 = v19[3];
    v25 = v19[4];
    v26 = v21 > 0x90;
    for ( i = v21 - 144; v26; i -= 64LL )
    {
      v20[1] = v22;
      v20[2] = v23;
      v22 = v19[5];
      v23 = v19[6];
      v20[3] = v24;
      v20[4] = v25;
      v24 = v19[7];
      v25 = v19[8];
      v19 += 4;
      v20 += 4;
      v26 = i > 0x40;
    }
    v28 = *((_OWORD *)v4 - 4);
    v29 = *((_OWORD *)v4 - 3);
    v20[1] = v22;
    v20[2] = v23;
    result = *((long double *)v4 - 2);
    v30 = *((_OWORD *)v4 - 1);
    v20[3] = v24;
    v20[4] = v25;
    *((_OWORD *)v5 - 4) = v28;
    *((_OWORD *)v5 - 3) = v29;
    *((long double *)v5 - 2) = result;
    *((_OWORD *)v5 - 1) = v30;
  }
  else if ( a3 > 0x20 )
  {
    result = *(long double *)a2;
    v11 = *(_OWORD *)(a2 + 16);
    v12 = *((_OWORD *)v4 - 2);
    v13 = *((_OWORD *)v4 - 1);
    if ( a3 > 0x40 )
    {
      v14 = *(_OWORD *)(a2 + 32);
      v15 = *(_OWORD *)(a2 + 48);
      if ( a3 > 0x60 )
      {
        v16 = *((_OWORD *)v4 - 3);
        *((_OWORD *)v5 - 4) = *((_OWORD *)v4 - 4);
        *((_OWORD *)v5 - 3) = v16;
      }
      *(long double *)a1 = result;
      a1[1] = v11;
      a1[2] = v14;
      a1[3] = v15;
      *((_OWORD *)v5 - 2) = v12;
      *((_OWORD *)v5 - 1) = v13;
    }
    else
    {
      *(long double *)a1 = result;
      a1[1] = v11;
      *((_OWORD *)v5 - 2) = v12;
      *((_OWORD *)v5 - 1) = v13;
    }
  }
  else if ( a3 < 0x10 )
  {
    if ( (a3 & 8) != 0 )
    {
      v7 = *((_QWORD *)v4 - 1);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *((_QWORD *)v5 - 1) = v7;
    }
    else if ( (a3 & 4) != 0 )
    {
      v8 = *((_DWORD *)v4 - 1);
      *(_DWORD *)a1 = *(_DWORD *)a2;
      *((_DWORD *)v5 - 1) = v8;
    }
    else if ( a3 )
    {
      v9 = *(v4 - 1);
      v10 = *(_BYTE *)(a2 + (a3 >> 1));
      *(_BYTE *)a1 = *(_BYTE *)a2;
      *((_BYTE *)a1 + (a3 >> 1)) = v10;
      *(v5 - 1) = v9;
    }
  }
  else
  {
    result = *(long double *)a2;
    v6 = *((_OWORD *)v4 - 1);
    *a1 = *(_OWORD *)a2;
    *((_OWORD *)v5 - 1) = v6;
  }
  return result;
}
