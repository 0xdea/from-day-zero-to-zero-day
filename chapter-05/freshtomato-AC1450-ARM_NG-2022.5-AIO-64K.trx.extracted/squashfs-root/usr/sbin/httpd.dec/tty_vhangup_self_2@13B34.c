void __fastcall tty_vhangup_self_2(const char *a1)
{
  char *v1; // r0
  char *v2; // r4

  v1 = sub_E6BC(a1);
  v2 = v1;
  if ( v1 )
  {
    sub_13954(v1);
    free(v2);
  }
}
