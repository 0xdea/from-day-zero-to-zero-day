__int64 __fastcall dl_addr(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 **a3,
        _QWORD *a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned int v19; // w23
  __int64 *dso_for_object; // x0
  unsigned __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  unsigned __int64 v24; // x4
  unsigned __int64 v25; // x5
  void *v26; // x6
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  _BYTE *v35; // x1
  __int64 v36; // x2
  unsigned __int64 v37; // x10
  unsigned int *v38; // x11
  __int64 v39; // x12
  int v40; // w13
  unsigned int *v41; // x8
  unsigned int *v42; // x13
  __int64 v43; // x9
  unsigned __int64 v44; // x7
  unsigned int v45; // t1
  unsigned int *v46; // x4
  __int64 v48; // x8

  pthread_mutex_lock(
    dl_load_lock,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    (__int64)a2,
    (__int64)a3,
    (__int64)a4,
    a5,
    a6,
    a7);
  v19 = 0;
  dso_for_object = dl_find_dso_for_object(a1);
  if ( !dso_for_object )
    goto LABEL_29;
  v35 = (_BYTE *)dso_for_object[1];
  v36 = dso_for_object[115];
  *a2 = v35;
  a2[1] = v36;
  if ( !*v35 && (*((_WORD *)dso_for_object + 434) & 3LL) == 0 )
    *a2 = program_invocation_short_name[0];
  v22 = 0;
  v37 = *(_QWORD *)(dso_for_object[14] + 8);
  if ( (*((_BYTE *)dso_for_object + 870) & 0x20) != 0 )
  {
    v22 = *dso_for_object;
    v37 += *dso_for_object;
  }
  v24 = dso_for_object[13];
  v21 = v37;
  v38 = (unsigned int *)dso_for_object[93];
  v39 = *(_QWORD *)(v24 + 8);
  v23 = *(unsigned int *)(dso_for_object[18] + 8);
  if ( v38 )
  {
    v40 = *((_DWORD *)dso_for_object + 207);
    if ( v40 )
    {
      v41 = (unsigned int *)dso_for_object[106];
      v38 = 0;
      v42 = &v41[v40];
      while ( 1 )
      {
        v25 = *v41;
        if ( (_DWORD)v25 )
          break;
LABEL_8:
        if ( ++v41 == v42 )
          goto LABEL_21;
      }
      v43 = dso_for_object[107];
      v25 = v43 + 4LL * (unsigned int)v25;
      while ( 1 )
      {
        v46 = (unsigned int *)(v37 + 24LL * (unsigned int)((v25 - v43) >> 2));
        v26 = (void *)*((unsigned __int16 *)v46 + 3);
        if ( *((_WORD *)v46 + 3) )
        {
          if ( (_DWORD)v26 == 65521 )
            goto LABEL_17;
        }
        else if ( !*((_QWORD *)v46 + 1) )
        {
          goto LABEL_17;
        }
        if ( (v46[1] & 0xF) == 6 )
          goto LABEL_17;
        v21 = *((_QWORD *)v46 + 1);
        v44 = v21 + *dso_for_object;
        if ( a1 < v44 )
          goto LABEL_17;
        if ( *((_WORD *)v46 + 3) )
        {
          v26 = (void *)*((_QWORD *)v46 + 2);
          if ( !v26 )
          {
            if ( a1 == v44 )
              goto LABEL_51;
            goto LABEL_17;
          }
        }
        else
        {
          if ( a1 == v44 )
            goto LABEL_51;
          v26 = (void *)*((_QWORD *)v46 + 2);
        }
        if ( a1 < (unsigned __int64)v26 + v44 )
        {
LABEL_51:
          if ( !v38 || (v26 = (void *)*((_QWORD *)v38 + 1), v21 > (unsigned __int64)v26) )
          {
            v21 = *v46;
            if ( (unsigned int)v23 > (unsigned int)v21 )
              v38 = (unsigned int *)(v37 + 24LL * (unsigned int)((v25 - v43) >> 2));
          }
        }
LABEL_17:
        v45 = *(_DWORD *)v25;
        v25 += 4LL;
        v24 = v45;
        if ( (v45 & 1) != 0 )
          goto LABEL_8;
      }
    }
    goto LABEL_56;
  }
  v24 = dso_for_object[12];
  if ( !v24
    || (v25 = 24,
        v24 = v22 + *(_QWORD *)(v24 + 8),
        v26 = (void *)(v37 + 24LL * *(unsigned int *)(v24 + 4)),
        v37 >= (unsigned __int64)v26) )
  {
LABEL_56:
    if ( a3 )
    {
      *a3 = dso_for_object;
      if ( a4 )
        *a4 = 0;
    }
    else if ( a4 )
    {
      *a4 = 0;
    }
    goto LABEL_59;
  }
  do
  {
    v25 = *(unsigned __int8 *)(v21 + 4);
    v24 = (unsigned __int8)((*(_BYTE *)(v21 + 4) >> 4) - 1);
    if ( (unsigned int)v24 > 1 )
      goto LABEL_33;
    v24 = (*(_BYTE *)(v21 + 5) & 3u) - 1;
    if ( (unsigned int)v24 <= 1 )
      goto LABEL_33;
    v25 &= 0xFu;
    if ( (_DWORD)v25 == 6 )
      goto LABEL_33;
    v24 = *(unsigned __int16 *)(v21 + 6);
    if ( *(_WORD *)(v21 + 6) )
    {
      if ( (_DWORD)v24 == 65521 )
        goto LABEL_33;
      v25 = *(_QWORD *)(v21 + 8);
      v24 = v25 + *dso_for_object;
      if ( a1 < v24 )
        goto LABEL_33;
      v48 = *(_QWORD *)(v21 + 16);
      if ( !v48 )
      {
        if ( a1 != v24 )
          goto LABEL_33;
        goto LABEL_43;
      }
    }
    else
    {
      v25 = *(_QWORD *)(v21 + 8);
      if ( !v25 )
        goto LABEL_33;
      v24 = v25 + *dso_for_object;
      if ( a1 < v24 )
        goto LABEL_33;
      if ( a1 == v24 )
        goto LABEL_43;
      v48 = *(_QWORD *)(v21 + 16);
    }
    v24 += v48;
    if ( a1 >= v24 )
      goto LABEL_33;
LABEL_43:
    if ( !v38 || (v24 = *((_QWORD *)v38 + 1), v24 < v25) )
    {
      v24 = *(unsigned int *)v21;
      if ( (unsigned int)v23 > (unsigned int)v24 )
        v38 = (unsigned int *)v21;
    }
LABEL_33:
    v21 += 24LL;
  }
  while ( (unsigned __int64)v26 > v21 );
LABEL_21:
  if ( a3 )
    *a3 = dso_for_object;
  if ( a4 )
    *a4 = v38;
  if ( !v38 )
  {
LABEL_59:
    v19 = 1;
    a2[2] = 0;
    a2[3] = 0;
    goto LABEL_29;
  }
  v24 = *v38;
  v23 = *((unsigned __int16 *)v38 + 3);
  v22 += v39 + v24;
  a2[2] = v22;
  if ( (_DWORD)v23 == 65521 )
    v21 = 0;
  else
    v21 = *dso_for_object;
  v19 = 1;
  a2[3] = *((_QWORD *)v38 + 1) + v21;
LABEL_29:
  pthread_mutex_unlock(dl_load_lock, v27, v28, v29, v30, v31, v32, v33, v34, v21, v22, v23, v24, v25, v26);
  return v19;
}
