__int64 __fastcall sub_42F110(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x6
  __int64 v5; // x3
  __int64 v6; // x2
  __int64 v7; // x4
  int v8; // w5
  __int64 result; // x0

  if ( a1 == a2 )
    return 0;
  v3 = *(_QWORD *)(a3 + 112);
  v5 = 0;
  do
  {
    v6 = *(unsigned __int8 *)(a1 + v5);
    v7 = *(unsigned __int8 *)(a2 + v5++);
    v8 = v6;
    LODWORD(v6) = *(_DWORD *)(v3 + 4 * v6);
    LODWORD(v7) = *(_DWORD *)(v3 + 4 * v7);
    result = (unsigned int)(v6 - v7);
  }
  while ( (_DWORD)v6 == (_DWORD)v7 && v8 );
  return result;
}
