__int64 sub_4007D0()
{
  signed __int64 i; // x19

  for ( i = ((char *)&off_48C2E0 - (char *)off_48C2D0) >> 3; i; --i )
    off_48C2C8[i]();
  return term_proc();
}
