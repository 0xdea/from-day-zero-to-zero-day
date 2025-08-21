__int64 asprintf(__int64 *a1, const char *a2, ...)
{
  gcc_va_list va1; // [xsp+0h] [xbp-50h] BYREF
  gcc_va_list va; // [xsp+28h] [xbp-28h] BYREF
  __int64 vars90; // [xsp+E0h] [xbp+90h]
  __int64 vars98; // [xsp+E8h] [xbp+98h]
  __int64 varsA0; // [xsp+F0h] [xbp+A0h]
  __int64 varsA8; // [xsp+F8h] [xbp+A8h]
  __int64 varsB0; // [xsp+100h] [xbp+B0h]
  __int64 varsB8; // [xsp+108h] [xbp+B8h]

  va_start(va, a2);
  vars90 = va_arg(va, _QWORD);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  varsB0 = va_arg(va, _QWORD);
  varsB8 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  va_copy(va1, va);
  return _vasprintf_internal(a1, (__int64)a2, (__int128 *)va1, 0);
}
