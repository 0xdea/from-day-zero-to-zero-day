unsigned __int64 __fastcall sub_44D890(unsigned __int64 result)
{
  if ( (result & 1) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 2) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 4) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 8) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 0x10) != 0 )
    return _ReadStatusReg(FPSR);
  return result;
}
