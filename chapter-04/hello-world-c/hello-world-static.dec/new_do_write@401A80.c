__int64 __fastcall new_do_write(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v13; // x21
  __int64 v15; // x21
  int v16; // w0
  bool v17; // zf
  __int64 v18; // x1
  int v19; // w0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // x3
  __int64 v24; // x0

  v13 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
  {
    *(_QWORD *)(a1 + 144) = -1;
LABEL_3:
    if ( (unsigned __int64)(v13 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v13 + 120))(a1, a2, a3);
    v16 = *(unsigned __int16 *)(a1 + 128);
    if ( v15 )
      v17 = v16 == 0;
    else
      v17 = 1;
    if ( !v17 )
      *(_WORD *)(a1 + 128) = IO_adjust_column((unsigned int)(v16 - 1), a2, (unsigned int)v15) + 1;
    v18 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 16) = v18;
    v19 = *(_DWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = v18;
    *(_QWORD *)(a1 + 40) = v18;
    if ( v19 <= 0 )
    {
      if ( (*(_DWORD *)a1 & 0x202) == 0 )
        v18 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 64);
    }
    *(_QWORD *)(a1 + 48) = v18;
    return v15;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *(_QWORD *)(a1 + 32);
  if ( v21 == v22 )
    goto LABEL_3;
  if ( (unsigned __int64)(v13 - (_QWORD)&_io_vtables) > 0x92F )
  {
    IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_QWORD *)(a1 + 32);
  }
  v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v13 + 128);
  v15 = 0;
  v24 = v23(a1, v22 - v21, 1);
  if ( v24 != -1 )
  {
    v13 = *(_QWORD *)(a1 + 216);
    *(_QWORD *)(a1 + 144) = v24;
    goto LABEL_3;
  }
  return v15;
}
