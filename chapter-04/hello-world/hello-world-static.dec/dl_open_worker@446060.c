ssize_t __fastcall dl_open_worker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  int v21; // w20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  void *v27; // x6
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  ssize_t result; // x0
  __int64 v41; // x20
  __int128 v42; // q0
  __int64 v43; // x3
  int v44; // w19
  __int64 v45; // [xsp+30h] [xbp+30h] BYREF
  __int64 v46; // [xsp+38h] [xbp+38h]
  __int128 v47; // [xsp+40h] [xbp+40h]

  *(_BYTE *)(a1 + 45) = 0;
  pthread_mutex_lock(dl_load_tls_lock, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  v21 = dl_catch_exception(&v45, (void (__fastcall *)(__int64))dl_open_worker_begin, a1, v16, v17, v18, v19, v20);
  pthread_mutex_unlock(dl_load_tls_lock, v28, v29, v30, v31, v32, v33, v34, v35, v22, v23, v24, v25, v26, v27);
  if ( v46 )
    dl_signal_exception(v21, (__int64)&v45, 0);
  result = *(unsigned __int8 *)(a1 + 45);
  if ( (result & 1) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 24);
    v42 = *(_OWORD *)(a1 + 56);
    v43 = *(unsigned int *)(a1 + 48);
    v44 = *(_DWORD *)(a1 + 8);
    v45 = v41;
    LODWORD(v46) = v43;
    v47 = v42;
    dl_catch_exception(0, (void (__fastcall *)(__int64))call_dl_init, (__int64)&v45, v43, v36, v37, v38, v39);
    if ( (v44 & 0x100) != 0 )
      add_to_global_update(v41);
    result = (unsigned int)dl_debug_mask;
    if ( (dl_debug_mask & 0x40) != 0 )
      return dl_debug_printf(
               "opening file=%s [%lu]; direct_opencount=%u\n\n",
               *(const char **)(v41 + 8),
               *(_QWORD *)(v41 + 48),
               *(_DWORD *)(v41 + 864));
  }
  return result;
}
