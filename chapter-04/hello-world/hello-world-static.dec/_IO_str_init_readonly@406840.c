__int64 __fastcall IO_str_init_readonly(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // x21
  int v6; // w0
  __int64 result; // x0

  if ( a3 < 0 )
    a3 = -1;
  if ( a3 )
  {
    v5 = a3 + a2;
    if ( a2 >= v5 )
      v5 = -1;
  }
  else
  {
    v5 = a2 + strlen(a2);
  }
  IO_setb((int *)a1, a2, v5, 0);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2;
  result = v6 | 8u;
  *(_DWORD *)a1 = result;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}
