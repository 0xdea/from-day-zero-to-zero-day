void __fastcall __noreturn sub_43A960(const char *a1, const char *a2)
{
  if ( a2 )
    sub_4385C0("%s: %s: failed to turn on BTI protection\n", a2, a1);
  sub_432250(0, a1, "dlopen", "failed to turn on BTI protection");
}
