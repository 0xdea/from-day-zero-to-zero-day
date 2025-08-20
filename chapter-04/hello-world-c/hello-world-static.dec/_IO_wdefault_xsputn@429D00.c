unsigned __int64 __fastcall IO_wdefault_xsputn(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  unsigned __int64 i; // x21
  unsigned int *v15; // x26
  __int64 v16; // x25
  __int64 v17; // x0
  __int64 v18; // x19
  unsigned int v19; // w25
  __int64 v20; // x19
  __int64 v21; // x2
  unsigned __int64 v22; // x3

  if ( a3 )
  {
    for ( i = a3; ; --i )
    {
      v15 = a2;
      v16 = *(_QWORD *)(a1 + 160);
      v17 = *(_QWORD *)(v16 + 32);
      if ( *(_QWORD *)(v16 + 40) - v17 <= 0 )
        goto LABEL_8;
      v18 = (*(_QWORD *)(v16 + 40) - v17) >> 2;
      if ( v18 > i )
        v18 = i;
      if ( v18 > 20 )
        break;
      if ( !v18 )
        goto LABEL_8;
      v21 = 4 * v18;
      v22 = 0;
      do
      {
        *(_DWORD *)(v17 + v22) = a2[v22 / 4];
        v22 += 4LL;
      }
      while ( v21 != v22 );
      *(_QWORD *)(v16 + 32) = v17 + v21;
      v15 = &a2[(unsigned __int64)v21 / 4];
      i -= v18;
      if ( !i )
        return a3;
LABEL_9:
      a2 = v15 + 1;
      v19 = *v15;
      if ( *(_DWORD *)(a1 + 192) )
      {
        v20 = *(_QWORD *)(a1 + 216);
        if ( (unsigned __int64)(v20 - (_QWORD)&_io_vtables) <= 0x92F )
          goto LABEL_11;
      }
      else
      {
        IO_fwide(a1, 1);
        v20 = *(_QWORD *)(a1 + 216);
        if ( (unsigned __int64)(v20 - (_QWORD)&_io_vtables) <= 0x92F )
        {
LABEL_11:
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v20 + 24))(a1, v19) == -1 )
            return a3 - i;
          continue;
        }
      }
      IO_vtable_check(a4, a5, a6, a7, a8, a9, a10, a11);
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v20 + 24))(a1, v19) == -1 )
        return a3 - i;
    }
    v15 = &a2[v18];
    i -= v18;
    *(_QWORD *)(v16 + 32) = wmempcpy(v17, a2, v18);
LABEL_8:
    if ( !i )
      return a3;
    goto LABEL_9;
  }
  return 0;
}
