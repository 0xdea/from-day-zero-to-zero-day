void __noreturn sub_4385C0(char *a1, ...)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
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
  sub_437C90(2, 0, (unsigned __int8 *)a1, (__int64)va1);
  sub_4108D0(127, v1, v2, v3, v4, v5, v6);
}
