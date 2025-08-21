__int64 *__fastcall outstring_converted_wide_string(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned __int64 v8; // x25
  __int64 v9; // x27
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x2
  unsigned __int64 v13; // x27
  _BOOL4 v14; // w0
  bool v15; // zf
  __int64 v16; // x20
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x28
  bool v22; // zf
  _BOOL4 v23; // [xsp+0h] [xbp-130h]
  int v24; // [xsp+4h] [xbp-12Ch]
  __int64 v25; // [xsp+8h] [xbp-128h] BYREF
  __int64 v26; // [xsp+18h] [xbp-118h] BYREF
  __int64 v27; // [xsp+20h] [xbp-110h] BYREF
  _BYTE v28[256]; // [xsp+28h] [xbp-108h] BYREF

  v24 = a5;
  v25 = a2;
  v23 = a4 > 0;
  if ( (v23 & (a5 ^ 1)) != 0 )
  {
    v26 = a2;
    v27 = 0;
    if ( a3 < 0 )
    {
      v9 = wcsrtombs(0, &v26, 0, &v27);
    }
    else
    {
      v8 = a3;
      v9 = 0;
      if ( !a3 )
      {
        v12 = a4;
LABEL_44:
        _printf_buffer_pad_1(a1, 32, v12);
LABEL_14:
        if ( !*(_DWORD *)(a1 + 32) )
          return &_stack_chk_guard;
        goto LABEL_15;
      }
      while ( a2 )
      {
        if ( v8 > 0x100 )
          v10 = 256;
        else
          v10 = v8;
        v11 = wcsrtombs(v28, &v26, v10, &v27);
        if ( v11 == -1 )
          goto LABEL_33;
        if ( !v11 )
          break;
        v9 += v11;
        v8 -= v11;
        if ( !v8 )
          break;
        a2 = v26;
      }
    }
    v12 = a4 - v9;
    if ( v12 <= 0 )
      goto LABEL_14;
    goto LABEL_44;
  }
LABEL_15:
  v27 = 0;
  if ( a3 < 0 )
  {
    v14 = 1;
    v13 = -1;
  }
  else
  {
    v13 = a3;
    v14 = a3 != 0;
  }
  if ( v25 )
    v15 = !v14;
  else
    v15 = 1;
  if ( v15 )
  {
    v16 = 0;
LABEL_37:
    v22 = !v23 || v24 == 0;
    if ( !v22 && a4 - v16 > 0 )
      _printf_buffer_pad_1(a1, 32, a4 - v16);
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      v18 = v13 > 0x100 ? 256LL : v13;
      v19 = wcsrtombs(v28, &v25, v18, &v27);
      v20 = v19;
      if ( v19 == -1 )
        break;
      if ( v19 )
      {
        _printf_buffer_write(a1, v28, v19);
        v16 += v20;
        if ( a3 >= 0 )
          v13 -= v20;
        if ( v25 && v13 != 0 )
          continue;
      }
      goto LABEL_37;
    }
LABEL_33:
    *(_DWORD *)(a1 + 32) = 0;
  }
  return &_stack_chk_guard;
}
