_QWORD *__fastcall sub_41E330(__int64 a1)
{
  _QWORD *v1; // x0
  _QWORD *v2; // x19
  int v3; // w0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  int8x16_t v10; // q1
  _QWORD *result; // x0
  bool v12; // vf
  int v13; // w0
  __int64 v14; // x24
  __int64 v15; // x0
  __int64 v16; // x25
  __int64 v17; // x1
  __int16 *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  long double v22; // q0
  long double v23; // q1
  long double v24; // q2
  long double v25; // q3
  long double v26; // q4
  long double v27; // q5
  long double v28; // q6
  long double v29; // q7
  _QWORD *v30; // x0
  _QWORD *v31; // x23
  __int64 v32; // [xsp+58h] [xbp+58h] BYREF

  v32 = a1;
  v1 = (_QWORD *)sub_431690(&v32, &qword_4968B0, sub_41E240);
  if ( !v1 )
  {
    v14 = v32;
    v15 = ifunc_40DFD0(v32);
    v16 = v15 + 1;
    v30 = (_QWORD *)sub_40B890(v15 + 49, v22, v23, v24, v25, v26, v27, v28, v29, v17, v18, v19, v20, v21);
    v31 = v30;
    v2 = v30;
    if ( !v30 )
      return 0;
    *v30 = sub_412300(v30 + 6, v14, v16, v16);
    *((_DWORD *)v31 + 2) = -3;
    v31[2] = 0;
    if ( !sub_4314B4(v31, &qword_4968B0, sub_41E240) )
    {
      v2 = 0;
      sub_40C1A0(v31);
      return v2;
    }
LABEL_3:
    v3 = *((_DWORD *)v2 + 2);
    v4 = v2[2];
    if ( v3 >= -2 )
    {
      if ( v4 )
      {
        v12 = __OFADD__(v3, 1);
        v13 = v3 + 1;
        if ( (v13 < 0) ^ v12 | (v13 == 0) )
          v13 = 1;
        *((_DWORD *)v2 + 2) = v13;
      }
      return v2;
    }
    if ( !v4 )
    {
      v5 = sub_43AE30(*v2, 2147483650LL);
      v2[2] = v5;
      if ( v5 )
      {
        v6 = sub_43AF90(v5, "gconv");
        v2[3] = v6;
        if ( v6 )
        {
          v7 = sub_43AF90(v2[2], "gconv_init");
          v8 = v2[2];
          v2[4] = v7;
          v9 = sub_43AF90(v8, "gconv_end");
          v10 = *(int8x16_t *)(v2 + 3);
          *((_DWORD *)v2 + 2) = 1;
          v2[5] = v9 ^ qword_48DD68;
          result = v2;
          *(int8x16_t *)(v2 + 3) = veorq_s8(v10, vdupq_lane_s64(qword_48DD68, 0));
          return result;
        }
        sub_431D50(qword_4968B0, sub_41E260, v2);
      }
      return 0;
    }
    sub_41F250("found->handle == NULL", "gconv_dl.c", 113, "__gconv_find_shlib");
    return 0;
  }
  v2 = (_QWORD *)*v1;
  if ( *v1 )
    goto LABEL_3;
  return 0;
}
