void __fastcall __noreturn sub_432250(int a1, const char *a2, const char *a3, const char *a4)
{
  __int64 v4; // x19
  int v5; // w20

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 0xFFFFFFFFFFFFFFB8LL);
  if ( !a4 )
    a4 = "DYNAMIC LINKER BUG!!!";
  if ( v4 )
  {
    v5 = a1;
    sub_4323F0(*(_QWORD *)v4, a2, a4);
    **(_DWORD **)(v4 + 8) = v5;
    a1 = sub_43DF40(v4 + 16, 1);
  }
  sub_432150(a1, a2, a3, a4);
}
