__int64 __fastcall sub_4231E0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  unsigned __int64 *v22; // x20
  unsigned __int64 v23; // x19
  __int64 v24; // x28
  _DWORD *v25; // x3
  unsigned __int64 v26; // t1
  __int64 v27; // x27
  unsigned __int64 v28; // x19
  __int64 v29; // x20
  __int64 v30; // x0
  __int64 v31; // x28
  unsigned __int64 v32; // x27
  bool v33; // zf
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  __int64 v41; // x0
  __int64 v42; // x0
  unsigned __int64 *v43; // x0
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  unsigned __int64 v52; // x21
  unsigned __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  void *v57; // x4
  void *v58; // x5
  void *v59; // x6
  __int64 v61; // [xsp+78h] [xbp+78h]

  v7 = ifunc_40DFD0(a1);
  if ( a3 )
  {
    if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496988) )
      goto LABEL_3;
LABEL_25:
    sub_406F40(dword_496988, v14, v15, v16, v17, v18, v19, v20, v21, v8, v9, v10, v11, v12, v13);
    v22 = (unsigned __int64 *)qword_4966D8;
    if ( !qword_4966D8 )
      goto LABEL_26;
    goto LABEL_4;
  }
  v61 = ifunc_40DFD0(a2) + 1;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496988) )
    goto LABEL_25;
LABEL_3:
  v22 = (unsigned __int64 *)qword_4966D8;
  if ( !qword_4966D8 )
    goto LABEL_26;
LABEL_4:
  v23 = *v22;
  if ( *v22 )
  {
    v24 = 0;
    while ( (unsigned int)sub_42F424(v23, a1, v7) || *(_BYTE *)(v23 + v7) != 61 )
    {
      v26 = v22[1];
      ++v22;
      v23 = v26;
      v27 = v24 + 1;
      if ( !v26 )
      {
        v28 = 8 * (v24 + 3);
        goto LABEL_11;
      }
      ++v24;
    }
    goto LABEL_15;
  }
LABEL_26:
  v28 = 16;
  v27 = 0;
LABEL_11:
  v29 = qword_496990;
  v30 = sub_40C434(qword_496990, v28, v14, v15, v16, v17, v18, v19, v20, v21, v9, (__int64)dword_496988, v11, v12, v13);
  v25 = dword_496988;
  v31 = v30;
  if ( !v30 )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496988) <= 1 )
      return 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  v32 = 8 * v27;
  if ( qword_4966D8 != v29 )
    sub_412300(v30, qword_4966D8, v32, v28);
  v22 = (unsigned __int64 *)(v31 + v32);
  qword_4966D8 = v31;
  *v22 = 0;
  v22[1] = 0;
  qword_496990 = v31;
LABEL_15:
  if ( *v22 )
    v33 = a4 == 0;
  else
    v33 = 0;
  if ( v33 )
    goto LABEL_21;
  if ( !a3 )
  {
    v41 = sub_40B890(v7 + 1 + v61, v14, v15, v16, v17, v18, v19, v20, v21, v61, v9, (__int64)v25, v11, v12, v13);
    a3 = v41;
    if ( v41 )
    {
      v42 = j_ifunc_40DC90(v41, a1, v7);
      *(_BYTE *)(v42 + v7) = 61;
      j_ifunc_40DC90(v42 + v7 + 1, a2, v61);
      v43 = (unsigned __int64 *)sub_431690(a3, &qword_496998, sub_42F240);
      if ( v43 && (v52 = *v43) != 0 )
      {
        v53 = a3;
        a3 = v52;
        sub_40C1A0(v53, v44, v45, v46, v47, v48, v49, v50, v51);
      }
      else
      {
        sub_4314B4(a3, &qword_496998, sub_42F240);
      }
      goto LABEL_20;
    }
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496988) <= 1 )
      return 0xFFFFFFFFLL;
LABEL_35:
    sub_407040(dword_496988, v54, v55, v56, v57, v58, v59);
    return 0xFFFFFFFFLL;
  }
LABEL_20:
  *v22 = a3;
LABEL_21:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496988) > 1 )
    sub_407040(dword_496988, v34, v35, v36, v37, v38, v39);
  return 0;
}
