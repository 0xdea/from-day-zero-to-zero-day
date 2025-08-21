__int64 __fastcall sub_44A9F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // x3

  if ( a4 == 1 )
  {
    v5 = a3;
    a3 = 0;
  }
  else
  {
    v5 = 0;
    if ( a4 != 2 )
      a3 = 0;
  }
  return sub_44CA90(a1, a2, a3, v5);
}
