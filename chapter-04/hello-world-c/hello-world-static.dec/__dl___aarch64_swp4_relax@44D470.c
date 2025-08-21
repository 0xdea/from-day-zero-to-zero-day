__int64 __fastcall _dl___aarch64_swp4_relax(unsigned int a1, unsigned int *a2)
{
  __int64 result; // x0

  if ( _aarch64_have_lse_atomics )
    return __swp(a1, a2);
  do
    result = __ldxr(a2);
  while ( __stxr(a1, a2) );
  return result;
}
