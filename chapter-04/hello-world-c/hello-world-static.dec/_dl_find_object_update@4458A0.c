__int64 __fastcall dl_find_object_update(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x19
  __int64 v16; // x1
  unsigned __int64 v17; // x22
  __int64 v18; // x0
  _QWORD *v19; // x4
  void *v20; // x6
  __int64 v21; // x23
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 v30; // x1
  _QWORD *v31; // x5
  unsigned __int64 v32; // x0
  __int64 v33; // x4
  unsigned __int64 v34; // x2
  unsigned __int64 v35; // x1
  unsigned __int64 v36; // x3
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x2
  _QWORD *v40; // x21
  _QWORD *v41; // x5
  __int64 v42; // x0
  __int64 i; // x1
  __int64 v44; // x3
  unsigned __int64 v45; // x20
  _BOOL8 v46; // x26
  _QWORD *v47; // x8
  _QWORD *v48; // x0
  unsigned __int64 v49; // x1
  unsigned __int64 v50; // x1
  _QWORD *v51; // x27
  unsigned __int64 v52; // x0
  unsigned __int64 v53; // x24
  __int64 v54; // x0
  unsigned __int64 v55; // x1
  unsigned __int64 v56; // x7
  __int64 v57; // x3
  __int64 v58; // x6
  unsigned __int64 v59; // x1
  _QWORD *v60; // x1
  __int64 v61; // x9
  __int64 v62; // x9
  __int64 v63; // x6
  _QWORD *v66; // x2
  _QWORD *v67; // x1
  unsigned int v68; // w19

  if ( !a1 )
    return 1;
  v15 = a1;
  v16 = a1;
  v17 = 0;
  do
  {
    while ( *(_QWORD *)(v16 + 40) != v16 )
    {
      v16 = *(_QWORD *)(v16 + 24);
      if ( !v16 )
        goto LABEL_6;
    }
    v18 = *(unsigned __int8 *)(v16 + 870);
    v16 = *(_QWORD *)(v16 + 24);
    v17 += ((v18 ^ 0x40uLL) >> 6) & 1;
  }
  while ( v16 );
LABEL_6:
  if ( !v17 )
    return 1;
  v21 = malloc(8 * v17, a2, a3, a4, a5, a6, a7, a8, a9, v16, a11, a12, a13, a14, a15);
  if ( !v21 )
    return 0;
  v30 = 0;
  do
  {
    while ( *(_QWORD *)(v15 + 40) != v15 || (*(_BYTE *)(v15 + 870) & 0x40) != 0 )
    {
      v15 = *(_QWORD *)(v15 + 24);
      if ( !v15 )
        goto LABEL_13;
    }
    *(_QWORD *)(v21 + 8 * v30++) = v15;
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v15 );
LABEL_13:
  if ( v17 != 1 )
  {
    v31 = (_QWORD *)v21;
    v32 = 0;
    do
    {
      v20 = (void *)*v31;
      v33 = v32++;
      v34 = *(_QWORD *)(*v31 + 920LL);
      if ( v32 >= v17 )
      {
        v37 = *v31;
        v19 = v31;
      }
      else
      {
        v35 = v32;
        do
        {
          v36 = *(_QWORD *)(*(_QWORD *)(v21 + 8 * v35) + 920LL);
          if ( v36 < v34 )
            v33 = v35;
          ++v35;
          if ( v36 < v34 )
            v34 = v36;
        }
        while ( v35 != v17 );
        v37 = *(_QWORD *)(v21 + 8 * v33);
        v19 = (_QWORD *)(v21 + 8 * v33);
      }
      *v19 = v20;
      *v31++ = v37;
    }
    while ( v32 != v17 - 1 );
  }
  v38 = dlfo_loaded_mappings_version & 1;
  v39 = 0;
  v40 = (_QWORD *)dlfo_loaded_mappings[v38];
  v41 = v40;
  if ( !v40 )
  {
    v45 = v17;
    v46 = !(dlfo_loaded_mappings_version & 1);
    v47 = (_QWORD *)dlfo_loaded_mappings[v46];
    if ( v47 )
      goto LABEL_32;
LABEL_83:
    v50 = v45;
    v51 = 0;
    v52 = 63;
    goto LABEL_36;
  }
  do
  {
    v42 = v41[2];
    if ( !v42 )
      break;
    v19 = v41 + 6;
    for ( i = 0; i != v42; ++i )
    {
      v44 = 4 * i;
      v38 = v19[v44];
      if ( v38 )
        ++v39;
    }
    v41 = (_QWORD *)*v41;
  }
  while ( v41 );
  v45 = v39 + v17;
  v46 = !(dlfo_loaded_mappings_version & 1);
  v47 = (_QWORD *)dlfo_loaded_mappings[v46];
  if ( !v47 )
  {
    if ( !v45 )
      goto LABEL_80;
    goto LABEL_83;
  }
LABEL_32:
  v48 = v47;
  v49 = 0;
  do
  {
    v39 = v48[3];
    v48 = (_QWORD *)*v48;
    v49 += v39;
  }
  while ( v48 );
  if ( v45 > v49 )
  {
    v50 = v45 - v49;
    v51 = v47;
    v52 = 2LL * v47[3];
LABEL_36:
    if ( v50 < v52 )
      v53 = v52;
    else
      v53 = v50;
    v54 = malloc(32 * (v53 + 9), v22, v23, v24, v25, v26, v27, v28, v29, v50, v39, v38, v19, v41, v20);
    if ( !v54 )
    {
      v68 = 0;
      goto LABEL_74;
    }
    v47 = (_QWORD *)((v54 + 127) & 0xFFFFFFFFFFFFFF80LL);
    *v47 = v51;
    v47[1] = v54;
    v55 = (((v54 + 32 * (v53 + 9)) & 0xFFFFFFFFFFFFFF80LL) - (unsigned __int64)v47 - 32) >> 5;
    v47[2] = 0;
    v47[3] = v55;
    if ( v53 > v55 )
      _libc_assert_fail(
        "result->allocated >= size",
        (__int64)"dl-find_object.c",
        0xECu,
        (__int64)"_dlfo_mappings_segment_allocate");
    __dmb(0xBu);
    atomic_store((unsigned __int64)v47, (unsigned __int64 *)&dlfo_loaded_mappings[v46]);
    goto LABEL_42;
  }
LABEL_80:
  __dmb(0xBu);
LABEL_42:
  v56 = v47[3];
  if ( v56 > v45 )
    v56 = v45;
  v47[2] = v56;
  v57 = 0;
  if ( v40 )
    v57 = v40[2];
  if ( v57 )
    goto LABEL_59;
  while ( 1 )
  {
    if ( v40 )
    {
LABEL_48:
      v40 = (_QWORD *)*v40;
      if ( v40 )
      {
        v57 = v40[2];
        if ( v57 )
        {
LABEL_50:
          v58 = v57;
          v59 = v56;
          while ( !v40[4 * v58 + 2] )
          {
            if ( v58 == 1 )
              goto LABEL_48;
            --v58;
          }
          goto LABEL_52;
        }
      }
    }
    v59 = v56;
    v58 = 0;
    if ( !v17 )
      break;
    while ( 1 )
    {
      v40 = 0;
LABEL_52:
      if ( !v45 )
        _libc_assert_fail(
          "remaining_to_add > 0",
          (__int64)"dl-find_object.c",
          0x2DAu,
          (__int64)"_dl_find_object_update_1");
      if ( !v56 )
      {
        v47 = (_QWORD *)*v47;
        v59 = v47[3];
        if ( v59 > v45 )
          v59 = v45;
        v47[2] = v59;
      }
      v56 = v59 - 1;
      v60 = &v47[4 * v59];
      if ( !v17 || (v61 = *(_QWORD *)(v21 + 8 * v17 - 8), v40) && *(_QWORD *)(v61 + 920) < v40[4 * v58] )
      {
        if ( !v58 )
          _libc_assert_fail(
            "current_seg_index1 > 0",
            (__int64)"dl-find_object.c",
            0x2EDu,
            (__int64)"_dl_find_object_update_1");
        v57 = v58 - 1;
        *v60 = v40[4 * v58];
        v66 = &v40[4 * v58 - 4];
        v67 = &v47[4 * v56];
        v67[5] = v66[5];
        v67[6] = v66[6];
        v67[7] = v66[7];
        --v45;
      }
      else
      {
        dl_find_object_from_map(v61, v60);
        --v17;
        v57 = v63;
        --v45;
        *(_BYTE *)(v62 + 870) |= 0x40u;
      }
      if ( !v57 )
        break;
LABEL_59:
      if ( v40 )
        goto LABEL_50;
      v58 = v57;
      v59 = v56;
      if ( !v17 )
        goto LABEL_69;
    }
  }
LABEL_69:
  if ( v45 )
    _libc_assert_fail("remaining_to_add == 0", (__int64)"dl-find_object.c", 0x302u, (__int64)"_dl_find_object_update_1");
  if ( v56 )
    _libc_assert_fail(
      "target_seg_index1 == 0",
      (__int64)"dl-find_object.c",
      0x305u,
      (__int64)"_dl_find_object_update_1");
  if ( *v47 )
    *(_QWORD *)(*v47 + 16LL) = 0;
  __dmb(0xBu);
  ++dlfo_loaded_mappings_version;
  v68 = 1;
LABEL_74:
  free(v21, v22, v23, v24, v25, v26, v27, v28, v29);
  return v68;
}
