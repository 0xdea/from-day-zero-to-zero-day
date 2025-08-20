__int64 __fastcall _wcsmbs_named_conv(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x1
  __int64 result; // x0
  unsigned __int64 v7; // x1
  __int64 v8; // x2
  unsigned __int64 v9; // [xsp+8h] [xbp-18h] BYREF
  __int64 v10; // [xsp+10h] [xbp-10h] BYREF

  if ( (unsigned int)_gconv_find_transform((__int64)"INTERNAL", a2, &v10, (__int64)&v9, 0) )
    goto LABEL_9;
  v5 = v9;
  v4 = v10;
  if ( v9 > 1 )
  {
    _gconv_close_transform(v10);
LABEL_9:
    *a1 = 0;
    return 1;
  }
  *a1 = v10;
  a1[1] = v5;
  if ( !v4 )
    return 1;
  result = _gconv_find_transform(a2, (__int64)"INTERNAL", &v10, (__int64)&v9, 0);
  if ( (_DWORD)result )
  {
LABEL_12:
    a1[2] = 0;
    goto LABEL_13;
  }
  v7 = v9;
  v8 = v10;
  if ( v9 > 1 )
  {
    _gconv_close_transform(v10);
    goto LABEL_12;
  }
  a1[2] = v10;
  a1[3] = v7;
  if ( !v8 )
  {
LABEL_13:
    _gconv_close_transform(*a1);
    return 1;
  }
  return result;
}
