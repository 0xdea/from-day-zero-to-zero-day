int sub_10168()
{
  int v0; // r4
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  v0 = nvram_get_int("rruleN");
  snprintf(v2, 0x20u, "rrule%d", v0);
  sub_13954("\nrrule = '");
  sub_E670(v2);
  tty_vhangup_self_1();
  return sub_13970(0, "';\nrruleN = %d;\n", v0);
}
