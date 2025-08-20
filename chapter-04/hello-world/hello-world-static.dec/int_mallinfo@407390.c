__int64 __fastcall int_mallinfo(
        __int64 result,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned __int64 *v10; // x9
  unsigned __int64 *v11; // x6
  int v12; // w7
  __int64 v13; // x8
  unsigned __int64 v14; // x2
  __int64 v15; // x5
  unsigned __int64 v16; // x3
  int v17; // w4
  unsigned __int64 v18; // x10
  __int64 v19; // x5
  unsigned __int64 *i; // x2
  unsigned __int64 v21; // x3
  __int64 v22; // x12
  __int64 v23; // x4
  __int64 v24; // x7
  __int64 v25; // x2
  __int64 v26; // x8
  __int64 v27; // x5
  __int64 v28; // x2

  v10 = (unsigned __int64 *)(result + 16);
  v11 = (unsigned __int64 *)(result + 96);
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *v10;
    if ( *v10 )
    {
      do
      {
        if ( (v14 & 0xF) != 0 )
          malloc_printerr((__int64)"int_mallinfo(): unaligned fastbin chunk detected", a3, a4, a5, a6, a7, a8, a9, a10);
        v15 = *(_QWORD *)(v14 + 16);
        ++v12;
        v16 = (v14 + 16) >> 12;
        v13 += *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = v16 ^ v15;
      }
      while ( v16 != v15 );
    }
    ++v10;
  }
  while ( v11 != v10 );
  v17 = 1;
  v18 = *(_QWORD *)(*(_QWORD *)(result + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v18 + v13;
  do
  {
    for ( i = (unsigned __int64 *)v11[3]; i != v11; v19 += v21 & 0xFFFFFFFFFFFFFFF8LL )
    {
      v21 = i[1];
      ++v17;
      i = (unsigned __int64 *)i[3];
    }
    v11 += 2;
  }
  while ( (unsigned __int64 *)(result + 2128) != v11 );
  v22 = *(_QWORD *)(result + 2184);
  v23 = a2[1] + v17;
  v24 = a2[2] + v12;
  v25 = v22 + a2[7] - v19;
  v26 = a2[6] + v13;
  v27 = a2[8] + v19;
  *a2 += v22;
  a2[1] = v23;
  a2[2] = v24;
  a2[6] = v26;
  a2[7] = v25;
  a2[8] = v27;
  if ( (_UNKNOWN *)result == &main_arena )
  {
    v28 = qword_490620;
    a2[9] = v18;
    result = dword_49060C;
    a2[3] = dword_49060C;
    a2[4] = v28;
    a2[5] = 0;
  }
  return result;
}
