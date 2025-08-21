__int64 *IO_enable_locks()
{
  __int64 *result; // x0

  result = &run_fp;
  if ( !stdio_needs_locking )
  {
    stdio_needs_locking = 1;
    result = (__int64 *)IO_list_all;
    if ( IO_list_all )
    {
      do
      {
        *((_DWORD *)result + 29) |= 0x80u;
        result = (__int64 *)result[13];
      }
      while ( result );
    }
  }
  return result;
}
