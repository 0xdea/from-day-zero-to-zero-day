unsigned __int64 __fastcall sub_4492F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // x5
  __int64 v5; // x7
  __int64 v6; // x4
  unsigned __int64 result; // x0
  unsigned __int64 v8; // x2

  v4 = *(_QWORD *)(a2 + 8 * (a3 - 1));
  v5 = a1 + 8;
  v6 = a3 - 2;
  result = v4 >> (64 - a4);
  if ( a3 - 2 >= 0 )
  {
    do
    {
      v8 = v4;
      v4 = *(_QWORD *)(a2 + 8 * v6);
      *(_QWORD *)(v5 + 8 * v6--) = (v8 << a4) | (v4 >> (64 - a4));
    }
    while ( v6 != -1 );
  }
  *(_QWORD *)(v5 + 8 * v6) = v4 << a4;
  return result;
}
