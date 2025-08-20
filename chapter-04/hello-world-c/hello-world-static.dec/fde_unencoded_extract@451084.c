void __fastcall fde_unencoded_extract(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x0

  if ( a4 > 0 )
  {
    v4 = 0;
    do
    {
      *(_QWORD *)(a2 + v4) = *(_QWORD *)(*(_QWORD *)(a3 + v4) + 8LL);
      v4 += 8;
    }
    while ( 8LL * a4 != v4 );
  }
}
