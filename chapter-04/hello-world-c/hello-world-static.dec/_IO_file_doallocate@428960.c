__int64 __fastcall IO_file_doallocate(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  unsigned __int64 StatusReg; // x20
  int v24; // w22
  int v25; // w0
  _BYTE v26[16]; // [xsp+8h] [xbp-88h] BYREF
  int v27; // [xsp+18h] [xbp-78h]
  unsigned int v28; // [xsp+28h] [xbp-68h]
  int v29; // [xsp+2Ch] [xbp-64h]
  int v30; // [xsp+40h] [xbp-50h]

  v16 = *(unsigned int *)(a1 + 112);
  v17 = 0;
  if ( (v16 & 0x80000000) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
    if ( ((*(__int64 (__fastcall **)(__int64, _BYTE *))(v18 + 144))(a1, v26) & 0x80000000) == 0 )
    {
      if ( (v27 & 0xF000) != 0x2000
        || (v29 & 0xFFFFF000 | (v28 >> 8) & 0xFFF) - 136 > 7
        && (StatusReg = _ReadStatusReg(TPIDR_EL0),
            v24 = *(_DWORD *)(StatusReg + 40),
            v25 = isatty(*(unsigned int *)(a1 + 112)),
            *(_DWORD *)(StatusReg + 40) = v24,
            !v25) )
      {
        LODWORD(v19) = v30;
        v16 = (unsigned int)(v30 - 1);
        if ( (unsigned int)v16 > 0x1FFE )
          goto LABEL_7;
LABEL_9:
        v19 = (int)v19;
        v20 = malloc((int)v19, a2, a3, a4, a5, a6, a7, a8, a9, v16, v17, a12, a13, a14, a15);
        v21 = v20;
        if ( v20 )
          goto LABEL_8;
        return 0xFFFFFFFFLL;
      }
      LODWORD(v19) = v30;
      *(_DWORD *)a1 |= 0x200u;
      v16 = (unsigned int)(v19 - 1);
      if ( (unsigned int)v16 <= 0x1FFE )
        goto LABEL_9;
    }
  }
LABEL_7:
  v19 = 0x2000;
  v20 = malloc(0x2000u, a2, a3, a4, a5, a6, a7, a8, a9, v16, v17, a12, a13, a14, a15);
  v21 = v20;
  if ( v20 )
  {
LABEL_8:
    IO_setb((int *)a1, v21, v20 + v19, 1);
    return 1;
  }
  return 0xFFFFFFFFLL;
}
