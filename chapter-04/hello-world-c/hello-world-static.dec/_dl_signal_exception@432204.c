void __fastcall __noreturn dl_signal_exception(int a1, __int64 a2, const char *a3)
{
  __int64 v3; // x4
  struct __jmp_buf_tag *v5; // x0
  _QWORD *v6; // x2
  int *v7; // x4
  __int64 v8; // x7

  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 0xFFFFFFFFFFFFFFB8LL);
  if ( v3 )
  {
    v5 = (struct __jmp_buf_tag *)(v3 + 16);
    v6 = *(_QWORD **)v3;
    v7 = *(int **)(v3 + 8);
    v8 = *(_QWORD *)(a2 + 8);
    *v6 = *(_QWORD *)a2;
    v6[1] = v8;
    v6[2] = *(_QWORD *)(a2 + 16);
    *v7 = a1;
    _longjmp(v5, 1);
  }
  fatal_error(a1, *(const char **)a2, a3, *(const char **)(a2 + 8));
}
