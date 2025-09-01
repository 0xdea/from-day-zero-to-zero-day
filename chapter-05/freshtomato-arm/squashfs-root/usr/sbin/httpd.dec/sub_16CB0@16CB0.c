size_t __fastcall sub_16CB0(int a1, int a2, int a3)
{
  char *wanip; // r0
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[1] = a3;
  v5[0] = 7233911;
  wanip = (char *)get_wanip(v5);
  return sub_13954(wanip);
}
