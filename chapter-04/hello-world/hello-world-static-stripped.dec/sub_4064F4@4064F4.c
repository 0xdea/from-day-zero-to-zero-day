__int64 sub_4064F4()
{
  __int64 result; // x0

  result = HIDWORD(qword_492638);
  if ( byte_490F08 )
  {
    if ( !HIDWORD(qword_492638) )
    {
      LODWORD(qword_492638) = 0;
      qword_492640 = 0;
      return result;
    }
    return (unsigned int)--HIDWORD(qword_492638);
  }
  if ( HIDWORD(qword_492638) )
    return (unsigned int)--HIDWORD(qword_492638);
  qword_492640 = 0;
  result = _aarch64_swp4_rel(0, (atomic_uint *)&qword_492638);
  if ( (int)result > 1 )
    return sub_407040(&qword_492638);
  return result;
}
