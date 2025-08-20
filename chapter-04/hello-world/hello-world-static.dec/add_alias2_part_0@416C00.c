__int64 __fastcall add_alias2_part_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x22
  __int64 result; // x0
  _QWORD *v20; // x19
  __int64 v21; // x3
  __int64 v22; // x0
  __int64 *v23; // x0
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7

  v15 = a3 - a1;
  v16 = a3 - a1 + 16;
  result = malloc(v16, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  if ( result )
  {
    v20 = (_QWORD *)result;
    if ( v16 < 0x10 )
      v21 = 16;
    else
      v21 = v16;
    v22 = _memcpy_chk(result + 16, a1, v15, v21 - 16);
    *v20 = v22;
    v20[1] = v22 + a2 - a1;
    v23 = (__int64 *)tsearch(v20, &_gconv_alias_db, _gconv_alias_compare);
    if ( !v23 )
      return free((__int64)v20, v24, v25, v26, v27, v28, v29, v30, v31);
    result = *v23;
    if ( v20 != (_QWORD *)result )
      return free((__int64)v20, v24, v25, v26, v27, v28, v29, v30, v31);
  }
  return result;
}
