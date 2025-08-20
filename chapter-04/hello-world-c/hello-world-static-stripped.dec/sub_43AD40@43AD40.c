__int64 __fastcall sub_43AD40(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 *v10; // x2
  const char *v12; // x0
  __int64 v13; // t1
  __int64 result; // x0

  v10 = (__int64 *)(a1 + 24);
  v12 = *(const char **)(a1 + 8);
  v13 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = 0;
  result = sub_436B10(
             v12,
             v13,
             v10,
             (__int64 **)(v13 + 984),
             (const char **)(a1 + 32),
             0,
             0,
             0,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
