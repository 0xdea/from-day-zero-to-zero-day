unsigned __int64 __fastcall _mpn_addmul_1(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x4
  __int64 v5; // x1
  unsigned __int64 v6; // x11
  __int64 v7; // x9
  __int64 v8; // x10
  unsigned __int64 result; // x0
  unsigned __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x3
  unsigned __int64 v13; // x8
  __int64 v14; // x7
  unsigned __int64 v15; // x3
  unsigned __int64 v16; // x2
  unsigned __int64 v17; // x6
  unsigned __int64 v18; // x2

  v4 = -a3;
  v5 = a2 + 8 * a3;
  v6 = HIDWORD(a4);
  v7 = (unsigned int)a4;
  v8 = a1 + 8 * a3;
  result = 0;
  do
  {
    v10 = *(_QWORD *)(v8 + 8 * v4);
    v11 = (unsigned int)*(_QWORD *)(v5 + 8 * v4);
    v12 = HIDWORD(*(_QWORD *)(v5 + 8 * v4));
    v13 = v12 * v7;
    v14 = v12 * v7 + v6 * v11;
    v15 = v6 * v12;
    v16 = v14 + ((unsigned __int64)(v11 * v7) >> 32);
    v17 = result + (unsigned int)(v11 * v7) + (v16 << 32);
    if ( v16 < v13 )
      v15 += 0x100000000LL;
    v18 = HIDWORD(v16);
    if ( v17 < result )
      ++v18;
    *(_QWORD *)(v8 + 8 * v4) = v10 + v17;
    result = (__PAIR128__(v15, v10) + __PAIR128__(v18, v17)) >> 64;
    ++v4;
  }
  while ( v4 );
  return result;
}
