__int64 __fastcall dl_addr_inside_object(__int64 a1, __int64 a2)
{
  __int64 v2; // x1
  unsigned int v3; // w4
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x0
  unsigned int *v7; // x2
  unsigned int *v8; // x4
  __int64 result; // x0

  v2 = a2 - *(_QWORD *)a1;
  if ( !*(_WORD *)(a1 + 768) )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 768) - 1;
  v4 = *(_QWORD *)(a1 + 752);
  v5 = 56LL * *(unsigned __int16 *)(a1 + 768);
  v6 = v4 - 112;
  v7 = (unsigned int *)(v4 + v5 - 56);
  v8 = (unsigned int *)(v5 - 56LL * v3 + v6);
  while ( 1 )
  {
    result = *v7;
    if ( (_DWORD)result == 1 && (unsigned __int64)(v2 - *((_QWORD *)v7 + 2)) < *((_QWORD *)v7 + 5) )
      break;
    v7 -= 14;
    if ( v7 == v8 )
      return 0;
  }
  return result;
}
