__int64 (__fastcall *strlen())()
{
  __int64 (__fastcall *result)(); // x0

  result = _strlen_asimd;
  if ( (dl_hwcap2 & 0x40000) != 0 )
    return _strlen_generic;
  return result;
}
