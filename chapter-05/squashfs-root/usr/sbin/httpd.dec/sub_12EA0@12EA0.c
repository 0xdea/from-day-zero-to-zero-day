int __fastcall sub_12EA0(int result, const char **a2)
{
  int v3; // r7
  int i; // r4
  char *v6; // r0
  char v7[288]; // [sp+0h] [bp-120h] BYREF

  if ( result == 4 )
  {
    sub_13970(0, "\n%s = [\n", *a2);
    v3 = atoi(a2[3]);
    for ( i = atoi(a2[2]); i <= v3; ++i )
    {
      snprintf(v7, 0x100u, a2[1], i); // XXX fmt
      sub_13954("'");
      sub_12CDC((int)v7);
      tty_vhangup_self_1();
      if ( i == v3 )
        v6 = "'";
      else
        v6 = "',";
      sub_13954(v6);
    }
    return sub_13954("];\n");
  }
  return result;
}
