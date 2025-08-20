void __fastcall __noreturn dl_signal_error(int a1, const char *a2, const char *a3, const char *a4)
{
  __int64 v4; // x19

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 0xFFFFFFFFFFFFFFB8LL);
  if ( !a4 )
    a4 = "DYNAMIC LINKER BUG!!!";
  if ( v4 )
  {
    dl_exception_create(*(_QWORD *)v4, a2, a4);
    **(_DWORD **)(v4 + 8) = a1;
    _longjmp((struct __jmp_buf_tag *)(v4 + 16), 1);
  }
  fatal_error(a1, a2, a3, a4);
}
