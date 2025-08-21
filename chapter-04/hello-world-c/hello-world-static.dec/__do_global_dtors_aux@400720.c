__int64 _do_global_dtors_aux()
{
  __int64 result; // x0

  result = (unsigned __int8)_bss_start;
  if ( (_bss_start & 1) == 0 )
  {
    deregister_tm_clones();
    if ( _deregister_frame_info )
      _deregister_frame_info(&unk_46E728);
    result = 1;
    _bss_start = 1;
  }
  return result;
}
