__int64 __fastcall dl_open(const char *a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  int v7; // w20
  int v11; // w26
  unsigned int v14; // w19
  __int64 v15; // x0
  char v17[8]; // [xsp+50h] [xbp+50h] BYREF
  __int64 v18; // [xsp+58h] [xbp+58h]
  const char *v19; // [xsp+68h] [xbp+68h] BYREF
  int v20; // [xsp+70h] [xbp+70h]
  __int64 v21; // [xsp+78h] [xbp+78h]
  __int64 v22; // [xsp+80h] [xbp+80h]
  __int64 v23; // [xsp+88h] [xbp+88h]
  int v24; // [xsp+90h] [xbp+90h]
  char v25; // [xsp+94h] [xbp+94h]
  int v26; // [xsp+98h] [xbp+98h]
  void *v27; // [xsp+A0h] [xbp+A0h]
  void *v28; // [xsp+A8h] [xbp+A8h]

  v7 = a2;
  if ( (a2 & 3) == 0 )
    dl_signal_error(22, a1, 0, "invalid mode for dlopen()");
  v11 = (int)a5;
  pthread_mutex_lock((atomic_uint *)&dl_load_lock, a2, a3, a4, a5, a6, a7);
  if ( a4 == -1 )
  {
    pthread_mutex_unlock(&dl_load_lock);
    dl_signal_error(22, a1, 0, "no more namespaces available for dlmopen()");
  }
  if ( ((a4 + 2) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
    dl_signal_error(22, a1, 0, "invalid target namespace in dlmopen()");
  v19 = a1;
  v20 = v7;
  v21 = a3;
  v22 = 0;
  v23 = a4;
  v26 = v11;
  v27 = a6;
  v28 = a7;
  v14 = dl_catch_exception(v17, dl_open_worker, &v19);
  dl_unload_cache();
  v15 = v23;
  if ( (v23 & 0x8000000000000000LL) == 0 )
    HIDWORD((&dl_ns)[21 * v23 + 3]) = v24;
  if ( v18 )
  {
    if ( (v25 & 1) == 0 )
      (&dl_ns)[21 * v15 + 4] = 0;
    if ( v22 )
      dl_close_worker(v22, 1u);
    pthread_mutex_unlock(&dl_load_lock);
    dl_signal_exception(v14, v17, 0);
  }
  if ( *(_DWORD *)(dl_debug_update(v15) + 24) )
    _libc_assert_fail("r_state == RT_CONSISTENT", (__int64)"dl-open.c", 0x3B9u, (__int64)"_dl_open");
  pthread_mutex_unlock(&dl_load_lock);
  return v22;
}
