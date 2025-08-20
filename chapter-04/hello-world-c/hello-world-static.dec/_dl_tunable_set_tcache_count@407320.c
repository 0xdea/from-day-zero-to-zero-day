unsigned __int64 __fastcall dl_tunable_set_tcache_count(unsigned __int64 *a1)
{
  unsigned __int64 result; // x0

  result = *a1;
  if ( result <= 0xFFFF )
    qword_490648 = result;
  return result;
}
