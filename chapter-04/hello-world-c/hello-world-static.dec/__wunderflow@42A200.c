__int64 __fastcall _wunderflow(
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
  int v9; // w1
  __int64 *v11; // x0
  unsigned __int64 v12; // x2
  __int64 v13; // x20
  unsigned int v15; // w0
  unsigned int *v16; // x3
  unsigned __int64 v17; // x4
  __int64 v18; // x1

  v9 = *(_DWORD *)(a1 + 192);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v9 )
  {
    v15 = IO_fwide(a1, 1);
    if ( v15 != 1 )
      return 0xFFFFFFFFLL;
    if ( !*(_DWORD *)(a1 + 192) )
      IO_fwide(a1, v15);
  }
  if ( (*(_DWORD *)a1 & 0x800) != 0 && (unsigned int)IO_switch_to_wget_mode((unsigned int *)a1) == -1 )
    return 0xFFFFFFFFLL;
  v11 = *(__int64 **)(a1 + 160);
  v12 = v11[1];
  if ( *v11 < v12 )
    return *(unsigned int *)*v11;
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v16 = (unsigned int *)v11[8];
    v17 = v11[10];
    *(_DWORD *)a1 &= ~0x100u;
    v18 = v11[2];
    *v11 = (__int64)v16;
    v11[1] = v17;
    v11[2] = (__int64)v16;
    v11[8] = v18;
    v11[10] = v12;
    if ( v17 > (unsigned __int64)v16 )
      return *v16;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    if ( *(_QWORD *)(a1 + 72) )
      IO_free_wbackup_area((unsigned int *)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_8;
  }
  if ( (unsigned int)save_for_wbackup(a1, v11[1], a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0xFFFFFFFFLL;
LABEL_8:
  v13 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v13 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  return (*(__int64 (__fastcall **)(__int64))(v13 + 32))(a1);
}
