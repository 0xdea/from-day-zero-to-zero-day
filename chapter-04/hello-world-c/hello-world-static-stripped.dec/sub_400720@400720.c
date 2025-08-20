__int64 sub_400720()
{
  __int64 result; // x0

  result = (unsigned __int8)byte_491950;
  if ( (byte_491950 & 1) == 0 )
  {
    deregister_tm_clones();
    if ( sub_453230 )
      sub_453230(&unk_46E728);
    result = 1;
    byte_491950 = 1;
  }
  return result;
}
