__int64 (__fastcall *memchr())()
{
  __int64 (__fastcall *result)(); // x0

  result = _memchr_generic;
  if ( (unsigned __int64)dl_aarch64_cpu_features >> 24 == 80 && (dl_aarch64_cpu_features & 0xFFF0) == 0 )
    return _memchr_nosimd;
  return result;
}
