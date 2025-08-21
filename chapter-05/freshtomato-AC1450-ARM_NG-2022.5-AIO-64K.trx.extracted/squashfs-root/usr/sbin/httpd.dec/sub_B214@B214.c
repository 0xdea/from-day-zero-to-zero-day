void sub_B214(int a1, ...)
{
  _BYTE *v1; // r4
  const void *wanfaces; // r0
  int v4; // r5
  int v5; // r0
  int v6; // [sp+24h] [bp-Ch] BYREF
  va_list va; // [sp+24h] [bp-Ch]
  int v8; // [sp+28h] [bp-8h]
  int v9; // [sp+2Ch] [bp-4h]
  int v10; // [sp+30h] [bp+0h]
  int v11; // [sp+34h] [bp+4h]
  int v12; // [sp+38h] [bp+8h] BYREF
  int v13; // [sp+3Ch] [bp+Ch]
  int v14; // [sp+40h] [bp+10h]
  int v15; // [sp+44h] [bp+14h]
  int v16; // [sp+48h] [bp+18h]
  int v17; // [sp+4Ch] [bp+1Ch]
  int v18; // [sp+50h] [bp+20h]
  int v19; // [sp+54h] [bp+24h]
  int v20; // [sp+58h] [bp+28h]
  int v21; // [sp+5Ch] [bp+2Ch]
  int v22; // [sp+60h] [bp+30h]
  int v23; // [sp+64h] [bp+34h]
  int v24; // [sp+68h] [bp+38h]
  int v25; // [sp+6Ch] [bp+3Ch]
  va_list va1; // [sp+70h] [bp+40h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v6 = va_arg(va1, _DWORD);
  v8 = va_arg(va1, _DWORD);
  v9 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  v11 = va_arg(va1, _DWORD);
  v12 = va_arg(va1, _DWORD);
  v13 = va_arg(va1, _DWORD);
  v14 = va_arg(va1, _DWORD);
  v15 = va_arg(va1, _DWORD);
  v16 = va_arg(va1, _DWORD);
  v17 = va_arg(va1, _DWORD);
  v18 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v20 = va_arg(va1, _DWORD);
  v21 = va_arg(va1, _DWORD);
  v22 = va_arg(va1, _DWORD);
  v23 = va_arg(va1, _DWORD);
  v24 = va_arg(va1, _DWORD);
  v25 = va_arg(va1, _DWORD);
  va_copy(v1, va);
  if ( check_wanup() )
  {
    wanfaces = (const void *)get_wanfaces(a1);
    v4 = 0;
    memcpy(va, wanfaces, 0x48u);
    while ( v4 < v6 )
    {
      if ( v1[21] )
      {
        if ( strcmp((const char *)&v12 + 34 * v4 + 1, "0.0.0.0") )
        {
          v5 = nvram_get_int("remote_mgt_https");
          sub_AF6C((const char *)&v12 + 34 * v4 + 1, v25, 0, v5);
        }
      }
      ++v4;
      v1 += 34;
    }
  }
}
