__int64 __fastcall sub_410290(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // x0
  __int64 v5; // x0
  long double v6; // q0
  unsigned __int64 v7; // [xsp+8h] [xbp-18h] BYREF
  __int64 v8; // [xsp+10h] [xbp-10h] BYREF
  __int64 v9; // [xsp+18h] [xbp-8h]

  v9 = qword_48DD60;
  if ( (unsigned int)sub_415FB0(a1, a2, &v8, &v7, 0) )
  {
    result = 0;
  }
  else
  {
    result = v8;
    if ( v7 > 1 )
    {
      sub_416234(v8);
      result = 0;
    }
    else
    {
      *a3 = v7;
    }
  }
  if ( v9 != qword_48DD60 )
  {
    v5 = sub_412340(result, &qword_48DD60, 0, v9 - qword_48DD60);
    return sub_410320(v5, v6);
  }
  return result;
}
