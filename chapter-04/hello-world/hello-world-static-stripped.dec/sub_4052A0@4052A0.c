__int64 *sub_4052A0()
{
  __int64 *result; // x0

  result = &qword_492630;
  if ( !dword_492648 )
  {
    dword_492648 = 1;
    result = (__int64 *)off_490050;
    if ( off_490050 )
    {
      do
      {
        *((_DWORD *)result + 29) |= 0x80u;
        result = (__int64 *)result[13];
      }
      while ( result );
    }
  }
  return result;
}
