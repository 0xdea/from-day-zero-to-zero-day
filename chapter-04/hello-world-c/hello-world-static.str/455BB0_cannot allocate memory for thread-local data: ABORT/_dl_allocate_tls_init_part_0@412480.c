__int64 __fastcall dl_allocate_tls_init_part_0(void **a1, unsigned __int8 a2)
{
  _QWORD *v2; // x26
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x28
  unsigned __int64 *v9; // x23
  unsigned __int64 v10; // x5
  unsigned __int64 v11; // x27
  unsigned __int64 *v12; // x20
  unsigned __int64 v13; // x24
  char *v14; // x0
  bool v15; // zf
  __int64 v16; // x0
  _QWORD *v17; // x19
  __int64 v18; // x2
  __int64 v19; // x0
  _OWORD *v20; // x6
  __int64 result; // x0
  __int16 *v22; // x2
  void *v23; // x1
  unsigned __int64 v24; // x0
  char *v25; // x26
  __int64 v26; // x23
  __int64 v27; // x0
  int v29; // [xsp+74h] [xbp+74h]
  unsigned __int64 v30; // [xsp+78h] [xbp+78h]

  v29 = a2;
  v2 = *a1;
  pthread_mutex_lock(&dl_load_tls_lock);
  v6 = *(v2 - 2);
  v7 = dl_tls_max_dtv_idx;
  if ( v6 < dl_tls_max_dtv_idx )
  {
    v22 = (__int16 *)(dl_tls_max_dtv_idx + 16);
    v17 = (_QWORD *)(dl_tls_max_dtv_idx + 14);
    v23 = &unk_4919A0;
    v24 = 16 * (dl_tls_max_dtv_idx + 16);
    if ( v2 == (_QWORD *)&unk_4919A0 )
      goto LABEL_29;
    v25 = realloc((__int64)(v2 - 2), v24, (__int64)v22, v3, v4, v5);
    if ( !v25 )
      goto LABEL_33;
    v26 = 16 * (v6 + 2);
LABEL_27:
    *(_QWORD *)v25 = v17;
    memset(&v25[v26], 0, 16 * ((_QWORD)v17 - v6));
    v2 = v25 + 16;
    v7 = dl_tls_max_dtv_idx;
    *a1 = v2;
  }
  v8 = 0;
  v30 = 0;
  v9 = (unsigned __int64 *)dl_tls_dtv_slotinfo_list;
  do
  {
    v10 = *v9;
    v11 = v30 == 0;
    if ( v11 < *v9 )
    {
      v6 = v30 + v11;
      v12 = &v9[2 * v11 + 2];
      do
      {
        while ( 1 )
        {
          if ( v7 < v6 )
            goto LABEL_23;
          v17 = (_QWORD *)v12[1];
          if ( v17 )
            break;
LABEL_12:
          ++v11;
          ++v6;
          v12 += 2;
          if ( v11 >= v10 )
            goto LABEL_20;
        }
        if ( *v12 > dl_tls_generation )
        {
          v24 = _libc_assert_fail(
                  "listp->slotinfo[cnt].gen <= GL(dl_tls_generation)",
                  "dl-tls.c",
                  570,
                  "_dl_allocate_tls_init");
LABEL_29:
          v27 = malloc(v24, (__int64)v23, v22, v3, v4, v5);
          v25 = (char *)v27;
          if ( !v27 )
            goto LABEL_33;
          v26 = 16 * (v6 + 2);
          j_memcpy(v27);
          goto LABEL_27;
        }
        v18 = v17[147];
        if ( v8 < *v12 )
          v8 = *v12;
        v19 = v17[146];
        v20 = &v2[2 * v18];
        *v20 = xmmword_45A900;
        if ( (unsigned __int64)(v19 + 1) > 1 )
        {
          if ( v18 != v6 )
            goto LABEL_32;
          v13 = v17[142];
          if ( v17[143] < v13 )
          {
            _libc_assert_fail(
              "map->l_tls_blocksize >= map->l_tls_initimage_size",
              "dl-tls.c",
              581,
              "_dl_allocate_tls_init",
              NAN);
LABEL_32:
            _libc_assert_fail("map->l_tls_modid == total + cnt", "dl-tls.c", 580, "_dl_allocate_tls_init");
LABEL_33:
            dl_fatal_printf("cannot allocate memory for thread-local data: ABORT\n");
          }
          v15 = v17[6] == 0;
          v14 = (char *)a1 + v19;
          *(_QWORD *)v20 = v14;
          v15 = !v15 && v29 == 0;
          if ( !v15 )
          {
            v16 = j_memcpy(v14);
            memset(v16 + v13, 0, v17[143] - v17[142]);
            v7 = dl_tls_max_dtv_idx;
            v10 = *v9;
            goto LABEL_12;
          }
        }
        ++v11;
        ++v6;
        v7 = dl_tls_max_dtv_idx;
        v12 += 2;
      }
      while ( v11 < v10 );
    }
LABEL_20:
    v30 += v11;
    if ( v30 > v7 )
      goto LABEL_23;
    v9 = (unsigned __int64 *)v9[1];
  }
  while ( v9 );
  _libc_assert_fail("listp != NULL", "dl-tls.c", 613, "_dl_allocate_tls_init");
LABEL_23:
  result = pthread_mutex_unlock(&dl_load_tls_lock);
  *v2 = v8;
  return result;
}
