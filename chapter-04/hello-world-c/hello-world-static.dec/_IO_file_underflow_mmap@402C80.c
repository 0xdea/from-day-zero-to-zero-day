__int64 __fastcall IO_file_underflow_mmap(
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
  unsigned __int8 *v9; // x1
  __int64 result; // x0
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  unsigned __int8 *v20; // x0
  __int64 v21; // x20

  v9 = *(unsigned __int8 **)(a1 + 8);
  if ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 16) )
    return *v9;
  if ( (unsigned int)mmap_remap_check(a1, a2, a3, a4, a5, a6, a7, a8, a9) )
  {
    v21 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v21 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(v12, v13, v14, v15, v16, v17, v18, v19);
    return (*(__int64 (__fastcall **)(__int64))(v21 + 32))(a1);
  }
  else
  {
    v20 = *(unsigned __int8 **)(a1 + 8);
    if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 16) )
    {
      result = 0xFFFFFFFFLL;
      *(_DWORD *)a1 |= 0x10u;
    }
    else
    {
      return *v20;
    }
  }
  return result;
}
