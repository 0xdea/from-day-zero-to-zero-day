__int64 __fastcall sysmalloc_mmap_fallback_constprop_0(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v8; // x19
  unsigned __int64 v9; // x20
  __int64 v10; // x21
  unsigned __int64 v12; // x1
  __int64 v13; // x0

  v8 = *a1;
  v9 = *a1;
  if ( (dword_490674 & 2) == 0 )
  {
    v8 = (a5 - 1 + a3 + v8) & -a5;
    v9 = v8;
  }
  v10 = 0;
  if ( a4 > v8 )
    v8 = a4;
  if ( a4 > v9 )
    v9 = v8;
  if ( a2 < v9 )
  {
    v10 = mmap64(0, v9, mtag_mmap_flags | 3u, a6 | 0x22u, 0xFFFFFFFFLL, 0);
    if ( v10 != -1 )
    {
      if ( (a6 & 0x40000) == 0 && qword_4905F8 - 1 < v9 )
      {
        v12 = v9;
        v13 = v10;
        if ( ((dl_pagesize - 1) & v10) != 0 )
        {
          v12 = ((dl_pagesize - 1) & v10) + v9;
          v13 = -dl_pagesize & v10;
        }
        madvise(v13, v12, 14);
      }
      _set_vma_name(v10, v9, " glibc: malloc");
      dword_490674 |= 2u;
      *a1 = v8;
    }
  }
  return v10;
}
