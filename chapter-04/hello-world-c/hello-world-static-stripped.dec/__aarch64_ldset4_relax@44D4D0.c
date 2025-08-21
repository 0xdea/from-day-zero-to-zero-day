__int64 __fastcall _aarch64_ldset4_relax(unsigned int a1, atomic_uint *a2)
{
  __int64 result; // x0

  if ( byte_496C38 )
    return atomic_fetch_or_explicit(a2, a1, memory_order_relaxed);
  do
    result = __ldxr((unsigned int *)a2);
  while ( __stxr(result | a1, (unsigned int *)a2) );
  return result;
}
