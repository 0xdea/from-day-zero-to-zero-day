unsigned __int64 __fastcall _gconv_cache_freemem(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 result; // x0

  result = gconv_cache;
  if ( cache_malloced )
    return free(gconv_cache, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( gconv_cache )
    return munmap((void *)gconv_cache, cache_size);
  return result;
}
