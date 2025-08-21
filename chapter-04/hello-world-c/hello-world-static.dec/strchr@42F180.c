__int64 __fastcall strchr(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x2
  int8x16_t v3; // q0
  int8x16_t v4; // q4
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x1
  __int64 result; // x0
  int8x16_t v8; // q1
  int8x16_t v9; // q3
  int8x16_t v10; // q2
  int8x16_t v11; // t1
  unsigned __int64 v12; // x1

  v2 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = vdupq_n_s8(a2);
  v4.n128_u64[0] = 0x3333333333333333LL;
  v4.n128_u64[1] = 0x3333333333333333LL;
  v5 = vshrn_n_s16(
         vbslq_s8(
           v4,
           vceqq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL), v3),
           vceqzq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL))),
         4u).n64_u64[0] >> (4 * (unsigned __int8)a1);
  if ( v5 )
  {
    v6 = __clz(__rbit64(v5));
    result = a1 + (v6 >> 2);
    if ( (v6 & 2) != 0 )
      return 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *(int8x16_t *)(v2 + 16);
      v9 = vceqq_s8(v8, v3);
      v10 = vcgeq_u8(v9, v8);
      if ( vpmaxq_u8(v10, v10).n128_u64[0] )
        break;
      v11 = *(int8x16_t *)(v2 + 32);
      v2 += 32LL;
      v9 = vceqq_s8(v11, v3);
      v10 = vcgeq_u8(v9, v11);
      if ( vpmaxq_u8(v10, v10).n128_u64[0] )
      {
        v2 -= 16LL;
        break;
      }
    }
    v12 = __clz(__rbit64(vshrn_n_s16(vbslq_s8(v4, v9, v10), 4u).n64_u64[0]));
    result = v2 + 16 + (v12 >> 2);
    if ( (v12 & 2) != 0 )
      return 0;
  }
  return result;
}
