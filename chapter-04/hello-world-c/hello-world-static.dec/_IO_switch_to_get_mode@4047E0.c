__int64 __fastcall IO_switch_to_get_mode(
        unsigned int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned __int64 v10; // x1
  __int64 v11; // x20
  __int64 result; // x0
  unsigned int v13; // w0
  unsigned __int64 v14; // x2
  unsigned int v15; // w2

  v10 = *((_QWORD *)a1 + 5);
  if ( v10 <= *((_QWORD *)a1 + 4) )
  {
LABEL_6:
    v13 = *a1;
    if ( (*a1 & 0x100) != 0 )
    {
      *((_QWORD *)a1 + 3) = *((_QWORD *)a1 + 10);
    }
    else
    {
      v14 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 3) = *((_QWORD *)a1 + 7);
      if ( v14 < v10 )
        *((_QWORD *)a1 + 2) = v10;
    }
    v15 = v13 & 0xFFFFF7FF;
    result = 0;
    *a1 = v15;
    *((_QWORD *)a1 + 1) = v10;
    *((_QWORD *)a1 + 4) = v10;
    *((_QWORD *)a1 + 6) = v10;
    return result;
  }
  v11 = *((_QWORD *)a1 + 27);
  if ( (unsigned __int64)(v11 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (__fastcall **)(unsigned int *, __int64))(v11 + 24))(a1, 0xFFFFFFFFLL);
  if ( (_DWORD)result != -1 )
  {
    v10 = *((_QWORD *)a1 + 5);
    goto LABEL_6;
  }
  return result;
}
