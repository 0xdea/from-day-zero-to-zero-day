__int64 __fastcall find_module_constprop_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // x20
  __int64 v6; // x3
  unsigned __int64 v7; // x0
  unsigned __int16 v8; // w3
  __int64 *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD *shlib; // x2
  __int64 result; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 (__fastcall *v22)(_QWORD *); // x1
  __int64 v23; // [xsp+0h] [xbp-10020h] BYREF
  _BYTE v24[1008]; // [xsp+10h] [xbp-10010h] BYREF
  __int64 v25; // [xsp+400h] [xbp-FC20h]
  _BYTE v26[24]; // [xsp+10000h] [xbp-20h] BYREF

  v5 = strlen(a1);
  v6 = v5 + strlen(a2) + 1 + 15;
  v7 = v6 & 0xFFFFFFFFFFFF0000LL;
  v8 = v6 & 0xFFF0;
  v9 = (__int64 *)&v26[-v7];
  if ( v26 != (_BYTE *)v9 )
  {
    do
      v25 = 0;
    while ( &v23 != v9 );
  }
  v23 = 0;
  if ( v8 >= 0x400uLL )
    v25 = 0;
  v10 = j_memcpy(v24);
  j_memcpy(v10 + v5);
  shlib = (_QWORD *)_gconv_find_shlib(v24, v11, v12, v13, v14, v15, v16, v17);
  *a3 = shlib;
  result = 1;
  if ( shlib )
  {
    v20 = shlib[4];
    a3[5] = shlib[3];
    v21 = shlib[5];
    a3[1] = 0;
    a3[6] = 0;
    a3[7] = v20;
    a3[8] = v21;
    v22 = (__int64 (__fastcall *)(_QWORD *))(v20 ^ _pointer_chk_guard_local);
    a3[12] = 0;
    result = 0;
    if ( v22 )
    {
      result = v22(a3);
      a3[6] ^= _pointer_chk_guard_local;
    }
  }
  return result;
}
