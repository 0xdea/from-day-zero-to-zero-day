unsigned __int64 __fastcall IO_str_init_static(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // x21
  bool v8; // zf
  unsigned __int64 result; // x0

  if ( a3 < 0 )
    a3 = -1;
  if ( a3 )
  {
    v7 = a3 + a2;
    if ( a2 >= v7 )
      v7 = -1;
  }
  else
  {
    v7 = a2 + strlen(a2);
  }
  IO_setb((int *)a1, a2, v7, 0);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2;
  v8 = a4 == 0;
  if ( a4 )
    result = a4;
  else
    result = a2;
  if ( !a4 )
    a4 = v7;
  if ( v8 )
    v7 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}
