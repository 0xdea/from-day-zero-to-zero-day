unsigned __int64 __fastcall sub_42F424(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x13
  unsigned __int64 v4; // x3
  unsigned __int64 v5; // t1
  unsigned __int64 v6; // x4
  unsigned __int64 v7; // t1
  bool v8; // cc
  unsigned __int64 v9; // x6
  __int64 v10; // x14
  __int64 v11; // x5
  bool v12; // zf
  unsigned __int64 v13; // x7
  unsigned __int64 v14; // x12
  unsigned __int64 result; // x0
  __int64 *v16; // x0
  __int64 *v17; // x1
  __int64 v18; // x3
  __int64 v19; // t1
  __int64 v20; // x4
  __int64 v21; // t1
  unsigned __int64 v22; // x9
  __int64 v23; // x3
  unsigned int v24; // t1
  __int64 v25; // x4
  unsigned int v26; // t1
  bool v27; // cf
  unsigned __int64 v29; // x13
  unsigned int v30; // t1
  unsigned int v31; // t1
  __int64 v33; // x12
  unsigned __int64 *v34; // x1
  unsigned __int64 *v35; // x0
  unsigned __int64 v36; // t1
  unsigned __int64 *v37; // x1
  unsigned __int64 v38; // x8
  unsigned __int64 v39; // x9
  __int64 v40; // x13
  unsigned __int64 v41; // x15
  unsigned __int64 v42; // x14
  unsigned __int64 v43; // t1
  unsigned __int64 v44; // x6
  __int64 v45; // x5
  __int64 v46; // x10
  unsigned __int64 v47; // x6
  unsigned __int64 v49; // t1

  if ( !a3 )
    return 0;
  v3 = a1 & 7;
  if ( ((a1 ^ a2) & 7) != 0 )
  {
    if ( a3 >= 0x10 )
    {
      if ( (a1 & 7) == 0 )
      {
LABEL_37:
        v33 = 8 * a2;
        v34 = (unsigned __int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        v36 = *(_QWORD *)a1;
        v35 = (unsigned __int64 *)(a1 + 8);
        v4 = v36;
        v38 = *v34;
        v39 = v34[1];
        v37 = v34 + 2;
        v40 = -1LL << -(char)v33;
        v41 = -v33 & 0x3F;
        if ( (v33 & 0x40) != 0 )
          goto LABEL_43;
        while ( 1 )
        {
          v8 = a3 > 8;
          a3 -= 8LL;
          v6 = (v38 >> v33) | (v39 << v41);
          v9 = v4 ^ v6;
          v42 = v8 ? v4 ^ v6 : -1LL;
          v11 = (v4 - 0x101010101010101LL) & ~(v4 | 0x7F7F7F7F7F7F7F7FLL);
          if ( v42 | v11 )
            goto LABEL_12;
          v43 = *v35++;
          v4 = v43;
LABEL_43:
          v6 = v39 >> v33;
          v44 = (v39 >> v33) ^ v4;
          v45 = (v4 - 0x101010101010101LL) & ~(v4 | 0x7F7F7F7F7F7F7F7FLL);
          v13 = (v44 | v45) & ~v40;
          if ( a3 <= v41 >> 3 )
            v46 = -1;
          else
            v46 = (v44 | v45) & ~v40;
          if ( v46 )
            goto LABEL_13;
          v38 = *v37;
          v39 = v37[1];
          v37 += 2;
          v6 = v38 << v41;
          v47 = (v38 << v41) ^ v4;
          v13 = (v47 | v45) & v40;
          if ( a3 <= 8 ? -1LL : (v47 | v45) & v40 )
            goto LABEL_13;
          v49 = *v35++;
          v4 = v49;
          a3 -= 8LL;
        }
      }
      v29 = -(__int64)v3 & 7;
      a3 -= v29;
      while ( 1 )
      {
        v30 = *(unsigned __int8 *)a1++;
        v23 = v30;
        v31 = *(unsigned __int8 *)a2++;
        v25 = v31;
        if ( !(_DWORD)v23 || (_DWORD)v23 != (_DWORD)v25 )
          break;
        v8 = v29-- > 1;
        if ( !v8 )
          goto LABEL_37;
      }
    }
    else
    {
      do
      {
        v24 = *(unsigned __int8 *)a1++;
        v23 = v24;
        v26 = *(unsigned __int8 *)a2++;
        v25 = v26;
        v8 = a3-- > 1;
        v27 = v8 && (_DWORD)v23 != 0;
      }
      while ( v27 && (_DWORD)v23 == (_DWORD)v25 );
    }
    return v23 - v25;
  }
  if ( (a1 & 7) != 0 )
  {
    v16 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF8LL);
    v17 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v19 = *v16;
    a1 = (unsigned __int64)(v16 + 1);
    v18 = v19;
    v21 = *v17;
    a2 = (unsigned __int64)(v17 + 1);
    v20 = v21;
    v22 = 0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)v3);
    v27 = __CFADD__(a3, v3);
    a3 += v3;
    if ( v27 )
      a3 = -1;
    v4 = v18 | v22;
    v6 = v20 | v22;
    goto LABEL_5;
  }
  do
  {
    v5 = *(_QWORD *)a1;
    a1 += 8LL;
    v4 = v5;
    v7 = *(_QWORD *)a2;
    a2 += 8LL;
    v6 = v7;
LABEL_5:
    v8 = a3 > 8;
    a3 -= 8LL;
    v9 = v4 ^ v6;
    if ( v8 )
      v10 = v4 ^ v6;
    else
      v10 = -1;
    v11 = (v4 - 0x101010101010101LL) & ~(v4 | 0x7F7F7F7F7F7F7F7FLL);
    if ( v11 )
      v12 = 0;
    else
      v12 = v10 == 0;
  }
  while ( v12 );
LABEL_12:
  v13 = v9 | v11;
  a3 += 8LL;
LABEL_13:
  v14 = __clz(bswap64(v13));
  result = (bswap64(v4) << v14 >> 56) - (bswap64(v6) << v14 >> 56);
  if ( a3 <= v14 >> 3 )
    return 0;
  return result;
}
