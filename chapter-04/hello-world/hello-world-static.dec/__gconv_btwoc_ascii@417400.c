__int64 __fastcall _gconv_btwoc_ascii(__int64 a1, unsigned __int8 a2)
{
  if ( (a2 & 0x80) != 0 )
    return 0xFFFFFFFFLL;
  else
    return a2;
}
