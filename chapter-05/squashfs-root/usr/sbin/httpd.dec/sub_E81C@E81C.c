char *__fastcall sub_E81C(char *a1, int a2)
{
  int v2; // r6
  const char *v4; // r5

  v2 = a2 & ~(a2 >> 31);
  v4 = "s";
  if ( v2 / (int)sub_15180 == 1 )
    v4 = &s;
  sprintf(a1, "%d day%s, %02d:%02d:%02d", v2 / (int)sub_15180, v4, v2 / 60 / 60 % 24, v2 / 60 % 60, v2 % 60); // XXX
  return a1;
}
