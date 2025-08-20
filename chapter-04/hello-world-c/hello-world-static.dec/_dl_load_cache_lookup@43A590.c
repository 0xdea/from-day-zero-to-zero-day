__int64 __fastcall dl_load_cache_lookup(_BYTE *a1)
{
  int *v2; // x6
  const char *v3; // x19
  __int64 v4; // x0
  unsigned __int16 v5; // w1
  __int64 *v6; // x0
  __int64 v7; // x0
  int *whole_file; // x0
  unsigned int v10; // w0
  unsigned __int64 v11; // x0
  char *v12; // x3
  __int64 v13; // [xsp+0h] [xbp-10010h] BYREF
  char v14[1008]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v15; // [xsp+400h] [xbp-FC10h]
  _BYTE v16[16]; // [xsp+10000h] [xbp-10h] BYREF

  if ( (dl_debug_mask & 1) != 0 )
    dl_debug_printf(" search cache=%s\n", "/etc/ld.so.cache");
  v2 = (int *)cache;
  if ( !cache )
  {
    whole_file = (int *)dl_sysdep_read_whole_file("/etc/ld.so.cache", (size_t *)&cachesize, 1);
    v2 = whole_file;
    if ( whole_file == (int *)-1LL )
      goto LABEL_17;
    if ( (unsigned __int64)cachesize <= 0x30 )
    {
      if ( (unsigned __int64)cachesize <= 0x10 )
      {
LABEL_16:
        munmap(v2, cachesize);
LABEL_17:
        cache = -1;
        return 0;
      }
    }
    else if ( *(_QWORD *)whole_file == 0x646C2D6362696C67LL
           && *((_QWORD *)whole_file + 1) == 0x686361632E6F732ELL
           && whole_file[4] == 825110885
           && (unsigned int)whole_file[5] <= (cachesize - 48) / 0x18uLL )
    {
      if ( *((_BYTE *)whole_file + 28) && (whole_file[7] & 3) != 2 )
      {
        munmap(whole_file, cachesize);
        cache = -1;
        cache_new = -1;
        return 0;
      }
      cache = (__int64)whole_file;
      cache_new = (__int64)whole_file;
      goto LABEL_5;
    }
    if ( *(_QWORD *)whole_file == 0x2E312D6F732E646CLL
      && *((_WORD *)whole_file + 4) == 11831
      && *((_BYTE *)whole_file + 10) == 48 )
    {
      v10 = whole_file[3];
      if ( v10 <= (cachesize - 16) / 0xCuLL )
      {
        cache = (__int64)v2;
        v11 = (12LL * v10 + 23) & 0xFFFFFFFFFFFFFFF8LL;
        v12 = (char *)v2 + v11;
        cache_new = (__int64)v2 + v11;
        if ( cachesize < v11 + 48
          || *(_QWORD *)((char *)v2 + v11) != 0x646C2D6362696C67LL
          || *((_QWORD *)v12 + 1) != 0x686361632E6F732ELL
          || *((_DWORD *)v12 + 4) != 825110885 )
        {
          cache_new = -1;
          goto LABEL_5;
        }
        if ( !v12[28] || (v12[28] & 3) == 2 )
          goto LABEL_5;
        cache = -1;
        cache_new = -1;
        munmap(v2, cachesize);
        v2 = (int *)cache;
        if ( !cache )
          _libc_assert_fail("cache != NULL", (__int64)"dl-cache.c", 0x1DAu, (__int64)"_dl_load_cache_lookup");
        goto LABEL_4;
      }
    }
    goto LABEL_16;
  }
LABEL_4:
  if ( v2 == (int *)-1LL )
    return 0;
LABEL_5:
  if ( cache_new == -1 )
    v3 = (const char *)search_cache(
                         (__int64)&v2[3 * v2[3] + 4],
                         (int)cachesize - (12 * v2[3] + 16),
                         (__int64)(v2 + 4),
                         v2[3],
                         0xCu,
                         a1);
  else
    v3 = (const char *)search_cache(cache_new, cachesize, cache_new + 48, *(_DWORD *)(cache_new + 20), 0x18u, a1);
  if ( (dl_debug_mask & 1) != 0 )
  {
    if ( v3 )
    {
      dl_debug_printf("  trying file=%s\n", v3);
      goto LABEL_9;
    }
    return 0;
  }
  if ( !v3 )
    return 0;
LABEL_9:
  v4 = strlen(v3);
  v5 = (v4 + 16) & 0xFFF0;
  v6 = (__int64 *)&v16[-((v4 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v16 != (_BYTE *)v6 )
  {
    do
      v15 = 0;
    while ( &v13 != v6 );
  }
  v13 = 0;
  if ( v5 >= 0x400uLL )
    v15 = 0;
  v7 = j_memcpy(v14);
  return strdup(v7);
}
