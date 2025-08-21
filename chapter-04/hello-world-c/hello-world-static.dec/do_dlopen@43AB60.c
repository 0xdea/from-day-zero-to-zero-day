__int64 __fastcall do_dlopen(__int64 a1)
{
  __int64 result; // x0

  result = dl_open(
             *(_QWORD *)a1,
             *(unsigned int *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             -2,
             (unsigned int)_libc_argc,
             _libc_argv,
             environ);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
