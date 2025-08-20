long double __fastcall strcpy(_QWORD *a1, unsigned __int64 a2)
{
  long double result; // q0
  unsigned __int64 v3; // x4
  unsigned __int64 v4; // x2
  unsigned __int64 v5; // d2
  unsigned __int64 v6; // x4
  __int128 v7; // q1
  __int64 v8; // x7
  unsigned __int64 v9; // x5
  int v10; // w7
  long double *v11; // x3
  int8x16_t v12; // q0
  int16x8_t v13; // q1
  long double v14; // t1
  long double *v15; // x3

  result = *(long double *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = vshrn_n_s16(vceqzq_s8(*(int8x16_t *)&result), 4u).n64_u64[0] >> (4 * (unsigned __int8)a2);
  if ( v3 )
  {
    v6 = __clz(__rbit64(v3)) >> 2;
LABEL_6:
    if ( (v6 & 8) != 0 )
    {
      v8 = *(_QWORD *)(a2 + v6 - 7);
      *a1 = *(_QWORD *)a2;
      *(_QWORD *)((char *)a1 + v6 - 7) = v8;
    }
    else
    {
      v9 = v6 - 3;
      if ( v6 < 3 )
      {
        if ( v6 )
          *(_WORD *)a1 = *(_WORD *)a2;
        *((_BYTE *)a1 + v6) = 0;
      }
      else
      {
        v10 = *(_DWORD *)(a2 + v9);
        *(_DWORD *)a1 = *(_DWORD *)a2;
        *(_DWORD *)((char *)a1 + v9) = v10;
      }
    }
    return result;
  }
  v4 = (a2 & 0xFFFFFFFFFFFFFFF0LL) + 16;
  result = *(long double *)((a2 & 0xFFFFFFFFFFFFFFF0LL) + 0x10);
  v5 = vshrn_n_s16(vceqzq_s8(*(int8x16_t *)&result), 4u).n64_u64[0];
  if ( v5 )
  {
    v6 = v4 - a2 + (__clz(__rbit64(v5)) >> 2);
    if ( (v6 & 0x10) != 0 )
    {
      result = *(long double *)a2;
      v7 = *(_OWORD *)(a2 + v6 - 15);
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)((char *)a1 + v6 - 15) = v7;
      return result;
    }
    goto LABEL_6;
  }
  v11 = (long double *)(v4 - (a2 - (_QWORD)a1));
  *(_OWORD *)a1 = *(_OWORD *)a2;
  while ( 1 )
  {
    *v11 = result;
    v11 += 2;
    v12 = *(int8x16_t *)(v4 + 16);
    v13 = vceqzq_s8(v12);
    if ( vpmaxq_u8(v13, v13).n128_u64[0] )
      break;
    *(v11 - 1) = *(long double *)&v12;
    v14 = *(long double *)(v4 + 32);
    v4 += 32LL;
    result = v14;
    v13 = vceqzq_s8(*(int8x16_t *)&v14);
    if ( vpmaxq_u8(v13, v13).n128_u64[0] )
    {
      ++v11;
      break;
    }
  }
  v15 = (long double *)((char *)v11 + (__clz(__rbit64(vshrn_n_s16(v13, 4u).n64_u64[0])) >> 2) - 31);
  result = *(long double *)((char *)v15 + a2 - (_QWORD)a1);
  *v15 = result;
  return result;
}
