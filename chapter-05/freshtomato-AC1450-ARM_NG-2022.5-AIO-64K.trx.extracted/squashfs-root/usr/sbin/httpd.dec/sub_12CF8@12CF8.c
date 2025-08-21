int __fastcall sub_12CF8(int a1, int a2, int a3, int a4)
{
  const char *v4; // r4

  v4 = (const char *)wl_nvname(a4 + 3);
  sub_13970(0, "\t'%s': '", v4);
  sub_12CDC((int)v4);
  tty_vhangup_self_1();
  sub_13954("',\n");
  return 1;
}
