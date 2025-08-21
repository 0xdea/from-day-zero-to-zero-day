__int64 (__fastcall *memmove())()
{
  unsigned __int64 v0; // x0
  __int64 (__fastcall *result)(); // x0
  __int64 v2; // x1

  if ( (byte_496827 & 1) != 0 )
    return (__int64 (__fastcall *)())&_memmove_mops;
  v0 = (unsigned __int64)dl_aarch64_cpu_features >> 24;
  if ( (byte_496826 & 1) != 0 )
  {
    if ( v0 == 70 )
    {
      result = (__int64 (__fastcall *)())&_memmove_a64fx;
      if ( (dl_aarch64_cpu_features & 0xFFF0) != 0x10 )
        return (__int64 (__fastcall *)())&_memmove_sve;
    }
    else
    {
      return (__int64 (__fastcall *)())&_memmove_sve;
    }
  }
  else if ( v0 == 67 )
  {
    v2 = (unsigned __int16)dl_aarch64_cpu_features & 0xFFF0;
    if ( v2 == 2576 )
    {
      return _memmove_thunderx;
    }
    else
    {
      result = _memmove_thunderx2;
      if ( v2 != 2800 )
        return _memmove_generic;
    }
  }
  else if ( v0 == 66 )
  {
    result = _memmove_thunderx2;
    if ( (dl_aarch64_cpu_features & 0xFFF0) != 0x5160 )
      return _memmove_generic;
  }
  else
  {
    return _memmove_generic;
  }
  return result;
}
