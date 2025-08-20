int *sub_40B800()
{
  int *result; // x0
  unsigned __int64 StatusReg; // x2
  __int64 v2; // x3
  __int64 v3; // x2

  result = (int *)&byte_496688;
  if ( (byte_496690 & 1) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    dword_4966B8 = 0;
    v2 = *(_QWORD *)(StatusReg + 48);
    if ( v2 )
      *(_QWORD *)(v2 + 2176) = 1;
    result = &dword_490670;
    qword_4966B0 = 0;
    do
    {
      *result = 0;
      if ( (int *)v2 != result )
      {
        v3 = qword_4966B0;
        qword_4966B0 = (__int64)result;
        *((_QWORD *)result + 271) = v3;
        *((_QWORD *)result + 272) = 0;
      }
      result = (int *)*((_QWORD *)result + 270);
    }
    while ( result != &dword_490670 );
    dword_4966C8 = 0;
  }
  return result;
}
