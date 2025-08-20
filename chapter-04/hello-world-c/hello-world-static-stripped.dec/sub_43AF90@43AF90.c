double __fastcall sub_43AF90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x30
  double result; // d0
  __int64 v10; // x0
  unsigned __int8 *v11; // x2
  __int64 v12; // x4
  unsigned __int64 v13; // x3
  __int64 v14; // x5
  __int64 v15; // x1
  unsigned int v16; // w0
  __int64 v17; // x1
  unsigned int v18; // t1
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  _QWORD v22[5]; // [xsp+0h] [xbp-80h] BYREF
  int v23; // [xsp+28h] [xbp-58h]
  int v24; // [xsp+2Ch] [xbp-54h]
  __int64 v25; // [xsp+30h] [xbp-50h]
  __int64 v26; // [xsp+38h] [xbp-48h]
  __int64 *v27; // [xsp+40h] [xbp-40h]
  __int64 v28; // [xsp+48h] [xbp-38h]
  _QWORD v29[2]; // [xsp+58h] [xbp-28h] BYREF
  __int64 v30; // [xsp+78h] [xbp-8h]
  __int64 vars0; // [xsp+80h] [xbp+0h] BYREF

  v30 = qword_48DD60;
  v29[0] = a1;
  v29[1] = a2;
  sub_43ABB0((void (__fastcall *)(__int64))&loc_43ACF0, (__int64)v29, (__int64)&qword_48DD60, a2, a1, a6, a7, a8);
  if ( v30 != qword_48DD60 )
  {
    v10 = sub_412340();
    v12 = (__int64)&qword_48DD60;
    v13 = 0;
    v27 = &vars0;
    v28 = v8;
    v14 = *v11;
    v26 = qword_48DD60;
    v22[0] = v10;
    v22[1] = v15;
    v22[4] = v11;
    v24 = 1;
    if ( (_DWORD)v14 )
    {
      v13 = (unsigned int)v14;
      if ( v11[1] )
      {
        v12 = v11[2];
        v13 = v11[1] + 16LL * (unsigned int)v14;
        if ( v11[2] )
        {
          v13 = v12 + 16 * v13;
          if ( v11[3] )
          {
            v13 = v11[3] + 16 * v13;
            if ( v11[4] )
            {
              v16 = v11[5];
              v13 = v11[4] + 16 * v13;
              v11 += 5;
              if ( v16 )
              {
                do
                {
                  v17 = v16;
                  v18 = *++v11;
                  v16 = v18;
                  v13 = (v17 + 16 * v13) ^ (((v17 + 16 * v13) & 0xF0000000) >> 24);
                }
                while ( v18 );
                v13 &= 0xFFFFFFFu;
              }
            }
          }
        }
      }
    }
    v23 = v13;
    v25 = 0;
    sub_43ABB0((void (__fastcall *)(__int64))sub_43AD40, (__int64)v22, (__int64)v11, v13, v12, v14, 1, 0);
    if ( v26 != qword_48DD60 )
    {
      v19 = sub_412340();
      return sub_43B170(v19, v20, v21);
    }
  }
  return result;
}
