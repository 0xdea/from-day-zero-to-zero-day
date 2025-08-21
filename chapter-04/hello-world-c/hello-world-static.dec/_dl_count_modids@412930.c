__int64 dl_count_modids()
{
  __int64 result; // x0
  _QWORD *v1; // x5
  __int64 v2; // x1
  __int64 v3; // x2

  if ( (dl_tls_dtv_gaps & 1) == 0 )
    return dl_tls_max_dtv_idx;
  result = 0;
  v1 = (_QWORD *)dl_tls_dtv_slotinfo_list;
  if ( dl_tls_dtv_slotinfo_list )
  {
    do
    {
      v2 = 0;
      if ( *v1 )
      {
        do
        {
          v3 = 2 * v2++;
          if ( v1[v3 + 3] )
            ++result;
        }
        while ( *v1 != v2 );
      }
      v1 = (_QWORD *)v1[1];
    }
    while ( v1 );
  }
  return result;
}
