unsigned __int8 *__fastcall sub_17D14(unsigned __int8 *result)
{
  unsigned __int8 *v1; // r3
  unsigned __int8 *v2; // r2
  unsigned int v3; // r1
  unsigned int v4; // t1

  if ( result )
  {
    v1 = result;
    v2 = 0;
    while ( 1 )
    {
      v4 = *result++;
      v3 = v4;
      if ( !v4 )
        break;
      if ( v3 <= 0x20 )
      {
        if ( v2 )
          *v1++ = v3;
      }
      else
      {
        *v1++ = v3;
        v2 = v1;
      }
    }
    if ( v2 )
      *v2 = 0;
    else
      *v1 = 0;
  }
  return result;
}
