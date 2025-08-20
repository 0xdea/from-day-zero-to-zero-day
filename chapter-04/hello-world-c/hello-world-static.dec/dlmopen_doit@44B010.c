__int64 __fastcall dlmopen_doit(
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
  __int64 v10; // x3
  __int64 v11; // x2
  const char *v12; // x0
  __int64 result; // x0

  if ( *(_QWORD *)a1 )
    dl_signal_error(22, 0, 0, "invalid namespace");
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = (const char *)&qword_456B08;
  if ( v10 )
    v12 = *(const char **)(a1 + 8);
  result = dl_open(
             v12,
             *(_DWORD *)(a1 + 16) | 0x80000000,
             v11,
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
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
