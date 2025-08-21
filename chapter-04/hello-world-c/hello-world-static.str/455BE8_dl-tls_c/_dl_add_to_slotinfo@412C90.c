__int64 __fastcall dl_add_to_slotinfo(__int64 result, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // x19
  __int64 v8; // x21
  __int64 i; // x20
  __int64 v10; // x1
  __int64 v11; // x19
  _QWORD *v12; // x0
  unsigned __int64 v13; // x22

  v6 = *(_QWORD *)(result + 1176);
  v8 = result;
  for ( i = dl_tls_dtv_slotinfo_list; ; i = *(_QWORD *)(i + 8) )
  {
    v10 = *(_QWORD *)i;
    if ( *(_QWORD *)i > v6 )
      goto LABEL_5;
    v6 -= v10;
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  if ( v6 )
  {
    _libc_assert_fail("idx == 0", "dl-tls.c", 1044, "_dl_add_to_slotinfo", a5, a6);
LABEL_12:
    dl_signal_error(12, "dlopen", 0, "cannot create TLS data structures");
  }
  v12 = (_QWORD *)malloc(0x3F0u, v10, 0, a4, a5, a6);
  v13 = (unsigned __int64)v12;
  if ( !v12 )
    goto LABEL_12;
  *v12 = 62;
  v12[1] = 0;
  result = memset(v12 + 2, 0, 992);
  atomic_store(v13, (unsigned __int64 *)(i + 8));
  i = v13;
LABEL_5:
  if ( (a2 & 1) != 0 )
  {
    v11 = i + 16 * v6;
    *(_QWORD *)(v11 + 24) = v8;
    result = dl_tls_generation + 1;
    *(_QWORD *)(v11 + 16) = dl_tls_generation + 1;
  }
  return result;
}
