unsigned __int64 __fastcall sub_44B4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x30
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  __int64 v19; // x19
  unsigned __int64 result; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  __int64 v37; // x19
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  unsigned __int64 StatusReg; // x20
  int v47; // w1
  double v48; // d0
  double v49; // d1
  double v50; // d2
  double v51; // d3
  double v52; // d4
  double v53; // d5
  double v54; // d6
  double v55; // d7
  double v56; // d0
  double v57; // d1
  double v58; // d2
  double v59; // d3
  double v60; // d4
  double v61; // d5
  double v62; // d6
  double v63; // d7
  _QWORD v64[5]; // [xsp+20h] [xbp-80h] BYREF
  __int64 v65; // [xsp+48h] [xbp-58h]
  __int64 *v66; // [xsp+50h] [xbp-50h]
  __int64 v67; // [xsp+58h] [xbp-48h]
  __int64 v68; // [xsp+60h] [xbp-40h]
  _QWORD v69[5]; // [xsp+70h] [xbp-30h] BYREF
  __int64 v70; // [xsp+98h] [xbp-8h]
  __int64 v71; // [xsp+A0h] [xbp+0h] BYREF

  v70 = qword_48DD60;
  v69[0] = a1;
  v69[1] = a2;
  v69[2] = a3;
  v69[3] = a4;
  sub_42D0B0(dword_490F90);
  if ( (unsigned int)sub_44AC50(
                       (void (__fastcall *)(__int64))&loc_44B4B0,
                       (__int64)v69,
                       v11,
                       v12,
                       v13,
                       v14,
                       v15,
                       v16,
                       v17,
                       v18,
                       v5,
                       v6,
                       v7,
                       v8,
                       v9,
                       v10) )
    v19 = 0;
  else
    v19 = v69[4];
  sub_42DA40(dword_490F90);
  if ( v70 == qword_48DD60 )
    return v19;
  v66 = &v71;
  v67 = v4;
  v68 = v19;
  v65 = qword_48DD60;
  v64[0] = sub_412340();
  v64[1] = v21;
  v64[2] = v22;
  v64[3] = v4;
  sub_42D0B0(dword_490F90);
  if ( (unsigned int)sub_44AC50(
                       (void (__fastcall *)(__int64))&loc_44B4B0,
                       (__int64)v64,
                       v29,
                       v30,
                       v31,
                       v32,
                       v33,
                       v34,
                       v35,
                       v36,
                       v23,
                       v24,
                       v25,
                       v26,
                       v27,
                       v28) )
    v37 = 0;
  else
    v37 = v64[4];
  sub_42DA40(dword_490F90);
  if ( v65 == qword_48DD60 )
    return v37;
  sub_412340();
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  result = *(_QWORD *)(StatusReg + 96);
  if ( result )
  {
    if ( result != -1 )
    {
      v47 = *(unsigned __int8 *)(result + 4);
      if ( v47 == 1 )
      {
        sub_4323C4(*(_QWORD *)(result + 16), v38, v39, v40, v41, v42, v43, v44, v45);
        result = sub_40C1A0(*(_QWORD *)(StatusReg + 96), v56, v57, v58, v59, v60, v61, v62, v63);
      }
      else if ( v47 == 2 )
      {
        sub_40C1A0(*(_QWORD *)(result + 16), v38, v39, v40, v41, v42, v43, v44, v45);
        result = sub_40C1A0(*(_QWORD *)(StatusReg + 96), v48, v49, v50, v51, v52, v53, v54, v55);
      }
      else
      {
        result = sub_40C1A0(result, v38, v39, v40, v41, v42, v43, v44, v45);
      }
    }
    *(_QWORD *)(StatusReg + 96) = 0;
  }
  return result;
}
