// positive sp value has been detected, the output may be wrong!
__int64 __fastcall dl_runtime_resolve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16)
{
  __int64 v16; // x16
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // x0

  v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))((__int64 (__fastcall *)(_QWORD, unsigned __int64))dl_fixup)(*(_QWORD *)(v16 - 8), (unsigned __int64)(24 * (*(_QWORD *)&a16 - v16) - 192) >> 3);
  return v17(a1, a2, a3, a4, a5, a6, a7, a8);
}
