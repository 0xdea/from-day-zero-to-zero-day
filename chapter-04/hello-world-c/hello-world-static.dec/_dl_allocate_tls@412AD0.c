void **__fastcall dl_allocate_tls(
        void **a1,
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
  void **tls_storage; // x19
  __int64 v16; // x20
  _QWORD *v17; // x0

  if ( a1 )
  {
    tls_storage = a1;
    v16 = dl_tls_max_dtv_idx + 14;
    v17 = (_QWORD *)calloc(dl_tls_max_dtv_idx + 16, 0x10u, a8, a9, a10, a11, a12, a13, a14, a15, a3, a4, a5, a6, a7);
    if ( v17 )
    {
      *v17 = v16;
      *tls_storage = v17 + 2;
LABEL_4:
      dl_allocate_tls_init_part_0(tls_storage, 1u);
      return tls_storage;
    }
  }
  else
  {
    tls_storage = (void **)dl_allocate_tls_storage(a8, a9, a10, a11, a12, a13, a14, a15, 0, a2, a3, a4, a5, a6, a7);
    if ( tls_storage )
      goto LABEL_4;
  }
  return 0;
}
