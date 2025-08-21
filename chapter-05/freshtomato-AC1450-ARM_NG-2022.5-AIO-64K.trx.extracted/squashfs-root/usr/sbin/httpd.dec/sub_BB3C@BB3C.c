void __fastcall sub_BB3C(int a1, int a2)
{
  if ( dword_30CB0 )
    sub_13BF8();
  sub_B888();
  sub_BAB4();
  if ( a2 == 1 )
    syslog(4, "bad password attempt (GUI) from: %s", buf);
}
