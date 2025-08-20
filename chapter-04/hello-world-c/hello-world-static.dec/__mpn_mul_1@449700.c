unsigned __int64 __fastcall _mpn_mul_1(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x4
  __int64 v5; // x1
  unsigned __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x10
  unsigned __int64 result; // x0
  __int64 v10; // x5
  __int64 v11; // x2
  unsigned __int64 v12; // x7
  __int64 v13; // x6
  __int64 v14; // x2
  unsigned __int64 v15; // x3
  unsigned __int64 v16; // x5
  unsigned __int64 v17; // x3

  v4 = -a3;
  v5 = a2 + 8 * a3;
  v6 = HIDWORD(a4);
  v7 = (unsigned int)a4;
  v8 = a1 + 8 * a3;
  result = 0;
  do
  {
    v10 = (unsigned int)*(_QWORD *)(v5 + 8 * v4);
    v11 = HIDWORD(*(_QWORD *)(v5 + 8 * v4));
    v12 = v11 * v7;
    v13 = v11 * v7 + v6 * v10;
    v14 = v6 * v11;
    v15 = v13 + ((unsigned __int64)(v10 * v7) >> 32);
    v16 = result + (unsigned int)(v10 * v7) + (v15 << 32);
    if ( v15 < v12 )
      v14 += 0x100000000LL;
    v17 = HIDWORD(v15);
    *(_QWORD *)(v8 + 8 * v4) = v16;
    if ( v16 < result )
      ++v17;
    result = v17 + v14;
    ++v4;
  }
  while ( v4 );
  return result;
}
