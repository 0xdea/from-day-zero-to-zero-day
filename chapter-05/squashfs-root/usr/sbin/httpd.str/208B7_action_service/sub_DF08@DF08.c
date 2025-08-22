int __fastcall sub_DF08(int a1)
{
  int i; // r4
  int j; // r4
  int result; // r0

  for ( i = 10; !is_value_in_nvram_0("action_service", &s) && i; --i )
    sleep(1u);
  nvram_set((int)"action_service", a1);
  kill(1, 10);
  for ( j = 3; ; --j )
  {
    result = is_value_in_nvram_0("action_service", a1);
    if ( !result || !j )
      break;
    sleep(1u);
  }
  return result;
}
