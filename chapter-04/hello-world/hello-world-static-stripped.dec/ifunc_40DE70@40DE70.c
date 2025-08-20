char *ifunc_40DE70()
{
  unsigned __int64 v0; // x0
  char *result; // x0

  if ( (byte_496827 & 1) != 0 )
    return byte_40FF40;
  v0 = (unsigned __int64)qword_496818 >> 24;
  if ( (byte_496826 & 1) != 0 && v0 == 70 )
  {
    if ( (qword_496818 & 0xFFF0) == 0x10 && dword_496820 == 256 )
      return (char *)&unk_40F980;
  }
  else if ( v0 == 72 )
  {
    if ( (qword_496818 & 0xFFF0) == 0xD010 )
      return (char *)sub_40FE40;
  }
  else if ( v0 == 80 && (qword_496818 & 0xFFF0) == 0 )
  {
    return byte_40FB40;
  }
  result = (char *)sub_40FF80;
  if ( dword_496820 != 64 )
    return (char *)sub_40FC40;
  return result;
}
