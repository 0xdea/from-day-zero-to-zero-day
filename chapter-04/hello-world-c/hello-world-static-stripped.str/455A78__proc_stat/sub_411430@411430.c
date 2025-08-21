__int64 sub_411430()
{
  __int64 v0; // x23
  __int64 v1; // x24
  unsigned int v2; // w19
  unsigned int v3; // w0
  __int64 v4; // x3
  unsigned int v5; // w20
  _BYTE *v6; // x0
  __int64 v8; // x0
  _QWORD *v9; // [xsp+8h] [xbp-418h] BYREF
  _QWORD *v10; // [xsp+10h] [xbp-410h] BYREF
  _BYTE v11[1000]; // [xsp+18h] [xbp-408h] BYREF
  __int64 v12; // [xsp+400h] [xbp-20h]
  _QWORD v13[9]; // [xsp+418h] [xbp-8h] BYREF

  v12 = 0;
  v13[0] = qword_48DD60;
  v2 = 0;
  v9 = v13;
  v10 = v13;
  v3 = sub_410EE0("/proc/stat", 0x80000, &qword_48DD60);
  if ( v3 != -1 )
  {
    v5 = v3;
    v2 = 0;
    while ( 1 )
    {
      v6 = (_BYTE *)sub_4110F0(
                      v5,
                      (unsigned __int64)v11,
                      (unsigned __int64 *)&v9,
                      (unsigned __int64 *)&v10,
                      (__int64)v13);
      if ( !v6 || *v6 != 99 || v6[1] != 112 || v6[2] != 117 )
        break;
      if ( (unsigned int)(unsigned __int8)v6[3] - 48 < 0xA )
        ++v2;
    }
    sub_410CD0(v5);
  }
  if ( v13[0] == qword_48DD60 )
    return v2;
  v13[7] = v0;
  v13[8] = v1;
  v8 = sub_412340(&qword_48DD60, 0, v13[0] - qword_48DD60, v4);
  return sub_411544(v8);
}
