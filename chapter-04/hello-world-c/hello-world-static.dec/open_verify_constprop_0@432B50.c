__int64 __fastcall open_verify_constprop_0(const char *a1, __int64 a2, _BYTE *a3, char a4)
{
  const char *v5; // x20
  unsigned int v8; // w0
  unsigned __int64 StatusReg; // x23
  unsigned int v10; // w27
  __int64 v11; // x4
  __int64 v12; // x26
  signed __int64 nocancel; // x0
  __int64 v14; // x0
  const char *v15; // x21
  int v16; // w19
  int v17; // w0
  __off64_t v18; // x3
  size_t v19; // x19
  _QWORD *v21; // x1
  __int64 v22; // x0
  unsigned __int16 v23; // w1
  __int64 *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  bool v35; // cc
  bool v36; // zf
  bool v37; // cc
  int v38; // w0
  __int64 v39; // [xsp+0h] [xbp-20010h] BYREF
  _BYTE v40[1008]; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v41; // [xsp+400h] [xbp-1FC10h]
  _QWORD v42[2]; // [xsp+10000h] [xbp-10010h] BYREF
  _BYTE v43[1008]; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v44; // [xsp+10400h] [xbp-FC10h]
  _BYTE v45[16]; // [xsp+20000h] [xbp-10h] BYREF

  v5 = a1;
  v8 = _open_nocancel(a1, 0x80000);
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
    nocancel = _read_nocancel(v10, (void *)(v12 + v11), 832 - v11);
    if ( nocancel <= 0 )
      break;
    v11 = nocancel + *(_QWORD *)a2;
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
    || *(_BYTE *)(a2 + 16) && (*(_BYTE *)(a2 + 15) == 3 ? (v35 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v35 = 1), v35)
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
        _close_nocancel(v10);
        *(_DWORD *)(StatusReg + 40) = 2;
        return (unsigned int)-1;
      }
      if ( *(_WORD *)(a2 + 26) != 183 )
      {
        v38 = v10;
        v10 = -1;
        _close_nocancel(v38);
        *(_DWORD *)(StatusReg + 40) = 2;
        return v10;
      }
      if ( *(_BYTE *)(a2 + 13) == 1 )
      {
        if ( *(_BYTE *)(a2 + 14) == 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            v36 = *(_BYTE *)(a2 + 15) == 3;
          else
            v36 = 1;
          if ( v36 )
          {
            if ( *(_BYTE *)(a2 + 16)
              && (*(_BYTE *)(a2 + 15) == 3 ? (v37 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v37 = 1), v37) )
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
    v22 = strlen(v5);
    v23 = (v22 + 16) & 0xFFF0;
    v24 = (_QWORD *)((char *)v42 - ((v22 + 16) & 0xFFFFFFFFFFFF0000LL));
    if ( v42 != v24 )
    {
      do
        v41 = 0;
      while ( &v39 != v24 );
    }
    v39 = 0;
    if ( v23 >= 0x400uLL )
      v41 = 0;
    v25 = j_memcpy(v40);
    v26 = (__int64)v5;
    v5 = (const char *)v25;
    free(v26, v27, v28, v29, v30, v31, v32, v33, v34);
LABEL_16:
    _close_nocancel(v10);
    dl_signal_error(v16, v5, 0, v15);
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
    v21 = &v45[-((v19 + 15) & 0x1FFFF0000LL)];
    if ( v45 != (_BYTE *)v21 )
    {
      do
        v44 = 0;
      while ( v42 != v21 );
    }
    v42[0] = 0;
    if ( (((_WORD)v19 + 15) & 0xFFF0u) >= 0x400uLL )
      v44 = 0;
    if ( _pread64_nocancel(v10, v43, v19, v18) != v19 )
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
