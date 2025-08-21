int sub_10F5C()
{
  int v0; // r0

  if ( dword_30C9C )
  {
    v0 = sub_111F4("/tmp/reboot.asp");
    sub_13CC8(v0);
    if ( nvram_get_int("remote_upgrade") )
    {
      killall("xl2tpd", 15);
      killall("pppd", 15);
    }
    sleep(2u);
    sync();
    reboot(19088743);
    exit(0);
  }
  return sub_111F4("error.asp");
}
