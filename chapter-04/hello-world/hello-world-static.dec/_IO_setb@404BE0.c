__int64 __fastcall IO_setb(int *a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // w4
  __int64 v7; // x0
  __int64 result; // x0
  int v11; // w4

  v4 = *a1;
  v7 = *((_QWORD *)a1 + 7);
  if ( v7 && (v4 & 1) == 0 )
  {
    free(v7);
    v4 = *a1;
  }
  result = v4 & 0xFFFFFFFE;
  v11 = v4 | 1;
  *((_QWORD *)a1 + 7) = a2;
  *((_QWORD *)a1 + 8) = a3;
  if ( a4 )
    v11 = result;
  *a1 = v11;
  return result;
}
