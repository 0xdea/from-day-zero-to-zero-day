__int64 __fastcall _gconv_load_cache(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // w0
  int v6; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  unsigned __int64 v29; // x3
  __int64 result; // x0
  __int64 v31; // x23
  __int64 v32; // x0
  unsigned __int64 v33; // x22
  unsigned __int64 v34; // x0
  double v35; // d0
  double v36; // d1
  double v37; // d2
  double v38; // d3
  double v39; // d4
  double v40; // d5
  double v41; // d6
  double v42; // d7
  struct stat v43; // [xsp+8h] [xbp-88h] BYREF

  _gconv_path_envvar = getenv("GCONV_PATH", &_stack_chk_guard, 0, a4, a5);
  if ( _gconv_path_envvar )
    return 0xFFFFFFFFLL;
  v5 = _open_nocancel("/usr/lib/aarch64-linux-gnu/gconv/gconv-modules.cache", 0x80000);
  v6 = v5;
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  if ( (fstat64(v5, &v43) & 0x80000000) != 0 || v43.st_size <= 0xFuLL )
    goto LABEL_24;
  cache_size = v43.st_size;
  gconv_cache = mmap64(0, v43.st_size, 1, 1, v6, 0);
  if ( gconv_cache != -1 )
    goto LABEL_6;
  v31 = cache_size;
  v32 = malloc(cache_size, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12);
  gconv_cache = v32;
  if ( !v32 )
  {
LABEL_24:
    _close_nocancel(v6);
    return 0xFFFFFFFFLL;
  }
  v33 = 0;
  while ( 1 )
  {
    v34 = read(v6, (void *)(v32 + v33), v31 - v33);
    if ( v34 == -1 )
    {
      free(gconv_cache, v35, v36, v37, v38, v39, v40, v41, v42);
      gconv_cache = 0;
      goto LABEL_24;
    }
    v31 = cache_size;
    v33 += v34;
    if ( cache_size <= v33 )
      break;
    v32 = gconv_cache;
  }
  cache_malloced = 1;
LABEL_6:
  _close_nocancel(v6);
  if ( *(_DWORD *)gconv_cache != 536937252
    || *(unsigned __int16 *)(gconv_cache + 4) >= (unsigned __int64)cache_size
    || (v29 = *(unsigned __int16 *)(gconv_cache + 6), cache_size <= v29)
    || !*(_WORD *)(gconv_cache + 8)
    || cache_size < v29 + 4LL * *(unsigned __int16 *)(gconv_cache + 8)
    || cache_size <= (unsigned __int64)*(unsigned __int16 *)(gconv_cache + 10)
    || (result = 0, cache_size < (unsigned __int64)*(unsigned __int16 *)(gconv_cache + 12)) )
  {
    if ( cache_malloced )
    {
      free(gconv_cache, v21, v22, v23, v24, v25, v26, v27, v28);
      cache_malloced = 0;
    }
    else
    {
      munmap((void *)gconv_cache, cache_size);
    }
    gconv_cache = 0;
    return 0xFFFFFFFFLL;
  }
  return result;
}
