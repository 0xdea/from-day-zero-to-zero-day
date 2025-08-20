unsigned __int64 __fastcall dl_bti_protect(__int64 a1, int a2)
{
  unsigned __int64 v3; // x3
  unsigned int v5; // w1
  unsigned __int64 result; // x0
  __int64 v7; // x20
  unsigned __int64 v8; // x19
  __int64 v9; // x22
  __int64 v10; // x6
  __int64 v11; // x1
  int v12; // w2
  __int64 v13; // x6
  __int64 v14; // x1
  size_t v15; // x1
  void *v16; // x0
  unsigned __int64 v17; // x0

  v3 = *(_QWORD *)(a1 + 752);
  v5 = *(unsigned __int16 *)(a1 + 768);
  result = v3 + 56LL * *(unsigned __int16 *)(a1 + 768);
  if ( v3 < result )
  {
    v7 = dl_pagesize - 1;
    v8 = v3;
    v9 = -dl_pagesize;
    do
    {
      while ( (*(_QWORD *)v8 & 0x1FFFFFFFFLL) != 0x100000001LL )
      {
LABEL_3:
        v8 += 56LL;
        if ( v8 >= v3 + 56LL * v5 )
          return result;
      }
      v10 = *(_QWORD *)(v8 + 16);
      v11 = v10 + *(_QWORD *)(v8 + 32) + v7;
      v12 = ((*(_DWORD *)(v8 + 4) >> 2) & 1) + 20;
      v13 = v10 & v9;
      v14 = v11 & v9;
      if ( (*(_DWORD *)(v8 + 4) & 2LL) != 0 )
        v12 |= 2u;
      v15 = v14 - v13;
      v16 = (void *)(v13 + *(_QWORD *)a1);
      if ( a2 == -1 )
      {
        result = mprotect(v16, v15, v12);
        v3 = *(_QWORD *)(a1 + 752);
        v5 = *(unsigned __int16 *)(a1 + 768);
        goto LABEL_3;
      }
      v17 = mmap64(v16, v15, v12, 2066, a2, v9 & *(_QWORD *)(v8 + 8));
      v3 = *(_QWORD *)(a1 + 752);
      result = v17 == -1;
      v5 = *(unsigned __int16 *)(a1 + 768);
      v8 += 56LL;
      *(_BYTE *)(a1 + 1088) = result;
    }
    while ( v8 < v3 + 56LL * v5 );
  }
  return result;
}
