__int64 __fastcall _translated_number_width(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // x5
  __int64 result; // x0
  int v5; // w3

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  result = *(unsigned __int8 *)(v3 + 19);
  if ( *(_BYTE *)(v3 + 19) )
    return (unsigned int)(result * ((_DWORD)a3 - (_DWORD)a2));
  if ( a2 < a3 )
  {
    do
    {
      v5 = (unsigned __int8)*a2 - 48;
      if ( (unsigned __int8)(*a2 - 48) > 9u )
        _libc_assert_fail(
          "'0' <= *p && *p <= '9'",
          (__int64)"translated_number_width.c",
          0x25u,
          (__int64)"__translated_number_width");
      ++a2;
      result = (unsigned int)result + *(unsigned __int8 *)(v3 + v5 + 9);
    }
    while ( a3 != a2 );
  }
  return result;
}
