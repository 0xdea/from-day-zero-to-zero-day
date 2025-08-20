int8x16_t *__fastcall _memset_kunpeng(int8x16_t *result, unsigned int a2, unsigned __int64 a3)
{
  int8x16_t v3; // q0
  int8x16_t *v4; // x4
  _OWORD *v5; // x3
  unsigned __int64 v6; // x2
  _OWORD *v7; // x3
  bool v8; // cf
  unsigned __int64 v9; // x2
  _OWORD *v10; // x3
  unsigned __int64 v11; // x2
  _OWORD *v12; // x3
  unsigned __int64 v13; // x2

  v3 = vdupq_n_s8(a2);
  v4 = (int8x16_t *)((char *)result + a3);
  if ( a3 >= 0x80 )
  {
    *result = v3;
    v5 = (_OWORD *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) - 16);
    v6 = (unsigned __int64)&v4[-5] - ((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) - 1;
    do
    {
      v5[2] = v3;
      v5[3] = v3;
      v5[4] = v3;
      v5[5] = v3;
      v7 = v5 + 4;
      v8 = v6 >= 0x40;
      v9 = v6 - 64;
      if ( !v8 )
        break;
      v7[2] = v3;
      v7[3] = v3;
      v7[4] = v3;
      v7[5] = v3;
      v10 = v7 + 4;
      v8 = v9 >= 0x40;
      v11 = v9 - 64;
      if ( !v8 )
        break;
      v10[2] = v3;
      v10[3] = v3;
      v10[4] = v3;
      v10[5] = v3;
      v12 = v10 + 4;
      v8 = v11 >= 0x40;
      v13 = v11 - 64;
      if ( !v8 )
        break;
      v12[2] = v3;
      v12[3] = v3;
      v12[4] = v3;
      v12[5] = v3;
      v5 = v12 + 4;
      v8 = v13 >= 0x40;
      v6 = v13 - 64;
    }
    while ( v8 );
    v4[-4] = v3;
    v4[-3] = v3;
    v4[-2] = v3;
    v4[-1] = v3;
  }
  else if ( a3 < 0x10 )
  {
    if ( (a3 & 8) != 0 )
    {
      result->n128_u64[0] = v3.n128_u64[0];
      v4[-1].n128_u64[1] = v3.n128_u64[0];
    }
    else if ( (a3 & 4) != 0 )
    {
      result->n128_u32[0] = v3.n128_u32[0];
      v4[-1].n128_u32[3] = v3.n128_u32[0];
    }
    else if ( a3 )
    {
      result->n128_u8[0] = v3.n128_u8[0];
      if ( (a3 & 2) != 0 )
        v4[-1].n128_u16[7] = v3.n128_u16[0];
    }
  }
  else
  {
    *result = v3;
    if ( (a3 & 0x40) != 0 )
    {
      result[1] = v3;
      result[2] = v3;
      result[3] = v3;
      v4[-4] = v3;
      v4[-3] = v3;
      v4[-2] = v3;
      v4[-1] = v3;
    }
    else
    {
      v4[-1] = v3;
      if ( (a3 & 0x20) != 0 )
      {
        result[1] = v3;
        v4[-2] = v3;
      }
    }
  }
  return result;
}
