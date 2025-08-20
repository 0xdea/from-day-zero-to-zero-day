__int64 _pthread_enable_asynccancel()
{
  unsigned __int64 StatusReg; // x21
  unsigned __int64 v1; // x20
  unsigned int i; // w19
  __int64 result; // x0
  unsigned __int64 v4; // x21

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = StatusReg - 1592;
  for ( i = *(_DWORD *)(StatusReg - 1592); ; i = result )
  {
    if ( (i & 2) != 0 )
      return i;
    result = _aarch64_cas4_acq(i, i | 2, (atomic_uint *)(StatusReg - 1592));
    if ( (_DWORD)result == i )
      break;
  }
  if ( (i & 0x39 | 2) == 0xA )
  {
    v4 = StatusReg - 1856;
    *(_QWORD *)(v4 + 0x428) = -1;
    _aarch64_ldset4_relax(16, v1);
    return _pthread_disable_asynccancel(*(_QWORD *)(v4 + 0x100));
  }
  return result;
}
