__int64 *__fastcall _printf_fphex_buffer(unsigned __int64 a1, _BYTE *a2, __int64 a3, __int128 **a4)
{
  __int64 v4; // d8
  __int16 v6; // w19
  __int128 *v8; // x0
  int v9; // w20
  int v10; // w24
  int v11; // w25
  double v12; // d8
  double v13; // x21
  __int64 v14; // x22
  char *v15; // x20
  int v16; // w0
  int v17; // w24
  _BOOL4 v18; // w21
  _BYTE *v20; // x0
  __int64 v21; // x27
  __int64 *v22; // x19
  _BOOL4 v23; // w26
  unsigned __int64 v24; // x0
  __int64 v25; // x4
  __int64 v26; // x21
  unsigned int v27; // w25
  __int64 v28; // x0
  unsigned __int64 v29; // x0
  __int64 v30; // x1
  unsigned __int64 v31; // x0
  int v32; // w1
  char *v33; // x1
  int v34; // w8
  unsigned int v35; // w3
  unsigned int v36; // w3
  int v37; // w9
  _BOOL4 v38; // w1
  int v39; // w8
  unsigned __int64 v40; // x7
  unsigned __int64 StatusReg; // x11
  int v42; // w1
  unsigned __int64 v43; // x13
  __int64 v44; // x8
  _BYTE *v45; // x1
  int v46; // w3
  bool v47; // zf
  _BYTE *v48; // x0
  __int64 v49; // x27
  __int64 v50; // x4
  int v51; // w2
  __int16 v52; // w0
  int v53; // w2
  int v54; // w24
  _BYTE *v56; // x0
  _BYTE *v57; // x1
  __int16 v58; // w2
  char *v59; // x0
  char v60; // w1
  _BYTE *v62; // x0
  char *v63; // x0
  char v64; // w1
  char *v65; // x0
  char v66; // w1
  int v67; // w1
  unsigned __int64 v68; // x2
  char *v69; // x19
  bool v70; // vf
  signed __int64 v71; // x20
  _BYTE *v73; // x0
  unsigned __int64 v74; // x1
  char v75; // w1
  __int128 v78; // [xsp+0h] [xbp-60h]
  __int64 v79; // [xsp+0h] [xbp-60h]
  __int64 v80; // [xsp+0h] [xbp-60h]
  __int64 v81; // [xsp+0h] [xbp-60h]
  __int64 v82; // [xsp+0h] [xbp-60h]
  __int64 v83; // [xsp+0h] [xbp-60h]
  __int64 v84; // [xsp+0h] [xbp-60h]
  __int64 v85; // [xsp+0h] [xbp-60h]
  __int64 v86; // [xsp+0h] [xbp-60h]
  __int64 v87; // [xsp+0h] [xbp-60h]
  __int64 v88; // [xsp+0h] [xbp-60h]
  long double v89; // [xsp+10h] [xbp-50h]
  __int64 v90; // [xsp+10h] [xbp-50h]
  _BYTE v92[7]; // [xsp+35h] [xbp-2Bh] BYREF
  _BYTE v93[12]; // [xsp+3Ch] [xbp-24h] BYREF
  _BYTE v94[3]; // [xsp+48h] [xbp-18h] BYREF
  _BYTE v95[13]; // [xsp+4Bh] [xbp-15h] BYREF
  __int64 v96; // [xsp+58h] [xbp-8h] BYREF
  __int64 v97; // [xsp+C0h] [xbp+60h]

  v6 = *(_WORD *)(a3 + 12);
  if ( (v6 & 0x100) != 0 )
  {
    v97 = v4;
    _libc_assert_fail(
      "info->extra == 0",
      (__int64)"../stdio-common/printf_fphex.c",
      0x41u,
      (__int64)"__printf_fphex_buffer");
  }
  v8 = *a4;
  v9 = *(_DWORD *)a3;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_DWORD *)(a3 + 8);
  if ( (v6 & 1) == 0 )
  {
    v12 = *(double *)v8;
    v13 = *(double *)v8;
    v14 = *(_QWORD *)v8 >> 63;
    if ( fabs(*(double *)v8) > 1.79769313e308 )
    {
      v15 = "inf";
      if ( (*(_WORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72) + 2LL * v11) & 0x100) != 0 )
        v15 = "INF";
      v16 = v6 & 0x20;
      if ( !(_DWORD)v14 )
        goto LABEL_7;
      goto LABEL_23;
    }
    v21 = *(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL;
    v22 = &v96;
    v23 = (*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL) == 0;
    v24 = itoa_word(*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL, &v96, 16, v11 == 65);
    v25 = v24;
    if ( v24 > (unsigned __int64)v95 )
      v25 = memset(v95, 48, v24 - (_QWORD)v95);
    v26 = (*(_QWORD *)&v13 >> 52) & 0x7FFLL;
    v27 = ((*(_QWORD *)&v12 & 0x7FF0000000000000LL) != 0) + 48;
    if ( !(_DWORD)v26 )
    {
      if ( v21 )
      {
        v4 = v97;
        LODWORD(v26) = 1;
        v28 = 1022;
        goto LABEL_39;
      }
      v22 = (__int64 *)v25;
LABEL_75:
      if ( v9 == -1 )
        v9 = 0;
      goto LABEL_77;
    }
    v4 = v97;
    if ( (int)v26 <= 1022 )
    {
      v28 = (unsigned int)(1023 - v26);
      LODWORD(v26) = 1;
    }
    else
    {
      v28 = (unsigned int)(v26 - 1023);
      LODWORD(v26) = 0;
    }
    goto LABEL_73;
  }
  v78 = *v8;
  v14 = *((_QWORD *)v8 + 1) >> 63;
  *(_QWORD *)&v89 = *(_QWORD *)v8;
  *((_QWORD *)&v89 + 1) = *((_QWORD *)v8 + 1) & 0x7FFFFFFFFFFFFFFFLL;
  if ( v89 <= *(long double *)&xmmword_45A930 )
  {
    v22 = &v96;
    v90 = *((_QWORD *)&v78 + 1) & 0xFFFFFFFFFFFFLL | v78;
    v23 = v90 == 0;
    v29 = itoa_word(v78, &v96, 16, v11 == 65);
    v30 = v29;
    if ( v29 > (unsigned __int64)v94 )
      v30 = memset(v94, 48, v29 - (_QWORD)v94);
    v31 = itoa_word(*((_QWORD *)&v78 + 1) & 0xFFFFFFFFFFFFLL, v30, 16, *(_DWORD *)(a3 + 8) == 65);
    v25 = v31;
    if ( v31 > (unsigned __int64)v93 )
      v25 = memset(v93, 48, v31 - (_QWORD)v93);
    v26 = HIWORD(*((_QWORD *)&v78 + 1)) & 0x7FFFLL;
    v27 = ((*((_QWORD *)&v78 + 1) & 0x7FFF000000000000LL) != 0) + 48;
    if ( (_DWORD)v26 )
    {
      if ( (HIWORD(v78) & 0x7FFFu) <= 0x3FFE )
      {
        v28 = (unsigned int)(0x3FFF - v26);
        LODWORD(v26) = 1;
      }
      else
      {
        v28 = (unsigned int)(v26 - 0x3FFF);
        LODWORD(v26) = 0;
      }
    }
    else
    {
      if ( v90 )
      {
        LODWORD(v26) = 1;
        v28 = 16382;
        goto LABEL_39;
      }
      v28 = 0;
    }
LABEL_73:
    if ( v23 )
    {
      v21 = (int)v28;
      v22 = (__int64 *)v25;
      goto LABEL_75;
    }
LABEL_39:
    if ( v95[12] == 48 )
    {
      do
      {
        v32 = *((unsigned __int8 *)v22 - 2);
        v22 = (__int64 *)((char *)v22 - 1);
      }
      while ( v32 == 48 );
    }
    v33 = (char *)v22 - v25;
    if ( v9 == -1 )
    {
      v9 = (_DWORD)v22 - v25;
      v21 = (int)v28;
      goto LABEL_77;
    }
    if ( v9 >= (__int64)v33 )
      goto LABEL_127;
    v34 = *(unsigned __int8 *)(v25 + v9);
    if ( v9 <= 0 )
    {
      v35 = v27;
    }
    else
    {
      v35 = *(unsigned __int8 *)(v25 + v9 - 1);
      if ( (unsigned __int8)(v35 - 65) <= 5u )
      {
        v36 = v35 - 55;
        goto LABEL_47;
      }
      if ( (unsigned __int8)(v35 - 97) <= 5u )
      {
        v36 = v35 - 87;
LABEL_47:
        if ( (unsigned __int8)(v34 - 65) <= 5u || (unsigned __int8)(v34 - 97) <= 5u )
        {
          v74 = _ReadStatusReg(FPCR) & 0xC00000;
          if ( (_DWORD)v74 == 0x800000 )
          {
            if ( (_DWORD)v14 )
              goto LABEL_55;
            goto LABEL_160;
          }
          if ( (unsigned int)v74 > 0x800000 )
          {
            if ( (_DWORD)v74 == 12582912 )
              goto LABEL_127;
LABEL_170:
            v97 = v4;
            abort(v28);
          }
          if ( !(_DWORD)v74 )
          {
            v39 = 1;
LABEL_54:
            if ( ((v36 | v39) & 1) != 0 )
              goto LABEL_55;
LABEL_127:
            v21 = (int)v28;
            goto LABEL_77;
          }
          if ( (_DWORD)v14 )
            goto LABEL_150;
        }
        else
        {
          v37 = v34 - 48;
          if ( (v34 & 7) != 0 )
          {
            v38 = 1;
            v39 = 1;
          }
          else
          {
            v38 = (__int64)v33 > v9 + 1;
            v39 = v38;
          }
          v40 = _ReadStatusReg(FPCR) & 0xC00000;
          if ( (_DWORD)v40 != 0x400000 )
          {
            if ( (unsigned int)v40 <= 0x400000 )
            {
              if ( v37 <= 7 )
                goto LABEL_127;
              goto LABEL_54;
            }
            if ( (_DWORD)v40 != 0x800000 )
            {
              if ( (_DWORD)v40 == 12582912 )
                goto LABEL_127;
              goto LABEL_170;
            }
            if ( (_DWORD)v14 )
            {
              if ( v37 > 7 || v38 )
                goto LABEL_55;
LABEL_150:
              v85 = v25;
              v49 = itoa_word((int)v28, v92, 10, 0);
              v50 = v85;
              v51 = 4;
LABEL_79:
              v52 = *(_WORD *)(a3 + 12);
              v53 = v10 - (v9 + v51 + (unsigned int)&v92[-v49]);
              if ( v9 <= 0 )
              {
                v54 = v53 - 2;
                if ( (v52 & 8) != 0 )
                  v54 = v53 - 3;
              }
              else
              {
                v54 = v53 - 3;
              }
              if ( (v52 & 0x20) == 0 && *(_DWORD *)(a3 + 16) != 48 && v54 > 0 )
              {
                v84 = v50;
                _printf_buffer_pad_1(a1, 0x20u, v54);
                v50 = v84;
              }
              v56 = *(_BYTE **)(a1 + 8);
              v57 = *(_BYTE **)(a1 + 16);
              if ( (_DWORD)v14 )
              {
                if ( v56 != v57 )
                {
                  *(_QWORD *)(a1 + 8) = v56 + 1;
                  *v56 = 45;
                  v56 = *(_BYTE **)(a1 + 8);
                  v57 = *(_BYTE **)(a1 + 16);
                  goto LABEL_90;
                }
                v75 = 45;
                v87 = v50;
              }
              else
              {
                v58 = *(_WORD *)(a3 + 12);
                if ( (v58 & 0x40) != 0 )
                {
                  if ( v56 != v57 )
                  {
                    *(_QWORD *)(a1 + 8) = v56 + 1;
                    *v56 = 43;
                    v56 = *(_BYTE **)(a1 + 8);
                    v57 = *(_BYTE **)(a1 + 16);
                    goto LABEL_90;
                  }
                  v75 = 43;
                  v87 = v50;
                }
                else
                {
                  if ( (v58 & 0x10) == 0 )
                  {
LABEL_90:
                    if ( v56 == v57 )
                    {
                      v83 = v50;
                      _printf_buffer_putc_1(a1, 48);
                      v50 = v83;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v56 + 1;
                      *v56 = 48;
                    }
                    v59 = *(char **)(a1 + 8);
                    v60 = *(_DWORD *)(a3 + 8) + 23;
                    if ( v59 == *(char **)(a1 + 16) )
                    {
                      v82 = v50;
                      _printf_buffer_putc_1(a1, v60);
                      v50 = v82;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v59 + 1;
                      *v59 = v60;
                    }
                    if ( (*(_WORD *)(a3 + 12) & 0x20) == 0 && *(_DWORD *)(a3 + 16) == 48 && v54 > 0 )
                    {
                      v86 = v50;
                      _printf_buffer_pad_1(a1, 0x30u, v54);
                      v50 = v86;
                    }
                    v62 = *(_BYTE **)(a1 + 8);
                    if ( v62 == *(_BYTE **)(a1 + 16) )
                    {
                      v81 = v50;
                      _printf_buffer_putc_1(a1, v27);
                      v50 = v81;
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v62 + 1;
                      *v62 = v27;
                    }
                    v80 = v50;
                    if ( v9 > 0 )
                    {
                      _printf_buffer_puts_1(a1, a2);
                      v68 = v9;
                      v69 = (char *)v22 - v80;
                      v70 = __OFSUB__(v9, v69);
                      v71 = v9 - (_QWORD)v69;
                      if ( !((v71 < 0) ^ v70 | (v71 == 0)) )
                        v68 = (unsigned __int64)v69;
                      _printf_buffer_write(a1, v80, v68);
                      if ( v71 > 0 )
                        _printf_buffer_pad_1(a1, 0x30u, v71);
                    }
                    else if ( (*(_WORD *)(a3 + 12) & 8) != 0 )
                    {
                      _printf_buffer_puts_1(a1, a2);
                    }
                    v63 = *(char **)(a1 + 8);
                    v64 = *(_DWORD *)(a3 + 8) + 15;
                    if ( v63 == *(char **)(a1 + 16) )
                    {
                      _printf_buffer_putc_1(a1, v64);
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v63 + 1;
                      *v63 = v64;
                    }
                    v65 = *(char **)(a1 + 8);
                    if ( (_DWORD)v26 )
                      v66 = 45;
                    else
                      v66 = 43;
                    if ( v65 == *(char **)(a1 + 16) )
                    {
                      _printf_buffer_putc_1(a1, v66);
                    }
                    else
                    {
                      *(_QWORD *)(a1 + 8) = v65 + 1;
                      *v65 = v66;
                    }
                    _printf_buffer_write(a1, v49, (unsigned __int64)&v92[-v49]);
                    if ( (*(_WORD *)(a3 + 12) & 0x20) != 0 )
                    {
                      v67 = *(_DWORD *)(a3 + 16);
                      if ( v67 != 48 && v54 > 0 )
                        _printf_buffer_pad_1(a1, v67, v54);
                    }
                    return &_stack_chk_guard;
                  }
                  if ( v56 != v57 )
                  {
                    *(_QWORD *)(a1 + 8) = v56 + 1;
                    *v56 = 32;
                    v56 = *(_BYTE **)(a1 + 8);
                    v57 = *(_BYTE **)(a1 + 16);
                    goto LABEL_90;
                  }
                  v75 = 32;
                  v87 = v50;
                }
              }
              _printf_buffer_putc_1(a1, v75);
              v50 = v87;
              v56 = *(_BYTE **)(a1 + 8);
              v57 = *(_BYTE **)(a1 + 16);
              goto LABEL_90;
            }
LABEL_160:
            v88 = v25;
            v49 = itoa_word((int)v28, v92, 10, 0);
            v50 = v88;
LABEL_78:
            LODWORD(v14) = 0;
            v51 = ((*(_DWORD *)(a3 + 12) & 0x50) != 0) + 3;
            goto LABEL_79;
          }
          if ( (_DWORD)v14 )
            goto LABEL_150;
          if ( v37 <= 7 && !v38 )
            goto LABEL_160;
        }
LABEL_55:
        StatusReg = _ReadStatusReg(TPIDR_EL0);
        v42 = v9 - 1;
        if ( v9 - 1 < 0 )
        {
LABEL_60:
          if ( *(int *)(*(_QWORD *)(StatusReg + 88) + 4LL * v27) > 101 )
          {
            if ( (_DWORD)v26 )
            {
              LODWORD(v21) = v28 - 4;
              if ( (int)v28 - 4 <= 0 )
              {
                LOBYTE(v27) = 49;
                LODWORD(v26) = 0;
                v21 = 4 - (int)v28;
              }
              else
              {
                v21 = (int)v21;
                LOBYTE(v27) = 49;
              }
            }
            else
            {
              LOBYTE(v27) = 49;
              v21 = (int)v28 + 4;
            }
          }
          else
          {
            v21 = (int)v28;
            LOBYTE(v27) = v27 + 1;
          }
        }
        else
        {
          v43 = _ReadStatusReg(TPIDR_EL0);
          v44 = v25 - (unsigned int)v42 + v9 - 2LL;
          v45 = (_BYTE *)(v25 + v42);
          while ( 1 )
          {
            v46 = (unsigned __int8)*v45;
            if ( v46 == 57 )
            {
              v21 = (int)v28;
              *v45 = *(_DWORD *)(a3 + 8);
              goto LABEL_77;
            }
            StatusReg = v43;
            if ( *(int *)(*(_QWORD *)(v43 + 88) + 4LL * (unsigned __int8)*v45) <= 101 )
              break;
            *v45-- = 48;
            if ( (_BYTE *)v44 == v45 )
              goto LABEL_60;
          }
          v21 = (int)v28;
          *v45 = v46 + 1;
        }
LABEL_77:
        v79 = v25;
        v49 = itoa_word(v21, v92, 10, 0);
        v50 = v79;
        v51 = 4;
        if ( (_DWORD)v14 )
          goto LABEL_79;
        goto LABEL_78;
      }
    }
    v36 = v35 - 48;
    goto LABEL_47;
  }
  v15 = "inf";
  if ( (*(_WORD *)(*(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 72) + 2LL * v11) & 0x100) != 0 )
    v15 = "INF";
  v16 = v6 & 0x20;
  if ( !(_DWORD)v14 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a3 + 12) & 0x50) != 0 )
    {
      v17 = v10 - 4;
      v18 = v17 > 0;
      if ( v16 )
        goto LABEL_11;
      if ( v17 <= 0 )
      {
        v18 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v17 = v10 - 3;
      v18 = v17 > 0;
      if ( v16 )
        v47 = 1;
      else
        v47 = v17 <= 0;
      if ( v47 )
      {
LABEL_11:
        if ( (v6 & 0x40) == 0 )
          goto LABEL_12;
        goto LABEL_69;
      }
    }
    _printf_buffer_pad_1(a1, 0x20u, v17);
    v6 = *(_WORD *)(a3 + 12);
    v18 = 1;
    if ( (v6 & 0x40) == 0 )
    {
LABEL_12:
      if ( (v6 & 0x10) != 0 )
      {
        v73 = *(_BYTE **)(a1 + 8);
        if ( v73 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v73 + 1;
          *v73 = 32;
        }
      }
      goto LABEL_13;
    }
LABEL_69:
    v48 = *(_BYTE **)(a1 + 8);
    if ( v48 == *(_BYTE **)(a1 + 16) )
    {
      _printf_buffer_putc_1(a1, 43);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v48 + 1;
      *v48 = 43;
    }
    goto LABEL_13;
  }
LABEL_23:
  v17 = v10 - 4;
  if ( !v16 && v17 > 0 )
    _printf_buffer_pad_1(a1, 0x20u, v17);
  v20 = *(_BYTE **)(a1 + 8);
  if ( v20 == *(_BYTE **)(a1 + 16) )
  {
    _printf_buffer_putc_1(a1, 45);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v20 + 1;
    *v20 = 45;
  }
  v18 = v17 > 0;
LABEL_13:
  _printf_buffer_puts_1(a1, v15);
  if ( (*(_WORD *)(a3 + 12) & 0x20LL) != 0 && v18 )
    return (__int64 *)_printf_buffer_pad_1(a1, 0x20u, v17);
  return &_stack_chk_guard;
}
