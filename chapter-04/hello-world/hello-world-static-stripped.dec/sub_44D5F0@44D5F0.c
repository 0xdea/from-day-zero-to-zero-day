unsigned __int64 __fastcall sub_44D5F0(unsigned __int64 a1, atomic_ullong *a2)
{
  unsigned __int64 result; // x0

  if ( byte_496C38 )
    return atomic_exchange_explicit(a2, a1, memory_order_acquire);
  do
    result = __ldaxr((unsigned __int64 *)a2);
  while ( __stxr(a1, (unsigned __int64 *)a2) );
  return result;
}
