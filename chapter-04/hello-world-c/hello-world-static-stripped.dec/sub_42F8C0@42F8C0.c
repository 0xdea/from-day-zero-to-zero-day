unsigned __int64 __fastcall sub_42F8C0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x3
  int8x16_t v4; // q0
  unsigned __int64 v5; // x5
  unsigned __int64 v6; // x5
  unsigned __int64 result; // x0
  unsigned __int64 v8; // x7
  unsigned __int64 v9; // x4
  int8x16_t v10; // t1
  int16x8_t v11; // q2
  bool v12; // cf
  unsigned __int64 v13; // x4
  unsigned __int64 v14; // x5

  v3 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a3 )
    return 0;
  v4 = vdupq_n_s8(a2);
  v5 = vshrn_n_s16(vceqq_s8(*(int8x16_t *)v3, v4), 4u).n64_u64[0] >> (4 * (unsigned __int8)a1);
  if ( v5 )
  {
    v6 = __clz(__rbit64(v5));
    result = a1 + (v6 >> 2);
    if ( a3 <= v6 >> 2 )
      return 0;
    return result;
  }
  v8 = v3 - a1 + 17;
  v9 = a3 - v8;
  if ( a3 < v8 )
    return 0;
  if ( (v9 & 0x10) == 0 )
    goto LABEL_10;
  v3 -= 16LL;
  while ( 1 )
  {
    v10 = *(int8x16_t *)(v3 + 32);
    v3 += 32LL;
    v11 = vceqq_s8(v10, v4);
    if ( vpmaxq_u8(v11, v11).n128_u64[0] )
      break;
LABEL_10:
    v11 = vceqq_s8(*(int8x16_t *)(v3 + 16), v4);
    v12 = v9 >= 0x20;
    v9 -= 32LL;
    if ( !v12 || vpmaxq_u8(v11, v11).n128_u64[0] )
    {
      v3 += 16LL;
      break;
    }
  }
  v13 = a3 - (v3 - a1);
  v14 = __clz(__rbit64(vshrn_n_s16(v11, 4u).n64_u64[0]));
  result = v3 + (v14 >> 2);
  if ( v13 <= v14 >> 2 )
    return 0;
  return result;
}
