__int64 IO_list_unlock()
{
  __int64 result; // x0

  result = HIDWORD(list_all_lock);
  if ( _libc_single_threaded )
  {
    if ( !HIDWORD(list_all_lock) )
    {
      LODWORD(list_all_lock) = 0;
      qword_492640 = 0;
      return result;
    }
    return (unsigned int)--HIDWORD(list_all_lock);
  }
  if ( HIDWORD(list_all_lock) )
    return (unsigned int)--HIDWORD(list_all_lock);
  qword_492640 = 0;
  result = _aarch64_swp4_rel(0, (atomic_uint *)&list_all_lock);
  if ( (int)result > 1 )
    return _lll_lock_wake_private(&list_all_lock);
  return result;
}
