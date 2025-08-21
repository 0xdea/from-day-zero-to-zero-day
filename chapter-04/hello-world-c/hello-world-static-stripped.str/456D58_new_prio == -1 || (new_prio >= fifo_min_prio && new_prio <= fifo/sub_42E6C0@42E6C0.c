__int64 __fastcall sub_42E6C0(
        int a1,
        int a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 *v14; // x2
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v16; // x23
  int *v19; // x21
  int v20; // w22
  int v21; // w26
  int v24; // w24
  int *v25; // x0
  int v26; // w1
  int *v27; // x1
  int v28; // w0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  int v35; // w0
  int v36; // w0
  unsigned int v37; // w20
  int *v39; // x1
  int v40; // w0
  int *v42; // x0
  int v45; // w0
  int v46; // w0
  int v48; // [xsp+0h] [xbp-10h] BYREF
  __int64 v49; // [xsp+8h] [xbp-8h]

  v14 = &qword_48DD60;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v16 = StatusReg - 1856;
  v19 = *(int **)(StatusReg - 1856 + 0x4B0);
  v49 = qword_48DD60;
  v20 = dword_491910;
  v21 = dword_49190C;
  if ( !v19 )
  {
    if ( dword_491910 == -1 || dword_49190C == -1 )
    {
      dword_49190C = sub_430500(1);
      dword_491910 = sub_430540(1);
      v20 = dword_491910;
      v21 = dword_49190C;
    }
    v19 = (int *)sub_40CCB0(4 * (v21 - v20 + 2LL), 1u, a3, a4, a5, a6, a7, a8, a9, a10, (__int64)v14, a12, a13, a14);
    if ( !v19 )
    {
      v37 = 12;
      goto LABEL_26;
    }
    *v19 = v20 - 1;
    *(_QWORD *)(v16 + 0x4B0) = v19;
  }
  if ( a2 == -1 )
  {
    if ( a1 == -1 )
      goto LABEL_40;
    if ( v20 <= a1 && v21 >= a1 )
    {
      v24 = *v19;
LABEL_29:
      v39 = &v19[a1 - v20];
      v40 = v39[1] - 1;
      v39[1] = v40;
      if ( v40 )
        goto LABEL_40;
      if ( a1 != v24 || a2 >= a1 )
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
  if ( v20 > a2 || v21 < a2 )
LABEL_71:
    sub_41F250(
      "new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x53u,
      (__int64)"__pthread_tpp_change_priority");
  if ( a1 != -1 && (v20 > a1 || v21 < a1) )
    goto LABEL_69;
  v24 = *v19;
  v25 = &v19[a2 - v20];
  v26 = v25[1];
  if ( v26 == -1 )
  {
    v37 = 11;
    goto LABEL_26;
  }
  v25[1] = v26 + 1;
  if ( a2 <= v24 )
  {
    if ( a1 == -1 )
      goto LABEL_40;
    goto LABEL_29;
  }
  if ( a1 != -1 )
  {
    v27 = &v19[a1 - v20];
    v28 = v27[1] - 1;
    v27[1] = v28;
    if ( !v28 && a2 < a1 && a1 == v24 )
    {
LABEL_35:
      a2 = a1 - 1;
      if ( v20 > a1 - 1 )
        goto LABEL_16;
      v42 = &v19[a2 - v20 + 1];
      do
      {
        if ( *v42 )
          break;
        --a2;
        --v42;
      }
      while ( v20 <= a2 );
      if ( a2 != v24 )
        goto LABEL_16;
LABEL_40:
      v37 = 0;
      goto LABEL_26;
    }
  }
LABEL_16:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(StatusReg - 808)) )
    sub_406F40((_DWORD *)(StatusReg - 808), v29, v30, v31, v32, v33, v34);
  v35 = *(_DWORD *)(v16 + 0x10C);
  *v19 = a2;
  if ( (v35 & 0x20) != 0 )
  {
    if ( (v35 & 0x40) != 0 )
      goto LABEL_20;
  }
  else
  {
    if ( (unsigned int)sub_430480(*(unsigned int *)(v16 + 0xD0), StatusReg - 784) )
    {
      v37 = *(_DWORD *)(StatusReg + 40);
      if ( (*(_DWORD *)(v16 + 0x10C) & 0x40) != 0 )
      {
        if ( v37 )
          goto LABEL_24;
        goto LABEL_20;
      }
      goto LABEL_60;
    }
    v45 = *(_DWORD *)(v16 + 0x10C);
    *(_DWORD *)(v16 + 0x10C) = v45 | 0x20;
    if ( (v45 & 0x40) != 0 )
      goto LABEL_20;
  }
  v37 = 0;
LABEL_60:
  v46 = sub_4304C0(*(unsigned int *)(v16 + 0xD0));
  *(_DWORD *)(v16 + 0x434) = v46;
  if ( v46 == -1 )
  {
    v37 = *(_DWORD *)(StatusReg + 40);
    if ( v37 )
      goto LABEL_24;
  }
  else
  {
    *(_DWORD *)(v16 + 0x10C) |= 0x40u;
    if ( v37 )
      goto LABEL_24;
  }
LABEL_20:
  v36 = *(_DWORD *)(v16 + 0x430);
  v48 = v36;
  if ( v36 >= a2 )
  {
    if ( v36 >= v24 )
      goto LABEL_23;
  }
  else
  {
    v48 = a2;
  }
  if ( (sub_430580(*(unsigned int *)(v16 + 0xD0), *(unsigned int *)(v16 + 0x434), &v48) & 0x80000000) == 0 )
  {
LABEL_23:
    v37 = 0;
    goto LABEL_24;
  }
  v37 = *(_DWORD *)(StatusReg + 40);
LABEL_24:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 808)) > 1 )
    sub_407040(StatusReg - 808);
LABEL_26:
  if ( v49 != qword_48DD60 )
  {
    sub_412340();
    goto LABEL_71;
  }
  return v37;
}
