long double __fastcall sub_40EEC0(long double *a1, unsigned __int64 a2, unsigned __int64 a3, long double result)
{
  unsigned __int64 v4; // x4
  char *v5; // x5
  __int128 v6; // q3
  unsigned __int64 v7; // x6
  unsigned __int64 v8; // x4
  unsigned __int64 v9; // x2
  __int128 v10; // q0
  __int128 v11; // q1
  __int128 v12; // q2
  __int128 v13; // q3
  char *v14; // x5
  bool v15; // cc
  unsigned __int64 i; // x2
  __int128 v17; // q4
  __int128 v18; // q5
  __int128 v19; // q1

  v4 = a2 + a3;
  v5 = (char *)a1 + a3;
  if ( a1 != (long double *)a2 )
  {
    if ( (unsigned __int64)a1 - a2 < a3 )
    {
      v6 = *(_OWORD *)(v4 - 16);
      v7 = v4 & 0xF;
      v8 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = a3 - v7;
      v10 = *(_OWORD *)(v8 - 32);
      v11 = *(_OWORD *)(v8 - 16);
      *((_OWORD *)v5 - 1) = v6;
      v12 = *(_OWORD *)(v8 - 64);
      v13 = *(_OWORD *)(v8 - 48);
      v14 = &v5[-v7];
      v15 = v9 > 0x80;
      for ( i = v9 - 128; v15; i -= 64LL )
      {
        *((_OWORD *)v14 - 1) = v11;
        *((_OWORD *)v14 - 2) = v10;
        v10 = *(_OWORD *)(v8 - 96);
        v11 = *(_OWORD *)(v8 - 80);
        *((_OWORD *)v14 - 3) = v13;
        *((_OWORD *)v14 - 4) = v12;
        v14 -= 64;
        v12 = *(_OWORD *)(v8 - 128);
        v13 = *(_OWORD *)(v8 - 112);
        v8 -= 64LL;
        v15 = i > 0x40;
      }
      v17 = *(_OWORD *)(a2 + 32);
      v18 = *(_OWORD *)(a2 + 48);
      *((_OWORD *)v14 - 2) = v10;
      *((_OWORD *)v14 - 1) = v11;
      result = *(long double *)a2;
      v19 = *(_OWORD *)(a2 + 16);
      *((_OWORD *)v14 - 4) = v12;
      *((_OWORD *)v14 - 3) = v13;
      *((_OWORD *)a1 + 2) = v17;
      *((_OWORD *)a1 + 3) = v18;
      *a1 = result;
      *((_OWORD *)a1 + 1) = v19;
    }
    else
    {
      return sub_40EE00(a1, a2, a3);
    }
  }
  return result;
}
