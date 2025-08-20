unsigned __int64 __fastcall _dl___aarch64_cas8_rel(unsigned __int64 result, unsigned __int64 a2, atomic_ullong *a3)
{
  unsigned __int64 v4; // x16

  if ( _aarch64_have_lse_atomics )
  {
    atomic_compare_exchange_strong_explicit(a3, &result, a2, memory_order_release, memory_order_relaxed);
  }
  else
  {
    v4 = result;
    do
      result = __ldxr((unsigned __int64 *)a3);
    while ( result == v4 && __stlxr(a2, (unsigned __int64 *)a3) );
  }
  return result;
}
