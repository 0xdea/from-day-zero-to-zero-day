__int64 __fastcall sub_453110(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4[2]; // [xsp+20h] [xbp+20h] BYREF

  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = a1;
  *(_QWORD *)(a2 + 32) = 2042;
  *(_OWORD *)a2 = xmmword_45A900;
  sub_4514F0((__int64)&unk_496D08, a1, 1, a2);
  sub_452660(a2, v4);
  return sub_4514F0((__int64)&qword_496D20, v4[0], v4[1] - v4[0], a2);
}
