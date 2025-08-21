__int64 __fastcall sub_450C60(
        unsigned int (__fastcall *a1)(_QWORD *, __int64),
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
  unsigned int v12; // w0
  unsigned int v13; // w19
  bool v14; // cc
  _QWORD v16[120]; // [xsp+A0h] [xbp+A0h] BYREF
  _BYTE v17[976]; // [xsp+460h] [xbp+460h] BYREF

  sub_450070((__int64)v16, (__int64)&a9, v9);
  while ( 1 )
  {
    v12 = sub_44FA40(v16, (unsigned __int64)v17);
    v13 = v12;
    v14 = v12 && v12 - 4 > 1;
    if ( v14 || a1(v16, a2) )
      break;
    if ( v13 == 5 )
      return v13;
    ((void (__fastcall *)(_QWORD *, _BYTE *))loc_44E8B4)(v16, v17);
  }
  return 3;
}
