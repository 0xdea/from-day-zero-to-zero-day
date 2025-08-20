__int64 __fastcall _libc_init_first(unsigned int a1, __int64 a2, char **a3)
{
  _libc_argc = a1;
  environ = a3;
  _libc_argv = a2;
  dl_non_dynamic_init();
  return _init_misc(a1, a2, a3);
}
