__int64 __fastcall sub_4530A0(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6[2]; // [xsp+20h] [xbp+20h] BYREF

  *a2 = -1;
  a2[1] = a3;
  a2[2] = a4;
  a2[3] = a1;
  a2[4] = 2042;
  sub_4514F0((__int64)&unk_496D08, a1, 1, (__int64)a2);
  sub_452660((__int64)a2, v6);
  return sub_4514F0((__int64)&qword_496D20, v6[0], v6[1] - v6[0], (__int64)a2);
}
