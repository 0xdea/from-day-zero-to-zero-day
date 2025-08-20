__int64 __fastcall sub_42E6C0(
        int a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 *v15; // x2
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v17; // x23
  int *v20; // x21
  int v21; // w22
  int v22; // w26
  int v25; // w24
  int *v26; // x0
  int v27; // w1
  int *v28; // x1
  int v29; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  void *v33; // x4
  void *v34; // x5
  void *v35; // x6
  double v36; // d0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  int v44; // w0
  int v45; // w0
  unsigned int v46; // w20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  void *v50; // x4
  void *v51; // x5
  void *v52; // x6
  int *v54; // x1
  int v55; // w0
  int *v57; // x0
  int v60; // w0
  int v61; // w0
  int v63; // [xsp+0h] [xbp-10h] BYREF
  __int64 v64; // [xsp+8h] [xbp-8h]

  v15 = &qword_48DD60;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v17 = StatusReg - 1856;
  v20 = *(int **)(StatusReg - 1856 + 0x4B0);
  v64 = qword_48DD60;
  v21 = dword_491910;
  v22 = dword_49190C;
  if ( !v20 )
  {
    if ( dword_491910 == -1 || dword_49190C == -1 )
    {
      dword_49190C = sub_430500(1);
      dword_491910 = sub_430540(1);
      v21 = dword_491910;
      v22 = dword_49190C;
    }
    v20 = (int *)sub_40CCB0(
                   4 * (v22 - v21 + 2LL),
                   1u,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   (__int64)v15,
                   a12,
                   a13,
                   a14,
                   a15);
    if ( !v20 )
    {
      v46 = 12;
      goto LABEL_26;
    }
    *v20 = v21 - 1;
    *(_QWORD *)(v17 + 0x4B0) = v20;
  }
  if ( a2 == -1 )
  {
    if ( a1 == -1 )
      goto LABEL_40;
    if ( v21 <= a1 && v22 >= a1 )
    {
      v25 = *v20;
LABEL_29:
      v54 = &v20[a1 - v21];
      v55 = v54[1] - 1;
      v54[1] = v55;
      if ( v55 )
        goto LABEL_40;
      if ( a1 != v25 || a2 >= a1 )
        goto LABEL_40;
      goto LABEL_35;
    }
LABEL_69:
    sub_41F250(
      "previous_prio == -1 || (previous_prio >= fifo_min_prio && previous_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x56u,
      (__int64)"__pthread_tpp_change_priority");
  }
  if ( v21 > a2 || v22 < a2 )
LABEL_71:
    sub_41F250(
      "new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x53u,
      (__int64)"__pthread_tpp_change_priority");
  if ( a1 != -1 && (v21 > a1 || v22 < a1) )
    goto LABEL_69;
  v25 = *v20;
  v26 = &v20[a2 - v21];
  v27 = v26[1];
  if ( v27 == -1 )
  {
    v46 = 11;
    goto LABEL_26;
  }
  v26[1] = v27 + 1;
  if ( a2 <= v25 )
  {
    if ( a1 == -1 )
      goto LABEL_40;
    goto LABEL_29;
  }
  if ( a1 != -1 )
  {
    v28 = &v20[a1 - v21];
    v29 = v28[1] - 1;
    v28[1] = v29;
    if ( !v29 && a2 < a1 && a1 == v25 )
    {
LABEL_35:
      a2 = a1 - 1;
      if ( v21 > a1 - 1 )
        goto LABEL_16;
      v57 = &v20[a2 - v21 + 1];
      do
      {
        if ( *v57 )
          break;
        --a2;
        --v57;
      }
      while ( v21 <= a2 );
      if ( a2 != v25 )
        goto LABEL_16;
LABEL_40:
      v46 = 0;
      goto LABEL_26;
    }
  }
LABEL_16:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(StatusReg - 808)) )
    sub_406F40((_DWORD *)(StatusReg - 808), v36, v37, v38, v39, v40, v41, v42, v43, v30, v31, v32, v33, v34, v35);
  v44 = *(_DWORD *)(v17 + 0x10C);
  *v20 = a2;
  if ( (v44 & 0x20) != 0 )
  {
    if ( (v44 & 0x40) != 0 )
      goto LABEL_20;
  }
  else
  {
    if ( (unsigned int)sub_430480(*(unsigned int *)(v17 + 0xD0), StatusReg - 784) )
    {
      v46 = *(_DWORD *)(StatusReg + 40);
      if ( (*(_DWORD *)(v17 + 0x10C) & 0x40) != 0 )
      {
        if ( v46 )
          goto LABEL_24;
        goto LABEL_20;
      }
      goto LABEL_60;
    }
    v60 = *(_DWORD *)(v17 + 0x10C);
    *(_DWORD *)(v17 + 0x10C) = v60 | 0x20;
    if ( (v60 & 0x40) != 0 )
      goto LABEL_20;
  }
  v46 = 0;
LABEL_60:
  v61 = sub_4304C0(*(unsigned int *)(v17 + 0xD0));
  *(_DWORD *)(v17 + 0x434) = v61;
  if ( v61 == -1 )
  {
    v46 = *(_DWORD *)(StatusReg + 40);
    if ( v46 )
      goto LABEL_24;
  }
  else
  {
    *(_DWORD *)(v17 + 0x10C) |= 0x40u;
    if ( v46 )
      goto LABEL_24;
  }
LABEL_20:
  v45 = *(_DWORD *)(v17 + 0x430);
  v63 = v45;
  if ( v45 >= a2 )
  {
    if ( v45 >= v25 )
      goto LABEL_23;
  }
  else
  {
    v63 = a2;
  }
  if ( (sub_430580(*(unsigned int *)(v17 + 0xD0), *(unsigned int *)(v17 + 0x434), &v63) & 0x80000000) == 0 )
  {
LABEL_23:
    v46 = 0;
    goto LABEL_24;
  }
  v46 = *(_DWORD *)(StatusReg + 40);
LABEL_24:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 808)) > 1 )
    sub_407040((void *)(StatusReg - 808), v47, v48, v49, v50, v51, v52);
LABEL_26:
  if ( v64 != qword_48DD60 )
  {
    sub_412340();
    goto LABEL_71;
  }
  return v46;
}
