unsigned __int64 __fastcall _dl___aarch64_swp8_acq_rel(unsigned __int64 a1, atomic_ullong *a2)
{
  unsigned __int64 result; // x0

  if ( byte_496C38 )
    return atomic_exchange(a2, a1);
  do
    result = __ldaxr((unsigned __int64 *)a2);
  while ( __stlxr(a1, (unsigned __int64 *)a2) );
  return result;
}
