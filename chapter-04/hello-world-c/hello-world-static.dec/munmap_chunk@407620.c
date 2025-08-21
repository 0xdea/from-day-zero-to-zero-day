__int64 __fastcall munmap_chunk(
        _QWORD *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x2
  unsigned __int64 v10; // x19
  unsigned __int64 v11; // x20
  __int64 v13; // x0

  v9 = a1[1];
  if ( (v9 & 2) != 0 )
  {
    v10 = (unsigned __int64)a1 - *a1;
    v11 = *a1 + (v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 | v11) & (dl_pagesize - 1)
       | (((unsigned __int64)(a1 + 2) & (dl_pagesize - 1)) - 1) & (unsigned __int64)(a1 + 2) & (dl_pagesize - 1) )
    {
      malloc_printerr((__int64)"munmap_chunk(): invalid pointer", a2, a3, a4, a5, a6, a7, a8, a9);
    }
    _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)&dword_49060C);
    _dl___aarch64_ldadd8_relax(-(__int64)v11, (atomic_ullong *)&qword_490620);
    return munmap(v10, v11);
  }
  else
  {
    v13 = _libc_assert_fail("chunk_is_mmapped (p)", "malloc.c", 3028, "munmap_chunk");
    return dl_tunable_set_hugetlb(v13);
  }
}
