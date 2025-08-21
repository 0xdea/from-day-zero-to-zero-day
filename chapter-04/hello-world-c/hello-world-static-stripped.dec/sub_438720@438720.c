signed __int64 __fastcall sub_438720(__int64 a1)
{
  unsigned __int64 v2; // x2
  __int64 v3; // x2
  unsigned __int64 v4; // x3
  __int64 v5; // x4
  signed __int64 result; // x0

  if ( *(_QWORD *)(a1 + 1168) == -1
    || (v2 = *(_QWORD *)(a1 + 1152), v2 > qword_4921C0)
    || (v3 = ((qword_4921B8 - 1 + v2 - *(_QWORD *)(a1 + 1160)) & -(__int64)v2) + *(_QWORD *)(a1 + 1160),
        v4 = v3 + *(_QWORD *)(a1 + 1144),
        v4 > qword_4921B0) )
  {
    sub_432250(0, *(const char **)(a1 + 8), 0, "cannot allocate memory in static TLS block");
  }
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 1160) = qword_4921B8;
  *(_QWORD *)(a1 + 1168) = v3;
  qword_4921B8 = v4;
  if ( (*(_WORD *)(v5 + 868) & 8) != 0 )
    return sub_412DA4((_QWORD *)a1);
  result = *(unsigned __int16 *)(a1 + 868) | 0xFFFF8000;
  *(_WORD *)(a1 + 868) = result;
  return result;
}
