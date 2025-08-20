// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_4147D0(__int64 a1)
{
  unsigned __int64 *v1; // x19
  int8x16_t *v2; // x0
  unsigned __int64 v3; // x1
  __int64 v4; // x2
  unsigned __int64 v5; // t1
  __int64 v6; // x1
  int v7; // w6
  __int64 *result; // x0
  int8x16_t v9; // [xsp+20h] [xbp+20h] BYREF
  __int64 v10; // [xsp+38h] [xbp+38h]
  __int64 v11; // [xsp+48h] [xbp+48h]
  __int64 v12; // [xsp+50h] [xbp+50h]
  void (__fastcall __noreturn *v13)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char); // [xsp+68h] [xbp+68h]
  __int128 v14; // [xsp+98h] [xbp+98h]
  __int64 v15; // [xsp+A8h] [xbp+A8h]
  int v16; // [xsp+B0h] [xbp+B0h]
  __int64 v17; // [xsp+D8h] [xbp+D8h]
  void *v18; // [xsp+E8h] [xbp+E8h]
  __int64 v19; // [xsp+F0h] [xbp+F0h]
  __int64 v20; // [xsp+108h] [xbp+108h]
  __int64 v21; // [xsp+110h] [xbp+110h]
  __int64 v22; // [xsp+128h] [xbp+128h]
  __int64 v23; // [xsp+1B8h] [xbp+1B8h]

  v1 = (unsigned __int64 *)a1;
  qword_496720 = a1;
  v2 = sub_40FC40(&v9, 0, 0x1A0u);
  v3 = *v1;
  v4 = 0x10000;
  v12 = 0x10000;
  v13 = start;
  v23 = 5120;
  if ( v3 )
  {
    do
    {
      if ( v3 <= 0x33 )
        v2->n128_u64[v3] = v1[1];
      v5 = v1[2];
      v1 += 2;
      v3 = v5;
    }
    while ( v5 );
    v4 = v12;
    v6 = v23;
    v7 = v16;
  }
  else
  {
    v6 = 5120;
    v7 = 0;
  }
  result = &qword_496720;
  qword_490F10 = v4;
  qword_490F18 = v6;
  dword_491570 = v17;
  off_48F780 = v18;
  qword_496738 = v19;
  xmmword_496728 = v14;
  qword_496740 = v20;
  dword_496754 = v7;
  qword_496748 = v21;
  qword_496760 = v10;
  qword_496768 = v11;
  dword_496750 = v15;
  qword_496758 = v22;
  if ( !v10 )
  {
    qword_496760 = (__int64)&dword_400040;
    qword_496768 = 6;
  }
  return result;
}
