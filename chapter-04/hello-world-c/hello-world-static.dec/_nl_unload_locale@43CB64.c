__int64 __fastcall nl_unload_locale(
        int a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  int v11; // w0

  if ( a1 )
  {
    if ( a1 == 2 )
      nl_cleanup_time(a2);
  }
  else
  {
    nl_cleanup_ctype(a2);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      munmap(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16));
      v11 = *(_DWORD *)(a2 + 24);
    }
  }
  else
  {
    free(*(_QWORD *)(a2 + 8), a3, a4, a5, a6, a7, a8, a9, a10);
    v11 = *(_DWORD *)(a2 + 24);
  }
  if ( v11 != 2 )
    free(*(_QWORD *)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return free(a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
