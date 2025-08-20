__int64 __fastcall sub_453C90(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
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
        return sub_450640(a2);
      if ( (_DWORD)v4 == 80 )
        return 0;
    }
    else
    {
      if ( (_DWORD)v4 == 32 )
        return sub_450690(a2);
      if ( (unsigned int)v4 <= 0x20 )
        return 0;
    }
    sub_4002C0(a2, a2, v4, a4);
  }
  return sub_450680(a2);
}
