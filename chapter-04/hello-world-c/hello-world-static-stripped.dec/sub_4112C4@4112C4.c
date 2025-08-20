__int64 __fastcall sub_4112C4(const char *a1)
{
  __int64 v1; // x23
  unsigned int v2; // w21
  int v3; // w0
  __int64 v4; // x3
  int v6; // w22
  __int64 v7; // x20
  int v8; // w2
  unsigned __int64 v9; // x0
  unsigned __int8 *v10; // x1
  unsigned __int64 v11; // x19
  unsigned __int8 *v12; // x20
  __int64 v13; // x0
  _QWORD *v14; // [xsp+0h] [xbp-420h] BYREF
  unsigned __int8 *v15; // [xsp+8h] [xbp-418h] BYREF
  unsigned __int8 *v16; // [xsp+10h] [xbp-410h] BYREF
  char v17[1000]; // [xsp+18h] [xbp-408h] BYREF
  __int64 v18; // [xsp+400h] [xbp-20h]
  _QWORD v19[9]; // [xsp+418h] [xbp-8h] BYREF

  v18 = 0;
  v2 = 0;
  v19[0] = qword_48DD60;
  v14 = v19;
  v15 = (unsigned __int8 *)v19;
  v3 = sub_410EE0(a1, 0x80000);
  if ( v3 != -1 )
  {
    v6 = v3;
    v7 = sub_4110F0(v3, v17, &v14, (void **)&v15, (char *)v19);
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = sub_423D50(v7, &v16, 10);
        v10 = v16;
        v11 = v9;
        if ( v16 == (unsigned __int8 *)v7 )
          break;
        if ( *v16 != 45 )
          goto LABEL_10;
        v12 = v16 + 1;
        v9 = sub_423D50(v16 + 1, &v16, 10);
        v10 = v16;
        if ( v16 == v12 )
          break;
        if ( v11 <= v9 )
LABEL_10:
          v2 += 1 + v9 - v11;
        if ( v15 <= v10 )
          goto LABEL_12;
        v8 = *v10;
        v7 = (__int64)v10;
        if ( v8 == 44 )
        {
          v7 = (__int64)(v10 + 1);
          if ( v15 <= v10 + 1 )
            goto LABEL_12;
          v8 = v10[1];
        }
        if ( v8 == 10 )
          goto LABEL_12;
      }
    }
    v2 = 0;
LABEL_12:
    sub_410CD0(v6);
  }
  if ( v19[0] == qword_48DD60 )
    return v2;
  v19[7] = v1;
  v13 = sub_412340(&qword_48DD60, 0, v19[0] - qword_48DD60, v4);
  return sub_411430(v13);
}
