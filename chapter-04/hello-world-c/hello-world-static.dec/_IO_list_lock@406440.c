__int64 IO_list_lock()
{
  int v0; // w2
  unsigned __int64 v1; // x20
  __int64 result; // x0

  v0 = (unsigned __int8)_libc_single_threaded;
  v1 = _ReadStatusReg(TPIDR_EL0) - 1856;
  if ( v0 && !qword_492640 )
  {
    result = 1;
    LODWORD(list_all_lock) = 1;
    qword_492640 = v1;
  }
  else if ( v1 == qword_492640 )
  {
    return (unsigned int)++HIDWORD(list_all_lock);
  }
  else
  {
    result = _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock);
    if ( (_DWORD)result )
      result = _lll_lock_wait_private(&list_all_lock);
    qword_492640 = v1;
  }
  return result;
}
