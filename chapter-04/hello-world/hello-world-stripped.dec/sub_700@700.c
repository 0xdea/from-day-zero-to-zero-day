__int64 sub_700()
{
  __int64 result; // x0

  result = (unsigned __int8)byte_20010;
  if ( (byte_20010 & 1) == 0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(off_20008);
    deregister_tm_clones();
    result = 1;
    byte_20010 = 1;
  }
  return result;
}
