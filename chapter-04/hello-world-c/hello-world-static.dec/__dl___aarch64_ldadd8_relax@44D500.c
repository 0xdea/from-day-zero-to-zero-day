unsigned __int64 __fastcall _dl___aarch64_ldadd8_relax(unsigned __int64 a1, atomic_ullong *a2)
{
  unsigned __int64 result; // x0

  if ( _aarch64_have_lse_atomics )
    return atomic_fetch_add_explicit(a2, a1, memory_order_relaxed);
  do
    result = __ldxr((unsigned __int64 *)a2);
  while ( __stxr(result + a1, (unsigned __int64 *)a2) );
  return result;
}
