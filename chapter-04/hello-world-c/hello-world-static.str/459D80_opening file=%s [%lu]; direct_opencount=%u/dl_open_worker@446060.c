__int64 __fastcall dl_open_worker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  unsigned int v8; // w20
  __int64 result; // x0
  __int64 v10; // x20
  __int128 v11; // q0
  int v12; // w3
  int v13; // w19
  __int64 v14; // [xsp+30h] [xbp+30h] BYREF
  __int64 v15; // [xsp+38h] [xbp+38h]
  __int128 v16; // [xsp+40h] [xbp+40h]

  *(_BYTE *)(a1 + 45) = 0;
  pthread_mutex_lock((atomic_uint *)&dl_load_tls_lock, a2, a3, a4, a5, a6, a7);
  v8 = dl_catch_exception(&v14, dl_open_worker_begin, a1);
  pthread_mutex_unlock(&dl_load_tls_lock);
  if ( v15 )
    dl_signal_exception(v8, &v14, 0);
  result = *(unsigned __int8 *)(a1 + 45);
  if ( (result & 1) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_OWORD *)(a1 + 56);
    v12 = *(_DWORD *)(a1 + 48);
    v13 = *(_DWORD *)(a1 + 8);
    v14 = v10;
    LODWORD(v15) = v12;
    v16 = v11;
    dl_catch_exception(0, call_dl_init, &v14);
    if ( (v13 & 0x100) != 0 )
      add_to_global_update(v10);
    result = (unsigned int)dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      return dl_debug_printf(
               "opening file=%s [%lu]; direct_opencount=%u\n\n",
               *(const char **)(v10 + 8),
               *(_QWORD *)(v10 + 48),
               *(_DWORD *)(v10 + 864));
  }
  return result;
}
