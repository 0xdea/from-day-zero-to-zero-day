unsigned __int64 __fastcall _strlen_generic(__int64 a1)
{
  unsigned __int64 v1; // x1
  unsigned __int64 v2; // x2
  int16x8_t v4; // q1
  int8x16_t v5; // t1

  v1 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v2 = vshrn_n_s16(vceqzq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFF0LL)), 4u).n64_u64[0] >> (4 * (unsigned __int8)a1);
  if ( v2 )
    return __clz(__rbit64(v2)) >> 2;
  while ( 1 )
  {
    v4 = vceqzq_s8(*(int8x16_t *)(v1 + 16));
    if ( vpmaxq_u8(v4, v4).n128_u64[0] )
      break;
    v5 = *(int8x16_t *)(v1 + 32);
    v1 += 32LL;
    v4 = vceqzq_s8(v5);
    if ( vpmaxq_u8(v4, v4).n128_u64[0] )
    {
      v1 -= 16LL;
      return v1 - a1 + 16 + (__clz(__rbit64(vshrn_n_s16(v4, 4u).n64_u64[0])) >> 2);
    }
  }
  return v1 - a1 + 16 + (__clz(__rbit64(vshrn_n_s16(v4, 4u).n64_u64[0])) >> 2);
}
