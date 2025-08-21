int __fastcall sub_149C8(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r6
  _DWORD v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v9[1] = a3;
  v9[0] = a4;
  result = get_radio(a2);
  v8 = result;
  if ( v9[0] > 0 )
    result = wl_ioctl(a1, 185, v9, 4);
  if ( v8 != a3 )
    return set_radio(a3, a2);
  return result;
}
