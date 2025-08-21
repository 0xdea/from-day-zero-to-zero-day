void __fastcall sub_10324(int a1, const char **a2)
{
  int v2; // [sp+0h] [bp-850h] BYREF
  char s[80]; // [sp+800h] [bp-50h] BYREF

  if ( a1 == 1 )
  {
    snprintf(s, 0x40u, "/var/notice/%s", *a2);
    if ( f_read_string(s, &v2, 2048) > 0 )
      tty_vhangup_self_2();
  }
}
