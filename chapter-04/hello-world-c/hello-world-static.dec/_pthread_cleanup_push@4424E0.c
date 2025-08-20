_QWORD *__fastcall pthread_cleanup_push(_QWORD *result, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x3
  __int64 v4; // x4

  v3 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v4 = *(_QWORD *)(v3 + 0xF8);
  *result = a2;
  result[1] = a3;
  result[3] = v4;
  *(_QWORD *)(v3 + 0xF8) = result;
  return result;
}
