__int64 __fastcall vsnprintf(_BYTE *a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int128 v4; // q0
  __int128 v5; // q1
  _OWORD v7[2]; // [xsp+0h] [xbp-F0h] BYREF
  __int128 v8; // [xsp+20h] [xbp-D0h]
  __int128 v9; // [xsp+30h] [xbp-C0h]
  _BYTE *v10; // [xsp+40h] [xbp-B0h] BYREF
  _BYTE *v11; // [xsp+48h] [xbp-A8h]
  _BYTE *v12; // [xsp+50h] [xbp-A0h]
  __int64 v13; // [xsp+58h] [xbp-98h]
  int v14; // [xsp+60h] [xbp-90h]

  v4 = *a4;
  v5 = a4[1];
  v10 = a1;
  v11 = a1;
  v12 = &a1[a2];
  v13 = 0;
  v14 = 2;
  v8 = v4;
  v9 = v5;
  if ( a2 )
    *a1 = 0;
  v7[0] = v8;
  v7[1] = v9;
  _printf_buffer((__int64)&v10, a3, (__int64 *)v7, 0);
  if ( v11 >= v12 )
  {
    if ( v11 > v10 )
      *(v11 - 1) = 0;
  }
  else
  {
    *v11 = 0;
  }
  return _printf_buffer_done((__int64)&v10);
}
