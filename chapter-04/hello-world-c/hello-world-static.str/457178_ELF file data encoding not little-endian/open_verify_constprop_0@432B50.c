__int64 __fastcall open_verify_constprop_0(const char *a1, __int64 a2, _BYTE *a3, char a4)
{
  const char *v5; // x20
  unsigned int v8; // w0
  unsigned __int64 StatusReg; // x23
  unsigned int v10; // w27
  __int64 v11; // x4
  __int64 v12; // x26
  __int64 nocancel; // x0
  __int64 v14; // x0
  const char *v15; // x21
  int v16; // w19
  int v17; // w0
  __int64 v18; // x3
  __int64 v19; // x19
  _QWORD *v21; // x1
  __int64 v22; // x0
  unsigned __int16 v23; // w1
  __int64 *v24; // x0
  __int64 v25; // x1
  const char *v26; // x0
  bool v27; // cc
  bool v28; // zf
  bool v29; // cc
  __int64 v30; // x0
  __int64 v31; // [xsp+0h] [xbp-20010h] BYREF
  _BYTE v32[1008]; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v33; // [xsp+400h] [xbp-1FC10h]
  _QWORD v34[2]; // [xsp+10000h] [xbp-10010h] BYREF
  _BYTE v35[1008]; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v36; // [xsp+10400h] [xbp-FC10h]
  _BYTE v37[16]; // [xsp+20000h] [xbp-10h] BYREF

  v5 = a1;
  v8 = _open_nocancel(a1, 0x80000, a3);
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
    nocancel = _read_nocancel(v10, v12 + v11, 832 - v11);
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
    || *(_BYTE *)(a2 + 16) && (*(_BYTE *)(a2 + 15) == 3 ? (v27 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v27 = 1), v27)
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
        v30 = v10;
        v10 = -1;
        _close_nocancel(v30);
        *(_DWORD *)(StatusReg + 40) = 2;
        return v10;
      }
      if ( *(_BYTE *)(a2 + 13) == 1 )
      {
        if ( *(_BYTE *)(a2 + 14) == 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            v28 = *(_BYTE *)(a2 + 15) == 3;
          else
            v28 = 1;
          if ( v28 )
          {
            if ( *(_BYTE *)(a2 + 16)
              && (*(_BYTE *)(a2 + 15) == 3 ? (v29 = *(unsigned __int8 *)(a2 + 16) > 2u) : (v29 = 1), v29) )
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
    v24 = (_QWORD *)((char *)v34 - ((v22 + 16) & 0xFFFFFFFFFFFF0000LL));
    if ( v34 != v24 )
    {
      do
        v33 = 0;
      while ( &v31 != v24 );
    }
    v31 = 0;
    if ( v23 >= 0x400uLL )
      v33 = 0;
    v25 = j_memcpy(v32);
    v26 = v5;
    v5 = (const char *)v25;
    free(v26);
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
  if ( v19 + v18 > (unsigned __int64)v11 )
  {
    v21 = &v37[-((v19 + 15) & 0x1FFFF0000LL)];
    if ( v37 != (_BYTE *)v21 )
    {
      do
        v36 = 0;
      while ( v34 != v21 );
    }
    v34[0] = 0;
    if ( (((_WORD)v19 + 15) & 0xFFF0u) >= 0x400uLL )
      v36 = 0;
    if ( _pread64_nocancel(v10, v35, v19, v18) != v19 )
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
