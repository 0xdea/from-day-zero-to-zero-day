void __fastcall __noreturn sub_43A960(__int64 a1, __int64 a2, long double a3)
{
  if ( a2 )
    sub_4385C0("%s: %s: failed to turn on BTI protection\n", a3);
  sub_432250(0, a1, a3, (__int64)"dlopen", "failed to turn on BTI protection");
}
