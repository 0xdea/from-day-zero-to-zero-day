__int64 __fastcall IO_doallocbuf(
        int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 result; // x0
  int v11; // w1
  __int64 v12; // x20
  __int64 v13; // x21
  int *v14; // x20

  result = *((_QWORD *)a1 + 7);
  if ( !result )
  {
    v11 = *a1;
    if ( (*a1 & 2) != 0 )
    {
      result = (unsigned int)a1[48];
      if ( (int)result <= 0 )
      {
        v13 = (__int64)a1 + 131;
        v14 = a1 + 33;
LABEL_10:
        *a1 = v11 | 1;
        *((_QWORD *)a1 + 7) = v13;
        *((_QWORD *)a1 + 8) = v14;
        return result;
      }
    }
    v12 = *((_QWORD *)a1 + 27);
    if ( (unsigned __int64)(v12 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
    result = (*(__int64 (__fastcall **)(int *))(v12 + 104))(a1);
    if ( (_DWORD)result == -1 )
    {
      result = *((_QWORD *)a1 + 7);
      v13 = (__int64)a1 + 131;
      v11 = *a1;
      v14 = a1 + 33;
      if ( result )
      {
        if ( (v11 & 1) == 0 )
        {
          result = free(result);
          v11 = *a1;
        }
      }
      goto LABEL_10;
    }
  }
  return result;
}
