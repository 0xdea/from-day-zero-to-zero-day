__int64 __fastcall _tunable_set_val(unsigned int a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  return do_tunable_update_val((__int64)&tunable_list[128 * (unsigned __int64)a1], a2, a3, a4);
}
