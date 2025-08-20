unsigned __int64 dl_unload_cache()
{
  unsigned __int64 result; // x0

  result = cache;
  if ( (unsigned __int64)(cache - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    result = munmap((void *)cache, cachesize);
    cache = 0;
  }
  return result;
}
