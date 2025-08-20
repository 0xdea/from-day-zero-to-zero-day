long double __fastcall _memmove_generic(__int64 a1, __int64 a2, unsigned __int64 a3, long double result)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int128 v6; // q1
  __int128 v7; // q3
  __int64 v8; // x14
  unsigned __int64 v9; // x4
  unsigned __int64 v10; // x2
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q2
  __int128 v14; // q3
  __int64 v15; // x5
  bool v16; // cc
  unsigned __int64 i; // x2
  __int128 v18; // q4
  __int128 v19; // q5
  __int128 v20; // q1

  v4 = a2 + a3;
  v5 = a1 + a3;
  if ( a3 > 0x80 )
  {
    if ( a1 != a2 )
    {
      if ( a1 - a2 >= a3 )
        JUMPOUT(0x40EC18);
      v7 = *(_OWORD *)(v4 - 16);
      v8 = v4 & 0xF;
      v9 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      v10 = a3 - v8;
      v11 = *(_OWORD *)(v9 - 32);
      v12 = *(_OWORD *)(v9 - 16);
      *(_OWORD *)(v5 - 16) = v7;
      v13 = *(_OWORD *)(v9 - 64);
      v14 = *(_OWORD *)(v9 - 48);
      v15 = v5 - v8;
      v16 = v10 > 0x80;
      for ( i = v10 - 128; v16; i -= 64LL )
      {
        *(_OWORD *)(v15 - 16) = v12;
        *(_OWORD *)(v15 - 32) = v11;
        v11 = *(_OWORD *)(v9 - 96);
        v12 = *(_OWORD *)(v9 - 80);
        *(_OWORD *)(v15 - 48) = v14;
        *(_OWORD *)(v15 - 64) = v13;
        v15 -= 64;
        v13 = *(_OWORD *)(v9 - 128);
        v14 = *(_OWORD *)(v9 - 112);
        v9 -= 64LL;
        v16 = i > 0x40;
      }
      v18 = *(_OWORD *)(a2 + 32);
      v19 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v15 - 32) = v11;
      *(_OWORD *)(v15 - 16) = v12;
      result = *(long double *)a2;
      v20 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v15 - 64) = v13;
      *(_OWORD *)(v15 - 48) = v14;
      *(_OWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 48) = v19;
      *(long double *)a1 = result;
      *(_OWORD *)(a1 + 16) = v20;
    }
  }
  else
  {
    if ( a3 > 0x20 )
      JUMPOUT(0x40EBD0);
    if ( a3 < 0x10 )
      JUMPOUT(0x40EB78);
    result = *(long double *)a2;
    v6 = *(_OWORD *)(v4 - 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(v5 - 16) = v6;
  }
  return result;
}
