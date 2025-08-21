__int64 __fastcall dlopen_doit(__int64 a1)
{
  int v1; // w1
  const char *v3; // x3
  __int64 v4; // x2
  const char *v5; // x0
  __int64 result; // x0
  const char *v7; // x0

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xBFFFEEF0) != 0 )
  {
    v7 = (const char *)dcgettext("libc", "invalid mode parameter", 5);
    dl_signal_error(0, 0, 0, v7);
  }
  v3 = *(const char **)a1;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (const char *)&qword_456B08;
  if ( v3 )
    v5 = v3;
  result = dl_open(v5, v1 | 0x80000000, v4, 0, (void *)(unsigned int)_libc_argc, (void *)_libc_argv, environ);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
