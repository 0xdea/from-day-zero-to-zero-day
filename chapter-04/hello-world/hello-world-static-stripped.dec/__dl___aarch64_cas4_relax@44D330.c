unsigned int __fastcall _dl___aarch64_cas4_relax(unsigned int result, unsigned int a2, atomic_uint *a3)
{
  unsigned int v4; // w16

  if ( byte_496C38 )
  {
    atomic_compare_exchange_strong_explicit(a3, &result, a2, memory_order_relaxed, memory_order_relaxed);
  }
  else
  {
    v4 = result;
    do
      result = __ldxr((unsigned int *)a3);
    while ( result == v4 && __stxr(a2, (unsigned int *)a3) );
  }
  return result;
}
