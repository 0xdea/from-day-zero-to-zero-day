__int64 *__fastcall _wprintf_fphex_l_buffer(__int64 a1, __int64 a2, __int64 a3, __int128 **a4)
{
  int v4; // w7
  _QWORD v6[4]; // [xsp+0h] [xbp-80h] BYREF
  int v7; // [xsp+20h] [xbp-60h]
  int v8; // [xsp+28h] [xbp-58h]
  __int64 v9; // [xsp+30h] [xbp-50h]
  _BYTE v10[64]; // [xsp+38h] [xbp-48h] BYREF
  __int64 v11; // [xsp+78h] [xbp-8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 80LL);
  v6[0] = v10;
  v6[1] = v10;
  v6[2] = &v11;
  v6[3] = 0;
  v7 = 10;
  v8 = v4;
  v9 = a1;
  _printf_fphex_buffer((unsigned __int64)v6, ".", a3, a4);
  if ( v7 )
    _printf_buffer_flush_fphex_to_wide((__int64)v6);
  else
    *(_DWORD *)(v9 + 32) = 0;
  return &_stack_chk_guard;
}
