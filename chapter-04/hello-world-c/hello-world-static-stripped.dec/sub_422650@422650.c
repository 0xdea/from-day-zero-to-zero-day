unsigned __int64 __fastcall sub_422650(_BYTE *a1)
{
  unsigned int v1; // w2
  _BYTE *v2; // x3
  unsigned __int64 result; // x0
  __int64 v4; // x1
  unsigned int v5; // t1

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 0;
  v2 = a1;
  result = 0;
  do
  {
    v4 = v1;
    v5 = (unsigned __int8)*++v2;
    v1 = v5;
    result = v4 + 16 * result;
    if ( (result & 0xF0000000) != 0 )
      result = result & 0xFFFFFFFF0FFFFFFFLL ^ ((unsigned __int64)((unsigned int)result & 0xF0000000) >> 24);
  }
  while ( v1 );
  return result;
}
