ssize_t dl_debug_printf_c(char *a1, ...)
{
  gcc_va_list va1; // [xsp+10h] [xbp+10h] BYREF
  gcc_va_list va; // [xsp+30h] [xbp+30h] BYREF
  __int64 vars88; // [xsp+D8h] [xbp+D8h]
  __int64 vars90; // [xsp+E0h] [xbp+E0h]
  __int64 vars98; // [xsp+E8h] [xbp+E8h]
  __int64 varsA0; // [xsp+F0h] [xbp+F0h]
  __int64 varsA8; // [xsp+F8h] [xbp+F8h]
  __int64 varsB0; // [xsp+100h] [xbp+100h]

  va_start(va, a1);
  vars88 = va_arg(va, _QWORD);
  vars90 = va_arg(va, _QWORD);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  varsB0 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_copy(va1, va);
  return dl_debug_vdprintf(dl_debug_fd, -1, (unsigned __int8 *)a1, (__int64)va1);
}
