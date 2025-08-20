_QWORD *__fastcall sub_450A44(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x30
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v17; // [xsp+C8h] [xbp+C8h] BYREF
  _BYTE v18[960]; // [xsp+D0h] [xbp+D0h] BYREF
  _QWORD v19[98]; // [xsp+490h] [xbp+490h] BYREF

  sub_450070((__int64)v18, (__int64)&a9, v9);
  j_ifunc_40DC90(v19, v18, 960);
  if ( a1[2] )
    v11 = sub_4503E0(a1, v19, &v17);
  else
    v11 = sub_4502C0(a1, v19, &v17);
  if ( (_DWORD)v11 != 7 )
    sub_4002C0(v11, v12, v13, v14);
  sub_44DA70((__int64)v18, (__int64)v19, v13, v14);
  sub_4507C0();
  return a1;
}
