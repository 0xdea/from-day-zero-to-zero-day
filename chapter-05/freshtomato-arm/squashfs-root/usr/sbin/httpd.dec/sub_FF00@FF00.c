int sub_FF00()
{
  const char *v0; // r0
  struct tm *v1; // r0
  char v3[64]; // [sp+4h] [bp-4Ch] BYREF
  time_t timer; // [sp+44h] [bp-Ch] BYREF

  timer = time(0);
  if ( timer > 946684799 )
  {
    v1 = localtime(&timer);
    strftime(v3, 0x40u, "%a, %d %b %Y %H:%M:%S %z", v1);
    v0 = v3;
  }
  else
  {
    v0 = "<span class=\"blinking\">Not Available</span>";
  }
  return sub_13954(v0);
}
