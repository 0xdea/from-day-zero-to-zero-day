__int64 __fastcall dl_try_allocate_static_tls(__int64 a1, char a2)
{
  unsigned __int64 v2; // x2
  __int64 v3; // x2
  unsigned __int64 v4; // x3
  __int64 v5; // x1

  if ( *(_QWORD *)(a1 + 1168) == -1 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 1152);
  if ( v2 > dl_tls_static_align )
    return 0xFFFFFFFFLL;
  v3 = ((dl_tls_static_used - 1 + v2 - *(_QWORD *)(a1 + 1160)) & -(__int64)v2) + *(_QWORD *)(a1 + 1160);
  v4 = v3 + *(_QWORD *)(a1 + 1144);
  if ( dl_tls_static_size < v4 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 1) != 0 )
  {
    if ( dl_tls_static_optional >= v4 - dl_tls_static_used )
    {
      dl_tls_static_optional = dl_tls_static_used + dl_tls_static_optional - v4;
      goto LABEL_7;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_7:
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 1160) = dl_tls_static_used;
  *(_QWORD *)(a1 + 1168) = v3;
  dl_tls_static_used = v4;
  if ( (*(_WORD *)(v5 + 868) & 8) != 0 )
    dl_init_static_tls((_QWORD *)a1);
  else
    *(_WORD *)(a1 + 868) |= 0x8000u;
  return 0;
}
