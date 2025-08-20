unsigned __int64 __fastcall strnlen(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2
  unsigned __int64 v3; // x3
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x4
  unsigned __int64 v6; // x5
  int8x16_t v7; // t1
  int16x8_t v8; // q1
  bool v9; // cf

  v2 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a2 )
    return a2;
  v3 = vshrn_n_s16(vceqzq_s8(*(int8x16_t *)v2), 4u).n64_u64[0] >> (4 * (unsigned __int8)a1);
  if ( v3 )
  {
    result = __clz(__rbit64(v3)) >> 2;
    if ( a2 <= result )
      return a2;
    return result;
  }
  v5 = v2 - a1 + 17;
  v6 = a2 - v5;
  if ( a2 < v5 )
    return a2;
  if ( (v6 & 0x10) == 0 )
    goto LABEL_11;
  v2 -= 16LL;
  while ( 1 )
  {
    v7 = *(int8x16_t *)(v2 + 32);
    v2 += 32LL;
    v8 = vceqzq_s8(v7);
    if ( vpmaxq_u8(v8, v8).n128_u64[0] )
      break;
LABEL_11:
    v9 = v6 >= 0x20;
    v6 -= 32LL;
    v8 = vceqzq_s8(*(int8x16_t *)(v2 + 16));
    if ( !v9 || vpmaxq_u8(v8, v8).n128_u64[0] )
    {
      v2 += 16LL;
      break;
    }
  }
  result = v2 - a1 + (__clz(__rbit64(vshrn_n_s16(v8, 4u).n64_u64[0])) >> 2);
  if ( a2 <= result )
    return a2;
  return result;
}
