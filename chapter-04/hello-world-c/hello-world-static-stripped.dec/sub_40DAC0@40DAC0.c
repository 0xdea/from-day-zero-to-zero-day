__int64 __fastcall sub_40DAC0(int8x16_t *a1, int8x16_t *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x3
  unsigned __int64 v4; // x5
  unsigned __int64 v5; // x4
  unsigned __int64 v6; // x6
  char *v9; // x7
  char *v10; // x8
  unsigned __int64 v11; // x2
  bool v14; // cc
  unsigned __int64 v15; // x3
  unsigned __int64 v16; // x4
  __int64 result; // x0
  char *v18; // x7
  char *v19; // x8
  __int64 v21; // x6
  unsigned __int64 v22; // x2
  int8x16_t v23; // q2
  int8x16_t v24; // q3
  uint8x16_t v25; // q0
  int8x16_t v26; // t1
  int8x16_t v27; // q4
  int8x16_t v28; // t1
  uint8x16_t v29; // q0
  unsigned __int64 v30; // d0
  unsigned __int64 v32; // x6

  if ( a3 < 0x10 )
  {
    v18 = (char *)a1 + a3;
    v19 = (char *)a2 + a3;
    if ( (a3 & 8) != 0 )
    {
      v3 = a1->n128_u64[0];
      v5 = a2->n128_u64[0];
      v4 = *((_QWORD *)v18 - 1);
      v6 = *((_QWORD *)v19 - 1);
      goto LABEL_27;
    }
    if ( (a3 & 4) != 0 )
    {
      v3 = a1->n128_u32[0];
      v5 = a2->n128_u32[0];
      v4 = *((unsigned int *)v18 - 1);
      v6 = *((unsigned int *)v19 - 1);
      goto LABEL_27;
    }
    if ( (a3 & 2) != 0 )
    {
      v3 = a1->n128_u16[0];
      v5 = a2->n128_u16[0];
      if ( (_DWORD)v3 != (_DWORD)v5 )
      {
LABEL_29:
        v15 = bswap64(v3);
        v16 = bswap64(v5);
        if ( v15 >= v16 )
          return v15 != v16;
        else
          return (unsigned int)-(v15 != v16);
      }
    }
    result = 0;
    if ( (a3 & 1) != 0 )
      return (unsigned __int8)*(v18 - 1) - (unsigned int)(unsigned __int8)*(v19 - 1);
  }
  else
  {
    v3 = a1->n128_u64[0];
    v4 = a1->n128_u64[1];
    v5 = a2->n128_u64[0];
    v6 = a2->n128_u64[1];
    if ( a3 == 16 || v3 != v5 || v4 != v6 )
      goto LABEL_27;
    v9 = (char *)a1 + a3;
    v10 = (char *)a2 + a3;
    if ( a3 <= 0x20 )
    {
LABEL_26:
      v3 = *((_QWORD *)v9 - 2);
      v4 = *((_QWORD *)v9 - 1);
      v5 = *((_QWORD *)v10 - 2);
      v6 = *((_QWORD *)v10 - 1);
      goto LABEL_27;
    }
    if ( a3 < 0xA0 )
    {
      v11 = a3 - 32;
      while ( 1 )
      {
        v3 = a1[1].n128_u64[0];
        v4 = a1[1].n128_u64[1];
        v5 = a2[1].n128_u64[0];
        v6 = a2[1].n128_u64[1];
        if ( v3 != v5 || v4 != v6 )
          goto LABEL_27;
        if ( v11 <= 0x10 )
          goto LABEL_26;
        v3 = a1[2].n128_u64[0];
        v4 = a1[2].n128_u64[1];
        v5 = a2[2].n128_u64[0];
        v6 = a2[2].n128_u64[1];
        if ( v3 != v5 || v4 != v6 )
          goto LABEL_27;
        a1 += 2;
        a2 += 2;
LABEL_25:
        v14 = v11 > 0x20;
        v11 -= 32LL;
        if ( !v14 )
          goto LABEL_26;
      }
    }
    v3 = a1[1].n128_u64[0];
    v4 = a1[1].n128_u64[1];
    v5 = a2[1].n128_u64[0];
    v6 = a2[1].n128_u64[1];
    if ( v3 != v5 || v4 != v6 )
    {
LABEL_27:
      if ( v3 == v5 )
      {
        v3 = v4;
        v5 = v6;
      }
      goto LABEL_29;
    }
    v21 = ((unsigned __int8)a2 & 0xF) - 16LL;
    a2 = (int8x16_t *)((char *)a2 - v21);
    a1 = (int8x16_t *)((char *)a1 - v21);
    v22 = a3 + v21 - 80;
    do
    {
      v14 = v22 > 0x40;
      v22 -= 64LL;
      v23 = a1[3];
      v24 = a2[3];
      v25 = vpmaxq_u8(veorq_s8(a1[1], a2[1]), veorq_s8(a1[2], a2[2]));
      v26 = a1[4];
      a1 += 4;
      v27 = v26;
      v28 = a2[4];
      a2 += 4;
      v29 = vpmaxq_u8(v25, vpmaxq_u8(veorq_s8(v23, v24), veorq_s8(v27, v28)));
      v30 = vpmaxq_u8(v29, v29).n128_u64[0];
    }
    while ( v14 && v30 == 0 );
    v11 = v22 + 80;
    if ( !v30 )
      goto LABEL_25;
    v32 = (__clz(bswap64(v30)) & 0xFFFFFFFFFFFFFFF8LL) - 48;
    if ( bswap64(*(unsigned __int64 *)((char *)a1->n128_u64 + v32)) >= bswap64(*(unsigned __int64 *)((char *)a2->n128_u64 + v32)) )
      return 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
