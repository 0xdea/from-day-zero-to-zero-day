__int64 *_tls_pre_init_tp()
{
  __int64 *result; // x0

  result = &dl_stack_cache;
  dl_stack_used = (__int64)&dl_stack_used;
  qword_4967F8 = (__int64)&dl_stack_used;
  dl_stack_user = (__int64)&dl_stack_user;
  qword_4967E8 = (__int64)&dl_stack_user;
  dl_stack_cache = (__int64)&dl_stack_cache;
  qword_4967D8 = (__int64)&dl_stack_cache;
  return result;
}
