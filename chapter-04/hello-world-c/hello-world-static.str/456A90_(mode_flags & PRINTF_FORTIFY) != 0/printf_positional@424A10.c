__int64 *__fastcall printf_positional(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _BYTE *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v13; // x24
  _BYTE *v14; // x24
  unsigned __int64 v15; // x21
  _BYTE *v16; // x19
  unsigned __int64 v17; // x28
  unsigned __int64 v18; // x25
  _BYTE *v20; // x21
  unsigned __int64 v21; // x23
  _BYTE *v22; // x22
  _BYTE *v23; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  _BYTE *v26; // x3
  _BYTE *v27; // x25
  __int64 v28; // x20
  _BYTE *v29; // x21
  unsigned __int64 v30; // x22
  _BYTE *v31; // x28
  __int64 v32; // x26
  unsigned __int64 v33; // x24
  _BYTE *v34; // x23
  int v35; // w0
  int v36; // w0
  __int64 v37; // x1
  _BYTE *v38; // x0
  __int64 v39; // x6
  __int64 v40; // x2
  __int64 v41; // x4
  unsigned __int64 v42; // x25
  int v43; // w0
  __int64 v44; // x19
  _DWORD *v45; // x1
  int v46; // w1
  _DWORD *v47; // x0
  int v48; // w1
  _QWORD *v49; // x0
  unsigned __int64 v50; // x24
  int *v51; // x26
  _BYTE *v52; // x21
  int *v53; // x28
  int v54; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  int v57; // w20
  int v58; // w0
  int v59; // w22
  int v60; // w0
  int v61; // w5
  __int64 v62; // x1
  _BYTE *v63; // x0
  __int16 v64; // w0
  __int64 v65; // x1
  int v66; // w0
  _BYTE *v67; // x0
  _BYTE *v68; // x19
  _BYTE *v69; // x2
  __int64 v70; // x1
  unsigned int v71; // t1
  _QWORD *v72; // x1
  int v73; // w5
  unsigned __int64 v74; // x0
  int v75; // w1
  _QWORD *v76; // x0
  _QWORD *v77; // x6
  _QWORD *v78; // x5
  int v79; // w0
  _OWORD *v80; // x0
  _QWORD *v81; // x0
  __int16 v82; // w0
  _BYTE *v83; // x0
  _BYTE *v84; // x0
  _BYTE *v85; // x0
  _BYTE *v86; // x0
  _BYTE *v87; // x1
  char v88; // w0
  _BYTE *v89; // x0
  _BYTE *v90; // x19
  _BYTE *v91; // x2
  __int64 v92; // x1
  unsigned int v93; // t1
  _BYTE *v94; // x0
  _BYTE *v95; // x0
  int *v96; // x5
  __int64 v97; // x0
  __int64 v98; // x22
  _BYTE *v99; // x19
  __int64 v100; // [xsp+0h] [xbp-920h]
  __int64 v101; // [xsp+0h] [xbp-920h]
  _BYTE *v102; // [xsp+0h] [xbp-920h]
  _BYTE *v104; // [xsp+18h] [xbp-908h]
  _BYTE *v105; // [xsp+18h] [xbp-908h]
  __int64 v106; // [xsp+18h] [xbp-908h]
  __int64 v107; // [xsp+18h] [xbp-908h]
  unsigned __int64 v109; // [xsp+38h] [xbp-8E8h]
  _BYTE *v110; // [xsp+40h] [xbp-8E0h]
  __int64 v111; // [xsp+50h] [xbp-8D0h]
  __int64 v112; // [xsp+58h] [xbp-8C8h]
  unsigned __int64 v113; // [xsp+B8h] [xbp-868h] BYREF
  __int64 v114; // [xsp+C0h] [xbp-860h] BYREF
  _BYTE *v115; // [xsp+E0h] [xbp-840h] BYREF
  unsigned __int64 v116; // [xsp+E8h] [xbp-838h]
  _BYTE v117[784]; // [xsp+F0h] [xbp-830h] BYREF
  __int64 v118; // [xsp+400h] [xbp-520h]
  _BYTE *v119; // [xsp+4F0h] [xbp-430h] BYREF
  __int64 v120; // [xsp+4F8h] [xbp-428h]
  _BYTE v121[1032]; // [xsp+500h] [xbp-420h] BYREF
  _BYTE v122[4]; // [xsp+914h] [xbp-Ch] BYREF

  v118 = 0;
  v13 = a5;
  v113 = 0;
  v115 = v117;
  v116 = 1024;
  v119 = v121;
  v120 = 1024;
  if ( a10 == -1 )
    _ReadStatusReg(TPIDR_EL0);
  if ( *a7 )
  {
    v14 = v117;
    v15 = 14;
    v16 = a7;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v18 += _parse_one_specmb(v16, v18, &v14[72 * v17], &v113, &v114);
      if ( (v114 & 1) != 0 )
        goto LABEL_10;
      v16 = *(_BYTE **)&v14[72 * v17++ + 32];
      if ( !*v16 )
        break;
      if ( v15 == v17 )
      {
        if ( (_libc_scratch_buffer_grow_preserve(&v115) & 1) == 0 )
          goto LABEL_10;
        v14 = v115;
        v15 = v116 / 0x48;
      }
    }
    v20 = v14;
    v13 = a5;
    if ( v113 < v18 )
      v21 = v18;
    else
      v21 = v113;
  }
  else
  {
    v20 = v117;
    v21 = 0;
    v17 = 0;
  }
  if ( (_libc_scratch_buffer_set_array_size() & 1) == 0 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_11;
  }
  v22 = &v119[16 * v21];
  v111 = 16 * v21;
  v23 = &v22[4 * v21];
  v100 = 4 * v21;
  v104 = v119;
  v110 = &v23[4 * v21];
  if ( (a12 & 2) != 0 )
    v24 = 255;
  else
    v24 = 0;
  memset(&v22[4 * v21], v24, 4 * v21);
  v25 = 4 * v21;
  v26 = v104;
  if ( !v17 )
  {
    if ( !v21 )
      goto LABEL_11;
LABEL_35:
    v41 = 0;
    v42 = 0;
    while ( 1 )
    {
      v43 = *(_DWORD *)&v23[4 * v42];
      v44 = 4 * v42;
      v45 = &v23[4 * v42];
      if ( v43 <= 7 )
        break;
      if ( v43 == 263 )
      {
        v77 = &v26[v41];
        v78 = *(_QWORD **)v13;
        v79 = *(_DWORD *)(v13 + 28);
        if ( (a12 & 1) != 0 )
        {
          if ( v79 < 0 && (*(_DWORD *)(v13 + 28) = v79 + 16, v79 + 16 <= 0) )
            v78 = (_QWORD *)(*(_QWORD *)(v13 + 16) + v79);
          else
            *(_QWORD *)v13 = ((unsigned __int64)v78 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          *v77 = *v78;
          *v45 &= ~0x100u;
        }
        else
        {
          if ( v79 < 0 && (*(_DWORD *)(v13 + 28) = v79 + 16, v79 + 16 <= 0) )
          {
            v80 = (_OWORD *)(*(_QWORD *)(v13 + 16) + v79);
          }
          else
          {
            v80 = (_OWORD *)(((unsigned __int64)v78 + 15) & 0xFFFFFFFFFFFFFFF0LL);
            *(_QWORD *)v13 = v80 + 1;
          }
          *(_OWORD *)v77 = *v80;
        }
        goto LABEL_55;
      }
      if ( v43 > 263 )
      {
        if ( v43 == 512 )
          goto LABEL_52;
        if ( v43 == 1024 )
          goto LABEL_47;
LABEL_51:
        if ( (v43 & 0x800) != 0 )
          goto LABEL_52;
        goto LABEL_109;
      }
      if ( v43 == 256 )
      {
LABEL_52:
        v48 = *(_DWORD *)(v13 + 24);
        v49 = *(_QWORD **)v13;
        if ( v48 < 0 && (*(_DWORD *)(v13 + 24) = v48 + 8, v48 + 8 <= 0) )
          v49 = (_QWORD *)(*(_QWORD *)(v13 + 8) + v48);
        else
          *(_QWORD *)v13 = ((unsigned __int64)v49 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)&v26[v41] = *v49;
        goto LABEL_55;
      }
LABEL_109:
      if ( _printf_va_arg_table && *(_QWORD *)(_printf_va_arg_table + 8LL * v43 - 64) )
      {
        v96 = (int *)&v22[v44];
        if ( &v119[v120] < &v110[*(int *)&v22[4 * v42]] )
        {
          do
          {
            v101 = v25;
            v106 = v41;
            v98 = v110 - &v23[v25];
            if ( (_libc_scratch_buffer_grow_preserve(&v119) & 1) == 0 )
              goto LABEL_10;
            v25 = v101;
            v97 = v101 + v98;
            v26 = v119;
            v22 = &v119[v111];
            v23 = &v119[v111 + v101];
            v96 = (int *)&v119[v111 + v44];
            v110 = &v23[v97];
            v41 = v106;
          }
          while ( &v23[v97 + *(int *)&v119[4 * v42 + v111]] > &v119[v120] );
        }
        *(_QWORD *)&v26[v41] = v110;
        v102 = v26;
        v107 = v41;
        v112 = v25;
        v99 = &v110[*v96];
        (*(void (**)(void))(_printf_va_arg_table + 8LL * *(int *)&v23[4 * v42] - 64))();
        v110 = v99;
        v26 = v102;
        v41 = v107;
        v25 = v112;
      }
      else
      {
        v81 = &v26[v41];
        *v81 = 0;
        v81[1] = 0;
      }
LABEL_55:
      ++v42;
      v41 += 16;
      if ( v42 >= v21 )
        goto LABEL_56;
    }
    if ( v43 > 5 )
    {
      v75 = *(_DWORD *)(v13 + 28);
      v76 = *(_QWORD **)v13;
      if ( v75 < 0 && (*(_DWORD *)(v13 + 28) = v75 + 16, v75 + 16 <= 0) )
        v76 = (_QWORD *)(*(_QWORD *)(v13 + 16) + v75);
      else
        *(_QWORD *)v13 = ((unsigned __int64)v76 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)&v26[v41] = *v76;
      goto LABEL_55;
    }
    if ( v43 == 2 )
      goto LABEL_47;
    if ( v43 > 2 )
    {
      v72 = *(_QWORD **)v13;
      v73 = *(_DWORD *)(v13 + 24);
      v74 = (*(_QWORD *)v13 + 15LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v73 < 0 && (*(_DWORD *)(v13 + 24) = v73 + 8, v73 + 8 <= 0) )
        v72 = (_QWORD *)(*(_QWORD *)(v13 + 8) + v73);
      else
        *(_QWORD *)v13 = v74;
      *(_QWORD *)&v26[v41] = *v72;
      goto LABEL_55;
    }
    if ( v43 == -1 )
    {
      if ( (a12 & 2) != 0 )
        _libc_fatal("*** invalid %N$ use detected ***\n", v45, v25, v26, v41);
      _libc_assert_fail(
        "(mode_flags & PRINTF_FORTIFY) != 0",
        (__int64)"vfprintf-internal.c",
        0x4F5u,
        (__int64)"printf_positional");
    }
    if ( (unsigned int)v43 <= 1 )
    {
LABEL_47:
      v46 = *(_DWORD *)(v13 + 24);
      v47 = *(_DWORD **)v13;
      if ( v46 < 0 && (*(_DWORD *)(v13 + 24) = v46 + 8, v46 + 8 <= 0) )
        v47 = (_DWORD *)(*(_QWORD *)(v13 + 8) + v46);
      else
        *(_QWORD *)v13 = ((unsigned __int64)v47 + 11) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)&v26[v41] = *v47;
      goto LABEL_55;
    }
    goto LABEL_51;
  }
  v27 = v20;
  v28 = 0;
  v105 = v20;
  v29 = v22;
  v30 = v17;
  v31 = v23;
  v32 = v13;
  v33 = v21;
  v34 = v26;
  do
  {
    while ( 1 )
    {
      v35 = *((_DWORD *)v27 + 11);
      if ( v35 != -1 )
        *(_DWORD *)&v31[4 * v35] = 0;
      v36 = *((_DWORD *)v27 + 10);
      if ( v36 != -1 )
        *(_DWORD *)&v31[4 * v36] = 0;
      v37 = *((_QWORD *)v27 + 7);
      if ( !v37 )
        goto LABEL_26;
      if ( v37 != 1 )
        break;
      *(_DWORD *)&v31[4 * *((int *)v27 + 12)] = *((_DWORD *)v27 + 13);
      *(_DWORD *)&v29[4 * *((int *)v27 + 12)] = *((_DWORD *)v27 + 16);
LABEL_26:
      ++v28;
      v27 += 72;
      if ( v28 == v30 )
        goto LABEL_34;
    }
    v38 = v27;
    v39 = *((unsigned int *)v27 + 2);
    ++v28;
    v40 = *((int *)v27 + 12);
    v27 += 72;
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _BYTE *))(_printf_arginfo_table + 8 * v39))(
      v38,
      v37,
      &v31[4 * v40],
      &v29[4 * v40]);
  }
  while ( v28 != v30 );
LABEL_34:
  v25 = v100;
  v26 = v34;
  v21 = v33;
  v13 = v32;
  v23 = v31;
  v17 = v30;
  v22 = v29;
  v20 = v105;
  if ( v21 )
    goto LABEL_35;
LABEL_56:
  v50 = a6;
  if ( a6 < v17 )
  {
    v51 = (int *)&v20[72 * a6];
    v52 = v26;
    v109 = v17;
    v53 = v51;
    do
    {
      if ( !*(_DWORD *)(a1 + 32) )
        break;
      v57 = v53[2];
      v58 = v53[11];
      if ( v58 != -1 )
      {
        v59 = *(_DWORD *)&v52[16 * v58];
        if ( v59 < 0 )
        {
          v82 = *((_WORD *)v53 + 6) | 0x20;
          v53[1] = -v59;
          *((_WORD *)v53 + 6) = v82;
        }
        else
        {
          v53[1] = v59;
        }
      }
      v60 = v53[10];
      if ( v60 != -1 )
      {
        v61 = *(_DWORD *)&v52[16 * v60];
        if ( v61 < 0 )
          v61 = -1;
        *v53 = v61;
      }
      if ( _printf_function_table )
      {
        v62 = *(_QWORD *)(_printf_function_table + 8LL * (unsigned __int8)v57);
        if ( v62 )
        {
          v54 = _printf_function_invoke(a1, v62, &v52[16 * v53[12]], *((_QWORD *)v53 + 7), v53);
          if ( v54 != -2 )
          {
            if ( v54 < 0 )
              goto LABEL_10;
            goto LABEL_60;
          }
        }
      }
      if ( (unsigned __int8)(v57 - 32) <= 0x5Au )
        __asm { BR              X0 }
      v63 = *(_BYTE **)(a1 + 8);
      if ( v63 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 37);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v63 + 1;
        *v63 = 37;
      }
      v64 = *((_WORD *)v53 + 6);
      if ( (v64 & 8) != 0 )
      {
        v85 = *(_BYTE **)(a1 + 8);
        if ( v85 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, 35);
          v64 = *((_WORD *)v53 + 6);
          if ( (v64 & 0x80) == 0 )
          {
LABEL_76:
            if ( (v64 & 0x40) == 0 )
              goto LABEL_77;
            goto LABEL_117;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v85 + 1;
          *v85 = 35;
          v64 = *((_WORD *)v53 + 6);
          if ( (v64 & 0x80) == 0 )
            goto LABEL_76;
        }
      }
      else if ( (v64 & 0x80) == 0 )
      {
        goto LABEL_76;
      }
      v84 = *(_BYTE **)(a1 + 8);
      if ( v84 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 39);
        v64 = *((_WORD *)v53 + 6);
        if ( (v64 & 0x40) == 0 )
        {
LABEL_77:
          if ( (v64 & 0x10) != 0 )
          {
            v86 = *(_BYTE **)(a1 + 8);
            if ( v86 == *(_BYTE **)(a1 + 16) )
            {
              _printf_buffer_putc_1(a1, 32);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v86 + 1;
              *v86 = 32;
            }
            v64 = *((_WORD *)v53 + 6);
          }
          goto LABEL_78;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v84 + 1;
        *v84 = 39;
        v64 = *((_WORD *)v53 + 6);
        if ( (v64 & 0x40) == 0 )
          goto LABEL_77;
      }
LABEL_117:
      v83 = *(_BYTE **)(a1 + 8);
      if ( v83 == *(_BYTE **)(a1 + 16) )
      {
        _printf_buffer_putc_1(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v83 + 1;
        *v83 = 43;
      }
      v64 = *((_WORD *)v53 + 6);
LABEL_78:
      if ( (v64 & 0x20) != 0 )
      {
        v89 = *(_BYTE **)(a1 + 8);
        if ( v89 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, 45);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v89 + 1;
          *v89 = 45;
        }
      }
      v65 = (unsigned int)v53[4];
      if ( (_DWORD)v65 == 48 )
      {
        v95 = *(_BYTE **)(a1 + 8);
        if ( v95 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, v65);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v95 + 1;
          *v95 = 48;
        }
      }
      if ( (v53[3] & 0x800) != 0 )
      {
        v94 = *(_BYTE **)(a1 + 8);
        if ( v94 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, 73);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v94 + 1;
          *v94 = 73;
        }
      }
      v66 = v53[1];
      if ( v66 )
      {
        v90 = (_BYTE *)itoa_word(v66, v122, 10, 0);
        if ( v90 < v122 )
        {
          do
          {
            v91 = *(_BYTE **)(a1 + 8);
            v93 = (unsigned __int8)*v90++;
            v92 = v93;
            if ( v91 == *(_BYTE **)(a1 + 16) )
            {
              _printf_buffer_putc_1(a1, v92);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v91 + 1;
              *v91 = v92;
            }
          }
          while ( v90 != v122 );
        }
      }
      if ( *v53 != -1 )
      {
        v67 = *(_BYTE **)(a1 + 8);
        if ( v67 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, 46);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v67 + 1;
          *v67 = 46;
        }
        v68 = (_BYTE *)itoa_word(*v53, v122, 10, 0);
        if ( v68 < v122 )
        {
          do
          {
            v69 = *(_BYTE **)(a1 + 8);
            v71 = (unsigned __int8)*v68++;
            v70 = v71;
            if ( v69 == *(_BYTE **)(a1 + 16) )
            {
              _printf_buffer_putc_1(a1, v70);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v69 + 1;
              *v69 = v70;
            }
          }
          while ( v68 != v122 );
        }
      }
      if ( v53[2] )
      {
        v87 = *(_BYTE **)(a1 + 8);
        v88 = v53[2];
        if ( v87 == *(_BYTE **)(a1 + 16) )
        {
          _printf_buffer_putc_1(a1, (unsigned __int8)v53[2]);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v87 + 1;
          *v87 = v88;
        }
      }
LABEL_60:
      v55 = *((_QWORD *)v53 + 3);
      v56 = *((_QWORD *)v53 + 4);
      ++v50;
      v53 += 18;
      _printf_buffer_write(a1, v55, v56 - v55);
    }
    while ( v109 > v50 );
  }
LABEL_11:
  if ( v119 != v121 )
    free(v119);
  if ( v115 != v117 )
    free(v115);
  return &_stack_chk_guard;
}
