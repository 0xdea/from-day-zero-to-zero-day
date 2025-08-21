__int64 __fastcall _gconv_load_cache(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // x0
  unsigned int v6; // w19
  __int64 v7; // x1
  __int16 *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  unsigned __int64 v12; // x3
  __int64 result; // x0
  __int64 v14; // x23
  __int64 v15; // x0
  unsigned __int64 v16; // x22
  __int64 v17; // x0
  _BYTE v18[48]; // [xsp+8h] [xbp-88h] BYREF
  unsigned __int64 v19; // [xsp+38h] [xbp-58h]

  _gconv_path_envvar = getenv("GCONV_PATH", &_stack_chk_guard, 0, a4, a5);
  if ( _gconv_path_envvar )
    return 0xFFFFFFFFLL;
  v5 = _open_nocancel("/usr/lib/aarch64-linux-gnu/gconv/gconv-modules.cache", 0x80000, 0);
  v6 = v5;
  if ( (_DWORD)v5 == -1 )
    return 0xFFFFFFFFLL;
  if ( (fstat64(v5, v18) & 0x80000000) != 0 || v19 <= 0xF )
    goto LABEL_24;
  cache_size = v19;
  gconv_cache = mmap64(0, v19, 1, 1, v6, 0);
  if ( gconv_cache != -1 )
    goto LABEL_6;
  v14 = cache_size;
  v15 = malloc(cache_size, v7, v8, v9, v10, v11);
  gconv_cache = v15;
  if ( !v15 )
  {
LABEL_24:
    _close_nocancel(v6);
    return 0xFFFFFFFFLL;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = read(v6, v15 + v16, v14 - v16);
    if ( v17 == -1 )
    {
      free(gconv_cache);
      gconv_cache = 0;
      goto LABEL_24;
    }
    v14 = cache_size;
    v16 += v17;
    if ( cache_size <= v16 )
      break;
    v15 = gconv_cache;
  }
  cache_malloced = 1;
LABEL_6:
  _close_nocancel(v6);
  if ( *(_DWORD *)gconv_cache != 536937252
    || *(unsigned __int16 *)(gconv_cache + 4) >= (unsigned __int64)cache_size
    || (v12 = *(unsigned __int16 *)(gconv_cache + 6), cache_size <= v12)
    || !*(_WORD *)(gconv_cache + 8)
    || cache_size < v12 + 4LL * *(unsigned __int16 *)(gconv_cache + 8)
    || cache_size <= (unsigned __int64)*(unsigned __int16 *)(gconv_cache + 10)
    || (result = 0, cache_size < (unsigned __int64)*(unsigned __int16 *)(gconv_cache + 12)) )
  {
    if ( cache_malloced )
    {
      free(gconv_cache);
      cache_malloced = 0;
    }
    else
    {
      munmap(gconv_cache, cache_size);
    }
    gconv_cache = 0;
    return 0xFFFFFFFFLL;
  }
  return result;
}
