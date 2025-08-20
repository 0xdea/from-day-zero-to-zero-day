_QWORD *__fastcall sub_431690(__int64 a1, __int64 *a2, __int64 (__fastcall *a3)(__int64, _QWORD))
{
  __int64 v3; // x19
  __int64 *v6; // x1
  _QWORD *v7; // x19
  int v8; // w0

  if ( !a2 )
    return 0;
  v3 = *a2;
  if ( (unsigned __int64)*a2 <= 1 )
    return 0;
  while ( 1 )
  {
    v7 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    v8 = a3(a1, *v7);
    v6 = v7 + 2;
    if ( !v8 )
      break;
    if ( v8 < 0 )
      v6 = v7 + 1;
    v3 = *v6;
    if ( (unsigned __int64)*v6 <= 1 )
      return 0;
  }
  return v7;
}
