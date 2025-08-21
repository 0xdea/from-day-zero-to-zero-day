int sub_13730()
{
  void *Var; // r0

  Var = WebsGetVar("clear");
  nvram_set("log_wmclear", Var);
  sub_DF08((int)"firewall-restart");
  return nvram_unset("log_wmclear");
}
