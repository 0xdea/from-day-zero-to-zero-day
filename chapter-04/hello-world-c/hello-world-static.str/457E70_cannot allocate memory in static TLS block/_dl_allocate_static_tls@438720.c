__int64 __fastcall dl_allocate_static_tls(__int64 a1)
{
  unsigned __int64 v2; // x2
  __int64 v3; // x2
  unsigned __int64 v4; // x3
  __int64 v5; // x4
  __int64 result; // x0

  if ( *(_QWORD *)(a1 + 1168) == -1
    || (v2 = *(_QWORD *)(a1 + 1152), v2 > dl_tls_static_align)
    || (v3 = ((dl_tls_static_used - 1 + v2 - *(_QWORD *)(a1 + 1160)) & -(__int64)v2) + *(_QWORD *)(a1 + 1160),
        v4 = v3 + *(_QWORD *)(a1 + 1144),
        v4 > dl_tls_static_size) )
  {
    dl_signal_error(0, *(const char **)(a1 + 8), 0, "cannot allocate memory in static TLS block");
  }
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 1160) = dl_tls_static_used;
  *(_QWORD *)(a1 + 1168) = v3;
  dl_tls_static_used = v4;
  if ( (*(_WORD *)(v5 + 868) & 8) != 0 )
    return dl_init_static_tls(a1);
  result = *(unsigned __int16 *)(a1 + 868) | 0xFFFF8000;
  *(_WORD *)(a1 + 868) = result;
  return result;
}
