__int64 *__fastcall sub_4413D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // w7
  __int64 *result; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  _QWORD v11[4]; // [xsp+0h] [xbp-80h] BYREF
  int v12; // [xsp+20h] [xbp-60h]
  int v13; // [xsp+28h] [xbp-58h]
  __int64 v14; // [xsp+30h] [xbp-50h]
  _BYTE v15[64]; // [xsp+38h] [xbp-48h] BYREF
  __int64 v16; // [xsp+78h] [xbp-8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 80LL);
  v16 = qword_48DD60;
  v11[0] = v15;
  v11[1] = v15;
  v11[2] = &v16;
  v11[3] = 0;
  v12 = 10;
  v13 = v4;
  v14 = a1;
  sub_4407D0((unsigned __int64)v11, (__int64)".", a3, a4);
  if ( v12 )
    sub_441320((__int64)v11);
  else
    *(_DWORD *)(v14 + 32) = 0;
  result = &qword_48DD60;
  if ( v16 != qword_48DD60 )
  {
    v6 = sub_412340();
    return (__int64 *)sub_441480(v6, v7, v8, v9, v10);
  }
  return result;
}
