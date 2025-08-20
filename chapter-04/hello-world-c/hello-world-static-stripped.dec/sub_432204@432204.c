void __fastcall __noreturn sub_432204(int a1, __int64 a2, const char *a3)
{
  __int64 v3; // x4
  int v4; // w5
  __int64 v5; // x0
  _QWORD *v6; // x2
  int *v7; // x4
  __int64 v8; // x7

  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 0xFFFFFFFFFFFFFFB8LL);
  if ( v3 )
  {
    v4 = a1;
    v5 = v3 + 16;
    v6 = *(_QWORD **)v3;
    v7 = *(int **)(v3 + 8);
    v8 = *(_QWORD *)(a2 + 8);
    *v6 = *(_QWORD *)a2;
    v6[1] = v8;
    v6[2] = *(_QWORD *)(a2 + 16);
    *v7 = v4;
    a1 = sub_43DF40(v5, 1);
  }
  sub_432150(a1, *(const char **)a2, a3, *(const char **)(a2 + 8));
}
