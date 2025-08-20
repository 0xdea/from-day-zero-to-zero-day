__int64 __fastcall _libio_codecvt_length(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // x4
  __int64 *v7; // x8
  __int64 *v9; // x0
  unsigned __int64 v10; // x8
  __int64 v11; // x2
  __int64 v13; // [xsp+0h] [xbp-10030h] BYREF
  _BYTE v14[1008]; // [xsp+10h] [xbp-10020h] BYREF
  __int64 v15; // [xsp+400h] [xbp-FC30h]
  _BYTE v16[24]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v17; // [xsp+10018h] [xbp-18h]

  v5 = 4 * a5;
  v7 = (__int64 *)&v16[-((v5 + 15) & 0xFFFFFFFFFFFF0000LL)];
  v17 = a3;
  if ( v16 != (_BYTE *)v7 )
  {
    do
      v15 = 0;
    while ( &v13 != v7 );
  }
  v13 = 0;
  if ( (((_WORD)v5 + 15) & 0xFFF0u) >= 0x400uLL )
    v15 = 0;
  v9 = *a1;
  v10 = (*a1)[5];
  a1[1] = (__int64 *)v14;
  a1[2] = (__int64 *)&v14[v5];
  v11 = *v9;
  a1[5] = a2;
  if ( v11 )
    v10 ^= _pointer_chk_guard_local;
  ((void (__fastcall *)(__int64 *))v10)(v9);
  return v17 - a3;
}
