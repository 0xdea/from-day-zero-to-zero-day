__int64 sub_41DA90()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x0
  __int64 v5; // x1
  __int16 *v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  long double v10; // q0
  long double v11; // q1
  long double v12; // q2
  long double v13; // q3
  long double v14; // q4
  long double v15; // q5
  long double v16; // q6
  long double v17; // q7
  unsigned __int64 v18; // x3
  __int64 result; // x0
  __int64 v20; // x23
  __int64 v21; // x0
  unsigned __int64 v22; // x22
  __int64 v23; // x0
  _BYTE v24[48]; // [xsp+8h] [xbp-88h] BYREF
  unsigned __int64 v25; // [xsp+38h] [xbp-58h]
  __int64 v26; // [xsp+88h] [xbp-8h]
  __int64 v27; // [xsp+A0h] [xbp+10h]
  __int64 v28; // [xsp+A8h] [xbp+18h]
  __int64 v29; // [xsp+B0h] [xbp+20h]
  __int64 v30; // [xsp+B8h] [xbp+28h]

  v26 = qword_48DD60;
  qword_496880 = sub_422890("GCONV_PATH");
  if ( qword_496880 )
  {
LABEL_19:
    result = 0xFFFFFFFFLL;
    goto LABEL_14;
  }
  v27 = v0;
  v28 = v1;
  v4 = sub_410EE0("/usr/lib/aarch64-linux-gnu/gconv/gconv-modules.cache", 0x80000, 0);
  LODWORD(v0) = v4;
  if ( (_DWORD)v4 != -1 )
  {
    if ( (sub_410930(v4, v24) & 0x80000000) != 0 || v25 <= 0xF )
      goto LABEL_27;
    v29 = v2;
    v30 = v3;
    qword_4968A0 = v25;
    qword_496898 = sub_4117E0(0, v25, 1, 1, (unsigned int)v0, 0);
    if ( qword_496898 == -1 )
    {
      v20 = qword_4968A0;
      v21 = sub_40B890(qword_4968A0, v10, v11, v12, v13, v14, v15, v16, v17, v5, v6, v7, v8, v9);
      qword_496898 = v21;
      if ( !v21 )
        goto LABEL_31;
      v22 = 0;
      while ( 1 )
      {
        v23 = sub_410B30((unsigned int)v0, v21 + v22, v20 - v22);
        if ( v23 == -1 )
        {
          sub_40C1A0(qword_496898);
          qword_496898 = 0;
          v2 = v29;
          v3 = v30;
          goto LABEL_27;
        }
        v20 = qword_4968A0;
        v22 += v23;
        if ( qword_4968A0 <= v22 )
          break;
        v21 = qword_496898;
      }
      dword_4968A8 = 1;
    }
    sub_410CD0((unsigned int)v0);
    if ( *(_DWORD *)qword_496898 == 536937252
      && *(unsigned __int16 *)(qword_496898 + 4) < (unsigned __int64)qword_4968A0 )
    {
      v18 = *(unsigned __int16 *)(qword_496898 + 6);
      if ( qword_4968A0 > v18 )
      {
        if ( *(_WORD *)(qword_496898 + 8) )
        {
          if ( qword_4968A0 >= v18 + 4LL * *(unsigned __int16 *)(qword_496898 + 8)
            && qword_4968A0 > (unsigned __int64)*(unsigned __int16 *)(qword_496898 + 10) )
          {
            result = 0;
            if ( qword_4968A0 >= (unsigned __int64)*(unsigned __int16 *)(qword_496898 + 12) )
            {
              v0 = v27;
              v1 = v28;
              v2 = v29;
              v3 = v30;
              goto LABEL_14;
            }
          }
        }
      }
    }
    if ( dword_4968A8 )
    {
      sub_40C1A0(qword_496898);
      dword_4968A8 = 0;
    }
    else
    {
      sub_4118C0(qword_496898, qword_4968A0);
    }
    v2 = v29;
    v3 = v30;
    qword_496898 = 0;
    v0 = v27;
    v1 = v28;
    goto LABEL_19;
  }
  v0 = v27;
  v1 = v28;
  result = 0xFFFFFFFFLL;
LABEL_14:
  while ( v26 != qword_48DD60 )
  {
    v27 = v0;
    v28 = v1;
    v29 = v2;
    v30 = v3;
    sub_412340();
LABEL_31:
    v2 = v29;
    v3 = v30;
LABEL_27:
    sub_410CD0((unsigned int)v0);
    v0 = v27;
    v1 = v28;
    result = 0xFFFFFFFFLL;
  }
  return result;
}
