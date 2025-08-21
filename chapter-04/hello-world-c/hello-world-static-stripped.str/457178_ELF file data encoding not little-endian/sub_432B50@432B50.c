__int64 __fastcall sub_432B50(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  __int64 v5; // x20
  unsigned int v8; // w0
  unsigned __int64 StatusReg; // x23
  unsigned int v10; // w27
  __int64 v11; // x4
  __int64 v12; // x26
  __int64 v13; // x0
  __int64 v14; // x0
  const char *v15; // x21
  int v16; // w19
  long double v17; // q0
  int v18; // w0
  __int64 v19; // x3
  __int64 v20; // x19
  _QWORD *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x2
  unsigned __int16 v25; // w1
  __int64 *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  bool v29; // cc
  bool v30; // zf
  bool v31; // cc
  __int64 v32; // x0
  __int64 v33; // [xsp+0h] [xbp-20010h] BYREF
  _BYTE v34[1008]; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v35; // [xsp+400h] [xbp-1FC10h]
  _QWORD v36[2]; // [xsp+10000h] [xbp-10010h] BYREF
  _BYTE v37[1008]; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v38; // [xsp+10400h] [xbp-FC10h]
  _BYTE v39[16]; // [xsp+20000h] [xbp-10h] BYREF

  v5 = a1;
  v8 = sub_410EE0(a1, 0x80000, a3);
  if ( v8 == -1 )
    return (unsigned int)-1;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v10 = v8;
  v11 = 0;
  *(_DWORD *)(StatusReg + 40) = 0;
  *(_QWORD *)a2 = 0;
  v12 = a2 + 8;
  while ( 1 )
  {
    v13 = sub_410FC0(v10, v12 + v11, 832 - v11);
    if ( v13 <= 0 )
      break;
    v11 = v13 + *(_QWORD *)a2;
    *(_QWORD *)a2 = v11;
    if ( (unsigned __int64)v11 > 0x3F )
      goto LABEL_5;
  }
  v11 = *(_QWORD *)a2;
LABEL_5:
  if ( v11 <= 63 )
  {
    v16 = *(_DWORD *)(StatusReg + 40);
    v15 = "cannot read file data";
    if ( !v16 )
      v15 = "file too short";
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(a2 + 8);
  if ( v14 != 0x10102464C457FLL && v14 != 0x3010102464C457FLL
    || *(_BYTE *)(a2 + 16) && (*(_BYTE *)(a2 + 15) == 3 ? (v29 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v29 = 1), v29)
    || *(_DWORD *)(a2 + 17)
    || *(_WORD *)(a2 + 21)
    || *(_BYTE *)(a2 + 23) )
  {
    if ( *(_DWORD *)(a2 + 8) == 1179403647 )
    {
      if ( *(_BYTE *)(a2 + 12) != 2 )
      {
        *a3 = 1;
LABEL_48:
        sub_410CD0(v10);
        *(_DWORD *)(StatusReg + 40) = 2;
        return (unsigned int)-1;
      }
      if ( *(_WORD *)(a2 + 26) != 183 )
      {
        v32 = v10;
        v10 = -1;
        sub_410CD0(v32);
        *(_DWORD *)(StatusReg + 40) = 2;
        return v10;
      }
      if ( *(_BYTE *)(a2 + 13) == 1 )
      {
        if ( *(_BYTE *)(a2 + 14) == 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            v30 = *(_BYTE *)(a2 + 15) == 3;
          else
            v30 = 1;
          if ( v30 )
          {
            if ( *(_BYTE *)(a2 + 16)
              && (*(_BYTE *)(a2 + 15) == 3 ? (v31 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v31 = 1), v31) )
            {
              v16 = 0;
              v15 = "ELF file ABI version invalid";
            }
            else if ( *(_DWORD *)(a2 + 17) || *(_WORD *)(a2 + 21) || *(_BYTE *)(a2 + 23) )
            {
              v16 = 0;
              v15 = "nonzero padding in e_ident";
            }
            else
            {
              v16 = 0;
              v15 = "internal error";
            }
          }
          else
          {
            v16 = 0;
            v15 = "ELF file OS ABI invalid";
          }
        }
        else
        {
          v16 = 0;
          v15 = "ELF file version ident does not match current one";
        }
      }
      else
      {
        v15 = "ELF file data encoding not little-endian";
        v16 = 0;
      }
    }
    else
    {
      v16 = 0;
      v15 = "invalid ELF header";
    }
LABEL_15:
    if ( (a4 & 1) == 0 )
      goto LABEL_16;
LABEL_30:
    v23 = ifunc_40DFD0(v5);
    v24 = v23 + 1;
    v25 = (v23 + 16) & 0xFFF0;
    v26 = (_QWORD *)((char *)v36 - ((v23 + 16) & 0xFFFFFFFFFFFF0000LL));
    if ( v36 != v26 )
    {
      do
        v35 = 0;
      while ( &v33 != v26 );
    }
    v33 = 0;
    if ( v25 >= 0x400uLL )
      v35 = 0;
    v27 = j_ifunc_40DC90(v34, v5, v24);
    v28 = v5;
    v5 = v27;
    sub_40C1A0(v28);
LABEL_16:
    sub_410CD0(v10);
    sub_432250(v16, v5, v17, 0, v15);
  }
  v18 = *(_DWORD *)(a2 + 28);
  v16 = 0;
  if ( v18 != 1 )
  {
    v15 = "ELF file version does not match current one";
    goto LABEL_15;
  }
  if ( *(_WORD *)(v12 + 18) != 183 )
    goto LABEL_48;
  if ( (unsigned __int16)(*(_WORD *)(v12 + 16) - 2) > 1u )
  {
    v15 = "only ET_DYN and ET_EXEC can be loaded";
    goto LABEL_15;
  }
  if ( *(_WORD *)(v12 + 54) != 56 )
  {
    v15 = "ELF file's phentsize not the expected size";
    goto LABEL_15;
  }
  v19 = *(_QWORD *)(v12 + 32);
  v20 = 56LL * *(unsigned __int16 *)(v12 + 56);
  if ( v20 + v19 > (unsigned __int64)v11 )
  {
    v22 = &v39[-((v20 + 15) & 0x1FFFF0000LL)];
    if ( v39 != (_BYTE *)v22 )
    {
      do
        v38 = 0;
      while ( v36 != v22 );
    }
    v36[0] = 0;
    if ( (((_WORD)v20 + 15) & 0xFFF0u) >= 0x400uLL )
      v38 = 0;
    if ( sub_430F90(v10, v37, v20, v19) != v20 )
    {
      v16 = *(_DWORD *)(StatusReg + 40);
      v15 = "cannot read file data";
      if ( (a4 & 1) == 0 )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  return v10;
}
