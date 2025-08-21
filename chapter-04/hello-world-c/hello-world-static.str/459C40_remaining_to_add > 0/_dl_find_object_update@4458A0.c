__int64 __fastcall dl_find_object_update(__int64 a1, __int64 a2, __int16 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // x19
  __int64 v7; // x1
  char *v8; // x22
  __int64 v9; // x0
  _QWORD *v10; // x4
  __int64 v11; // x23
  __int64 v12; // x1
  _QWORD *v13; // x5
  char *v14; // x0
  __int64 v15; // x4
  unsigned __int64 v16; // x2
  char *v17; // x1
  unsigned __int64 v18; // x3
  __int64 v19; // x1
  __int64 v20; // x3
  __int16 *v21; // x2
  _QWORD *v22; // x21
  _QWORD *v23; // x5
  __int64 v24; // x0
  __int64 i; // x1
  __int64 v26; // x3
  char *v27; // x20
  _BOOL8 v28; // x26
  _QWORD *v29; // x8
  _QWORD *v30; // x0
  unsigned __int64 v31; // x1
  unsigned __int64 v32; // x1
  _QWORD *v33; // x27
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // x24
  __int64 v36; // x0
  unsigned __int64 v37; // x1
  unsigned __int64 v38; // x7
  __int64 v39; // x3
  __int64 v40; // x6
  unsigned __int64 v41; // x1
  _QWORD *v42; // x1
  __int64 v43; // x9
  __int64 v44; // x9
  __int64 v45; // x6
  _QWORD *v48; // x2
  _QWORD *v49; // x1
  unsigned int v50; // w19

  if ( !a1 )
    return 1;
  v6 = a1;
  v7 = a1;
  v8 = 0;
  do
  {
    while ( *(_QWORD *)(v7 + 40) != v7 )
    {
      v7 = *(_QWORD *)(v7 + 24);
      if ( !v7 )
        goto LABEL_6;
    }
    v9 = *(unsigned __int8 *)(v7 + 870);
    v7 = *(_QWORD *)(v7 + 24);
    v8 += ((v9 ^ 0x40uLL) >> 6) & 1;
  }
  while ( v7 );
LABEL_6:
  if ( !v8 )
    return 1;
  v11 = malloc(8LL * (_QWORD)v8, v7, a3, a4, a5, a6);
  if ( !v11 )
    return 0;
  v12 = 0;
  do
  {
    while ( *(_QWORD *)(v6 + 40) != v6 || (*(_BYTE *)(v6 + 870) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v6 )
        goto LABEL_13;
    }
    *(_QWORD *)(v11 + 8 * v12++) = v6;
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
LABEL_13:
  if ( v8 != (char *)1 )
  {
    v13 = (_QWORD *)v11;
    v14 = 0;
    do
    {
      v15 = (__int64)v14++;
      v16 = *(_QWORD *)(*v13 + 920LL);
      if ( v14 >= v8 )
      {
        v19 = *v13;
        v10 = v13;
      }
      else
      {
        v17 = v14;
        do
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v11 + 8LL * (_QWORD)v17) + 920LL);
          if ( v18 < v16 )
            v15 = (__int64)v17;
          ++v17;
          if ( v18 < v16 )
            v16 = v18;
        }
        while ( v17 != v8 );
        v19 = *(_QWORD *)(v11 + 8 * v15);
        v10 = (_QWORD *)(v11 + 8 * v15);
      }
      *v10 = *v13;
      *v13++ = v19;
    }
    while ( v14 != v8 - 1 );
  }
  v20 = dlfo_loaded_mappings_version & 1;
  v21 = 0;
  v22 = (_QWORD *)dlfo_loaded_mappings[v20];
  v23 = v22;
  if ( !v22 )
  {
    v27 = v8;
    v28 = !(dlfo_loaded_mappings_version & 1);
    v29 = (_QWORD *)dlfo_loaded_mappings[v28];
    if ( v29 )
      goto LABEL_32;
LABEL_83:
    v32 = (unsigned __int64)v27;
    v33 = 0;
    v34 = 63;
    goto LABEL_36;
  }
  do
  {
    v24 = v23[2];
    if ( !v24 )
      break;
    v10 = v23 + 6;
    for ( i = 0; i != v24; ++i )
    {
      v26 = 4 * i;
      v20 = v10[v26];
      if ( v20 )
        v21 = (__int16 *)((char *)v21 + 1);
    }
    v23 = (_QWORD *)*v23;
  }
  while ( v23 );
  v27 = &v8[(_QWORD)v21];
  v28 = !(dlfo_loaded_mappings_version & 1);
  v29 = (_QWORD *)dlfo_loaded_mappings[v28];
  if ( !v29 )
  {
    if ( !v27 )
      goto LABEL_80;
    goto LABEL_83;
  }
LABEL_32:
  v30 = v29;
  v31 = 0;
  do
  {
    v21 = (__int16 *)v30[3];
    v30 = (_QWORD *)*v30;
    v31 += (unsigned __int64)v21;
  }
  while ( v30 );
  if ( (unsigned __int64)v27 > v31 )
  {
    v32 = (unsigned __int64)&v27[-v31];
    v33 = v29;
    v34 = 2LL * v29[3];
LABEL_36:
    if ( v32 < v34 )
      v35 = v34;
    else
      v35 = v32;
    v36 = malloc(32 * (v35 + 9), v32, v21, v20, (__int64)v10, (__int64)v23);
    if ( !v36 )
    {
      v50 = 0;
      goto LABEL_74;
    }
    v29 = (_QWORD *)((v36 + 127) & 0xFFFFFFFFFFFFFF80LL);
    *v29 = v33;
    v29[1] = v36;
    v37 = (((v36 + 32 * (v35 + 9)) & 0xFFFFFFFFFFFFFF80LL) - (unsigned __int64)v29 - 32) >> 5;
    v29[2] = 0;
    v29[3] = v37;
    if ( v35 > v37 )
      _libc_assert_fail(
        "result->allocated >= size",
        (__int64)"dl-find_object.c",
        0xECu,
        (__int64)"_dlfo_mappings_segment_allocate");
    __dmb(0xBu);
    atomic_store((unsigned __int64)v29, (unsigned __int64 *)&dlfo_loaded_mappings[v28]);
    goto LABEL_42;
  }
LABEL_80:
  __dmb(0xBu);
LABEL_42:
  v38 = v29[3];
  if ( v38 > (unsigned __int64)v27 )
    v38 = (unsigned __int64)v27;
  v29[2] = v38;
  v39 = 0;
  if ( v22 )
    v39 = v22[2];
  if ( v39 )
    goto LABEL_59;
  while ( 1 )
  {
    if ( v22 )
    {
LABEL_48:
      v22 = (_QWORD *)*v22;
      if ( v22 )
      {
        v39 = v22[2];
        if ( v39 )
        {
LABEL_50:
          v40 = v39;
          v41 = v38;
          while ( !v22[4 * v40 + 2] )
          {
            if ( v40 == 1 )
              goto LABEL_48;
            --v40;
          }
          goto LABEL_52;
        }
      }
    }
    v41 = v38;
    v40 = 0;
    if ( !v8 )
      break;
    while ( 1 )
    {
      v22 = 0;
LABEL_52:
      if ( !v27 )
        _libc_assert_fail(
          "remaining_to_add > 0",
          (__int64)"dl-find_object.c",
          0x2DAu,
          (__int64)"_dl_find_object_update_1");
      if ( !v38 )
      {
        v29 = (_QWORD *)*v29;
        v41 = v29[3];
        if ( v41 > (unsigned __int64)v27 )
          v41 = (unsigned __int64)v27;
        v29[2] = v41;
      }
      v38 = v41 - 1;
      v42 = &v29[4 * v41];
      if ( !v8 || (v43 = *(_QWORD *)(v11 + 8LL * (_QWORD)v8 - 8), v22) && *(_QWORD *)(v43 + 920) < v22[4 * v40] )
      {
        if ( !v40 )
          _libc_assert_fail(
            "current_seg_index1 > 0",
            (__int64)"dl-find_object.c",
            0x2EDu,
            (__int64)"_dl_find_object_update_1");
        v39 = v40 - 1;
        *v42 = v22[4 * v40];
        v48 = &v22[4 * v40 - 4];
        v49 = &v29[4 * v38];
        v49[5] = v48[5];
        v49[6] = v48[6];
        v49[7] = v48[7];
        --v27;
      }
      else
      {
        dl_find_object_from_map(v43, v42);
        --v8;
        v39 = v45;
        --v27;
        *(_BYTE *)(v44 + 870) |= 0x40u;
      }
      if ( !v39 )
        break;
LABEL_59:
      if ( v22 )
        goto LABEL_50;
      v40 = v39;
      v41 = v38;
      if ( !v8 )
        goto LABEL_69;
    }
  }
LABEL_69:
  if ( v27 )
    _libc_assert_fail("remaining_to_add == 0", (__int64)"dl-find_object.c", 0x302u, (__int64)"_dl_find_object_update_1");
  if ( v38 )
    _libc_assert_fail(
      "target_seg_index1 == 0",
      (__int64)"dl-find_object.c",
      0x305u,
      (__int64)"_dl_find_object_update_1");
  if ( *v29 )
    *(_QWORD *)(*v29 + 16LL) = 0;
  __dmb(0xBu);
  ++dlfo_loaded_mappings_version;
  v50 = 1;
LABEL_74:
  free(v11);
  return v50;
}
