__int64 _fprintf_chk(__int64 a1, int a2, const char *a3, ...)
{
  gcc_va_list va1; // [xsp+0h] [xbp-50h] BYREF
  gcc_va_list va; // [xsp+28h] [xbp-28h] BYREF
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
  va_copy(va1, va);
  return _vfprintf_internal(a1, a3, va1, 2 * (unsigned int)(a2 > 0));
}
