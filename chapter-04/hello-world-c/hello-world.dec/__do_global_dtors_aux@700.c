__int64 _do_global_dtors_aux()
{
  __int64 result; // x0

  result = (unsigned __int8)_bss_start;
  if ( (_bss_start & 1) == 0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(_dso_handle);
    deregister_tm_clones();
    result = 1;
    _bss_start = 1;
  }
  return result;
}
