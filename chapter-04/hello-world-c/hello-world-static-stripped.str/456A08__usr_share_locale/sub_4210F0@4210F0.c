__int64 __fastcall sub_4210F0(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  unsigned __int64 v8; // x23
  __int64 i; // x0
  _BYTE *v10; // x3
  int v11; // w1
  unsigned __int8 *v12; // x0
  int v13; // w1
  int v14; // t1
  unsigned __int64 v15; // x0
  unsigned __int8 *v16; // x1
  int v17; // w2
  int v18; // t1
  __int64 v20; // x20
  __int64 v22; // x25
  unsigned __int64 v23; // x24
  unsigned __int64 v24; // x22
  _QWORD *v25; // x26
  int v26; // w0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)algn_496978) )
    sub_406F40(algn_496978, v2, v3, v4, v5, v6, v7);
  if ( !qword_496980 )
    qword_496980 = (__int64)"/usr/share/locale";
LABEL_5:
  v8 = qword_496948;
  if ( !qword_496948 )
  {
LABEL_6:
    for ( i = 0; ; i = sub_420C80(v15, (int)v10 - (int)v15) )
    {
      v10 = (_BYTE *)qword_496980;
      if ( i )
        goto LABEL_5;
      v11 = *(unsigned __int8 *)qword_496980;
      if ( !*(_BYTE *)qword_496980 )
      {
LABEL_20:
        if ( (_DWORD)i )
          qword_496980 = (__int64)v10;
        v20 = 0;
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)algn_496978) > 1 )
          goto LABEL_33;
        return v20;
      }
      while ( 1 )
      {
        v12 = v10 + 1;
        if ( v11 != 58 )
          break;
        do
        {
          v10 = v12;
          v14 = *v12++;
          v13 = v14;
        }
        while ( v14 == 58 );
        v15 = (unsigned __int64)v10;
        if ( v13 )
          goto LABEL_12;
LABEL_19:
        v11 = (unsigned __int8)*v10;
        LODWORD(i) = 1;
        if ( !*v10 )
          goto LABEL_20;
      }
      v15 = (unsigned __int64)v10;
LABEL_12:
      v16 = (unsigned __int8 *)(v15 + 1);
      do
      {
        v10 = v16;
        v18 = *v16++;
        v17 = v18;
      }
      while ( v18 != 58 && v17 != 0 );
      if ( (unsigned __int64)v10 <= v15 )
        goto LABEL_19;
      qword_496980 = (__int64)v10;
    }
  }
  v22 = qword_496958;
  v23 = 0;
  while ( 1 )
  {
    v24 = (v23 + v8) >> 1;
    v25 = (_QWORD *)(v22 + 16 * v24);
    v26 = sub_42F110(a1, *v25, off_48FA10);
    if ( v26 < 0 )
    {
      v8 = (v23 + v8) >> 1;
      goto LABEL_29;
    }
    if ( !v26 )
      break;
    v23 = v24 + 1;
LABEL_29:
    if ( v23 >= v8 )
      goto LABEL_6;
  }
  v20 = v25[1];
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)algn_496978) <= 1 )
    return v20;
LABEL_33:
  sub_407040(algn_496978);
  return v20;
}
