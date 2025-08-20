void __fastcall __noreturn exit(unsigned int a1)
{
  _run_exit_handlers(a1, (_QWORD **)&_exit_funcs, 1u);
}
