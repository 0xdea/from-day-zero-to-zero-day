__int64 __fastcall _vsnprintf_internal(_BYTE *a1, __int64 a2, __int64 a3, _OWORD *a4, char a5)
{
  __int128 v5; // q1
  _OWORD v7[2]; // [xsp+0h] [xbp-D0h] BYREF
  _BYTE *v8; // [xsp+20h] [xbp-B0h] BYREF
  _BYTE *v9; // [xsp+28h] [xbp-A8h]
  _BYTE *v10; // [xsp+30h] [xbp-A0h]
  __int64 v11; // [xsp+38h] [xbp-98h]
  int v12; // [xsp+40h] [xbp-90h]

  v8 = a1;
  v9 = a1;
  v10 = &a1[a2];
  v11 = 0;
  v12 = 2;
  if ( a2 )
    *a1 = 0;
  v5 = a4[1];
  v7[0] = *a4;
  v7[1] = v5;
  _printf_buffer((__int64)&v8, a3, (__int64 *)v7, a5);
  if ( v9 >= v10 )
  {
    if ( v9 > v8 )
      *(v9 - 1) = 0;
  }
  else
  {
    *v9 = 0;
  }
  return _printf_buffer_done((__int64)&v8);
}
