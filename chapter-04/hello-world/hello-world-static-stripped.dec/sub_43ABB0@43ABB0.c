__int64 *__fastcall sub_43ABB0(
        void (__fastcall *a1)(__int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x30
  unsigned int v9; // w0
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 v18; // x19
  __int64 *result; // x0
  __int64 *v20; // x0
  __int64 v21; // x1
  __int64 *v22; // x2
  __int64 *v23; // x19
  const char *v24; // x0
  __int64 **v25; // x3
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 *v34; // x19
  const char *v35; // x0
  __int64 v36; // t1
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  const char *v45[3]; // [xsp+20h] [xbp-60h] BYREF
  __int64 v46; // [xsp+38h] [xbp-48h]
  __int64 *v47; // [xsp+40h] [xbp-40h]
  __int64 v48; // [xsp+48h] [xbp-38h]
  __int64 v49; // [xsp+50h] [xbp-30h]
  bool v50; // [xsp+67h] [xbp-19h] BYREF
  __int64 v51; // [xsp+68h] [xbp-18h] BYREF
  unsigned __int64 v52; // [xsp+70h] [xbp-10h] BYREF
  __int64 v53; // [xsp+78h] [xbp-8h]
  __int64 v54; // [xsp+80h] [xbp+0h] BYREF

  v53 = qword_48DD60;
  v52 = 0;
  v9 = sub_432350(&v51, &v52, &v50, a1, a2, a6, a7, a8);
  v18 = v9;
  if ( !v9 )
  {
    if ( !v52 )
      goto LABEL_3;
    v18 = 1;
  }
  if ( v50 )
    sub_4323C4(v52, v10, v11, v12, v13, v14, v15, v16, v17);
LABEL_3:
  if ( v53 == qword_48DD60 )
    return (__int64 *)(unsigned int)v18;
  v20 = (__int64 *)sub_412340();
  v47 = &v54;
  v48 = v8;
  v22 = v20 + 3;
  v21 = *v20;
  v49 = v18;
  v23 = v20;
  v46 = qword_48DD60;
  v45[0] = "GLIBC_PRIVATE";
  v45[1] = (const char *)0x10963CF85LL;
  v24 = (const char *)v20[1];
  v45[2] = 0;
  v25 = *(__int64 ***)(v21 + 976);
  v23[3] = 0;
  v23[2] = sub_436B10(v24, v21, v22, v25, v45, 0, 0, 0, v26, v27, v28, v29, v30, v31, v32, v33);
  result = &qword_48DD60;
  if ( v46 != qword_48DD60 )
  {
    v34 = (__int64 *)sub_412340();
    v35 = (const char *)v34[1];
    v36 = *v34;
    v34[3] = 0;
    result = (__int64 *)sub_436B10(
                          v35,
                          v36,
                          v34 + 3,
                          (__int64 **)(v36 + 984),
                          0,
                          0,
                          2,
                          0,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44);
    v34[2] = (__int64)result;
  }
  return result;
}
