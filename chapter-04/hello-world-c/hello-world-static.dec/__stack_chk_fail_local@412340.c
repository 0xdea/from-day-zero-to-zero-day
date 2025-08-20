void __noreturn _stack_chk_fail_local()
{
  __int64 v0; // x0

  v0 = _fortify_fail("stack smashing detected");
  dl_debug_state(v0);
}
