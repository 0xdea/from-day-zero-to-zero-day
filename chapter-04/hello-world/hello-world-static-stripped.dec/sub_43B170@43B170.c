unsigned __int64 __fastcall sub_43B170(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // w19
  double v9; // d0
  double v10; // d1
  double v11; // d2
  double v12; // d3
  double v13; // d4
  double v14; // d5
  double v15; // d6
  double v16; // d7
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  _QWORD *v26; // x19
  unsigned __int64 v27; // x0
  __int64 *i; // x20
  __int64 v29; // x0
  unsigned __int64 v30; // x19
  int v31; // w1
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x0
  double v34; // d0
  double v35; // d1
  double v36; // d2
  double v37; // d3
  double v38; // d4
  double v39; // d5
  double v40; // d6
  double v41; // d7
  unsigned __int64 v42; // x0
  bool v43; // [xsp+37h] [xbp-19h] BYREF
  __int64 v44; // [xsp+38h] [xbp-18h] BYREF
  unsigned __int64 v45; // [xsp+40h] [xbp-10h] BYREF
  __int64 v46; // [xsp+48h] [xbp-8h]

  v46 = qword_48DD60;
  v45 = 0;
  v8 = sub_432350(&v44, &v45, &v43, (void (__fastcall *)(__int64))sub_43AD90, a1, a6, a7, a8);
  if ( !v8 )
  {
    if ( !v45 )
      goto LABEL_3;
    v8 = 1;
  }
  if ( v43 )
    sub_4323C4(v45, v9, v10, v11, v12, v13, v14, v15, v16);
LABEL_3:
  if ( v46 == qword_48DD60 )
    return v8;
  sub_412340();
  v26 = (_QWORD *)qword_496790;
  if ( qword_496790 != qword_496788 )
  {
    do
    {
      v27 = (unsigned __int64)v26;
      v26 = (_QWORD *)*v26;
      sub_40C1A0(v27, v18, v19, v20, v21, v22, v23, v24, v25);
    }
    while ( (_QWORD *)qword_496788 != v26 );
  }
  if ( qword_490F20 )
  {
    for ( i = off_4914A8; i; i = (__int64 *)i[3] )
    {
      v29 = i[7];
      v30 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)(v29 + 8) = 0;
      while ( v30 )
      {
        while ( 1 )
        {
          v31 = *(_DWORD *)(v30 + 16);
          v32 = v30;
          v30 = *(_QWORD *)(v30 + 8);
          if ( v31 )
            break;
          sub_40C1A0(v32, v18, v19, v20, v21, v22, v23, v24, v25);
          if ( !v30 )
            goto LABEL_16;
        }
      }
LABEL_16:
      if ( (*((_BYTE *)i + 870) & 0x10) != 0 )
        sub_40C1A0(i[129], v18, v19, v20, v21, v22, v23, v24, v25);
      i[129] = 0;
    }
    if ( dword_4914C0 )
    {
      if ( *((_DWORD *)off_4914B8 + 2) == dword_491498 )
      {
        v42 = (unsigned __int64)*off_4914B8;
        *off_4914B8 = off_491490;
        dword_4914C0 = 0;
        sub_40C1A0(v42, v18, v19, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  sub_43ADA0((unsigned __int64 *)(qword_4921A8 + 8));
  v33 = qword_4967B0;
  qword_4967B0 = 0;
  return sub_40C1A0(v33, v34, v35, v36, v37, v38, v39, v40, v41);
}
