__int64 __fastcall int_mallinfo(__int64 result, _QWORD *a2)
{
  _QWORD *v2; // x29
  __int64 v3; // x30
  unsigned __int64 *v4; // x9
  unsigned __int64 *v5; // x6
  int v6; // w7
  __int64 v7; // x8
  unsigned __int64 v8; // x2
  __int64 v9; // x5
  unsigned __int64 v10; // x3
  int v11; // w4
  unsigned __int64 v12; // x10
  __int64 v13; // x5
  unsigned __int64 *i; // x2
  unsigned __int64 v15; // x3
  __int64 v16; // x12
  __int64 v17; // x4
  __int64 v18; // x7
  __int64 v19; // x2
  __int64 v20; // x8
  __int64 v21; // x5
  __int64 v22; // x2
  _QWORD v23[2]; // [xsp+0h] [xbp-10h] BYREF

  v4 = (unsigned __int64 *)(result + 16);
  v5 = (unsigned __int64 *)(result + 96);
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *v4;
    if ( *v4 )
    {
      while ( (v8 & 0xF) == 0 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        ++v6;
        v10 = (v8 + 16) >> 12;
        v7 += *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = v10 ^ v9;
        if ( v10 == v9 )
          goto LABEL_7;
      }
      v23[0] = v2;
      v23[1] = v3;
      v2 = v23;
      result = malloc_printerr("int_mallinfo(): unaligned fastbin chunk detected");
    }
LABEL_7:
    ++v4;
  }
  while ( v5 != v4 );
  v11 = 1;
  v12 = *(_QWORD *)(*(_QWORD *)(result + 96) + 8LL) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v12 + v7;
  do
  {
    for ( i = (unsigned __int64 *)v5[3]; i != v5; v13 += v15 & 0xFFFFFFFFFFFFFFF8LL )
    {
      v15 = i[1];
      ++v11;
      i = (unsigned __int64 *)i[3];
    }
    v5 += 2;
  }
  while ( (unsigned __int64 *)(result + 2128) != v5 );
  v16 = *(_QWORD *)(result + 2184);
  v17 = a2[1] + v11;
  v18 = a2[2] + v6;
  v19 = v16 + a2[7] - v13;
  v20 = a2[6] + v7;
  v21 = a2[8] + v13;
  *a2 += v16;
  a2[1] = v17;
  a2[2] = v18;
  a2[6] = v20;
  a2[7] = v19;
  a2[8] = v21;
  if ( (_UNKNOWN *)result == &main_arena )
  {
    v22 = qword_490620;
    a2[9] = v12;
    result = dword_49060C;
    a2[3] = dword_49060C;
    a2[4] = v22;
    a2[5] = 0;
  }
  return result;
}
