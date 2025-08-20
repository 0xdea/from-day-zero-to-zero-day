__int64 *__fastcall do_dlsym_private(
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
  __int64 v9; // x1
  __int64 *v10; // x2
  const char *v12; // x0
  __int64 **v13; // x3
  const char *v15[3]; // [xsp+0h] [xbp-20h] BYREF

  v10 = a1 + 3;
  v9 = *a1;
  v15[0] = "GLIBC_PRIVATE";
  v15[1] = (const char *)0x10963CF85LL;
  v12 = (const char *)a1[1];
  v15[2] = 0;
  v13 = *(__int64 ***)(v9 + 976);
  a1[3] = 0;
  a1[2] = dl_lookup_symbol_x(v12, v9, v10, v13, v15, 0, 0, 0, a2, a3, a4, a5, a6, a7, a8, a9);
  return &_stack_chk_guard;
}
