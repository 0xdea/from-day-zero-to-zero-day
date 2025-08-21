__int64 __fastcall alloc_new_heap(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // x4
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x1
  unsigned __int64 v8; // x20
  unsigned int v9; // w25
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v13; // x0
  __int64 v14; // x25
  unsigned __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0

  v4 = qword_490600;
  v6 = 4 * qword_490600;
  if ( !qword_490600 )
  {
    v4 = 0x8000;
    v6 = 0x4000000;
  }
  v7 = a1 + a2;
  if ( v7 >= v4 )
  {
    if ( v7 > v6 )
    {
      v4 = v6;
      if ( a1 > v6 )
        return 0;
    }
    else
    {
      v4 = v7;
    }
  }
  v8 = -a3 & (a3 - 1 + v4);
  v9 = a4 | 0x22;
  if ( aligned_heap_area )
  {
    v10 = mmap64(aligned_heap_area, v6, 0, v9, 0xFFFFFFFFLL, 0);
    aligned_heap_area = 0;
    v11 = v10;
    if ( v10 != -1 )
    {
      if ( (v10 & (v6 - 1)) == 0 )
        goto LABEL_10;
      munmap(v10, v6);
    }
  }
  v13 = mmap64(0, 2 * v6, 0, v9, 0xFFFFFFFFLL, 0);
  if ( v13 != -1 )
  {
    v11 = (v13 + v6 - 1) & -(__int64)v6;
    v14 = v11 - v13;
    if ( v11 == v13 )
      aligned_heap_area = v11 + v6;
    else
      munmap(v13, v11 - v13);
    munmap(v11 + v6, v6 - v14);
    if ( !(unsigned int)mprotect(v11, v8, mtag_mmap_flags | 3u) )
      goto LABEL_11;
    goto LABEL_19;
  }
  v17 = mmap64(0, v6, 0, v9, -1, 0);
  v11 = v17;
  if ( v17 == -1 )
    return 0;
  if ( (v17 & (v6 - 1)) != 0 )
  {
    v11 = 0;
    munmap(v17, v6);
    return v11;
  }
LABEL_10:
  if ( (unsigned int)mprotect(v11, v8, mtag_mmap_flags | 3u) )
  {
LABEL_19:
    munmap(v11, v6);
    return 0;
  }
LABEL_11:
  _set_vma_name(v11, v8, " glibc: malloc arena");
  if ( qword_4905F8 - 1 < v8 )
  {
    v15 = v8;
    v16 = v11;
    if ( ((dl_pagesize - 1) & v11) != 0 )
    {
      v15 = v8 + ((dl_pagesize - 1) & v11);
      v16 = -dl_pagesize & v11;
    }
    madvise(v16, v15, 14);
  }
  *(_QWORD *)(v11 + 16) = v8;
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = a3;
  return v11;
}
