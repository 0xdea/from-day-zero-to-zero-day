__int64 *__fastcall sub_43ABB0(__int64 a1, __int64 a2)
{
  __int64 v2; // x30
  unsigned int v3; // w0
  __int64 v4; // x19
  __int64 *result; // x0
  __int64 *v6; // x0
  __int64 v7; // x1
  __int64 *v8; // x2
  __int64 *v9; // x19
  const char *v10; // x0
  __int64 **v11; // x3
  long double v12; // q0
  long double v13; // q1
  long double v14; // q2
  long double v15; // q3
  long double v16; // q4
  long double v17; // q5
  long double v18; // q6
  long double v19; // q7
  __int64 *v20; // x19
  const char *v21; // x0
  __int64 v22; // t1
  long double v23; // q0
  long double v24; // q1
  long double v25; // q2
  long double v26; // q3
  long double v27; // q4
  long double v28; // q5
  long double v29; // q6
  long double v30; // q7
  const char *v31[3]; // [xsp+20h] [xbp-60h] BYREF
  __int64 v32; // [xsp+38h] [xbp-48h]
  __int64 *v33; // [xsp+40h] [xbp-40h]
  __int64 v34; // [xsp+48h] [xbp-38h]
  __int64 v35; // [xsp+50h] [xbp-30h]
  char v36; // [xsp+67h] [xbp-19h] BYREF
  _BYTE v37[8]; // [xsp+68h] [xbp-18h] BYREF
  char *v38; // [xsp+70h] [xbp-10h] BYREF
  __int64 v39; // [xsp+78h] [xbp-8h]
  __int64 v40; // [xsp+80h] [xbp+0h] BYREF

  v39 = qword_48DD60;
  v38 = 0;
  v3 = sub_432350(v37, &v38, &v36, a1, a2);
  v4 = v3;
  if ( !v3 )
  {
    if ( !v38 )
      goto LABEL_3;
    v4 = 1;
  }
  if ( (v36 & 1) != 0 )
    sub_4323C4(v38);
LABEL_3:
  if ( v39 == qword_48DD60 )
    return (__int64 *)(unsigned int)v4;
  v6 = (__int64 *)sub_412340();
  v33 = &v40;
  v34 = v2;
  v8 = v6 + 3;
  v7 = *v6;
  v35 = v4;
  v9 = v6;
  v32 = qword_48DD60;
  v31[0] = "GLIBC_PRIVATE";
  v31[1] = (const char *)0x10963CF85LL;
  v10 = (const char *)v6[1];
  v31[2] = 0;
  v11 = *(__int64 ***)(v7 + 976);
  v9[3] = 0;
  v9[2] = sub_436B10(v10, v7, v8, v11, v31, 0, 0, 0, v12, v13, v14, v15, v16, v17, v18, v19);
  result = &qword_48DD60;
  if ( v32 != qword_48DD60 )
  {
    v20 = (__int64 *)sub_412340();
    v21 = (const char *)v20[1];
    v22 = *v20;
    v20[3] = 0;
    result = (__int64 *)sub_436B10(
                          v21,
                          v22,
                          v20 + 3,
                          (__int64 **)(v22 + 984),
                          0,
                          0,
                          2,
                          0,
                          v23,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          v30);
    v20[2] = (__int64)result;
  }
  return result;
}
