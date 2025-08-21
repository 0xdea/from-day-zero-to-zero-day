__int64 __fastcall sub_44CDB0(
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
  __int64 result; // x0

  result = sub_436B10(
             *(const char **)(a1 + 8),
             *(_QWORD *)a1,
             *(__int64 **)(a1 + 40),
             *(__int64 ***)(*(_QWORD *)a1 + 976LL),
             *(const char ***)(a1 + 16),
             0,
             *(_DWORD *)(a1 + 24),
             0,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  *(_QWORD *)a1 = result;
  return result;
}
