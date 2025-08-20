__int64 __fastcall _rtld_static_init(__int64 *a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  bool v4; // zf
  __int64 result; // x0
  int v6; // w9
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x8
  __int64 v10; // x4

  v2 = dl_lookup_direct(a1, "_rtld_global_ro", 2670216042LL, "GLIBC_PRIVATE", 157536133);
  if ( !v2 )
    _libc_assert_fail("sym != NULL", (__int64)"rtld_static_init.c", 0x35u, (__int64)"__rtld_static_init");
  v3 = 0;
  if ( a1 )
    v4 = *(unsigned __int16 *)(v2 + 6) == 65521;
  else
    v4 = 1;
  if ( !v4 )
    v3 = *a1;
  result = v3 + *(_QWORD *)(v2 + 8);
  v6 = dl_clktck;
  v7 = dl_auxv;
  *(_QWORD *)(result + 96) = dl_hwcap;
  *(_QWORD *)(result + 104) = v7;
  v8 = dl_hwcap2;
  *(_DWORD *)(result + 64) = v6;
  v9 = dl_minsigstacksize;
  *(_QWORD *)(result + 552) = v8;
  *(_QWORD *)(result + 24) = dl_pagesize;
  *(_QWORD *)(result + 32) = v9;
  v10 = dl_tls_static_align;
  *(_QWORD *)(result + 664) = dlfcn_hook;
  *(_QWORD *)(result + 464) = dl_tls_static_size;
  *(_QWORD *)(result + 472) = v10;
  *(_QWORD *)(result + 656) = dl_find_object;
  return result;
}
