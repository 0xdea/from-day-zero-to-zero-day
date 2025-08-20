unsigned __int64 __fastcall _aarch64_cas8_acq(unsigned __int64 result, unsigned __int64 a2, atomic_ullong *a3)
{
  unsigned __int64 v4; // x16

  if ( byte_496C38 )
  {
    atomic_compare_exchange_strong_explicit(a3, &result, a2, memory_order_acquire, memory_order_acquire);
  }
  else
  {
    v4 = result;
    do
      result = __ldaxr((unsigned __int64 *)a3);
    while ( result == v4 && __stxr(a2, (unsigned __int64 *)a3) );
  }
  return result;
}
