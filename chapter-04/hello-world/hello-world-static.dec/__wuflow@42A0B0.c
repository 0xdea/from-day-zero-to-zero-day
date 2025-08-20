__int64 __fastcall _wuflow(
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
  unsigned __int64 *v11; // x1
  unsigned int *v12; // x0
  unsigned int *v13; // x2
  __int64 v14; // x20
  __int64 result; // x0
  unsigned int v16; // w0
  unsigned int *v17; // x3
  unsigned __int64 v18; // x4
  unsigned int *v19; // x2

  v9 = *(_DWORD *)(a1 + 192);
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v9 )
  {
    v16 = IO_fwide(a1, 1);
    if ( v16 != 1 )
      return 0xFFFFFFFFLL;
    if ( !*(_DWORD *)(a1 + 192) )
      IO_fwide(a1, v16);
  }
  if ( (*(_DWORD *)a1 & 0x800) != 0 && (unsigned int)IO_switch_to_wget_mode((unsigned int *)a1) == -1 )
    return 0xFFFFFFFFLL;
  v11 = *(unsigned __int64 **)(a1 + 160);
  v13 = (unsigned int *)*v11;
  v12 = (unsigned int *)v11[1];
  if ( *v11 < (unsigned __int64)v12 )
  {
    result = *v13;
    *v11 = (unsigned __int64)(v13 + 1);
    return result;
  }
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v17 = (unsigned int *)v11[8];
    v18 = v11[10];
    *(_DWORD *)a1 &= ~0x100u;
    v19 = (unsigned int *)v11[2];
    v11[1] = v18;
    v11[2] = (unsigned __int64)v17;
    v11[8] = (unsigned __int64)v19;
    v11[10] = (unsigned __int64)v12;
    if ( v18 > (unsigned __int64)v17 )
    {
      result = *v17;
      *v11 = (unsigned __int64)(v17 + 1);
      return result;
    }
    *v11 = (unsigned __int64)v17;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    if ( v11[8] )
      IO_free_wbackup_area((unsigned int *)a1, a2, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_8;
  }
  if ( (unsigned int)save_for_wbackup(a1, v11[1], a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0xFFFFFFFFLL;
LABEL_8:
  v14 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v14 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  return (*(__int64 (__fastcall **)(__int64))(v14 + 40))(a1);
}
