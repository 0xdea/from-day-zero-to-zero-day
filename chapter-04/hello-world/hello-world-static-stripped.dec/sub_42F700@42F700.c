unsigned __int64 __fastcall sub_42F700(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // x2
  int8x16_t v8; // q0
  int8x16_t v9; // q4
  __int64 v10; // x4
  unsigned __int64 v11; // x3
  unsigned __int64 v12; // x5
  int8x16_t v13; // q1
  int8x16_t v14; // q3
  uint8x16_t v15; // q2
  int8x16_t v16; // t1
  uint8x16_t v17; // q2
  unsigned __int64 result; // x0
  int8x16_t *v19; // x2
  unsigned __int128 v20; // q4
  int8x16_t v21; // q1
  uint8x16_t v22; // q2
  unsigned __int64 v23; // d5
  unsigned __int64 v24; // x5

  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = vdupq_n_s8(a2);
  v9.n128_u64[0] = 0x3333333333333333LL;
  v9.n128_u64[1] = 0x3333333333333333LL;
  v10 = 4 * a1;
  v11 = vshrn_n_s16(
          vbslq_s8(
            v9,
            vceqq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL), v8),
            vceqzq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL))),
          4u).n64_u64[0] >> (4 * (unsigned __int8)a1) << (4 * (unsigned __int8)a1);
  v12 = v11 & 0xCCCCCCCCCCCCCCCCLL;
  if ( (v11 & 0xCCCCCCCCCCCCCCCCLL) != 0 )
    goto LABEL_7;
  if ( v11 )
    goto LABEL_9;
  while ( 1 )
  {
    v13 = *(int8x16_t *)(v7 + 16);
    v14 = vceqq_s8(v13, v8);
    v15 = vcgeq_u8(v14, v13);
    if ( vpmaxq_u8(v15, v15).n128_u64[0] )
      break;
    v16 = *(int8x16_t *)(v7 + 32);
    v7 += 32LL;
    v13 = v16;
    v14 = vceqq_s8(v16, v8);
    v17 = vcgeq_u8(v14, v16);
    if ( vpmaxq_u8(v17, v17).n128_u64[0] )
    {
      v7 -= 16LL;
      break;
    }
  }
  v7 += 16LL;
  v11 = vshrn_n_s16(vbslq_s8(v9, v14, vceqzq_s8(v13)), 4u).n64_u64[0];
  v12 = v11 & 0xCCCCCCCCCCCCCCCCLL;
  if ( (v11 & 0xCCCCCCCCCCCCCCCCLL) != 0 )
  {
LABEL_7:
    result = v7 + 15 - (__clz(v11 & 0x3333333333333333LL & (v12 - 1)) >> 2);
    if ( (v11 & 0x3333333333333333LL & (v12 - 1)) == 0 )
      return 0;
  }
  else
  {
LABEL_9:
    v19 = (int8x16_t *)(v7 + 16);
    v20 = *(_OWORD *)&v9 & __PAIR128__(0xFF0FFF0FFF0FFF0FLL, 0xFF0FFF0FFF0FFF0FLL);
    do
    {
      if ( v11 )
      {
        v10 = (__int64)v19;
        a7 = v11;
      }
      v21 = *v19++;
      v22 = vbslq_s8((int8x16_t)v20, vceqq_s8(v21, v8), vceqzq_s8(v21));
      v11 = vpmaxq_u8(v22, v22).n128_u64[0];
    }
    while ( (v11 & 0xCCCCCCCCCCCCCCCCLL) == 0 );
    v23 = vpaddq_s8(
            (int8x16_t)(*(_OWORD *)&v22 & __PAIR128__(0xF0FFF0FFF0FFF0FFLL, 0xF0FFF0FFF0FFF0FFLL)),
            (int8x16_t)(*(_OWORD *)&v22 & __PAIR128__(0xF0FFF0FFF0FFF0FFLL, 0xF0FFF0FFF0FFF0FFLL))).n128_u64[0];
    v24 = (v23 & 0xCCCCCCCCCCCCCCCCLL) - 1;
    if ( (v23 & 0x3333333333333333LL & v24) != 0 )
    {
      a7 = v23 & 0x3333333333333333LL & v24;
      v10 = (__int64)v19;
    }
    return v10 - 1 - (__clz(a7) >> 2);
  }
  return result;
}
