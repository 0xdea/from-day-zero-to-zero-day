__int64 flush_cleanup()
{
  int v0; // w2
  __int64 v1; // x21
  int v2; // w0
  __int64 result; // x0

  v0 = (unsigned __int8)_libc_single_threaded;
  if ( run_fp && (*(_DWORD *)run_fp & 0x8000) == 0 )
  {
    v1 = *(_QWORD *)(run_fp + 136);
    v2 = *(_DWORD *)(v1 + 4);
    if ( _libc_single_threaded )
    {
      if ( v2 )
      {
        *(_DWORD *)(v1 + 4) = v2 - 1;
      }
      else
      {
        *(_DWORD *)v1 = 0;
        *(_QWORD *)(v1 + 8) = 0;
      }
LABEL_6:
      result = HIDWORD(list_all_lock);
      if ( !HIDWORD(list_all_lock) )
      {
        LODWORD(list_all_lock) = 0;
        qword_492640 = 0;
        return result;
      }
      goto LABEL_7;
    }
    if ( v2 )
    {
      *(_DWORD *)(v1 + 4) = v2 - 1;
      LODWORD(result) = HIDWORD(list_all_lock);
      if ( !HIDWORD(list_all_lock) )
        goto LABEL_14;
LABEL_7:
      result = (unsigned int)(result - 1);
      HIDWORD(list_all_lock) = result;
      return result;
    }
    *(_QWORD *)(v1 + 8) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
      _lll_lock_wake_private(v1);
    v0 = (unsigned __int8)_libc_single_threaded;
  }
  LODWORD(result) = HIDWORD(list_all_lock);
  if ( v0 )
    goto LABEL_6;
  if ( HIDWORD(list_all_lock) )
    goto LABEL_7;
LABEL_14:
  qword_492640 = 0;
  result = _aarch64_swp4_rel(result, (atomic_uint *)&list_all_lock);
  if ( (int)result > 1 )
    return _lll_lock_wake_private(&list_all_lock);
  return result;
}
