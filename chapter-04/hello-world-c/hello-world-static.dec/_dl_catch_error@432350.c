__int64 __fastcall dl_catch_error(
        _QWORD *a1,
        _QWORD *a2,
        bool *a3,
        void (__fastcall *a4)(__int64),
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD v14[3]; // [xsp+38h] [xbp+38h] BYREF

  result = dl_catch_exception(v14, a4, a5, (__int64)a4, a5, a6, a7, a8);
  v12 = v14[1];
  *a1 = v14[0];
  v13 = v14[2];
  *a2 = v12;
  *a3 = v13 == v12;
  return result;
}
