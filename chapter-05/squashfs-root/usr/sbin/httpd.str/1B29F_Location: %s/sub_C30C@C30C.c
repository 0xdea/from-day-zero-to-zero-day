int __fastcall sub_C30C(const char *a1)
{
  char v2[520]; // [sp+0h] [bp-208h] BYREF

  snprintf(v2, 0x200u, "Location: %s", a1);
  sub_B928(302, v2, "text/html; charset=utf-8", 0);
  return sub_13954(v2);
}
