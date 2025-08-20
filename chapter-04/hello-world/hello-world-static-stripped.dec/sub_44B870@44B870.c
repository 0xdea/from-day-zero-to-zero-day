__int64 *__fastcall sub_44B870(__int64 a1)
{
  __int64 v1; // x2
  __int64 v3; // x0
  __int64 *result; // x0

  LODWORD(v1) = 1;
  v3 = *(_QWORD *)a1;
  if ( (*(_WORD *)(v3 + 868) & 3LL) != 0 )
    v1 = HIDWORD(*(_QWORD *)(v3 + 864)) & 3LL;
  result = sub_435460(
             v3,
             *(unsigned __int8 **)(a1 + 24),
             v1,
             *(_DWORD *)(a1 + 8),
             *(_DWORD *)(a1 + 12),
             *(_QWORD *)(v3 + 48));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
