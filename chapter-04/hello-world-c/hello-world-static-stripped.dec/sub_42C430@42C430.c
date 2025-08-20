__int64 __fastcall sub_42C430(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // x4
  __int64 *v7; // x8
  __int64 *v9; // x0
  unsigned __int64 v10; // x8
  __int64 v11; // x2
  __int64 result; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // [xsp+0h] [xbp-10030h] BYREF
  _BYTE v17[1008]; // [xsp+10h] [xbp-10020h] BYREF
  __int64 v18; // [xsp+400h] [xbp-FC30h]
  _BYTE v19[24]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v20; // [xsp+10018h] [xbp-18h]
  __int64 v21; // [xsp+10028h] [xbp-8h]

  v5 = 4 * a5;
  v7 = (__int64 *)&v19[-((v5 + 15) & 0xFFFFFFFFFFFF0000LL)];
  v21 = qword_48DD60;
  v20 = a3;
  if ( v19 != (_BYTE *)v7 )
  {
    do
      v18 = 0;
    while ( &v16 != v7 );
  }
  v16 = 0;
  if ( (((_WORD)v5 + 15) & 0xFFF0u) >= 0x400uLL )
    v18 = 0;
  v9 = *a1;
  v10 = (*a1)[5];
  a1[1] = (__int64 *)v17;
  a1[2] = (__int64 *)&v17[v5];
  v11 = *v9;
  a1[5] = a2;
  if ( v11 )
    v10 ^= qword_48DD68;
  ((void (__fastcall *)(__int64 *))v10)(v9);
  result = v20 - a3;
  if ( v21 != qword_48DD60 )
  {
    v13 = sub_412340();
    return sub_42C530(v13, v14, v15);
  }
  return result;
}
