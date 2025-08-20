unsigned __int64 _pthread_get_minstack()
{
  return dl_pagesize
       + 0x20000
       + (dl_tls_static_align + dl_tls_static_size - 1) / (unsigned __int64)dl_tls_static_align * dl_tls_static_align;
}
