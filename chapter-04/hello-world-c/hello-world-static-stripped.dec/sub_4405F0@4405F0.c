__int64 *__fastcall sub_4405F0(__int64 a1, __int64 *a2, __int64 a3, double **a4)
{
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x30
  __int16 v9; // w5
  __int64 v10; // x2
  int v11; // w0
  __int64 v12; // x9
  double *v13; // x5
  __int64 *result; // x0
  __int64 v15; // x0
  int v16; // w2
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  __int64 v20; // x1
  double **v21; // x2
  double **v22; // x20
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 v31; // x0
  _BYTE v32[560]; // [xsp+8h] [xbp-2F8h] BYREF
  __int64 v33; // [xsp+238h] [xbp-C8h]
  __int64 *v34; // [xsp+240h] [xbp-C0h]
  __int64 v35; // [xsp+248h] [xbp-B8h]
  _QWORD *v36; // [xsp+250h] [xbp-B0h]
  __int64 v37; // [xsp+258h] [xbp-A8h]
  __int64 v38; // [xsp+260h] [xbp-A0h]
  _QWORD v39[4]; // [xsp+278h] [xbp-88h] BYREF
  int v40; // [xsp+298h] [xbp-68h]
  int v41; // [xsp+2A0h] [xbp-60h]
  int v42; // [xsp+2A4h] [xbp-5Ch]
  __int64 v43; // [xsp+2A8h] [xbp-58h]
  __int64 v44; // [xsp+2B0h] [xbp-50h]
  _BYTE v45[64]; // [xsp+2B8h] [xbp-48h] BYREF
  __int64 v46; // [xsp+2F8h] [xbp-8h] BYREF
  __int64 v47; // [xsp+300h] [xbp+0h] BYREF

  v9 = *(_WORD *)(a3 + 12);
  v46 = qword_48DD60;
  if ( (v9 & 0x100) != 0 )
  {
    v10 = a2[4];
    v11 = *(_DWORD *)(v10 + 400);
    v41 = *(_DWORD *)(v10 + 408);
    v42 = v11;
    if ( !v11 )
      v42 = *(_DWORD *)(a2[1] + 80);
  }
  else
  {
    v15 = a2[1];
    v16 = *(_DWORD *)(v15 + 80);
    v41 = *(_DWORD *)(v15 + 88);
    v42 = v16;
  }
  v12 = 0;
  if ( (v9 & 0x800) != 0 )
    v12 = *a2;
  v13 = *a4;
  v39[0] = v45;
  v39[1] = v45;
  v39[2] = &v46;
  v39[3] = 0;
  v40 = 9;
  v43 = a1;
  v44 = v12;
  sub_43E8A4((unsigned __int64)v39, (__int64)a2, 0x2Cu, 0x2Eu, a3, v13);
  if ( v40 )
    sub_44A770(v39);
  else
    *(_DWORD *)(v43 + 32) = 0;
  result = &qword_48DD60;
  if ( v46 != qword_48DD60 )
  {
    v17 = sub_412340();
    v34 = &v47;
    v35 = v6;
    v36 = v39;
    v37 = v4;
    v19 = v18;
    v20 = v17;
    v38 = v5;
    v22 = v21;
    LOWORD(v17) = *(_WORD *)(v19 + 12);
    v33 = qword_48DD60;
    if ( (v17 & 0x400) != 0 )
    {
      sub_441DA0(v32, v20, 0);
      sub_4405F0(v32, *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 24), v19, v22);
      result = (__int64 *)sub_441DD0(v32);
    }
    else
    {
      sub_43E5D0((__int64)v32, v20);
      sub_440370((unsigned __int64)v32, *(__int64 **)(_ReadStatusReg(TPIDR_EL0) + 24), v19, v22);
      result = (__int64 *)sub_43E610((__int64)v32, v23, v24, v25, v26, v27, v28, v29, v30);
    }
    if ( v33 != qword_48DD60 )
    {
      v31 = sub_412340();
      return (__int64 *)sub_4407D0(v31);
    }
  }
  return result;
}
