__int64 __fastcall IO_str_pbackfail(_QWORD *a1, int a2)
{
  if ( (*(_DWORD *)a1 & 8LL) == 0 || a2 == -1 )
    return IO_default_pbackfail(a1, a2);
  else
    return 0xFFFFFFFFLL;
}
