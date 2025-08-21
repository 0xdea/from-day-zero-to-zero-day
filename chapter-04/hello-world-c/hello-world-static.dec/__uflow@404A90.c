__int64 __fastcall _uflow(
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
  int v10; // w0
  unsigned __int8 *v11; // x0
  unsigned __int64 v12; // x1
  unsigned __int8 *v13; // x2
  unsigned __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x20
  __int64 v18; // x0
  unsigned int v19; // w1
  __int64 v20; // x3
  __int64 v21; // x2

  v10 = *(_DWORD *)(a1 + 192);
  if ( v10 )
  {
    if ( v10 != -1 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(a1 + 192) = -1;
  }
  if ( (*(_DWORD *)a1 & 0x800) != 0
    && (unsigned int)IO_switch_to_get_mode((unsigned int *)a1, a2, a3, a4, a5, a6, a7, a8, a9) == -1 )
  {
    return 0xFFFFFFFFLL;
  }
  v11 = *(unsigned __int8 **)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int64)v11 < v12 )
  {
    *(_QWORD *)(a1 + 8) = v11 + 1;
    return *v11;
  }
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v13 = *(unsigned __int8 **)(a1 + 72);
    v14 = *(_QWORD *)(a1 + 88);
    *(_DWORD *)a1 &= ~0x100u;
    v15 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 72) = v15;
    *(_QWORD *)(a1 + 88) = v12;
    if ( v14 > (unsigned __int64)v13 )
    {
      *(_QWORD *)(a1 + 8) = v13 + 1;
      return *v13;
    }
    *(_QWORD *)(a1 + 8) = v13;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v18 = *(_QWORD *)(a1 + 72);
    if ( v18 )
    {
      v19 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v18;
        v21 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(a1 + 8) = v18;
        *(_QWORD *)(a1 + 16) = v21;
        v18 = v20;
        *(_DWORD *)a1 = v19 & 0xFFFFFEFF;
      }
      free(v18);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    goto LABEL_10;
  }
  if ( (unsigned int)save_for_backup((_QWORD *)a1, *(_QWORD *)(a1 + 16)) )
    return 0xFFFFFFFFLL;
LABEL_10:
  v16 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v16 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  return (*(__int64 (__fastcall **)(__int64))(v16 + 40))(a1);
}
