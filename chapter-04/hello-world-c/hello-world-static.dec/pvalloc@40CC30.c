__int64 __fastcall pvalloc(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 result; // x0

  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, (__int64)&unk_496000, a11, a12, a13, a14, a15);
  if ( !__CFADD__(dl_pagesize - 1, a1) )
    return mid_memalign_isra_0(
             dl_pagesize,
             (1 - dl_pagesize) & (dl_pagesize - 1 + a1),
             1 - dl_pagesize,
             a12,
             a13,
             a14,
             a15,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  result = 0;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
  return result;
}
