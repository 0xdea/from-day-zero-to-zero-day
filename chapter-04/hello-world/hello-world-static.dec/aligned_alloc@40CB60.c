__int64 __fastcall aligned_alloc(
        unsigned __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  void *v15; // x2

  v15 = &unk_496000;
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, a2, (__int64)&unk_496000, a12, a13, a14, a15);
  if ( ((a1 - 1) & a1) == 0 && a1 != 0 )
    return mid_memalign_isra_0(a1, a2, (__int64)v15, a12, a13, a14, a15, a3, a4, a5, a6, a7, a8, a9, a10);
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  return 0;
}
