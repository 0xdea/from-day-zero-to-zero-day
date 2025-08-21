__int64 __fastcall sub_412760(unsigned __int64 a1)
{
  __int64 v2; // x19
  long double v3; // q0
  _BOOL8 v4; // x19
  __int64 result; // x0
  __int64 v6; // [xsp+28h] [xbp+28h] BYREF

  sub_414684(0, &v6, 0);
  v2 = v6;
  sub_414684(29, &v6, 0);
  v4 = v2 != 0;
  if ( !v4 < a1 )
    sub_4385C0("Failed loading %lu audit modules, %lu are supported.\n", v3);
  result = (int)v6 + 144 * ((int)v4 + (int)a1 - 1 + (int)v4 + (int)a1) + 144;
  qword_4921D8 = v6;
  qword_491988 = (int)result;
  return result;
}
