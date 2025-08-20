__int64 __fastcall _glibc_morecore(__int64 a1)
{
  __int64 result; // x0

  if ( (_always_fail_morecore & 1) != 0 )
    return 0;
  result = sbrk(a1);
  if ( result == -1 )
    return 0;
  return result;
}
