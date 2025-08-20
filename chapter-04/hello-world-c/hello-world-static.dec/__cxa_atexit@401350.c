int _cxa_atexit(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
{
  return _internal_atexit((__int64)lpfunc, (__int64)obj, (__int64)lpdso_handle, &_exit_funcs);
}
