__int64 __fastcall _wcsmbs_getfct(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // x0
  unsigned __int64 v5; // [xsp+8h] [xbp-18h] BYREF
  __int64 v6; // [xsp+10h] [xbp-10h] BYREF

  if ( (unsigned int)_gconv_find_transform(a1, a2, &v6, (__int64)&v5, 0) )
    return 0;
  result = v6;
  if ( v5 > 1 )
  {
    _gconv_close_transform(v6);
    return 0;
  }
  else
  {
    *a3 = v5;
  }
  return result;
}
