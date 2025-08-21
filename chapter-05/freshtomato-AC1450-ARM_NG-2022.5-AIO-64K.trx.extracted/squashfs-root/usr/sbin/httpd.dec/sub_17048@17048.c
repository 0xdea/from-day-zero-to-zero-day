int sub_17048()
{
  if ( dword_30C9C )
  {
    sub_111F4((int)"reboot.asp");
    sub_13CC8();
    if ( nvram_get_int("remote_upgrade") )
    {
      killall("xl2tpd", 15);
      killall("pppd", 15);
    }
    sleep(2u);
    set_action(8);
    sync();
    reboot(19088743);
    exit(0);
  }
  return sub_111F4((int)"error.asp");
}
