__int64 __fastcall _libc_cleanup_pop_restore(__int64 a1)
{
  unsigned __int64 StatusReg; // x2
  unsigned __int64 v2; // x21
  atomic_uint *v3; // x19
  __int64 result; // x0
  unsigned int v5; // w20
  unsigned int v6; // w0
  bool v7; // zf

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v2 = StatusReg - 1856;
  v3 = (atomic_uint *)(StatusReg - 1592);
  *(_QWORD *)(StatusReg - 1856 + 0xF8) = *(_QWORD *)(a1 + 24);
  result = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)result && (*(_DWORD *)(StatusReg - 1592) & 2) == 0 )
  {
    v5 = *(_DWORD *)(StatusReg - 1592);
    do
    {
      v6 = _aarch64_cas4_acq(v5, v5 | 2, v3);
      v7 = v6 == v5;
      v5 = v6;
    }
    while ( !v7 );
    result = 57;
    if ( (v5 & 0x39) == 8 )
    {
      *(_QWORD *)(v2 + 0x428) = -1;
      _aarch64_ldset4_relax(16, v3);
      return _lll_lock_wait_private(*(_QWORD *)(v2 + 0x100));
    }
  }
  return result;
}
