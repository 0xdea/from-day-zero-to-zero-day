__int64 __fastcall posix_memalign(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 result; // x0
  __int64 v19; // x3
  bool v20; // zf
  __int64 v21; // x1

  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((__int64)a1, a2, a3, (unsigned __int8)_malloc_initialized, a13, a14, a15);
  result = 22;
  v19 = ((a2 >> 3) - 1) & (a2 >> 3) | a2 & 7;
  if ( v19 )
    v20 = 1;
  else
    v20 = a2 == 0;
  if ( !v20 )
  {
    v21 = mid_memalign_isra_0(
            a2,
            a3,
            a3,
            v19,
            (void *)(a2 >> 3),
            (void *)(a2 & 7),
            a15,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    result = 12;
    if ( v21 )
    {
      result = 0;
      *a1 = v21;
    }
  }
  return result;
}
