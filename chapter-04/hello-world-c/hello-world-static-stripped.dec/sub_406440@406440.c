__int64 sub_406440()
{
  int v0; // w2
  unsigned __int64 v1; // x20
  __int64 result; // x0

  v0 = (unsigned __int8)byte_490F08;
  v1 = _ReadStatusReg(TPIDR_EL0) - 1856;
  if ( v0 && !qword_492640 )
  {
    result = 1;
    LODWORD(qword_492638) = 1;
    qword_492640 = v1;
  }
  else if ( v1 == qword_492640 )
  {
    return (unsigned int)++HIDWORD(qword_492638);
  }
  else
  {
    result = _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638);
    if ( (_DWORD)result )
      result = sub_406F40(&qword_492638);
    qword_492640 = v1;
  }
  return result;
}
