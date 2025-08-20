__int64 __fastcall fopen64(
        __int64 a1,
        unsigned __int8 *a2,
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
  return _fopen_internal(a1, a2, 1, a12, a13, a14, a15, a3, a4, a5, a6, a7, a8, a9, a10);
}
