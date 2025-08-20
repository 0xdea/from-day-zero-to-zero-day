__int64 __fastcall dl_tunable_set_stack_cache_size(__int64 *a1)
{
  __int64 result; // x0

  result = *a1;
  _nptl_stack_cache_maxsize = result;
  return result;
}
