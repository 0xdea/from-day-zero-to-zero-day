__int64 __fastcall sub_452920(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x3
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 result; // x0
  unsigned __int64 v12; // [xsp+30h] [xbp+30h] BYREF
  unsigned __int64 v13; // [xsp+38h] [xbp+38h] BYREF

  v6 = (unsigned __int8)sub_4519C4((unsigned __int8 *)(a2 + 4 - *(int *)(a2 + 4)));
  if ( (_DWORD)v6 != 255 )
  {
    v8 = v6 & 0x70;
    if ( (_DWORD)v8 == 32 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      goto LABEL_6;
    }
    if ( (unsigned int)v8 > 0x20 )
    {
      if ( (_DWORD)v8 == 48 )
      {
        v9 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v9 = 0;
        if ( (_DWORD)v8 != 80 )
          goto LABEL_22;
      }
      goto LABEL_6;
    }
  }
  v9 = 0;
LABEL_6:
  sub_450F40(v6, v9, (char *)(a2 + 8), &v12);
  v6 = (unsigned __int8)sub_4519C4((unsigned __int8 *)(a3 + 4 - *(int *)(a3 + 4)));
  if ( (_DWORD)v6 == 255 )
    goto LABEL_18;
  v8 = v6 & 0x70;
  if ( (_DWORD)v8 == 32 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    goto LABEL_11;
  }
  if ( (unsigned int)v8 <= 0x20 )
  {
LABEL_18:
    v10 = 0;
    goto LABEL_11;
  }
  if ( (_DWORD)v8 == 48 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
  v10 = 0;
  if ( (_DWORD)v8 != 80 )
LABEL_22:
    sub_4002C0(v6, 0, v8, v7);
LABEL_11:
  sub_450F40(v6, v10, (char *)(a3 + 8), &v13);
  if ( v12 >= v13 )
    LODWORD(result) = 0;
  else
    LODWORD(result) = -1;
  if ( v12 > v13 )
    return 1;
  else
    return (unsigned int)result;
}
