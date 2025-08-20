__int64 __fastcall dl_get_tls_static_info(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // x0

  *a1 = dl_tls_static_size;
  result = dl_tls_static_align;
  *a2 = dl_tls_static_align;
  return result;
}
