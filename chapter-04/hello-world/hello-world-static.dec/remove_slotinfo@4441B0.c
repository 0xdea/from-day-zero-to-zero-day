__int64 __fastcall remove_slotinfo(__int64 a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // x4
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x5
  unsigned __int64 *v11; // x0

  v4 = a1 - a3;
  if ( a1 - a3 < *a2 )
  {
    v11 = &a2[2 * v4 + 2];
    if ( v11[1] )
    {
      *v11 = dl_tls_generation + 1;
      v11[1] = 0;
    }
    if ( dl_tls_max_dtv_idx != a1 )
    {
      dl_tls_dtv_gaps = 1;
      return 1;
    }
  }
  else
  {
    if ( a2[1] )
    {
      if ( (remove_slotinfo(a1) & 1) == 0 )
      {
        v4 = *a2;
        goto LABEL_5;
      }
      return 1;
    }
    if ( (a4 & 1) != 0 )
      _libc_assert_fail("! should_be_there", (__int64)"dl-close.c", 0x37u, (__int64)"remove_slotinfo");
  }
LABEL_5:
  v7 = v4;
  if ( a3 )
    v8 = 0;
  else
    v8 = dl_tls_static_nelem + 1;
  while ( 1 )
  {
    if ( v7 <= v8 )
      return 0;
    if ( a2[2 * v7 + 1] )
      break;
    --v7;
  }
  dl_tls_max_dtv_idx = a3 - 1 + v7;
  return 1;
}
