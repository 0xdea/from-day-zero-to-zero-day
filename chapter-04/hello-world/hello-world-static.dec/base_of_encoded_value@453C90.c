__int64 __fastcall base_of_encoded_value(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x2

  if ( a1 == 255 )
    return 0;
  v4 = a1 & 0x70;
  if ( (_DWORD)v4 != 48 )
  {
    if ( (unsigned int)v4 > 0x30 )
    {
      if ( (_DWORD)v4 == 64 )
        return Unwind_GetRegionStart(a2);
      if ( (_DWORD)v4 == 80 )
        return 0;
    }
    else
    {
      if ( (_DWORD)v4 == 32 )
        return Unwind_GetTextRelBase(a2);
      if ( (unsigned int)v4 <= 0x20 )
        return 0;
    }
    abort(a2, a2, v4, a4);
  }
  return Unwind_GetDataRelBase(a2);
}
