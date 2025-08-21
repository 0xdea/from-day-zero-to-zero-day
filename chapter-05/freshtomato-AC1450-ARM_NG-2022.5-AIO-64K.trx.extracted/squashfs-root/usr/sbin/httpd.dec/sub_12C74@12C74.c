int sub_12C74()
{
  int v1; // [sp+4h] [bp-Ch] BYREF

  v1 = 1;
  sub_13954("\nlayer7 = [");
  sub_11670("/etc/l7-extra", &v1);
  sub_11670("/etc/l7-protocols", &v1);
  return sub_13954("];\n");
}
