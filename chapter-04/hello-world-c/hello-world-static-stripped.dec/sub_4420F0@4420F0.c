__int64 __fastcall sub_4420F0(__int64 *a1, __int64 a2, __int128 *a3, char a4)
{
  __int64 v4; // x23
  __int128 v5; // q0
  __int128 v6; // q1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  unsigned int v13; // w19
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  unsigned __int64 v22; // x23
  __int64 v23; // x22
  unsigned __int64 v24; // x1
  __int64 v25; // x20
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v35; // x0
  _OWORD v36[2]; // [xsp+0h] [xbp-120h] BYREF
  _BYTE *v37; // [xsp+28h] [xbp-F8h] BYREF
  _BYTE *v38; // [xsp+30h] [xbp-F0h]
  __int64 *v39; // [xsp+38h] [xbp-E8h]
  __int64 v40; // [xsp+40h] [xbp-E0h]
  int v41; // [xsp+48h] [xbp-D8h]
  _BYTE v42[200]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v43; // [xsp+118h] [xbp-8h] BYREF
  __int64 v44; // [xsp+150h] [xbp+30h]

  v5 = *a3;
  v6 = a3[1];
  v43 = qword_48DD60;
  v37 = v42;
  v38 = v42;
  v39 = &v43;
  v40 = 0;
  v41 = 5;
  v36[0] = v5;
  v36[1] = v6;
  sub_4262A0((__int64)&v37, a2, (__int64 *)v36, a4);
  v13 = sub_43E1D0((__int64)&v37);
  if ( (v13 & 0x80000000) != 0 )
  {
    if ( v37 != v42 )
      sub_40C1A0((unsigned __int64)v37, v14, v15, v16, v17, v18, v19, v20, v21);
  }
  else
  {
    v44 = v4;
    v22 = (unsigned __int64)v37;
    v23 = v38 - v37;
    v24 = v38 - v37 + 1;
    if ( v37 == v42 )
    {
      v35 = sub_40B890(v38 - v37 + 1, v14, v15, v16, v17, v18, v19, v20, v21, v24, v8, v9, v10, v11, v12);
      v25 = v35;
      if ( !v35 )
        goto LABEL_13;
      j_ifunc_40DC90(v35, v22, v23);
    }
    else
    {
      v25 = sub_40C434((unsigned __int64)v37, v24, v14, v15, v16, v17, v18, v19, v20, v21, v8, v9, v10, v11, v12);
      if ( !v25 )
        goto LABEL_12;
    }
    *(_BYTE *)(v25 + v23) = 0;
    v4 = v44;
    *a1 = v25;
  }
  while ( v43 != qword_48DD60 )
  {
    v44 = v4;
    sub_412340();
LABEL_12:
    sub_40C1A0((unsigned __int64)v37, v26, v27, v28, v29, v30, v31, v32, v33);
LABEL_13:
    v4 = v44;
    v13 = -1;
  }
  return v13;
}
