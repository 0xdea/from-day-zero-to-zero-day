__int64 __fastcall _aarch64_ldset4_acq(unsigned int a1, atomic_uint *a2)
{
  __int64 result; // x0

  if ( _aarch64_have_lse_atomics )
    return atomic_fetch_or_explicit(a2, a1, memory_order_acquire);
  do
    result = __ldaxr((unsigned int *)a2);
  while ( __stxr(result | a1, (unsigned int *)a2) );
  return result;
}
