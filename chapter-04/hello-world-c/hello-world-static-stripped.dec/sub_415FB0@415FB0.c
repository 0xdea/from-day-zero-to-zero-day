__int64 __fastcall sub_415FB0(unsigned __int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4, unsigned int a5)
{
  __int64 v5; // x27
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  unsigned int v25; // w20
  __int64 v26; // x0
  __int64 v27; // x26
  __int64 v28; // x0
  unsigned __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  void *v33; // x4
  void *v34; // x5
  void *v35; // x6
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  void *v40; // x4
  void *v41; // x5
  void *v42; // x6
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  void *v46; // x4
  void *v47; // x5
  void *v48; // x6
  _QWORD v49[2]; // [xsp+8h] [xbp-18h] BYREF
  __int64 v50; // [xsp+18h] [xbp-8h]
  __int64 v51; // [xsp+70h] [xbp+50h]

  v50 = qword_48DD60;
  sub_4172F0(0);
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496870) )
    sub_406F40(dword_496870, v17, v18, v19, v20, v21, v22, v23, v24, v11, v12, v13, v14, v15, v16);
  v25 = sub_41DD84(a1, a2, a3, a4, a5);
  if ( v25 != 2 )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) <= 1 )
      goto LABEL_13;
    goto LABEL_17;
  }
  if ( !qword_496858 )
  {
    v25 = 1;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) <= 1 )
      goto LABEL_13;
LABEL_17:
    sub_407040(dword_496870, v37, v38, v39, v40, v41, v42);
    goto LABEL_13;
  }
  v49[0] = a2;
  v51 = v5;
  v26 = sub_431690(v49, &qword_496860, sub_4153B0);
  v27 = v26;
  if ( v26 )
    v27 = *(_QWORD *)(*(_QWORD *)v26 + 8LL);
  v49[0] = a1;
  v28 = sub_431690(v49, &qword_496860, sub_4153B0);
  v29 = v28;
  if ( v28 )
    v29 = *(_QWORD *)(*(_QWORD *)v28 + 8LL);
  if ( (a5 & 1) == 0
    || (unsigned int)sub_42F240(a1, a2)
    && (!v29 || (unsigned int)sub_42F240(v29, a2))
    && (!v27 || (unsigned int)sub_42F240(a1, v27) && (!v29 || (unsigned int)sub_42F240(v29, v27))) )
  {
    v25 = sub_4155E4(a1, v29, a2, v27, a3, a4);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) > 1 )
    {
      sub_407040(dword_496870, v30, v31, v32, v33, v34, v35);
      if ( v25 )
        goto LABEL_12;
    }
    else if ( v25 )
    {
LABEL_12:
      v5 = v51;
      goto LABEL_13;
    }
    v5 = v51;
    v25 = *a3 == 0;
    goto LABEL_13;
  }
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) > 1 )
    goto LABEL_33;
  while ( 1 )
  {
    v5 = v51;
    v25 = -1;
LABEL_13:
    if ( v50 == qword_48DD60 )
      break;
    v51 = v5;
    sub_412340();
LABEL_33:
    sub_407040(dword_496870, v43, v44, v45, v46, v47, v48);
  }
  return v25;
}
