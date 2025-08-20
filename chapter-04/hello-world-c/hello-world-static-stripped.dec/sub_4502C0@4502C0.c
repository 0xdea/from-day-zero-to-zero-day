__int64 __fastcall sub_4502C0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 i; // x22
  int v7; // w24
  __int64 result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  _BYTE v12[928]; // [xsp+40h] [xbp+40h] BYREF
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, _QWORD *, _QWORD *); // [xsp+3E0h] [xbp+3E0h]

  for ( i = 1; ; ++i )
  {
    result = sub_44FA40(a2, (unsigned __int64)v12);
    v11 = a2[98];
    v10 = a1[3];
    v9 = v11 - (a2[104] >> 63);
    if ( v10 == v9 )
      break;
    if ( (_DWORD)result )
      return 2;
    v7 = 0;
    if ( !v13 )
      goto LABEL_7;
    result = v13(1, 2, *a1, a1, a2);
    if ( (_DWORD)result == 7 )
      goto LABEL_12;
LABEL_5:
    if ( (_DWORD)result != 8 )
      return 2;
    if ( v7 )
LABEL_14:
      sub_4002C0(result, v9, v10, v11);
LABEL_7:
    ((void (__fastcall *)(_QWORD *, _BYTE *))loc_44E8B4)(a2, v12);
  }
  if ( !(_DWORD)result )
  {
    if ( !v13 )
      goto LABEL_14;
    v7 = 4;
    result = v13(1, 6, *a1, a1, a2);
    if ( (_DWORD)result == 7 )
    {
LABEL_12:
      *a3 = i;
      return result;
    }
    goto LABEL_5;
  }
  return 2;
}
