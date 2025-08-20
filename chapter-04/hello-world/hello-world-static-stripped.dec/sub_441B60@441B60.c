__int64 sub_441B60(__int64 a1, __int64 a2, const char *a3, ...)
{
  __int64 result; // x0
  _BYTE *v4; // x1
  _BYTE *v5; // x2
  __int64 v6; // x5
  int v7; // w3
  gcc_va_list va1; // [xsp+10h] [xbp-50h] BYREF
  gcc_va_list va; // [xsp+38h] [xbp-28h] BYREF
  __int64 v10; // [xsp+58h] [xbp-8h]
  __int64 vars98; // [xsp+F8h] [xbp+98h]
  __int64 varsA0; // [xsp+100h] [xbp+A0h]
  __int64 varsA8; // [xsp+108h] [xbp+A8h]
  __int64 varsB0; // [xsp+110h] [xbp+B0h]

  va_start(va, a3);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  varsB0 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v10 = qword_48DD60;
  va_copy(va1, va);
  result = sub_442310(a1, a2, a3, va1, 0);
  if ( v10 != qword_48DD60 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)sub_412340() + 32LL);
    result = *(unsigned __int8 *)(v6 + 19);
    if ( *(_BYTE *)(v6 + 19) )
    {
      return (unsigned int)(result * ((_DWORD)v5 - (_DWORD)v4));
    }
    else if ( v4 < v5 )
    {
      do
      {
        v7 = (unsigned __int8)*v4 - 48;
        if ( (unsigned __int8)(*v4 - 48) > 9u )
          sub_41F250(
            "'0' <= *p && *p <= '9'",
            (__int64)"translated_number_width.c",
            0x25u,
            (__int64)"__translated_number_width");
        ++v4;
        result = (unsigned int)result + *(unsigned __int8 *)(v6 + v7 + 9);
      }
      while ( v5 != v4 );
    }
  }
  return result;
}
