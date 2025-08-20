__int64 __fastcall sub_43B340(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // x21
  __int64 *v11; // x19
  __int64 v12; // x22

  v10 = a1[1];
  v11 = a1 + 2;
  v12 = *a1;
  while ( (v11[2] & 1) == 0 )
  {
    if ( *v11 )
    {
      sub_40C1A0(*v11, a2, a3, a4, a5, a6, a7, a8, a9);
      v11 += 6;
      if ( (*(_DWORD *)(v11 - 4) & 1) != 0 )
        break;
    }
    else
    {
      v11 += 6;
    }
  }
  sub_40C1A0((unsigned __int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return sub_416234(v10, v12);
}
