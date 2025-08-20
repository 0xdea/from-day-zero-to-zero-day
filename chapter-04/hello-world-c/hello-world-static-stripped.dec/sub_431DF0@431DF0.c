__int64 sub_431DF0(__int64 a1, int a2, const char *a3, ...)
{
  __int64 result; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  gcc_va_list va1; // [xsp+0h] [xbp-50h] BYREF
  gcc_va_list va; // [xsp+28h] [xbp-28h] BYREF
  __int64 v8; // [xsp+48h] [xbp-8h]
  __int64 vars98; // [xsp+E8h] [xbp+98h]
  __int64 varsA0; // [xsp+F0h] [xbp+A0h]
  __int64 varsA8; // [xsp+F8h] [xbp+A8h]
  __int64 varsB0; // [xsp+100h] [xbp+B0h]

  va_start(va, a3);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  varsB0 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v8 = qword_48DD60;
  va_copy(va1, va);
  result = sub_4420F0(a1, a3, va1, 2 * (unsigned int)(a2 > 0));
  if ( v8 != qword_48DD60 )
  {
    v4 = sub_412340();
    return sub_431EB0(v4, v5);
  }
  return result;
}
