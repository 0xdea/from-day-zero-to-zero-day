unsigned int __fastcall _aarch64_cas4_acq(unsigned int result, unsigned int a2, atomic_uint *a3)
{
  unsigned int v4; // w16

  if ( byte_496C38 )
  {
    atomic_compare_exchange_strong_explicit(a3, &result, a2, memory_order_acquire, memory_order_acquire);
  }
  else
  {
    v4 = result;
    do
      result = __ldaxr((unsigned int *)a3);
    while ( result == v4 && __stxr(a2, (unsigned int *)a3) );
  }
  return result;
}
