__int64 __fastcall sub_424640(unsigned __int8 **a1)
{
  __int64 v2; // x3
  int v3; // w1
  unsigned __int8 *v4; // x2
  __int64 result; // x0
  unsigned int i; // w1
  int v7; // w5
  unsigned int v8; // w1

  v2 = (__int64)*a1;
  v4 = *a1 + 1;
  v3 = **a1;
  *a1 = v4;
  result = (unsigned int)(v3 - 48);
  for ( i = *(unsigned __int8 *)(v2 + 1) - 48; i <= 9; i = *v4 - 48 )
  {
    if ( (result & 0x80000000) == 0 )
    {
      v7 = 0x7FFFFFFF - i;
      if ( (int)result > 214748364 )
      {
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v8 = i + 10 * result;
        if ( 10 * (int)result > v7 )
          result = 0xFFFFFFFFLL;
        else
          result = v8;
      }
    }
    *a1 = ++v4;
  }
  return result;
}
