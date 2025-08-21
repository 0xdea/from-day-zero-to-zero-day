int sub_D478()
{
  int v0; // r0

  v0 = sub_111F4("shutdown.asp");
  sub_13CC8(v0);
  sleep(1u);
  return kill(1, 3);
}
