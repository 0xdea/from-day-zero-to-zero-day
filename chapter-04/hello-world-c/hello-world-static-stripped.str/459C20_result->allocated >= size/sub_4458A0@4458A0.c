__int64 __fastcall sub_4458A0(
        __int64 a1,
        long double a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        __int64 a10,
        __int16 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // x19
  __int64 v15; // x1
  char *v16; // x22
  __int64 v17; // x0
  _QWORD *v18; // x4
  __int64 v19; // x23
  long double v20; // q0
  long double v21; // q1
  long double v22; // q2
  long double v23; // q3
  long double v24; // q4
  long double v25; // q5
  long double v26; // q6
  long double v27; // q7
  __int64 v28; // x1
  _QWORD *v29; // x5
  char *v30; // x0
  __int64 v31; // x4
  unsigned __int64 v32; // x2
  char *v33; // x1
  unsigned __int64 v34; // x3
  __int64 v35; // x1
  __int64 v36; // x3
  __int16 *v37; // x2
  _QWORD *v38; // x21
  _QWORD *v39; // x5
  __int64 v40; // x0
  __int64 i; // x1
  __int64 v42; // x3
  char *v43; // x20
  _BOOL8 v44; // x26
  _QWORD *v45; // x8
  _QWORD *v46; // x0
  unsigned __int64 v47; // x1
  unsigned __int64 v48; // x1
  _QWORD *v49; // x27
  unsigned __int64 v50; // x0
  unsigned __int64 v51; // x24
  __int64 v52; // x0
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x7
  __int64 v55; // x3
  __int64 v56; // x6
  unsigned __int64 v57; // x1
  _QWORD *v58; // x1
  __int64 v59; // x9
  __int64 v60; // x9
  __int64 v61; // x6
  _QWORD *v64; // x2
  _QWORD *v65; // x1
  unsigned int v66; // w19

  if ( !a1 )
    return 1;
  v14 = a1;
  v15 = a1;
  v16 = 0;
  do
  {
    while ( *(_QWORD *)(v15 + 40) != v15 )
    {
      v15 = *(_QWORD *)(v15 + 24);
      if ( !v15 )
        goto LABEL_6;
    }
    v17 = *(unsigned __int8 *)(v15 + 870);
    v15 = *(_QWORD *)(v15 + 24);
    v16 += ((v17 ^ 0x40uLL) >> 6) & 1;
  }
  while ( v15 );
LABEL_6:
  if ( !v16 )
    return 1;
  v19 = sub_40B890(8LL * (_QWORD)v16, a2, a3, a4, a5, a6, a7, a8, a9, v15, a11, a12, a13, a14);
  if ( !v19 )
    return 0;
  v28 = 0;
  do
  {
    while ( *(_QWORD *)(v14 + 40) != v14 || (*(_BYTE *)(v14 + 870) & 0x40) != 0 )
    {
      v14 = *(_QWORD *)(v14 + 24);
      if ( !v14 )
        goto LABEL_13;
    }
    *(_QWORD *)(v19 + 8 * v28++) = v14;
    v14 = *(_QWORD *)(v14 + 24);
  }
  while ( v14 );
LABEL_13:
  if ( v16 != (char *)1 )
  {
    v29 = (_QWORD *)v19;
    v30 = 0;
    do
    {
      v31 = (__int64)v30++;
      v32 = *(_QWORD *)(*v29 + 920LL);
      if ( v30 >= v16 )
      {
        v35 = *v29;
        v18 = v29;
      }
      else
      {
        v33 = v30;
        do
        {
          v34 = *(_QWORD *)(*(_QWORD *)(v19 + 8LL * (_QWORD)v33) + 920LL);
          if ( v34 < v32 )
            v31 = (__int64)v33;
          ++v33;
          if ( v34 < v32 )
            v32 = v34;
        }
        while ( v33 != v16 );
        v35 = *(_QWORD *)(v19 + 8 * v31);
        v18 = (_QWORD *)(v19 + 8 * v31);
      }
      *v18 = *v29;
      *v29++ = v35;
    }
    while ( v30 != v16 - 1 );
  }
  v36 = qword_496C30 & 1;
  v37 = 0;
  v38 = (_QWORD *)qword_496C20[v36];
  v39 = v38;
  if ( !v38 )
  {
    v43 = v16;
    v44 = !(qword_496C30 & 1);
    v45 = (_QWORD *)qword_496C20[v44];
    if ( v45 )
      goto LABEL_32;
LABEL_83:
    v48 = (unsigned __int64)v43;
    v49 = 0;
    v50 = 63;
    goto LABEL_36;
  }
  do
  {
    v40 = v39[2];
    if ( !v40 )
      break;
    v18 = v39 + 6;
    for ( i = 0; i != v40; ++i )
    {
      v42 = 4 * i;
      v36 = v18[v42];
      if ( v36 )
        v37 = (__int16 *)((char *)v37 + 1);
    }
    v39 = (_QWORD *)*v39;
  }
  while ( v39 );
  v43 = &v16[(_QWORD)v37];
  v44 = !(qword_496C30 & 1);
  v45 = (_QWORD *)qword_496C20[v44];
  if ( !v45 )
  {
    if ( !v43 )
      goto LABEL_80;
    goto LABEL_83;
  }
LABEL_32:
  v46 = v45;
  v47 = 0;
  do
  {
    v37 = (__int16 *)v46[3];
    v46 = (_QWORD *)*v46;
    v47 += (unsigned __int64)v37;
  }
  while ( v46 );
  if ( (unsigned __int64)v43 > v47 )
  {
    v48 = (unsigned __int64)&v43[-v47];
    v49 = v45;
    v50 = 2LL * v45[3];
LABEL_36:
    if ( v48 < v50 )
      v51 = v50;
    else
      v51 = v48;
    v52 = sub_40B890(32 * (v51 + 9), v20, v21, v22, v23, v24, v25, v26, v27, v48, v37, v36, (__int64)v18, (__int64)v39);
    if ( !v52 )
    {
      v66 = 0;
      goto LABEL_74;
    }
    v45 = (_QWORD *)((v52 + 127) & 0xFFFFFFFFFFFFFF80LL);
    *v45 = v49;
    v45[1] = v52;
    v53 = (((v52 + 32 * (v51 + 9)) & 0xFFFFFFFFFFFFFF80LL) - (unsigned __int64)v45 - 32) >> 5;
    v45[2] = 0;
    v45[3] = v53;
    if ( v51 > v53 )
      sub_41F250(
        "result->allocated >= size",
        (__int64)"dl-find_object.c",
        0xECu,
        (__int64)"_dlfo_mappings_segment_allocate");
    __dmb(0xBu);
    atomic_store((unsigned __int64)v45, (unsigned __int64 *)&qword_496C20[v44]);
    goto LABEL_42;
  }
LABEL_80:
  __dmb(0xBu);
LABEL_42:
  v54 = v45[3];
  if ( v54 > (unsigned __int64)v43 )
    v54 = (unsigned __int64)v43;
  v45[2] = v54;
  v55 = 0;
  if ( v38 )
    v55 = v38[2];
  if ( v55 )
    goto LABEL_59;
  while ( 1 )
  {
    if ( v38 )
    {
LABEL_48:
      v38 = (_QWORD *)*v38;
      if ( v38 )
      {
        v55 = v38[2];
        if ( v55 )
        {
LABEL_50:
          v56 = v55;
          v57 = v54;
          while ( !v38[4 * v56 + 2] )
          {
            if ( v56 == 1 )
              goto LABEL_48;
            --v56;
          }
          goto LABEL_52;
        }
      }
    }
    v57 = v54;
    v56 = 0;
    if ( !v16 )
      break;
    while ( 1 )
    {
      v38 = 0;
LABEL_52:
      if ( !v43 )
        sub_41F250("remaining_to_add > 0", (__int64)"dl-find_object.c", 0x2DAu, (__int64)"_dl_find_object_update_1");
      if ( !v54 )
      {
        v45 = (_QWORD *)*v45;
        v57 = v45[3];
        if ( v57 > (unsigned __int64)v43 )
          v57 = (unsigned __int64)v43;
        v45[2] = v57;
      }
      v54 = v57 - 1;
      v58 = &v45[4 * v57];
      if ( !v16 || (v59 = *(_QWORD *)(v19 + 8LL * (_QWORD)v16 - 8), v38) && *(_QWORD *)(v59 + 920) < v38[4 * v56] )
      {
        if ( !v56 )
          sub_41F250("current_seg_index1 > 0", (__int64)"dl-find_object.c", 0x2EDu, (__int64)"_dl_find_object_update_1");
        v55 = v56 - 1;
        *v58 = v38[4 * v56];
        v64 = &v38[4 * v56 - 4];
        v65 = &v45[4 * v54];
        v65[5] = v64[5];
        v65[6] = v64[6];
        v65[7] = v64[7];
        --v43;
      }
      else
      {
        sub_445160(v59, v58);
        --v16;
        v55 = v61;
        --v43;
        *(_BYTE *)(v60 + 870) |= 0x40u;
      }
      if ( !v55 )
        break;
LABEL_59:
      if ( v38 )
        goto LABEL_50;
      v56 = v55;
      v57 = v54;
      if ( !v16 )
        goto LABEL_69;
    }
  }
LABEL_69:
  if ( v43 )
    sub_41F250("remaining_to_add == 0", (__int64)"dl-find_object.c", 0x302u, (__int64)"_dl_find_object_update_1");
  if ( v54 )
    sub_41F250("target_seg_index1 == 0", (__int64)"dl-find_object.c", 0x305u, (__int64)"_dl_find_object_update_1");
  if ( *v45 )
    *(_QWORD *)(*v45 + 16LL) = 0;
  __dmb(0xBu);
  ++qword_496C30;
  v66 = 1;
LABEL_74:
  sub_40C1A0(v19);
  return v66;
}
