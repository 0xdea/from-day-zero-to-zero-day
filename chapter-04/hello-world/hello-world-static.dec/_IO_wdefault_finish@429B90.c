__int64 __fastcall IO_wdefault_finish(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v9; // x2
  __int64 v11; // x0
  _QWORD *i; // x1

  v9 = *(_QWORD **)(a1 + 160);
  v11 = v9[6];
  if ( v11 && (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    free(v11, a2, a3, a4, a5, a6, a7, a8, a9);
    v9 = *(_QWORD **)(a1 + 160);
    v9[6] = 0;
    v9[7] = 0;
  }
  for ( i = *(_QWORD **)(a1 + 96); i; i = (_QWORD *)*i )
    i[1] = 0;
  if ( *(_QWORD *)(a1 + 72) )
  {
    free(v9[8], a2, a3, a4, a5, a6, a7, a8, a9);
    *(_QWORD *)(a1 + 72) = 0;
  }
  return IO_un_link(a1);
}
