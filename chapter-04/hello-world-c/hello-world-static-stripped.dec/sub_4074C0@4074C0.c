unsigned __int64 __fastcall sub_4074C0(unsigned __int64 *a1)
{
  unsigned __int64 result; // x0
  bool v2; // cc

  result = *a1;
  if ( result <= 0xA0 )
  {
    v2 = result > 7;
    LODWORD(result) = ((_BYTE)result + 8) & 0xF0;
    if ( v2 )
      result = (unsigned int)result;
    else
      result = 16;
    byte_496688 = result;
  }
  return result;
}
