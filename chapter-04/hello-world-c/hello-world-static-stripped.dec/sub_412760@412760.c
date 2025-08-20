__int64 __fastcall sub_412760(unsigned __int64 a1)
{
  __int64 v2; // x19
  _BOOL8 v3; // x19
  __int64 result; // x0
  __int64 v5; // [xsp+28h] [xbp+28h] BYREF

  sub_414684(0, &v5, 0);
  v2 = v5;
  sub_414684(29, &v5, 0);
  v3 = v2 != 0;
  if ( !v3 < a1 )
    sub_4385C0("Failed loading %lu audit modules, %lu are supported.\n", a1, !v3);
  result = (int)v5 + 144 * ((int)v3 + (int)a1 - 1 + (int)v3 + (int)a1) + 144;
  qword_4921D8 = v5;
  qword_491988 = (int)result;
  return result;
}
