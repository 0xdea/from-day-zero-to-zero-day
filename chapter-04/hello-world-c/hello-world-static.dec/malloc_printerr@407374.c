void __fastcall __noreturn malloc_printerr(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _libc_message_impl((unsigned __int8 *)"%s\n", a2, a3, a4, a5, a6, a7, a8, a9, a1);
}
