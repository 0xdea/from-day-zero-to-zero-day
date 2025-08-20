__int64 __fastcall dl_assign_tls_modid(__int64 result)
{
  char *v1; // x7
  __int64 *v2; // x2
  unsigned __int64 v3; // x8
  unsigned __int64 *v4; // x3
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x6
  unsigned __int64 v7; // x10
  __int64 v8; // x5
  __int64 v9; // x4
  unsigned __int64 *v10; // x4
  __int64 v11; // x1
  __int64 v12; // x0

  v1 = &dl_tls_dtv_gaps;
  v2 = &dl_tls_max_dtv_idx;
  v3 = dl_tls_max_dtv_idx;
  if ( (dl_tls_dtv_gaps & 1) == 0 )
  {
    *(_QWORD *)(result + 1176) = ++dl_tls_max_dtv_idx;
    return result;
  }
  v4 = (unsigned __int64 *)dl_tls_dtv_slotinfo_list;
  v5 = dl_tls_static_nelem + 1;
  if ( dl_tls_static_nelem + 1 > (unsigned __int64)dl_tls_max_dtv_idx )
    goto LABEL_13;
  v6 = *(_QWORD *)dl_tls_dtv_slotinfo_list;
  v7 = dl_tls_max_dtv_idx + 1;
  v8 = 0;
  while ( 1 )
  {
    v9 = v5 - v8;
    if ( v5 - v8 >= v6 )
      goto LABEL_9;
    if ( !v4[2 * v9 + 3] )
      break;
    if ( v7 < ++v5 )
    {
      result = _libc_assert_fail("result <= GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 150, "_dl_assign_tls_modid");
LABEL_9:
      v4 = (unsigned __int64 *)v4[1];
      v8 += v6;
      if ( !v4 )
        goto LABEL_12;
      v6 = *v4;
    }
  }
  v10 = &v4[2 * v9];
  v10[3] = result;
  v10[2] = 0;
  v3 = *v2;
LABEL_12:
  if ( v5 <= v3 )
  {
LABEL_15:
    *(_QWORD *)(result + 1176) = v5;
  }
  else
  {
LABEL_13:
    if ( v5 == v3 + 1 )
    {
      v11 = *v2;
      *v1 = 0;
      v5 = v11 + 1;
      *v2 = v5;
      goto LABEL_15;
    }
    v12 = _libc_assert_fail("result == GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 169, "_dl_assign_tls_modid");
    return dl_count_modids(v12);
  }
  return result;
}
