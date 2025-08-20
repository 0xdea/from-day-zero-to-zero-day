unsigned __int64 __fastcall strcmp(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x10
  unsigned __int64 v3; // x3
  unsigned __int64 v4; // x2
  unsigned __int64 v5; // t1
  unsigned __int64 v7; // x6
  char v8; // w9
  _QWORD *v10; // x0
  __int64 v11; // x3
  __int64 v12; // t1
  unsigned __int64 v13; // x6
  __int64 v14; // x2
  unsigned int v15; // t1
  __int64 v16; // x3
  unsigned int v17; // t1
  __int64 v19; // x9
  _QWORD *v20; // x1
  char *v21; // x1
  __int64 v22; // t1
  unsigned __int64 v23; // x7
  unsigned __int64 v24; // x4
  signed __int64 v25; // x5
  unsigned __int64 v26; // t1
  bool v27; // zf
  __int64 v28; // x9

  v2 = a2 - (_QWORD)a1;
  if ( ((a2 - (_QWORD)a1) & 7) == 0 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
    {
      v10 = (_QWORD *)((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFF8LL);
      v11 = *(_QWORD *)((char *)v10 + v2);
      v12 = *v10;
      a1 = v10 + 1;
      v13 = 0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)a2);
      v4 = v12 | v13;
      v3 = v11 | v13;
      goto LABEL_4;
    }
    do
    {
      v3 = *(unsigned __int64 *)((char *)a1 + v2);
      v5 = *a1++;
      v4 = v5;
LABEL_4:
      ;
    }
    while ( ((v4 - 0x101010101010101LL) & ~(v4 | 0x7F7F7F7F7F7F7F7FLL)) == 0 && v4 == v3 );
    v7 = v4 ^ v3 | (v4 - 0x101010101010101LL) & ~(v4 | 0x7F7F7F7F7F7F7F7FLL);
    goto LABEL_9;
  }
  if ( ((unsigned __int8)a1 & 7) == 0 )
  {
LABEL_18:
    v19 = -8LL * a2;
    v20 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    v22 = *v20;
    v21 = (char *)(v20 + 1);
    v23 = v22 | (0x101010101010101uLL >> v19);
    v24 = (v23 - 0x101010101010101LL) & ~(v23 | 0x7F7F7F7F7F7F7F7FLL);
    if ( v24 )
      goto LABEL_25;
    v25 = v21 - (char *)a1;
    do
    {
      v23 = *(unsigned __int64 *)((char *)a1 + v25);
      v3 = *(unsigned __int64 *)((char *)a1 + v2);
      v26 = *a1++;
      v4 = v26;
      v24 = (v23 - 0x101010101010101LL) & ~(v23 | 0x7F7F7F7F7F7F7F7FLL);
      if ( v24 )
        v27 = 0;
      else
        v27 = v4 == v3;
    }
    while ( v27 );
    v7 = v4 ^ v3 | (v24 << v19);
    if ( !v7 )
    {
LABEL_25:
      v4 = *a1;
      v28 = -v19;
      v3 = v23 >> v28;
      v7 = *a1 ^ (v23 >> v28) | (v24 >> v28);
    }
LABEL_9:
    v8 = __clz(bswap64(v7));
    return (bswap64(v4) << v8 >> 56) - (bswap64(v3) << v8 >> 56);
  }
  while ( 1 )
  {
    v15 = *(unsigned __int8 *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    v14 = v15;
    v17 = *(unsigned __int8 *)a2++;
    v16 = v17;
    if ( !(_DWORD)v14 || (_DWORD)v14 != (_DWORD)v16 )
      return v14 - v16;
    if ( ((unsigned __int8)a1 & 7) == 0 )
      goto LABEL_18;
  }
}
