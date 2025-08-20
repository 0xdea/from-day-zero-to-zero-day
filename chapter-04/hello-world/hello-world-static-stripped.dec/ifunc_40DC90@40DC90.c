char *ifunc_40DC90()
{
  unsigned __int64 v0; // x0
  char *result; // x0
  __int64 v2; // x1

  if ( (byte_496827 & 1) != 0 )
    return byte_40ED40;
  v0 = (unsigned __int64)qword_496818 >> 24;
  if ( (byte_496826 & 1) != 0 )
  {
    if ( v0 == 70 )
    {
      result = (char *)&unk_40E7C0;
      if ( (qword_496818 & 0xFFF0) != 0x10 )
        return byte_40ED80;
    }
    else
    {
      return byte_40ED80;
    }
  }
  else if ( v0 == 67 )
  {
    v2 = (unsigned __int16)qword_496818 & 0xFFF0;
    if ( v2 == 2576 )
    {
      return (char *)&loc_40EF80;
    }
    else
    {
      result = (char *)&loc_40F240;
      if ( v2 != 2800 )
        return byte_40EB40;
    }
  }
  else if ( v0 == 66 )
  {
    result = (char *)&loc_40F240;
    if ( (qword_496818 & 0xFFF0) != 0x5160 )
      return byte_40EB40;
  }
  else
  {
    return byte_40EB40;
  }
  return result;
}
