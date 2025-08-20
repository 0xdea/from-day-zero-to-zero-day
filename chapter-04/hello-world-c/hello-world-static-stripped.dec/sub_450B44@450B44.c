_QWORD *__fastcall sub_450B44(
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
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  char v16; // [xsp+0h] [xbp+0h]
  __int64 v18; // [xsp+C8h] [xbp+C8h] BYREF
  _BYTE v19[960]; // [xsp+D0h] [xbp+D0h] BYREF
  _QWORD v20[98]; // [xsp+490h] [xbp+490h] BYREF

  if ( a1[2] )
  {
    sub_450070((__int64)v19, (__int64)&a9, v9);
    j_ifunc_40DC90(v20, v19, 960);
    v12 = sub_4503E0(a1, v20, &v18);
    if ( (_DWORD)v12 != 7 )
      sub_4002C0(v12, v13, v14, v15);
    sub_44DA70((__int64)v19, (__int64)v20, v14, v15);
    sub_4507C0();
  }
  else
  {
    sub_4507D0(a1, 0, a3, a4, a5, a6, a7, a8, v16);
  }
  return a1;
}
