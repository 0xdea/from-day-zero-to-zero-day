__int64 *__fastcall sub_43C8A4(__int64 *a1, unsigned int a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  unsigned int v6; // w20
  unsigned __int64 v7; // x1
  unsigned __int64 StatusReg; // x23
  int v9; // w25
  __int64 v10; // x1
  __int16 *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x21
  long double v16; // q0
  long double v17; // q1
  long double v18; // q2
  long double v19; // q3
  long double v20; // q4
  long double v21; // q5
  long double v22; // q6
  long double v23; // q7
  __int64 v24; // x0
  int v25; // w1
  __int64 *result; // x0
  __int64 v27; // x26
  __int64 v28; // x0
  __int64 v29; // x27
  __int64 v30; // x28
  __int64 v31; // x0
  __int64 v32; // x21
  __int64 v33; // x23
  __int64 v34; // x20
  __int16 v35; // w24
  __int64 v36; // x3
  unsigned __int64 v37; // x0
  unsigned __int16 v38; // w3
  __int64 *v39; // x0
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x2
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // [xsp+0h] [xbp-100A0h] BYREF
  _BYTE v46[1008]; // [xsp+10h] [xbp-10090h] BYREF
  __int64 v47; // [xsp+400h] [xbp-FCA0h]
  _BYTE v48[24]; // [xsp+10000h] [xbp-A0h] BYREF
  _BYTE v49[16]; // [xsp+10018h] [xbp-88h] BYREF
  int v50; // [xsp+10028h] [xbp-78h]
  unsigned __int64 v51; // [xsp+10048h] [xbp-58h]
  __int64 v52; // [xsp+10098h] [xbp-8h]

  v4 = *a1;
  v52 = qword_48DD60;
  *((_DWORD *)a1 + 2) = 1;
  a1[2] = 0;
  v5 = sub_410EE0(v4, 0x80000, &qword_48DD60);
  if ( (v5 & 0x80000000) != 0 )
    goto LABEL_9;
  v6 = v5;
  if ( (sub_410930(v5, v49) & 0x80000000) != 0 )
    goto LABEL_19;
  if ( (v50 & 0xF000) == 0x4000 )
  {
    sub_410CD0(v6);
    v33 = *a1;
    v34 = ifunc_40DFD0(*a1);
    v35 = byte_456930[a2];
    v36 = v34 + (unsigned __int8)v35 + 21;
    v37 = v36 & 0xFFFFFFFFFFFF0000LL;
    v38 = v36 & 0xFFF0;
    v39 = (__int64 *)&v48[-v37];
    if ( v48 != (_BYTE *)v39 )
    {
      do
        v47 = 0;
      while ( &v45 != v39 );
    }
    v45 = 0;
    if ( v38 >= 0x400uLL )
      v47 = 0;
    v40 = j_ifunc_40DC90(v46, v33, v34);
    v41 = (unsigned __int8)asc_45B298[a2];
    qmemcpy((void *)(v40 + v34), "/SYS_", 5);
    j_ifunc_40DC90(v40 + v34 + 5, &aLcCollate[v41], (v35 + 1) & 0x1FF);
    v43 = sub_410EE0(v46, 0x80000, v42);
    v6 = v43;
    if ( (v43 & 0x80000000) != 0 )
      goto LABEL_9;
    if ( (sub_410930(v43, v49) & 0x80000000) != 0 )
    {
LABEL_19:
      sub_410CD0(v6);
      goto LABEL_9;
    }
  }
  v7 = v51;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_DWORD *)(StatusReg + 40);
  v15 = sub_4117E0(0, v7, 1, 2, v6, 0);
  if ( v15 == -1 )
  {
    if ( *(_DWORD *)(StatusReg + 40) != 38 )
      goto LABEL_19;
    v27 = v51;
    v28 = sub_40B890(v51, v16, v17, v18, v19, v20, v21, v22, v23, v10, v11, v12, v13, v14);
    v29 = v28;
    if ( !v28 )
      goto LABEL_19;
    v30 = v28;
    if ( v27 > 0 )
    {
      while ( 1 )
      {
        v31 = sub_410FC0(v6, v30, v27);
        v32 = v31;
        if ( v31 <= 0 )
          break;
        v27 -= v31;
        v30 += v31;
        if ( v27 <= 0 )
          goto LABEL_27;
      }
      sub_40C1A0(v29);
      if ( !v32 )
        *(_DWORD *)(StatusReg + 40) = 22;
      goto LABEL_19;
    }
LABEL_27:
    *(_DWORD *)(StatusReg + 40) = v9;
    sub_410CD0(v6);
    v24 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64))loc_43C1F0)(a2, v29, v51);
    v25 = 0;
    if ( v24 )
      goto LABEL_8;
  }
  else
  {
    sub_410CD0(v6);
    if ( !v15 )
      goto LABEL_9;
    v24 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64))loc_43C1F0)(a2, v15, v51);
    if ( v24 )
    {
      v25 = 1;
LABEL_8:
      *(_QWORD *)v24 = 0;
      *(_DWORD *)(v24 + 24) = v25;
      a1[2] = v24;
      goto LABEL_9;
    }
    sub_4118C0(v15, v51);
  }
LABEL_9:
  result = &qword_48DD60;
  if ( v52 != qword_48DD60 )
  {
    v44 = sub_412340();
    return (__int64 *)sub_43CB64(v44);
  }
  return result;
}
