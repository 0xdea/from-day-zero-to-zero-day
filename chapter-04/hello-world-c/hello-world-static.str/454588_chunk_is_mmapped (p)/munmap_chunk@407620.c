__int64 __fastcall munmap_chunk(_QWORD *a1)
{
  __int64 v1; // x2
  unsigned __int64 v2; // x19
  unsigned __int64 v3; // x20
  __int64 v5; // x0

  v1 = a1[1];
  if ( (v1 & 2) != 0 )
  {
    v2 = (unsigned __int64)a1 - *a1;
    v3 = *a1 + (v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !((v2 | v3) & (dl_pagesize - 1)
         | (((unsigned __int64)(a1 + 2) & (dl_pagesize - 1)) - 1) & (unsigned __int64)(a1 + 2) & (dl_pagesize - 1)) )
    {
      _dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)&dword_49060C);
      _dl___aarch64_ldadd8_relax(-(__int64)v3, (atomic_ullong *)&qword_490620);
      return munmap(v2, v3);
    }
    malloc_printerr("munmap_chunk(): invalid pointer");
  }
  v5 = _libc_assert_fail("chunk_is_mmapped (p)", "malloc.c", 3028, "munmap_chunk");
  return dl_tunable_set_hugetlb(v5);
}
