int8x16_t *__fastcall _memset_zva64(int8x16_t *result, char a2, unsigned __int64 a3)
{
  int8x16_t v3; // q0
  int8x16_t *v4; // x4
  unsigned __int64 v5; // x3
  char *v7; // x2
  _OWORD *v8; // x3
  unsigned __int64 v9; // x2
  bool v10; // cc
  _OWORD *v11; // x3
  unsigned __int64 v12; // x2
  int8x16_t *v13; // x3

  v3 = vdupq_n_s8(a2);
  v4 = (int8x16_t *)((char *)result + a3);
  if ( a3 > 0x60 )
  {
    v5 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL;
    *result = v3;
    if ( a3 >= 0x100 && a2 == 0 )
    {
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x10) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x20) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x30) = v3;
      v11 = (_OWORD *)((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL);
      v11[4] = v3;
      v11[5] = v3;
      v11[6] = v3;
      v11[7] = v3;
      v12 = (unsigned __int64)v4[-16].n128_u64 - ((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL);
      v13 = (int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL) + 128);
      do
      {
        __asm { DC              ZVA, X3 }
        v13 += 4;
        v10 = v12 > 0x40;
        v12 -= 64LL;
      }
      while ( v10 );
      *v13 = v3;
      v13[1] = v3;
      v13[2] = v3;
      v13[3] = v3;
      v4[-4] = v3;
      v4[-3] = v3;
      v4[-2] = v3;
      v4[-1] = v3;
    }
    else
    {
      v7 = (char *)v4 - v5;
      v8 = (_OWORD *)(v5 - 16);
      v9 = (unsigned __int64)(v7 - 80);
      do
      {
        v8[2] = v3;
        v8[3] = v3;
        v8[4] = v3;
        v8[5] = v3;
        v8 += 4;
        v10 = v9 > 0x40;
        v9 -= 64LL;
      }
      while ( v10 );
      v4[-4] = v3;
      v4[-3] = v3;
      v4[-2] = v3;
      v4[-1] = v3;
    }
  }
  else if ( a3 >= 0x10 )
  {
    *result = v3;
    if ( (a3 & 0x40) != 0 )
    {
      result[1] = v3;
      result[2] = v3;
      result[3] = v3;
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
  else if ( (a3 & 8) != 0 )
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
  return result;
}
