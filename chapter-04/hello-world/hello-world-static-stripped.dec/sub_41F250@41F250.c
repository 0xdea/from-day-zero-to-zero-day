void __fastcall __noreturn sub_41F250(const char *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // x0
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  _BYTE v16[6]; // [xsp+22h] [xbp-Eh] BYREF
  __int64 v17; // [xsp+28h] [xbp-8h]

  v17 = qword_48DD60;
  v16[0] = 0;
  v7 = sub_4244D0(a3, v16, 10, 0);
  sub_401810(
    "Fatal glibc error: %s:%s (%s): assertion failed: %s\n",
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    a2,
    v7,
    a4,
    a1);
}
