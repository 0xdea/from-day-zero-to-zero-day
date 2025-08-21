__int64 __fastcall dlmopen_doit(__int64 a1)
{
  __int64 v2; // x3
  __int64 v3; // x2
  const char *v4; // x0
  __int64 result; // x0

  if ( *(_QWORD *)a1 )
    dl_signal_error(22, 0, 0, "invalid namespace");
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (const char *)&qword_456B08;
  if ( v2 )
    v4 = *(const char **)(a1 + 8);
  result = dl_open(
             v4,
             *(_DWORD *)(a1 + 16) | 0x80000000,
             v3,
             0,
             (void *)(unsigned int)_libc_argc,
             (void *)_libc_argv,
             environ);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
