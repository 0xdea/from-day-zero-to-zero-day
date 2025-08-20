__int64 __fastcall sub_44AF84(
        __int64 a1,
        unsigned int a2,
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
  _QWORD *v18; // x0
  __int64 v19; // x7
  _QWORD *v20; // x19
  __int64 v21; // x3
  __int64 v22; // x2
  char *v23; // x0
  __int64 v24; // [xsp+28h] [xbp-28h] BYREF
  unsigned int v25; // [xsp+30h] [xbp-20h]
  int v26; // [xsp+34h] [xbp-1Ch]
  __int64 v27; // [xsp+38h] [xbp-18h]
  unsigned int v28; // [xsp+40h] [xbp-10h]
  int v29; // [xsp+44h] [xbp-Ch]
  __int64 v30; // [xsp+48h] [xbp-8h]
  __int64 vars0; // [xsp+50h] [xbp+0h] BYREF

  v30 = qword_48DD60;
  v24 = a1;
  v25 = a2;
  v26 = 0;
  v28 = 0;
  v27 = a3;
  v29 = 0;
  sub_44AC50(
    (void (__fastcall *)(__int64))sub_44AE30,
    (__int64)&v24,
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
    a16);
  result = v28;
  if ( v30 != qword_48DD60 )
  {
    v18 = (_QWORD *)sub_412340();
    v20 = v18;
    if ( *v18 )
      sub_432250(22, 0, 0, "invalid namespace");
    v21 = v18[1];
    v22 = v18[4];
    v23 = "";
    if ( v21 )
      v23 = (char *)v20[1];
    result = ((__int64 (__fastcall *)(char *, _QWORD, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64 *, __int64))loc_4463A4)(
               v23,
               *((_DWORD *)v20 + 4) | 0x80000000,
               v22,
               0,
               (unsigned int)dword_496848,
               qword_496850,
               qword_4966D8,
               v19,
               &vars0,
               v16);
    v20[3] = result;
  }
  return result;
}
