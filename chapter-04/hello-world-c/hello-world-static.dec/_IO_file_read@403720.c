__int64 __fastcall IO_file_read(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // t2

  v2 = a1 + 112;
  v1 = *(unsigned int *)(a1 + 112);
  if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
    return _read_nocancel(v1);
  else
    return read(v1);
}
