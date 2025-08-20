__int64 __fastcall sub_44B1A0(__int64 a1)
{
  int v1; // w1
  char *v3; // x3
  __int64 v4; // x2
  char *v5; // x0
  __int64 result; // x0
  const char *v7; // x0

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xBFFFEEF0) != 0 )
  {
    v7 = (const char *)sub_43CBF0((__int64)"libc", (__int64)"invalid mode parameter", 5u);
    sub_432250(0, 0, 0, v7);
  }
  v3 = *(char **)a1;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = "";
  if ( v3 )
    v5 = v3;
  result = ((__int64 (__fastcall *)(char *, _QWORD, __int64, _QWORD, _QWORD, __int64, __int64))loc_4463A4)(
             v5,
             v1 | 0x80000000,
             v4,
             0,
             (unsigned int)dword_496848,
             qword_496850,
             qword_4966D8);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
