unsigned __int64 __fastcall sub_4100C0(unsigned __int64 a1)
{
  __int64 v1; // x3
  unsigned __int64 v2; // x4
  char v3; // cf
  bool v4; // zf
  __int64 v5; // x0
  unsigned __int64 v6; // x4
  __int64 v8; // x3
  unsigned __int64 v9; // x4
  char v10; // cf
  bool v11; // zf
  __int64 v12; // x0
  unsigned __int64 v13; // x4
  unsigned __int64 v14; // x1
  int8x16_t v15; // q1
  int8x16_t v16; // q2
  uint8x16_t v17; // q0
  unsigned __int64 v18; // x3
  int16x8_t v19; // q0
  unsigned __int64 v20; // x0
  int8x16_t v21; // q0
  int8x16_t v22; // q0
  unsigned __int64 v23; // x3

  if ( (a1 & 0xFFF) > 0xFE0 )
  {
    v14 = a1 & 0xFFFFFFFFFFFFFFE0LL;
    v21 = vdupq_n_s32(0xC0300C03);
    v22 = vpaddq_s8(
            vandq_s8(vceqzq_s8(*(int8x16_t *)(a1 & 0xFFFFFFFFFFFFFFE0LL)), v21),
            vandq_s8(vceqzq_s8(*(int8x16_t *)((a1 & 0xFFFFFFFFFFFFFFE0LL) + 0x10)), v21));
    v23 = vpaddq_s8(v22, v22).n128_u64[0] >> (2 * (unsigned __int8)a1);
    if ( v23 )
      return __clz(__rbit64(v23)) >> 1;
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = (*(_QWORD *)a1 - 0x101010101010101LL) & ~(*(_QWORD *)a1 | 0x7F7F7F7F7F7F7F7FLL);
    if ( v2 )
    {
      v3 = 0;
      v4 = 0;
    }
    else
    {
      v3 = 1;
      v4 = ((v1 - 0x101010101010101LL) & ~(v1 | 0x7F7F7F7F7F7F7F7FLL)) == 0;
    }
    if ( !v4 )
    {
      if ( v3 )
        v2 = (v1 - 0x101010101010101LL) & ~(v1 | 0x7F7F7F7F7F7F7F7FLL);
      v5 = 8;
      v6 = bswap64(v2);
      if ( !v3 )
        v5 = 0;
      return v5 + (__clz(v6) >> 3);
    }
    v8 = *(_QWORD *)(a1 + 24);
    v9 = (*(_QWORD *)(a1 + 16) - 0x101010101010101LL) & ~(*(_QWORD *)(a1 + 16) | 0x7F7F7F7F7F7F7F7FLL);
    if ( v9 )
    {
      v10 = 0;
      v11 = 0;
    }
    else
    {
      v10 = 1;
      v11 = ((v8 - 0x101010101010101LL) & ~(v8 | 0x7F7F7F7F7F7F7F7FLL)) == 0;
    }
    if ( !v11 )
    {
      if ( v10 )
        v9 = (v8 - 0x101010101010101LL) & ~(v8 | 0x7F7F7F7F7F7F7F7FLL);
      v12 = 24;
      v13 = __clz(bswap64(v9));
      if ( !v10 )
        v12 = 16;
      return v12 + (v13 >> 3);
    }
    v14 = a1 & 0xFFFFFFFFFFFFFFE0LL;
  }
  do
  {
    v15 = *(int8x16_t *)(v14 + 32);
    v16 = *(int8x16_t *)(v14 + 48);
    v14 += 32LL;
    v17 = vpminq_u8(v15, v16);
    v18 = vceqz_s8((int8x8_t)vpminq_u8(v17, v17).n128_u64[0]).n64_u64[0];
  }
  while ( !v18 );
  v19 = vceqzq_s8(v15);
  v20 = v14 - a1;
  if ( !(_DWORD)v18 )
  {
    v19 = vceqzq_s8(v16);
    v20 += 16LL;
  }
  return v20 + (__clz(__rbit64(vshrn_n_s16(v19, 4u).n64_u64[0])) >> 2);
}
