__int64 __fastcall do_dlsym(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  const char *v11; // x0
  __int64 v12; // t1
  __int64 result; // x0

  v11 = (const char *)a1[1];
  v12 = *a1;
  a1[3] = 0;
  result = dl_lookup_symbol_x(v11, v12, a1 + 3, (__int64 **)(v12 + 984), 0, 0, 2, 0, a2, a3, a4, a5, a6, a7, a8, a9);
  a1[2] = result;
  return result;
}
