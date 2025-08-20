__int64 sub_411614()
{
  __int64 result; // x0

  result = sub_4112C4("/sys/devices/system/cpu/possible");
  if ( !(_DWORD)result )
  {
    result = sub_411430();
    if ( !(_DWORD)result )
    {
      LODWORD(result) = sub_411544();
      if ( (_DWORD)result )
        return (unsigned int)result;
      else
        return 2;
    }
  }
  return result;
}
