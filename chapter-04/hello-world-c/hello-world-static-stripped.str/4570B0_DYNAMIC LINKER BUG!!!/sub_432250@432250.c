void __fastcall __noreturn sub_432250(int a1, __int64 a2, long double a3, __int64 a4, const char *a5)
{
  __int64 v5; // x19

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 0xFFFFFFFFFFFFFFB8LL);
  if ( !a5 )
    a5 = "DYNAMIC LINKER BUG!!!";
  if ( v5 )
  {
    sub_4323F0(*(_QWORD *)v5, a2, a5);
    **(_DWORD **)(v5 + 8) = a1;
    a3 = sub_43DF40(v5 + 16, 1);
  }
  sub_432150(a1, a3);
}
