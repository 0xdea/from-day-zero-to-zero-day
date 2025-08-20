__int64 __fastcall dl_close(
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  void *v21; // x6
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7

  pthread_mutex_lock(dl_load_lock, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  if ( (*(_BYTE *)(a1 + 871) & 1) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 864) )
    {
      pthread_mutex_unlock(dl_load_lock, v22, v23, v24, v25, v26, v27, v28, v29, v16, v17, v18, v19, v20, v21);
      dl_signal_error(0, *(const char **)(a1 + 8), 0, "shared object not open");
    }
    dl_close_worker(a1, 0);
  }
  return pthread_mutex_unlock(dl_load_lock, v22, v23, v24, v25, v26, v27, v28, v29, v16, v17, v18, v19, v20, v21);
}
