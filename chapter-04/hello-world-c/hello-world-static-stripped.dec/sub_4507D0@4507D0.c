_QWORD *__fastcall sub_4507D0(
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
  int v11; // w0
  __int64 v13; // x3
  __int64 v14; // x3
  _BYTE v16[960]; // [xsp+C0h] [xbp+C0h] BYREF
  _QWORD v17[120]; // [xsp+480h] [xbp+480h] BYREF
  __int64 v18[116]; // [xsp+840h] [xbp+840h] BYREF
  __int64 (__fastcall *v19)(__int64); // [xsp+BE0h] [xbp+BE0h]

  sub_450070((__int64)v16, (__int64)&a9, v9);
  j_ifunc_40DC90(v17, v16, 960);
  while ( !(unsigned int)sub_44FA40(v17, (unsigned __int64)v18) )
  {
    if ( v19 )
    {
      v11 = v19(1);
      if ( v11 == 6 )
      {
        v13 = v17[98] - (v17[104] >> 63);
        a1[2] = 0;
        a1[3] = v13;
        j_ifunc_40DC90(v17, v16, 960);
        if ( (unsigned int)sub_4502C0(a1, v17, v18) == 7 )
        {
          sub_44DA70((__int64)v16, (__int64)v17, 7, v14);
          sub_4507C0();
        }
        return a1;
      }
      if ( v11 != 8 )
        return a1;
    }
    ((void (__fastcall *)(_QWORD *, __int64 *))loc_44E8B4)(v17, v18);
  }
  return a1;
}
