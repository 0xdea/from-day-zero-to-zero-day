__int64 __fastcall _dl_libc_freemem(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD *v8; // x19
  __int64 v9; // x0
  __int64 *i; // x20
  __int64 v11; // x0
  __int64 v12; // x19
  int v13; // w1
  __int64 v14; // x0
  __int64 v15; // x0
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  __int64 v25; // x0

  v8 = (_QWORD *)dl_all_dirs;
  if ( dl_all_dirs != dl_init_all_dirs )
  {
    do
    {
      v9 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      free(v9, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( (_QWORD *)dl_init_all_dirs != v8 );
  }
  if ( dl_nns )
  {
    for ( i = dl_ns; i; i = (__int64 *)i[3] )
    {
      v11 = i[7];
      v12 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v11 + 8) = 0;
      while ( v12 )
      {
        while ( 1 )
        {
          v13 = *(_DWORD *)(v12 + 16);
          v14 = v12;
          v12 = *(_QWORD *)(v12 + 8);
          if ( v13 )
            break;
          free(v14, a1, a2, a3, a4, a5, a6, a7, a8);
          if ( !v12 )
            goto LABEL_9;
        }
      }
LABEL_9:
      if ( (*((_BYTE *)i + 870) & 0x10) != 0 )
        free(i[129], a1, a2, a3, a4, a5, a6, a7, a8);
      i[129] = 0;
    }
    if ( dword_4914C0 && *((_DWORD *)off_4914B8 + 2) == dword_491498 )
    {
      v25 = (__int64)*off_4914B8;
      *off_4914B8 = dl_initial_searchlist;
      dword_4914C0 = 0;
      free(v25, a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  free_slotinfo((__int64 *)(dl_tls_dtv_slotinfo_list + 8));
  v15 = dl_scope_free_list;
  dl_scope_free_list = 0;
  return free(v15, v16, v17, v18, v19, v20, v21, v22, v23);
}
