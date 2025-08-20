int8x16_t *__fastcall sub_40FC40(int8x16_t *result, char a2, unsigned __int64 a3)
{
  int8x16_t v3; // q0
  int8x16_t *v4; // x4
  unsigned __int64 v5; // x3
  char *v7; // x2
  _OWORD *i; // x3
  unsigned __int64 v9; // x2
  bool v10; // cc
  char StatusReg; // w5
  int v12; // w5
  _OWORD *v13; // x3
  unsigned __int64 v14; // x2
  int8x16_t *v15; // x3
  unsigned __int64 v19; // x2
  unsigned __int64 v20; // x3
  unsigned __int64 v21; // x7
  int8x16_t *v22; // x5
  int8x16_t *v23; // x3
  unsigned __int64 v24; // x2
  __int64 v25; // x5
  __int64 v26; // x3
  char *v27; // x2

  v3 = vdupq_n_s8(a2);
  v4 = (int8x16_t *)((char *)result + a3);
  if ( a3 > 0x60 )
  {
    v5 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL;
    *result = v3;
    _ZF = a3 >= 0x100 && a2 == 0;
    if ( !_ZF )
      goto LABEL_20;
    StatusReg = _ReadStatusReg(DCZID_EL0);
    if ( (StatusReg & 0x10) != 0 )
      goto LABEL_20;
    v12 = StatusReg & 0xF;
    if ( v12 == 4 )
    {
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x10) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x20) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x30) = v3;
      v13 = (_OWORD *)((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL);
      v13[4] = v3;
      v13[5] = v3;
      v13[6] = v3;
      v13[7] = v3;
      v14 = (unsigned __int64)v4[-16].n128_u64 - ((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL);
      v15 = (int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFC0LL) + 128);
      do
      {
        __asm { DC              ZVA, X3 }
        v15 += 4;
        v10 = v14 > 0x40;
        v14 -= 64LL;
      }
      while ( v10 );
      *v15 = v3;
      v15[1] = v3;
      v15[2] = v3;
      v15[3] = v3;
      v4[-4] = v3;
      v4[-3] = v3;
      v4[-2] = v3;
      v4[-1] = v3;
      return result;
    }
    if ( v12 == 5 )
    {
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x10) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x20) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x30) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x40) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x50) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x60) = v3;
      *(int8x16_t *)(((unsigned __int64)result & 0xFFFFFFFFFFFFFFF0LL) + 0x70) = v3;
      v19 = (unsigned __int64)v4[-16].n128_u64 - ((unsigned __int64)result & 0xFFFFFFFFFFFFFF80LL);
      v20 = ((unsigned __int64)result & 0xFFFFFFFFFFFFFF80LL) + 128;
      do
      {
        __asm { DC              ZVA, X3 }
        v20 += 128LL;
        v10 = v19 > 0x80;
        v19 -= 128LL;
      }
      while ( v10 );
      v4[-8] = v3;
      v4[-7] = v3;
      v4[-6] = v3;
      v4[-5] = v3;
      v4[-4] = v3;
      v4[-3] = v3;
      v4[-2] = v3;
      v4[-1] = v3;
      return result;
    }
    v21 = (unsigned int)(4 << v12);
    if ( a3 < v21 + 64 )
    {
LABEL_20:
      v7 = (char *)v4 - v5;
      i = (_OWORD *)(v5 - 16);
      v9 = (unsigned __int64)(v7 - 80);
      goto LABEL_21;
    }
    v22 = (int8x16_t *)(v5 + v21);
    v23 = (int8x16_t *)(v5 + 16);
    v24 = (char *)v22 - (char *)v23;
    _ZF = v22 == v23;
    v25 = (unsigned __int64)v22 & ~(v21 - 1);
    if ( !_ZF )
    {
      do
      {
        *v23 = v3;
        v23[1] = v3;
        v23 += 4;
        v23[-2] = v3;
        v23[-1] = v3;
        v10 = v24 > 0x40;
        v24 -= 64LL;
      }
      while ( v10 );
    }
    v26 = v25;
    v27 = (char *)v4 - v25 - v21;
    if ( (unsigned __int64)v4->n128_u64 - v25 >= v21 )
    {
      do
      {
        __asm { DC              ZVA, X3 }
        v26 += v21;
        _CF = (unsigned __int64)v27 >= v21;
        v27 -= v21;
      }
      while ( _CF );
    }
    v9 = (unsigned __int64)&v27[v21];
    for ( i = (_OWORD *)(v26 - 32); ; i += 4 )
    {
      v10 = v9 > 0x40;
      v9 -= 64LL;
      if ( !v10 )
        break;
LABEL_21:
      i[2] = v3;
      i[3] = v3;
      i[4] = v3;
      i[5] = v3;
    }
    v4[-4] = v3;
    v4[-3] = v3;
    v4[-2] = v3;
    v4[-1] = v3;
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
