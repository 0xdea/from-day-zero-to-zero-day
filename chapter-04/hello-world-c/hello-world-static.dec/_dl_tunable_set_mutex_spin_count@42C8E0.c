__int64 __fastcall dl_tunable_set_mutex_spin_count(__int64 *a1)
{
  __int64 result; // x0

  result = *a1;
  _mutex_aconf = result;
  return result;
}
