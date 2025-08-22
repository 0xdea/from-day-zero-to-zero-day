int sub_13730()
{
  void *Var; // r0

  Var = WebsGetVar("clear");
  nvram_set((int)"log_wmclear", (int)Var);
  sub_DF08("firewall-restart");
  return nvram_unset((int)"log_wmclear");
}
