size_t sub_19190()
{
  const char *Var; // r4
  int v1; // r1
  int v2; // r0
  int v3; // r0

  sub_13954("\nusb = [\n");
  Var = (const char *)WebsGetVar("remove");
  if ( Var )
  {
    v1 = 0;
  }
  else
  {
    Var = (const char *)WebsGetVar("mount");
    if ( !Var )
      return sub_13954("];\n");
    v1 = 1;
  }
  add_remove_usbhost(Var, v1);
  v2 = atoi(Var);
  v3 = sub_18D40(v2, 0);
  sub_13970(0, "%d", v3);
  return sub_13954("];\n");
}
