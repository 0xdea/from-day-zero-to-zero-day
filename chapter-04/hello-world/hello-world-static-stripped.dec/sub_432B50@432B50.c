__int64 __fastcall sub_432B50(const char *a1, __int64 a2, _BYTE *a3, char a4)
{
  const char *v5; // x20
  unsigned int v8; // w0
  unsigned __int64 StatusReg; // x23
  unsigned int v10; // w27
  __int64 v11; // x4
  __int64 v12; // x26
  signed __int64 v13; // x0
  __int64 v14; // x0
  const char *v15; // x21
  int v16; // w19
  int v17; // w0
  __off64_t v18; // x3
  size_t v19; // x19
  _QWORD *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x2
  unsigned __int16 v24; // w1
  __int64 *v25; // x0
  __int64 v26; // x1
  unsigned __int64 v27; // x0
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  bool v36; // cc
  bool v37; // zf
  bool v38; // cc
  int v39; // w0
  __int64 v40; // [xsp+0h] [xbp-20010h] BYREF
  _BYTE v41[1008]; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v42; // [xsp+400h] [xbp-1FC10h]
  _QWORD v43[2]; // [xsp+10000h] [xbp-10010h] BYREF
  _BYTE v44[1008]; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v45; // [xsp+10400h] [xbp-FC10h]
  _BYTE v46[16]; // [xsp+20000h] [xbp-10h] BYREF

  v5 = a1;
  v8 = sub_410EE0(a1, 0x80000);
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
    v13 = sub_410FC0(v10, (void *)(v12 + v11), 832 - v11);
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
    || *(_BYTE *)(a2 + 16) && (*(_BYTE *)(a2 + 15) == 3 ? (v36 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v36 = 1), v36)
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
        v39 = v10;
        v10 = -1;
        sub_410CD0(v39);
        *(_DWORD *)(StatusReg + 40) = 2;
        return v10;
      }
      if ( *(_BYTE *)(a2 + 13) == 1 )
      {
        if ( *(_BYTE *)(a2 + 14) == 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            v37 = *(_BYTE *)(a2 + 15) == 3;
          else
            v37 = 1;
          if ( v37 )
          {
            if ( *(_BYTE *)(a2 + 16)
              && (*(_BYTE *)(a2 + 15) == 3 ? (v38 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v38 = 1), v38) )
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
    v22 = ifunc_40DFD0(v5);
    v23 = v22 + 1;
    v24 = (v22 + 16) & 0xFFF0;
    v25 = (_QWORD *)((char *)v43 - ((v22 + 16) & 0xFFFFFFFFFFFF0000LL));
    if ( v43 != v25 )
    {
      do
        v42 = 0;
      while ( &v40 != v25 );
    }
    v40 = 0;
    if ( v24 >= 0x400uLL )
      v42 = 0;
    v26 = j_ifunc_40DC90(v41, v5, v23);
    v27 = (unsigned __int64)v5;
    v5 = (const char *)v26;
    sub_40C1A0(v27, v28, v29, v30, v31, v32, v33, v34, v35);
LABEL_16:
    sub_410CD0(v10);
    sub_432250(v16, v5, 0, v15);
  }
  v17 = *(_DWORD *)(a2 + 28);
  v16 = 0;
  if ( v17 != 1 )
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
  v18 = *(_QWORD *)(v12 + 32);
  v19 = 56LL * *(unsigned __int16 *)(v12 + 56);
  if ( v19 + v18 > v11 )
  {
    v21 = &v46[-((v19 + 15) & 0x1FFFF0000LL)];
    if ( v46 != (_BYTE *)v21 )
    {
      do
        v45 = 0;
      while ( v43 != v21 );
    }
    v43[0] = 0;
    if ( (((_WORD)v19 + 15) & 0xFFF0u) >= 0x400uLL )
      v45 = 0;
    if ( sub_430F90(v10, v44, v19, v18) != v19 )
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
