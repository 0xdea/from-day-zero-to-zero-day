__int64 (__fastcall *sub_401A50())()
{
  __int64 (__fastcall *result)(); // x0
  __int64 v1; // x0

  result = sub_44B240;
  if ( !sub_44B240 )
  {
    v1 = sub_401A30("Fatal error: glibc detected an invalid stdio handle\n");
    return (__int64 (__fastcall *)())sub_401A80(v1);
  }
  return result;
}
