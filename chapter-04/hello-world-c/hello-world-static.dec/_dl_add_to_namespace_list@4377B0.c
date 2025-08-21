__int64 __fastcall dl_add_to_namespace_list(
        __int64 *a1,
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
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  __int64 *v26; // x2
  __int64 *v27; // x1
  __int64 **v28; // x1
  __int64 v29; // x3
  int v30; // w2
  __int64 v31; // x4
  __int64 v32; // x2

  pthread_mutex_lock(dl_load_write_lock, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  v26 = (&dl_ns)[21 * a2];
  if ( v26 )
  {
    do
    {
      v27 = v26;
      v26 = (__int64 *)v26[3];
    }
    while ( v26 );
    a1[4] = (__int64)v27;
    v27[3] = (__int64)a1;
  }
  else
  {
    (&dl_ns)[21 * a2] = a1;
  }
  v28 = &(&dl_ns)[21 * a2];
  v29 = dl_load_adds;
  v30 = *((_DWORD *)v28 + 2);
  v31 = ++dl_load_adds;
  v32 = (unsigned int)(v30 + 1);
  *((_DWORD *)v28 + 2) = v32;
  a1[151] = v29;
  return pthread_mutex_unlock(
           dl_load_write_lock,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25,
           (__int64)v28,
           v32,
           v29,
           v31,
           (__int64)&dl_load_adds,
           v17);
}
