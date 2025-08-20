__int64 __fastcall _parse_one_specmb(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int16 v8; // w0
  unsigned __int8 *v9; // x9
  unsigned int v11; // w2
  int v12; // w0
  __int64 v13; // x22
  __int64 v14; // x1
  unsigned __int8 *v15; // x1
  unsigned int v16; // w0
  unsigned __int8 *v17; // x2
  __int64 v18; // x2
  unsigned int v19; // w0
  int v20; // w3
  unsigned __int8 *v21; // x10
  unsigned __int8 *v22; // x10
  __int64 v24; // x2
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64); // x4
  int v26; // w0
  __int64 v27; // x1
  int v28; // w0
  int v29; // w0
  int v30; // w0
  unsigned __int8 *v31; // x10
  unsigned int v32; // w0
  __int64 v33; // x10
  unsigned __int64 *v34; // x11
  unsigned __int8 *v35; // x1
  unsigned __int64 v36; // x2
  __int16 v37; // w0
  int v38; // w0
  int v39; // w0
  __int16 v40; // w0
  __int16 v41; // w0
  int v42; // w0
  unsigned __int8 *v43; // x3
  unsigned __int8 *v44; // x10
  unsigned int v45; // w0
  unsigned __int64 *v46; // x11
  unsigned __int8 *v47; // x9
  unsigned __int64 v48; // x1
  unsigned __int64 v49; // x2
  unsigned int v50; // w0
  int v51; // w0
  unsigned __int8 *v52; // x10
  unsigned int v53; // w0
  unsigned __int64 *v54; // x11
  unsigned __int8 *v55; // x9
  unsigned __int64 v56; // x1
  unsigned __int64 v57; // x2
  unsigned int v58; // w0
  unsigned __int8 *v59; // [xsp+38h] [xbp+38h] BYREF

  v8 = *(_WORD *)(a3 + 12);
  *(_DWORD *)(a3 + 16) = 32;
  *(_WORD *)(a3 + 12) = v8 & 0xE207;
  *(_DWORD *)(a3 + 48) = -1;
  v9 = (unsigned __int8 *)(a1 + 1);
  *a5 = 0;
  v59 = (unsigned __int8 *)(a1 + 1);
  v11 = *(unsigned __int8 *)(a1 + 1);
  if ( v11 - 48 <= 9 )
  {
    v32 = read_int_0(&v59);
    if ( v32 && (v35 = v59, *v59 == 36) )
    {
      v9 = ++v59;
      if ( v32 != -1 )
      {
        v36 = *v34;
        *(_DWORD *)(a3 + 48) = v32 - 1;
        if ( v36 < v32 )
          v36 = v32;
        *v34 = v36;
      }
      v11 = v35[1];
    }
    else
    {
      v59 = v9;
      v11 = *(unsigned __int8 *)(v33 + 1);
    }
  }
  do
  {
    while ( v11 == 43 )
    {
      *(_WORD *)(a3 + 12) |= 0x40u;
LABEL_7:
      v59 = ++v9;
      v11 = *v9;
      if ( !*v9 )
        goto LABEL_14;
    }
    if ( v11 <= 0x2B )
    {
      switch ( v11 )
      {
        case '#':
          *(_WORD *)(a3 + 12) |= 8u;
          break;
        case '\'':
          *(_WORD *)(a3 + 12) |= 0x80u;
          break;
        case ' ':
          *(_WORD *)(a3 + 12) |= 0x10u;
          break;
        default:
          goto LABEL_14;
      }
      goto LABEL_7;
    }
    if ( v11 == 48 )
    {
      *(_DWORD *)(a3 + 16) = 48;
      goto LABEL_7;
    }
    if ( v11 == 73 )
    {
      *(_WORD *)(a3 + 12) |= 0x800u;
      goto LABEL_7;
    }
    if ( v11 != 45 )
      break;
    ++v9;
    *(_WORD *)(a3 + 12) |= 0x20u;
    v59 = v9;
    v11 = *v9;
  }
  while ( *v9 );
LABEL_14:
  if ( (*(_WORD *)(a3 + 12) & 0x20) != 0 )
    *(_DWORD *)(a3 + 16) = 32;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 44) = -1;
  v12 = *v9;
  if ( v12 == 42 )
  {
    v31 = v9 + 1;
    v59 = v9 + 1;
    if ( (unsigned int)v9[1] - 48 > 9 )
      goto LABEL_56;
    v45 = read_int_0(&v59);
    if ( !v45 )
      goto LABEL_56;
    v47 = v59;
    if ( *v59 != 36 || v45 == -1 )
      goto LABEL_56;
    v48 = *v46;
    v49 = v45;
    v50 = v45 - 1;
    *(_DWORD *)(a3 + 44) = v50;
    v9 = v47 + 1;
    if ( v48 < v49 )
      v48 = v49;
    *v46 = v48;
    v59 = v9;
    if ( (v50 & 0x80000000) != 0 )
    {
LABEL_56:
      v13 = 1;
      v9 = v31;
      *(_DWORD *)(a3 + 44) = a2++;
      v59 = v31;
    }
    else
    {
      v13 = 0;
    }
LABEL_18:
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 40) = -1;
    if ( *v9 == 46 )
      goto LABEL_49;
LABEL_19:
    v14 = _printf_modifier_table;
    *(_DWORD *)(a3 + 12) &= 0xFDF8u;
    if ( v14 )
      goto LABEL_52;
    goto LABEL_20;
  }
  v13 = 0;
  if ( (unsigned int)(v12 - 48) > 9 )
    goto LABEL_18;
  v28 = read_int_0(&v59);
  v9 = v59;
  if ( v28 == -1 )
    goto LABEL_18;
  *(_DWORD *)(a3 + 4) = v28;
  *(_DWORD *)a3 = -1;
  *(_DWORD *)(a3 + 40) = -1;
  if ( *v9 != 46 )
    goto LABEL_19;
LABEL_49:
  v59 = v9 + 1;
  v29 = v9[1];
  if ( v29 == 42 )
  {
    v44 = v9 + 2;
    v59 = v9 + 2;
    if ( (unsigned int)v9[2] - 48 > 9 )
      goto LABEL_96;
    v53 = read_int_0(&v59);
    if ( !v53 )
      goto LABEL_96;
    v55 = v59;
    if ( *v59 != 36 || v53 == -1 )
      goto LABEL_96;
    v56 = *v54;
    v57 = v53;
    v58 = v53 - 1;
    *(_DWORD *)(a3 + 40) = v58;
    v9 = v55 + 1;
    if ( v56 < v57 )
      v56 = v57;
    *v54 = v56;
    v59 = v9;
    if ( (v58 & 0x80000000) != 0 )
    {
LABEL_96:
      ++v13;
      v9 = v44;
      *(_DWORD *)(a3 + 40) = a2++;
      v59 = v44;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)(v29 - 48) <= 9 )
  {
    v39 = read_int_0(&v59);
    v9 = v59;
    if ( v39 != -1 )
      *(_DWORD *)a3 = v39;
    goto LABEL_19;
  }
  ++v9;
  v14 = _printf_modifier_table;
  v30 = *(_DWORD *)(a3 + 12) & 0xFDF8;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 12) = v30;
  if ( !v14 )
    goto LABEL_20;
LABEL_52:
  if ( !*(_QWORD *)(v14 + 8LL * *v9) )
  {
LABEL_20:
    v15 = v9 + 1;
    v59 = v9 + 1;
    v16 = *v9;
    if ( v16 == 108 )
    {
      v40 = *(_WORD *)(a3 + 12) | 4;
      *(_WORD *)(a3 + 12) = v40;
      if ( v9[1] != 108 )
      {
        v17 = v9 + 2;
        goto LABEL_27;
      }
      v15 = v9 + 2;
LABEL_86:
      v17 = v15 + 1;
      *(_WORD *)(a3 + 12) = v40 | 1;
      goto LABEL_27;
    }
    if ( v16 <= 0x6C )
    {
      if ( v16 == 104 )
      {
        v41 = *(_WORD *)(a3 + 12);
        if ( v9[1] == 104 )
        {
          v15 = v9 + 2;
          v17 = v9 + 3;
          *(_WORD *)(a3 + 12) = v41 | 0x200;
        }
        else
        {
          v17 = v9 + 2;
          *(_WORD *)(a3 + 12) = v41 | 2;
        }
        goto LABEL_27;
      }
      if ( v16 > 0x68 )
      {
        if ( v16 == 106 )
          goto LABEL_26;
        goto LABEL_41;
      }
      if ( v16 != 76 )
      {
        if ( v16 == 90 )
        {
LABEL_26:
          v17 = v9 + 2;
          *(_WORD *)(a3 + 12) |= 4u;
          goto LABEL_27;
        }
LABEL_41:
        v59 = v9 + 1;
        v24 = _printf_function_table;
        v19 = *v9;
        *(_DWORD *)(a3 + 8) = v19;
        *(_DWORD *)(a3 + 64) = -1;
        if ( !v24 )
          goto LABEL_28;
        goto LABEL_42;
      }
LABEL_85:
      v40 = *(_WORD *)(a3 + 12);
      goto LABEL_86;
    }
    if ( v16 != 119 )
    {
      if ( v16 > 0x77 )
      {
        if ( v16 == 122 )
          goto LABEL_26;
        goto LABEL_41;
      }
      if ( v16 != 113 )
      {
        if ( v16 == 116 )
          goto LABEL_26;
        goto LABEL_41;
      }
      goto LABEL_85;
    }
    v42 = v9[1];
    if ( v42 == 102 )
    {
      v15 = v9 + 2;
      v59 = v9 + 2;
      v43 = v9 + 3;
      if ( (unsigned int)v9[2] - 48 > 9 )
        goto LABEL_94;
      v51 = read_int_0(&v59);
      if ( v51 == 16 )
        goto LABEL_142;
      if ( v51 <= 16 )
      {
        if ( v51 != 8 )
        {
          v15 = v59;
          v43 = v59 + 1;
          v17 = v59 + 1;
LABEL_110:
          if ( v51 == 16 )
          {
            *(_WORD *)(a3 + 12) |= 2u;
            goto LABEL_27;
          }
LABEL_94:
          v17 = v43;
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
          *a5 = 1;
          goto LABEL_27;
        }
        v52 = v59;
LABEL_130:
        v15 = v52;
        v17 = v52 + 1;
        *(_WORD *)(a3 + 12) |= 0x200u;
        goto LABEL_27;
      }
      if ( ((v51 - 32) & 0xFFFFFFDF) == 0 )
      {
LABEL_142:
        v52 = v59;
        goto LABEL_141;
      }
      v15 = v59;
      v52 = v59;
      if ( v51 <= 32 )
        goto LABEL_93;
    }
    else
    {
      if ( (unsigned int)(v42 - 48) > 9 )
      {
LABEL_93:
        v43 = v15 + 1;
        goto LABEL_94;
      }
      v51 = read_int_0(&v59);
      v52 = v59;
      v43 = v59 + 1;
      v15 = v59;
      v17 = v59 + 1;
      if ( v51 == 32 )
        goto LABEL_27;
      if ( v51 <= 32 )
      {
        if ( v51 != 8 )
          goto LABEL_110;
        goto LABEL_130;
      }
    }
    v43 = v52 + 1;
    if ( v51 != 64 )
      goto LABEL_94;
LABEL_141:
    v15 = v52;
    v17 = v52 + 1;
    *(_BYTE *)(a3 + 12) |= 5u;
    goto LABEL_27;
  }
  if ( (unsigned int)_handle_registered_modifier_mb(&v59, a3) )
  {
    v9 = v59;
    goto LABEL_20;
  }
  v15 = v59;
  v17 = v59 + 1;
LABEL_27:
  v59 = v17;
  v18 = _printf_function_table;
  v19 = *v15;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 64) = -1;
  if ( !v18 )
  {
LABEL_28:
    *(_QWORD *)(a3 + 56) = 1;
    v20 = *(_DWORD *)(a3 + 48);
    switch ( v19 )
    {
      case 'A':
      case 'E':
      case 'F':
      case 'G':
      case 'a':
      case 'e':
      case 'f':
      case 'g':
        if ( (*(_WORD *)(a3 + 12) & 1LL) != 0 )
          v38 = 263;
        else
          v38 = 7;
        goto LABEL_76;
      case 'B':
      case 'X':
      case 'b':
      case 'd':
      case 'i':
      case 'o':
      case 'u':
      case 'x':
        v37 = *(_WORD *)(a3 + 12);
        if ( (v37 & 4) != 0 )
        {
          v38 = 512;
        }
        else if ( (v37 & 2) != 0 )
        {
          v38 = 1024;
        }
        else
        {
          if ( (*(_WORD *)(a3 + 12) & 0x200) == 0 )
          {
            *(_DWORD *)(a3 + 52) = 0;
            if ( v20 != -1 )
              goto LABEL_77;
            goto LABEL_83;
          }
LABEL_112:
          v38 = 1;
        }
LABEL_76:
        *(_DWORD *)(a3 + 52) = v38;
        if ( v20 != -1 )
        {
LABEL_77:
          v21 = v59;
          break;
        }
LABEL_83:
        v21 = v59;
LABEL_84:
        ++v13;
        *(_DWORD *)(a3 + 48) = a2;
        break;
      case 'C':
        *(_DWORD *)(a3 + 52) = 2;
        v21 = v59;
        if ( v20 != -1 )
          break;
        goto LABEL_84;
      case 'S':
        *(_DWORD *)(a3 + 52) = 4;
        v21 = v59;
        if ( v20 != -1 )
          break;
        goto LABEL_84;
      case 'c':
        goto LABEL_112;
      case 'n':
        *(_DWORD *)(a3 + 52) = 2048;
        v21 = v59;
        if ( v20 != -1 )
          break;
        goto LABEL_84;
      case 'p':
        *(_DWORD *)(a3 + 52) = 5;
        v21 = v59;
        if ( v20 != -1 )
          break;
        goto LABEL_84;
      case 's':
        *(_DWORD *)(a3 + 52) = 3;
        v21 = v59;
        if ( v20 != -1 )
          break;
        goto LABEL_84;
      default:
        *(_QWORD *)(a3 + 56) = 0;
        goto LABEL_30;
    }
LABEL_78:
    *(_QWORD *)(a3 + 24) = v21;
    *(_QWORD *)(a3 + 32) = strchrnul((__int64)v21, 0x25u);
    return v13;
  }
LABEL_42:
  v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(_printf_arginfo_table + 8LL * v19);
  if ( !v25 )
    goto LABEL_28;
  v26 = v25(a3, 1, a3 + 52, a3 + 64);
  v27 = v26;
  *(_QWORD *)(a3 + 56) = v26;
  if ( v26 < 0 )
  {
    v19 = *(_DWORD *)(a3 + 8);
    goto LABEL_28;
  }
  v19 = *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 48) == -1 && v27 )
  {
    v13 += v27;
    *(_DWORD *)(a3 + 48) = a2;
  }
LABEL_30:
  v21 = v59;
  if ( v19 )
    goto LABEL_78;
  v22 = v59 - 1;
  *(_QWORD *)(a3 + 24) = v59 - 1;
  *(_QWORD *)(a3 + 32) = v22;
  return v13;
}
