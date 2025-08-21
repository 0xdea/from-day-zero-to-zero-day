__int64 (__fastcall *memset())()
{
  unsigned __int64 v0; // x0
  __int64 (__fastcall *result)(); // x0

  if ( (byte_496827 & 1) != 0 )
    return (__int64 (__fastcall *)())&_memset_mops;
  v0 = (unsigned __int64)dl_aarch64_cpu_features >> 24;
  if ( (byte_496826 & 1) != 0 && v0 == 70 )
  {
    if ( (dl_aarch64_cpu_features & 0xFFF0) == 0x10 && dword_496820 == 256 )
      return (__int64 (__fastcall *)())&_memset_a64fx;
  }
  else if ( v0 == 72 )
  {
    if ( (dl_aarch64_cpu_features & 0xFFF0) == 0xD010 )
      return _memset_kunpeng;
  }
  else if ( v0 == 80 && (dl_aarch64_cpu_features & 0xFFF0) == 0 )
  {
    return _memset_emag;
  }
  result = _memset_zva64;
  if ( dword_496820 != 64 )
    return _memset_generic;
  return result;
}
