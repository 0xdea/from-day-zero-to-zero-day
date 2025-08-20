__int64 __fastcall dlopen_doit(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  int v9; // w1
  const char *v11; // x3
  __int64 v12; // x2
  const char *v13; // x0
  __int64 result; // x0
  const char *v15; // x0

  v9 = *(_DWORD *)(a1 + 8);
  if ( (v9 & 0xBFFFEEF0) != 0 )
  {
    v15 = (const char *)dcgettext((__int64)"libc", (__int64)"invalid mode parameter", 5u);
    dl_signal_error(0, 0, 0, v15);
  }
  v11 = *(const char **)a1;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = (const char *)&qword_456B08;
  if ( v11 )
    v13 = v11;
  result = dl_open(
             v13,
             v9 | 0x80000000,
             v12,
             0,
             (void *)(unsigned int)_libc_argc,
             (void *)_libc_argv,
             environ,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
