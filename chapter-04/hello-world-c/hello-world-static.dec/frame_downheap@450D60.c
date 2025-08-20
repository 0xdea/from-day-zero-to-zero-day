__int64 __fastcall frame_downheap(
        __int64 result,
        __int64 (__fastcall *a2)(__int64, _QWORD, __int64),
        __int64 a3,
        int a4,
        int a5)
{
  int v5; // w25
  __int64 v8; // x23
  int v10; // w27
  __int64 *v11; // x26
  int v12; // w19
  __int64 v13; // x20
  __int64 v14; // x5
  __int64 *v15; // x20

  v5 = 2 * a4 + 1;
  if ( v5 < a5 )
  {
    v8 = result;
    v10 = a4;
    do
    {
      v14 = 8LL * v5;
      v12 = v5 + 1;
      v11 = (__int64 *)(a3 + v14 + 8);
      v15 = (__int64 *)(a3 + v14);
      if ( v5 + 1 >= a5 || (a2(v8, *(_QWORD *)(a3 + 8LL * v5), *(_QWORD *)(a3 + 8LL * v5 + 8)) & 0x80000000) == 0 )
      {
        v11 = v15;
        v12 = v5;
      }
      v13 = v10;
      v10 = v12;
      v5 = 2 * v12 + 1;
      result = a2(v8, *(_QWORD *)(a3 + 8 * v13), *v11);
      if ( (result & 0x80000000) == 0 )
        break;
      result = *(_QWORD *)(a3 + 8 * v13);
      *(_QWORD *)(a3 + 8 * v13) = *v11;
      *v11 = result;
    }
    while ( a5 > v5 );
  }
  return result;
}
