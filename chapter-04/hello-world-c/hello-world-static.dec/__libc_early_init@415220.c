__int64 *__fastcall _libc_early_init(char a1)
{
  int v2; // w0
  unsigned __int64 v3; // x4
  unsigned __int64 v4; // x0
  unsigned __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  _ctype_init(0);
  _libc_single_threaded = a1;
  v2 = getrlimit64(3, &v6);
  v3 = 0x200000;
  if ( !v2 && v6 != -1 )
  {
    v3 = 0x20000;
    if ( v6 >= 0x20000 )
      v3 = v6;
  }
  qword_4969C0 = dl_pagesize;
  v4 = dl_pagesize
     + 2048
     + (dl_tls_static_align + dl_tls_static_size - 1) / (unsigned __int64)dl_tls_static_align * dl_tls_static_align;
  if ( v4 < v3 )
    v4 = v3;
  v6 = (v4 + dl_pagesize - 1) & -dl_pagesize;
  qword_4969D0 = v6;
  _pthread_tunables_init();
  return &_stack_chk_guard;
}
