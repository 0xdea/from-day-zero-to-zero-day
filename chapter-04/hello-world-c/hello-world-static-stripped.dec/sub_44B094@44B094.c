__int64 __fastcall sub_44B094(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v16; // x30
  __int64 result; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x6
  __int64 v21; // x7
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 v30; // x0
  __int64 v31[2]; // [xsp+0h] [xbp-70h] BYREF
  int v32; // [xsp+10h] [xbp-60h]
  __int64 v33; // [xsp+18h] [xbp-58h]
  __int64 v34; // [xsp+20h] [xbp-50h]
  __int64 v35; // [xsp+28h] [xbp-48h]
  __int64 *v36; // [xsp+30h] [xbp-40h]
  __int64 v37; // [xsp+38h] [xbp-38h]
  _QWORD v38[2]; // [xsp+40h] [xbp-30h] BYREF
  int v39; // [xsp+50h] [xbp-20h]
  __int64 v40; // [xsp+58h] [xbp-18h]
  __int64 v41; // [xsp+68h] [xbp-8h]
  __int64 vars0; // [xsp+70h] [xbp+0h] BYREF

  v41 = qword_48DD60;
  v38[0] = a1;
  v38[1] = a2;
  v39 = a3;
  if ( (unsigned int)sub_44AC50(
                       (void (__fastcall *)(__int64))&loc_44B010,
                       (__int64)v38,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a3,
                       (__int64)&qword_48DD60,
                       a2,
                       a1,
                       a15,
                       a16) )
    result = 0;
  else
    result = v40;
  if ( v41 != qword_48DD60 )
  {
    v36 = &vars0;
    v37 = v16;
    v35 = qword_48DD60;
    v31[0] = sub_412340();
    v31[1] = v18;
    v32 = v19;
    v34 = v16;
    if ( (unsigned int)sub_44AC50(
                         (void (__fastcall *)(__int64))&loc_44B010,
                         (__int64)v31,
                         v22,
                         v23,
                         v24,
                         v25,
                         v26,
                         v27,
                         v28,
                         v29,
                         v19,
                         (__int64)&qword_48DD60,
                         v18,
                         v31[0],
                         v20,
                         v21) )
      result = 0;
    else
      result = v33;
    if ( v35 != qword_48DD60 )
    {
      v30 = sub_412340();
      return sub_44B1A0(v30);
    }
  }
  return result;
}
