unsigned __int64 __fastcall strchrnul(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x2
  int8x16_t v3; // q0
  unsigned __int64 v4; // x1
  int16x8_t v6; // q3
  int8x16_t v7; // t1

  v2 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = vdupq_n_s8(a2);
  v4 = vshrn_n_s16(
         vcgeq_u8(vceqq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL), v3), *(uint8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL)),
         4u).n64_u64[0] >> (4 * (unsigned __int8)a1);
  if ( v4 )
    return a1 + (__clz(__rbit64(v4)) >> 2);
  while ( 1 )
  {
    v6 = vcgeq_u8(vceqq_s8(*(int8x16_t *)(v2 + 16), v3), *(uint8x16_t *)(v2 + 16));
    if ( vpmaxq_u8(v6, v6).n128_u64[0] )
      break;
    v7 = *(int8x16_t *)(v2 + 32);
    v2 += 32LL;
    v6 = vcgeq_u8(vceqq_s8(v7, v3), v7);
    if ( vpmaxq_u8(v6, v6).n128_u64[0] )
    {
      v2 -= 16LL;
      return v2 + 16 + (__clz(__rbit64(vshrn_n_s16(v6, 4u).n64_u64[0])) >> 2);
    }
  }
  return v2 + 16 + (__clz(__rbit64(vshrn_n_s16(v6, 4u).n64_u64[0])) >> 2);
}
