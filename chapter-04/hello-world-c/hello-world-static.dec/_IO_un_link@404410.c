__int64 __fastcall IO_un_link(__int64 a1)
{
  if ( (*(_DWORD *)a1 & 0x80) != 0 )
    return (__int64)IO_un_link_part_0(a1);
  return a1;
}
