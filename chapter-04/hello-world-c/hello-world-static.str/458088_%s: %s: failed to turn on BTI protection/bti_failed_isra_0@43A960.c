void __fastcall __noreturn bti_failed_isra_0(const char *a1, const char *a2)
{
  if ( a2 )
    dl_fatal_printf("%s: %s: failed to turn on BTI protection\n", a2, a1);
  dl_signal_error(0, a1, "dlopen", "failed to turn on BTI protection");
}
