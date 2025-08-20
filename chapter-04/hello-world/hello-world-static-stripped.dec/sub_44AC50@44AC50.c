__int64 __fastcall sub_44AC50(
        void (__fastcall *a1)(__int64),
        __int64 a2,
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
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  void (__fastcall *v16)(__int64); // x3
  __int64 v17; // x4
  unsigned __int64 StatusReg; // x21
  __int64 v19; // x19
  int v20; // w0
  int v21; // w0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  unsigned __int64 v36; // x23
  int v37; // w22
  unsigned __int64 v38; // x19
  __int64 v39; // x0
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  bool v48; // w1
  bool v49; // w0
  __int64 v50; // x1
  __int64 result; // x0
  int v52; // w0
  void (__fastcall *v53)(__int64); // [xsp+0h] [xbp-30h]
  void (__fastcall *v54)(__int64); // [xsp+0h] [xbp-30h]
  bool v57; // [xsp+17h] [xbp-19h] BYREF
  __int64 v58; // [xsp+18h] [xbp-18h] BYREF
  unsigned __int64 v59; // [xsp+20h] [xbp-10h] BYREF
  __int64 v60; // [xsp+28h] [xbp-8h]

  v16 = a1;
  v17 = a2;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v19 = *(_QWORD *)(StatusReg + 96);
  v60 = qword_48DD60;
  if ( v19 )
  {
    if ( v19 == -1 )
    {
      *(_QWORD *)(StatusReg + 96) = 0;
      v37 = sub_432350(&v58, &v59, &v57, a1, a2, a14, a15, a16);
      v36 = v59;
      v38 = *(_QWORD *)(StatusReg + 96);
      if ( v59 )
        goto LABEL_7;
LABEL_15:
      if ( v38 && !*(_QWORD *)(v38 + 16) )
      {
        *(_QWORD *)(StatusReg + 96) = 0;
        sub_40C1A0(v38, v28, v29, v30, v31, v32, v33, v34, v35);
        result = 0;
      }
      else
      {
        result = 0;
      }
      goto LABEL_12;
    }
    v20 = *(unsigned __int8 *)(v19 + 4);
    if ( v20 == 1 )
    {
      v54 = v16;
      sub_4323C4(*(_QWORD *)(v19 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
      *(_QWORD *)(v19 + 16) = 0;
      v16 = v54;
      v17 = a2;
    }
    else if ( v20 == 2 )
    {
      v53 = v16;
      sub_40C1A0(*(_QWORD *)(v19 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
      *(_QWORD *)(v19 + 16) = 0;
      v16 = v53;
      v17 = a2;
    }
    else
    {
      *(_QWORD *)(v19 + 16) = 0;
    }
  }
  v21 = sub_432350(&v58, &v59, &v57, v16, v17, a14, a15, a16);
  v36 = v59;
  v37 = v21;
  v38 = *(_QWORD *)(StatusReg + 96);
  if ( !v59 )
    goto LABEL_15;
LABEL_7:
  if ( v38 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v52 = *(unsigned __int8 *)(v38 + 4);
    if ( v52 == 1 )
    {
      sub_4323C4(*(_QWORD *)(v38 + 16), v28, v29, v30, v31, v32, v33, v34, v35);
      v36 = v59;
      v48 = v57;
    }
    else
    {
      if ( v52 == 2 )
      {
        sub_40C1A0(*(_QWORD *)(v38 + 16), v28, v29, v30, v31, v32, v33, v34, v35);
        v36 = v59;
      }
      v48 = v57;
    }
  }
  else
  {
    v39 = sub_40B890(0x18u, v28, v29, v30, v31, v32, v33, v34, v35, v22, v23, v24, v25, v26, v27);
    v48 = v57;
    v38 = v39;
    if ( !v39 )
      goto LABEL_27;
    *(_QWORD *)(StatusReg + 96) = v39;
  }
  v49 = v48;
  v50 = v58;
  *(_DWORD *)v38 = v37;
  *(_WORD *)(v38 + 4) = v49;
  *(_QWORD *)(v38 + 8) = v50;
  *(_QWORD *)(v38 + 16) = v36;
  while ( 1 )
  {
    result = 1;
LABEL_12:
    if ( v60 == qword_48DD60 )
      break;
    sub_412340();
LABEL_27:
    if ( v48 )
      sub_4323C4(v36, v40, v41, v42, v43, v44, v45, v46, v47);
    *(_QWORD *)(StatusReg + 96) = -1;
  }
  return result;
}
