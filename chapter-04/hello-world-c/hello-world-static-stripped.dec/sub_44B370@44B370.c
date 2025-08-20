__int64 __fastcall sub_44B370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x30
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 v18; // x19
  __int64 result; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  __int64 v35; // x19
  _QWORD *v36; // x19
  _QWORD v37[4]; // [xsp+28h] [xbp-78h] BYREF
  __int64 v38; // [xsp+48h] [xbp-58h]
  __int64 *v39; // [xsp+50h] [xbp-50h]
  __int64 v40; // [xsp+58h] [xbp-48h]
  __int64 v41; // [xsp+60h] [xbp-40h]
  _QWORD v42[4]; // [xsp+78h] [xbp-28h] BYREF
  __int64 v43; // [xsp+98h] [xbp-8h]
  __int64 v44; // [xsp+A0h] [xbp+0h] BYREF

  v43 = qword_48DD60;
  v42[0] = a1;
  v42[1] = a2;
  v42[2] = a3;
  sub_42D0B0(dword_490F90);
  if ( (unsigned int)sub_44AC50(
                       (void (__fastcall *)(__int64))&loc_44B340,
                       (__int64)v42,
                       v10,
                       v11,
                       v12,
                       v13,
                       v14,
                       v15,
                       v16,
                       v17,
                       v4,
                       v5,
                       v6,
                       v7,
                       v8,
                       v9) )
    v18 = 0;
  else
    v18 = v42[3];
  sub_42DA40(dword_490F90);
  if ( v43 == qword_48DD60 )
    return v18;
  v39 = &v44;
  v40 = v3;
  v41 = v18;
  v38 = qword_48DD60;
  v37[0] = sub_412340();
  v37[1] = v20;
  v37[2] = v3;
  sub_42D0B0(dword_490F90);
  if ( (unsigned int)sub_44AC50(
                       (void (__fastcall *)(__int64))&loc_44B340,
                       (__int64)v37,
                       v27,
                       v28,
                       v29,
                       v30,
                       v31,
                       v32,
                       v33,
                       v34,
                       v21,
                       v22,
                       v23,
                       v24,
                       v25,
                       v26) )
    v35 = 0;
  else
    v35 = v37[3];
  sub_42DA40(dword_490F90);
  if ( v38 == qword_48DD60 )
    return v35;
  v36 = (_QWORD *)sub_412340();
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))loc_44D090)(*v36, v36[1], v36[2], v36[3]);
  v36[4] = result;
  return result;
}
