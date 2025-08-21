__int64 __fastcall sub_4506A0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  __int64 v5; // x4
  __int64 i; // x0
  __int64 v7; // x3
  int v8; // w2
  __int64 v9; // x1
  __int64 result; // x0
  _BYTE v11[792]; // [xsp+30h] [xbp+30h] BYREF
  __int64 v12; // [xsp+348h] [xbp+348h]
  __int64 v13; // [xsp+370h] [xbp+370h]
  __int64 v14; // [xsp+380h] [xbp+380h]
  _BYTE v15[896]; // [xsp+3F0h] [xbp+3F0h] BYREF
  __int64 v16; // [xsp+770h] [xbp+770h]
  __int64 v17; // [xsp+778h] [xbp+778h]
  __int64 v18; // [xsp+7A8h] [xbp+7A8h]
  __int64 v19; // [xsp+7B8h] [xbp+7B8h]

  v4 = (_QWORD *)ifunc_40DE70(v11, 0, 960);
  v12 = a1 + 1;
  v13 = 0x4000000000000000LL;
  if ( (unsigned int)sub_44FA40(v4, (unsigned __int64)v15) || v15[882] == 2 )
    return 0;
  v5 = a2 + 24;
  for ( i = 1; i != 99; ++i )
  {
    while ( 1 )
    {
      v7 = 0;
      v8 = (unsigned __int8)v15[i + 783];
      *(_BYTE *)(a2 + 819 + i) = v8;
      if ( v8 != 1 )
        break;
      *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)&v15[8 * i - 8];
      if ( ++i == 99 )
        goto LABEL_9;
    }
    if ( v8 == 2 )
      v7 = *(_QWORD *)&v15[8 * i - 8];
    *(_QWORD *)(v5 + 8 * i) = v7;
  }
LABEL_9:
  v9 = v14;
  result = a2;
  *(_QWORD *)(a2 + 16) = v16;
  *(_QWORD *)(a2 + 24) = v9;
  *(_WORD *)(a2 + 816) = v17;
  *(_WORD *)(a2 + 818) = v18;
  *(_QWORD *)(a2 + 8) = v19;
  return result;
}
