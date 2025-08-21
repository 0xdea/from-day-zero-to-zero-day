char *ifunc_40DD80()
{
  unsigned __int64 v0; // x0
  char *result; // x0
  __int64 v2; // x1

  if ( (byte_496827 & 1) != 0 )
    return byte_40F940;
  v0 = (unsigned __int64)qword_496818 >> 24;
  if ( (byte_496826 & 1) != 0 )
  {
    if ( v0 == 70 )
    {
      result = (char *)&unk_40E9F0;
      if ( (qword_496818 & 0xFFF0) != 0x10 )
        return byte_40EE80;
    }
    else
    {
      return byte_40EE80;
    }
  }
  else if ( v0 == 67 )
  {
    v2 = (unsigned __int16)qword_496818 & 0xFFF0;
    if ( v2 == 2576 )
    {
      return (char *)sub_40EF40;
    }
    else
    {
      result = (char *)sub_40F200;
      if ( v2 != 2800 )
        return (char *)sub_40EC80;
    }
  }
  else if ( v0 == 66 )
  {
    result = (char *)sub_40F200;
    if ( (qword_496818 & 0xFFF0) != 0x5160 )
      return (char *)sub_40EC80;
  }
  else
  {
    return (char *)sub_40EC80;
  }
  return result;
}
