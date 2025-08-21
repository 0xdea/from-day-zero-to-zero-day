__int64 sub_403DE0()
{
  int v0; // w2
  __int64 v1; // x21
  int v2; // w0
  __int64 result; // x0

  v0 = (unsigned __int8)byte_490F08;
  if ( qword_492630 && (*(_DWORD *)qword_492630 & 0x8000) == 0 )
  {
    v1 = *(_QWORD *)(qword_492630 + 136);
    v2 = *(_DWORD *)(v1 + 4);
    if ( byte_490F08 )
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
      result = HIDWORD(qword_492638);
      if ( !HIDWORD(qword_492638) )
      {
        LODWORD(qword_492638) = 0;
        qword_492640 = 0;
        return result;
      }
      goto LABEL_7;
    }
    if ( v2 )
    {
      *(_DWORD *)(v1 + 4) = v2 - 1;
      LODWORD(result) = HIDWORD(qword_492638);
      if ( !HIDWORD(qword_492638) )
        goto LABEL_14;
LABEL_7:
      result = (unsigned int)(result - 1);
      HIDWORD(qword_492638) = result;
      return result;
    }
    *(_QWORD *)(v1 + 8) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
      sub_407040(v1);
    v0 = (unsigned __int8)byte_490F08;
  }
  LODWORD(result) = HIDWORD(qword_492638);
  if ( v0 )
    goto LABEL_6;
  if ( HIDWORD(qword_492638) )
    goto LABEL_7;
LABEL_14:
  qword_492640 = 0;
  result = _aarch64_swp4_rel(result, (atomic_uint *)&qword_492638);
  if ( (int)result > 1 )
    return sub_407040(&qword_492638);
  return result;
}
