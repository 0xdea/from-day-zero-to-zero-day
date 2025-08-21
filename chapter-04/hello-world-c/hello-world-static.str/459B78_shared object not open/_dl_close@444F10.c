__int64 __fastcall dl_close(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  pthread_mutex_lock((atomic_uint *)&dl_load_lock, a2, a3, a4, a5, a6, a7);
  if ( (*(_BYTE *)(a1 + 871) & 1) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 864) )
    {
      pthread_mutex_unlock(&dl_load_lock);
      dl_signal_error(0, *(const char **)(a1 + 8), 0, "shared object not open");
    }
    dl_close_worker(a1, 0);
  }
  return pthread_mutex_unlock(&dl_load_lock);
}
