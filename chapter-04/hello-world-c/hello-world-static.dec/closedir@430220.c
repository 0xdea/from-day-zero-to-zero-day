unsigned __int64 __fastcall closedir(
        int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  int v9; // w19

  if ( a1 )
  {
    v9 = *a1;
    free((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    return _close_nocancel(v9);
  }
  else
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0xFFFFFFFFLL;
  }
}
