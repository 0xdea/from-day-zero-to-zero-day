__int64 __fastcall _tunable_set_val(unsigned int a1)
{
  return do_tunable_update_val(&tunable_list[128 * (unsigned __int64)a1]);
}
