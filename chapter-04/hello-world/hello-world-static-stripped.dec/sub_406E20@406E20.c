__int64 __fastcall sub_406E20(__int64 a1)
{
  unsigned __int64 StatusReg; // x2
  unsigned __int64 v2; // x22
  atomic_uint *v4; // x19
  __int64 result; // x0
  unsigned int v6; // w21
  bool v7; // zf

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v2 = StatusReg - 1856;
  v4 = (atomic_uint *)(StatusReg - 1592);
  result = *(_QWORD *)(StatusReg - 1856 + 0xF8);
  *(_QWORD *)(a1 + 24) = result;
  v6 = *(_DWORD *)(StatusReg - 1592);
  if ( (v6 & 2) != 0 )
  {
    do
    {
      result = _aarch64_cas4_acq(v6, v6 & 0xFFFFFFFD, v4);
      v7 = (_DWORD)result == v6;
      v6 = result;
    }
    while ( !v7 );
    *(_DWORD *)(a1 + 16) = ((unsigned int)result >> 1) & 1;
    *(_QWORD *)(v2 + 0xF8) = a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = (*(_DWORD *)(StatusReg - 1592) >> 1) & 1;
    *(_QWORD *)(v2 + 0xF8) = a1;
  }
  return result;
}
