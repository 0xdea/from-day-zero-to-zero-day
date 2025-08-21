size_t __fastcall sub_1585C(int a1, const char **a2)
{
  int v4; // r0
  char *v5; // r0
  _DWORD s[11]; // [sp+4h] [bp-3Ch] BYREF

  memset(s, 0, sizeof(s));
  LOBYTE(s[1]) = 32;
  if ( a1 > 0 )
    v4 = atoi(*a2);
  else
    v4 = -1;
  s[0] = v4;
  sub_13954("\nwlscandata = [");
  if ( foreach_wif(0, s, sub_14A20) )
  {
    sleep(3u);
    if ( foreach_wif(0, s, sub_151BC) )
      v5 = "];\n";
    else
      v5 = "[null,'Unable to obtain scan results.']];\n";
  }
  else
  {
    v5 = "[null,'Unable to start scan.']];\n";
  }
  return sub_13954(v5);
}
