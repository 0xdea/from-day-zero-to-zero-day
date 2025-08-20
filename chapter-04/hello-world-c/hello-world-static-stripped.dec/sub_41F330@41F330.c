__int64 sub_41F330()
{
  unsigned __int64 StatusReg; // x0
  unsigned __int64 v1; // x4
  _QWORD *v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x1
  __int64 result; // x0

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = StatusReg + 72;
  v2 = **(_QWORD ***)(StatusReg + 16);
  v4 = v2[7];
  v3 = v2[8];
  v5 = v2[10];
  *(_QWORD *)(StatusReg + 72) = v4 + 256;
  result = v5 + 512;
  *(_QWORD *)(v1 + 8) = v3 + 512;
  *(_QWORD *)(v1 + 16) = v5 + 512;
  return result;
}
