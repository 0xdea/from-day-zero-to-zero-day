__int64 __fastcall sub_453184(
        unsigned __int64 a1,
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
  __int64 v16; // x19
  unsigned __int64 v18[2]; // [xsp+30h] [xbp+30h] BYREF

  v16 = sub_40B890(0x30u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = a1;
  *(_QWORD *)(v16 + 32) = 2042;
  *(_OWORD *)v16 = xmmword_45A900;
  sub_4514F0((__int64)&unk_496D08, a1, 1, v16);
  sub_452660(v16, v18);
  return sub_4514F0((__int64)&qword_496D20, v18[0], v18[1] - v18[0], v16);
}
