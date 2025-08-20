__int64 __fastcall sub_40D9A4(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 result; // x0
  bool v11; // zf
  __int64 v12; // x1

  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((__int64)a1, a2, a3, (unsigned __int8)byte_496690, a5, a6, a7);
  result = 22;
  if ( ((a2 >> 3) - 1) & (a2 >> 3) | a2 & 7 )
    v11 = 1;
  else
    v11 = a2 == 0;
  if ( !v11 )
  {
    v12 = ((__int64 (__fastcall *)(unsigned __int64, __int64))loc_40BCB0)(a2, a3);
    result = 12;
    if ( v12 )
    {
      result = 0;
      *a1 = v12;
    }
  }
  return result;
}
