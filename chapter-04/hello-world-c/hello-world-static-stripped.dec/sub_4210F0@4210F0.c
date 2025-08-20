__int64 __fastcall sub_4210F0(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  unsigned __int64 v16; // x23
  __int64 i; // x0
  _BYTE *v18; // x3
  int v19; // w1
  unsigned __int8 *v20; // x0
  int v21; // w1
  int v22; // t1
  unsigned __int64 v23; // x0
  unsigned __int8 *v24; // x1
  int v25; // w2
  int v26; // t1
  __int64 v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  __int64 v36; // x25
  unsigned __int64 v37; // x24
  unsigned __int64 v38; // x22
  _QWORD *v39; // x26
  int v40; // w0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)algn_496978) )
    sub_406F40(algn_496978, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  if ( !qword_496980 )
    qword_496980 = (__int64)"/usr/share/locale";
LABEL_5:
  v16 = qword_496948;
  if ( !qword_496948 )
  {
LABEL_6:
    for ( i = 0; ; i = sub_420C80(v23, (int)v18 - (int)v23) )
    {
      v18 = (_BYTE *)qword_496980;
      if ( i )
        goto LABEL_5;
      v19 = *(unsigned __int8 *)qword_496980;
      if ( !*(_BYTE *)qword_496980 )
      {
LABEL_20:
        if ( (_DWORD)i )
          qword_496980 = (__int64)v18;
        v28 = 0;
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)algn_496978) > 1 )
          goto LABEL_33;
        return v28;
      }
      while ( 1 )
      {
        v20 = v18 + 1;
        if ( v19 != 58 )
          break;
        do
        {
          v18 = v20;
          v22 = *v20++;
          v21 = v22;
        }
        while ( v22 == 58 );
        v23 = (unsigned __int64)v18;
        if ( v21 )
          goto LABEL_12;
LABEL_19:
        v19 = (unsigned __int8)*v18;
        LODWORD(i) = 1;
        if ( !*v18 )
          goto LABEL_20;
      }
      v23 = (unsigned __int64)v18;
LABEL_12:
      v24 = (unsigned __int8 *)(v23 + 1);
      do
      {
        v18 = v24;
        v26 = *v24++;
        v25 = v26;
      }
      while ( v26 != 58 && v25 != 0 );
      if ( (unsigned __int64)v18 <= v23 )
        goto LABEL_19;
      qword_496980 = (__int64)v18;
    }
  }
  v36 = qword_496958;
  v37 = 0;
  while ( 1 )
  {
    v38 = (v37 + v16) >> 1;
    v39 = (_QWORD *)(v36 + 16 * v38);
    v40 = sub_42F110(a1, *v39, off_48FA10);
    if ( v40 < 0 )
    {
      v16 = (v37 + v16) >> 1;
      goto LABEL_29;
    }
    if ( !v40 )
      break;
    v37 = v38 + 1;
LABEL_29:
    if ( v37 >= v16 )
      goto LABEL_6;
  }
  v28 = v39[1];
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)algn_496978) <= 1 )
    return v28;
LABEL_33:
  sub_407040(algn_496978, v29, v30, v31, v32, v33, v34);
  return v28;
}
