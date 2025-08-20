__int64 __fastcall sub_4503E0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // x23
  __int64 v7; // x24
  unsigned int (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD *); // x25
  unsigned int v9; // w0
  unsigned int v10; // w19
  unsigned int v11; // w0
  _BYTE v14[928]; // [xsp+50h] [xbp+50h] BYREF
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD *, _QWORD *); // [xsp+3F0h] [xbp+3F0h]

  v5 = 1;
  v8 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))a1[2];
  v7 = a1[3];
  while ( 1 )
  {
    v11 = sub_44FA40(a2, (unsigned __int64)v14);
    v10 = v11;
    if ( !v11 || v11 == 5 )
      break;
    if ( v11 != 4 || v8(1, 26, *a1, a1) )
      return 2;
LABEL_4:
    if ( v15 )
    {
      v9 = v15(1, 10, *a1, a1, a2);
      v10 = v9;
      if ( v9 == 7 )
        goto LABEL_18;
      if ( v9 != 8 )
        return 2;
    }
    ++v5;
    ((void (__fastcall *)(_QWORD *, _BYTE *))loc_44E8B4)(a2, v14);
  }
  if ( v11 != 5 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, _QWORD *, __int64))v8)(
           1,
           10,
           *a1,
           a1,
           a2,
           v7) )
    {
      return 2;
    }
    goto LABEL_4;
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, _QWORD *, __int64))v8)(1, 26, *a1, a1, a2, v7) )
    return 2;
LABEL_18:
  *a3 = v5;
  return v10;
}
