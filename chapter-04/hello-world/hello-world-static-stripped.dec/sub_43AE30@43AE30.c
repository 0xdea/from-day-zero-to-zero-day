__int64 __fastcall sub_43AE30(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x30
  double v9; // d0
  double v10; // d1
  double v11; // d2
  double v12; // d3
  double v13; // d4
  double v14; // d5
  double v15; // d6
  double v16; // d7
  __int64 result; // x0
  __int64 v18; // x1
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  unsigned int v22; // w0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27[2]; // [xsp+8h] [xbp-78h] BYREF
  __int64 *v28; // [xsp+18h] [xbp-68h]
  __int64 v29; // [xsp+20h] [xbp-60h]
  __int64 v30; // [xsp+28h] [xbp-58h]
  __int64 *v31; // [xsp+30h] [xbp-50h]
  __int64 v32; // [xsp+38h] [xbp-48h]
  bool v33; // [xsp+47h] [xbp-39h] BYREF
  __int64 v34; // [xsp+48h] [xbp-38h] BYREF
  unsigned __int64 v35; // [xsp+50h] [xbp-30h] BYREF
  __int64 v36; // [xsp+58h] [xbp-28h] BYREF
  unsigned int v37; // [xsp+60h] [xbp-20h]
  __int64 v38; // [xsp+70h] [xbp-10h]
  __int64 v39; // [xsp+78h] [xbp-8h]
  __int64 vars0; // [xsp+80h] [xbp+0h] BYREF

  v39 = qword_48DD60;
  v35 = 0;
  v36 = a1;
  v37 = a2;
  if ( (unsigned int)sub_432350(&v34, &v35, &v33, (void (__fastcall *)(__int64))sub_43AB60, (__int64)&v36, a2, a1, a8)
    || v35 )
  {
    if ( v33 )
      sub_4323C4(v35, v9, v10, v11, v12, v13, v14, v15, v16);
    result = 0;
  }
  else
  {
    result = v38;
  }
  if ( v39 != qword_48DD60 )
  {
    v31 = &vars0;
    v32 = v8;
    v30 = qword_48DD60;
    v27[0] = sub_412340();
    v27[1] = v18;
    v22 = (unsigned int)sub_43ABB0(
                          (void (__fastcall *)(__int64))&loc_43AC50,
                          (__int64)v27,
                          (__int64)&qword_48DD60,
                          v18,
                          v27[0],
                          v19,
                          v20,
                          v21);
    v23 = 0;
    if ( !v22 )
    {
      v23 = v29;
      if ( v29 )
      {
        if ( *(unsigned __int16 *)(v29 + 6) == 65521 )
        {
          v24 = 0;
        }
        else
        {
          v24 = 0;
          if ( v28 )
            v24 = *v28;
        }
        v23 = v24 + *(_QWORD *)(v29 + 8);
      }
    }
    if ( v30 == qword_48DD60 )
    {
      return v23;
    }
    else
    {
      v25 = sub_412340();
      return sub_43AF90(v25, v26);
    }
  }
  return result;
}
