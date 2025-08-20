ssize_t sub_438444(int a1, unsigned __int8 *a2, ...)
{
  gcc_va_list va1; // [xsp+10h] [xbp+10h] BYREF
  gcc_va_list va; // [xsp+30h] [xbp+30h] BYREF
  __int64 vars80; // [xsp+D0h] [xbp+D0h]
  __int64 vars88; // [xsp+D8h] [xbp+D8h]
  __int64 vars90; // [xsp+E0h] [xbp+E0h]
  __int64 vars98; // [xsp+E8h] [xbp+E8h]
  __int64 varsA0; // [xsp+F0h] [xbp+F0h]
  __int64 varsA8; // [xsp+F8h] [xbp+F8h]

  va_start(va, a2);
  vars80 = va_arg(va, _QWORD);
  vars88 = va_arg(va, _QWORD);
  vars90 = va_arg(va, _QWORD);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  va_copy(va1, va);
  return sub_437C90(a1, 0, a2, (__int64)va1);
}
