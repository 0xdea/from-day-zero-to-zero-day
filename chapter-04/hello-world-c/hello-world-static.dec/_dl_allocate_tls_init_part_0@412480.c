__int64 __fastcall dl_allocate_tls_init_part_0(void **a1, unsigned __int8 a2)
{
  _QWORD *v2; // x26
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  unsigned __int64 v15; // x21
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x28
  unsigned __int64 *v18; // x23
  unsigned __int64 v19; // x5
  unsigned __int64 v20; // x27
  unsigned __int64 *v21; // x20
  unsigned __int64 v22; // x24
  char *v23; // x0
  bool v24; // zf
  __int64 v25; // x0
  _QWORD *v26; // x19
  __int64 v27; // x2
  __int64 v28; // x0
  _OWORD *v29; // x6
  __int64 result; // x0
  __int64 v31; // x2
  void *v32; // x1
  unsigned __int64 v33; // x0
  _QWORD *v34; // x26
  __int64 v35; // x23
  __int64 v36; // x0
  int v38; // [xsp+74h] [xbp+74h]
  unsigned __int64 v39; // [xsp+78h] [xbp+78h]

  v38 = a2;
  v2 = *a1;
  pthread_mutex_lock(&dl_load_tls_lock);
  v15 = *(v2 - 2);
  v16 = dl_tls_max_dtv_idx;
  if ( v15 < dl_tls_max_dtv_idx )
  {
    v31 = dl_tls_max_dtv_idx + 16;
    v26 = (_QWORD *)(dl_tls_max_dtv_idx + 14);
    v32 = &unk_4919A0;
    v33 = 16 * (dl_tls_max_dtv_idx + 16);
    if ( v2 == (_QWORD *)&unk_4919A0 )
      goto LABEL_29;
    v34 = (_QWORD *)realloc((__int64)(v2 - 2), v33, v7, v8, v9, v10, v11, v12, v13, v14, v31, v3, v4, v5, v6);
    if ( !v34 )
      goto LABEL_33;
    v35 = 2 * (v15 + 2);
LABEL_27:
    *v34 = v26;
    memset(&v34[v35], 0, 16 * ((_QWORD)v26 - v15));
    v2 = v34 + 2;
    v16 = dl_tls_max_dtv_idx;
    *a1 = v2;
  }
  v17 = 0;
  v39 = 0;
  v18 = (unsigned __int64 *)dl_tls_dtv_slotinfo_list;
  do
  {
    v19 = *v18;
    v20 = v39 == 0;
    if ( v20 < *v18 )
    {
      v15 = v39 + v20;
      v21 = &v18[2 * v20 + 2];
      do
      {
        while ( 1 )
        {
          if ( v16 < v15 )
            goto LABEL_23;
          v26 = (_QWORD *)v21[1];
          if ( v26 )
            break;
LABEL_12:
          ++v20;
          ++v15;
          v21 += 2;
          if ( v20 >= v19 )
            goto LABEL_20;
        }
        if ( *v21 > dl_tls_generation )
        {
          v33 = _libc_assert_fail(
                  "listp->slotinfo[cnt].gen <= GL(dl_tls_generation)",
                  "dl-tls.c",
                  570,
                  "_dl_allocate_tls_init");
LABEL_29:
          v36 = malloc(v33, v7, v8, v9, v10, v11, v12, v13, v14, (__int64)v32, v31, v3, v4, v5, v6);
          v34 = (_QWORD *)v36;
          if ( !v36 )
            goto LABEL_33;
          v35 = 2 * (v15 + 2);
          j_memcpy(v36);
          goto LABEL_27;
        }
        v27 = v26[147];
        if ( v17 < *v21 )
          v17 = *v21;
        v28 = v26[146];
        v29 = &v2[2 * v27];
        *v29 = xmmword_45A900;
        if ( (unsigned __int64)(v28 + 1) > 1 )
        {
          if ( v27 != v15 )
            goto LABEL_32;
          v22 = v26[142];
          if ( v26[143] < v22 )
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
          v24 = v26[6] == 0;
          v23 = (char *)a1 + v28;
          *(_QWORD *)v29 = v23;
          v24 = !v24 && v38 == 0;
          if ( !v24 )
          {
            v25 = j_memcpy(v23);
            memset(v25 + v22, 0, v26[143] - v26[142]);
            v16 = dl_tls_max_dtv_idx;
            v19 = *v18;
            goto LABEL_12;
          }
        }
        ++v20;
        ++v15;
        v16 = dl_tls_max_dtv_idx;
        v21 += 2;
      }
      while ( v20 < v19 );
    }
LABEL_20:
    v39 += v20;
    if ( v39 > v16 )
      goto LABEL_23;
    v18 = (unsigned __int64 *)v18[1];
  }
  while ( v18 );
  _libc_assert_fail("listp != NULL", "dl-tls.c", 613, "_dl_allocate_tls_init");
LABEL_23:
  result = pthread_mutex_unlock(&dl_load_tls_lock);
  *v2 = v17;
  return result;
}
