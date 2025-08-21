__int64 __fastcall IO_new_file_fopen(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // x21
  __int64 v4; // x22
  __int64 v5; // x23
  int v7; // w0
  int v8; // w3
  int v9; // w7
  int v10; // w4
  unsigned __int8 *v11; // x0
  unsigned __int8 *v12; // x21
  unsigned int v13; // w6
  unsigned int v14; // t1
  bool v15; // cc
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x21
  __int64 v19; // x23
  __int64 v20; // x0
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  unsigned __int8 *v29; // x22
  int v30; // w2
  unsigned __int8 *v31; // x5
  _BYTE *v32; // x4
  int v33; // w9
  int v34; // t1
  unsigned int v35; // w1
  int v37; // w0
  __int64 v38; // x0
  int v39; // w1
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  _QWORD *v48; // x0
  __int64 v49; // x4
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x4
  unsigned __int64 StatusReg; // x21
  __int64 v56; // x0
  int v57; // w20
  __int64 v58; // x0
  __int64 v59; // x0
  _QWORD v60[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v61; // [xsp+50h] [xbp+20h]
  __int64 v62; // [xsp+58h] [xbp+28h]
  __int64 v63; // [xsp+60h] [xbp+30h]

  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v7 = *a3;
  switch ( v7 )
  {
    case 'r':
      v8 = 0;
      v9 = 0;
      v10 = 8;
      v61 = v3;
      v62 = v4;
      break;
    case 'w':
      v8 = 576;
      v9 = 1;
      v10 = 4;
      v61 = v3;
      v62 = v4;
      break;
    case 'a':
      v8 = 1088;
      v9 = 1;
      v10 = 4100;
      v61 = v3;
      v62 = v4;
      break;
    default:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      return 0;
  }
  v11 = a3 + 6;
  v12 = a3;
  do
  {
    v14 = *++a3;
    v13 = v14;
    v15 = v14 > 0x63;
    if ( v14 == 99 )
    {
      *(_DWORD *)(a1 + 116) |= 2u;
    }
    else if ( v15 )
    {
      switch ( v13 )
      {
        case 'm':
          *(_DWORD *)(a1 + 116) |= 1u;
          break;
        case 'x':
          v8 |= 0x80u;
          v12 = a3;
          break;
        case 'e':
          v8 |= 0x80000u;
          *(_DWORD *)(a1 + 116) |= 0x40u;
          break;
      }
    }
    else
    {
      if ( v13 == 44 )
        break;
      if ( v13 > 0x2C )
      {
        if ( v13 == 98 )
          v12 = a3;
      }
      else
      {
        if ( !v13 )
          break;
        if ( v13 == 43 )
        {
          v10 &= 0x1000u;
          v12 = a3;
          v9 = 2;
        }
      }
    }
  }
  while ( v11 != a3 );
  v16 = IO_file_open(a1, a2, v8 | (unsigned int)v9, 0x1B6u, v10);
  if ( !v16 )
    return 0;
  v17 = strstr(v12 + 1, ",ccs=");
  if ( !v17 )
    return v16;
  v18 = v17 + 5;
  v63 = v5;
  v19 = strchrnul(v17 + 5, 44) - (v17 + 5);
  v20 = malloc(v19 + 3);
  v29 = (unsigned __int8 *)v20;
  if ( !v20 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v58 = a1;
    v57 = *(_DWORD *)(StatusReg + 40);
    IO_new_file_close_it(v58, v21, v22, v23, v24, v25, v26, v27, v28);
    goto LABEL_55;
  }
  *(_BYTE *)(j_memcpy(v20) + v19) = 0;
  v30 = *v29;
  if ( *v29 )
  {
    v31 = v29;
    v32 = v29;
    v33 = 0;
    while ( 1 )
    {
      v35 = (unsigned __int8)(v30 - 44);
      if ( v35 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v30] & 8) != 0 )
        goto LABEL_21;
LABEL_22:
      v34 = *++v31;
      v30 = v34;
      if ( !v34 )
      {
        v37 = v33 + 1;
        if ( v33 <= 1 )
          goto LABEL_43;
        goto LABEL_44;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v30] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v35) & 1 )
    {
      if ( v30 == 47 )
      {
        if ( v33 == 2 )
          goto LABEL_44;
        ++v33;
        *v32++ = 47;
      }
      goto LABEL_22;
    }
LABEL_21:
    *v32++ = dword_45DDA0[v30];
    goto LABEL_22;
  }
  v32 = v29;
  v37 = 1;
LABEL_43:
  v32 = (_BYTE *)(memset(v32, 47, (unsigned int)(3 - v37)) + (unsigned int)(3 - v37));
LABEL_44:
  *v32 = 0;
  if ( !v29[2] )
  {
    v38 = 0;
    do
    {
      v39 = (unsigned __int8)dword_45DDA0[*(unsigned __int8 *)(v18 + v38)];
      v29[v38++] = v39;
    }
    while ( v39 );
  }
  if ( (unsigned int)_wcsmbs_named_conv(v60, v29) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v56 = a1;
    v57 = 22;
    IO_new_file_close_it(v56, v40, v41, v42, v43, v44, v45, v46, v47);
    free(v29);
LABEL_55:
    *(_DWORD *)(StatusReg + 40) = v57;
    return 0;
  }
  free(v29);
  if ( v60[1] == 1 )
  {
    if ( v60[3] == 1 )
    {
      v48 = *(_QWORD **)(a1 + 160);
      v49 = v60[0];
      v48[11] = 0;
      *v48 = v48[1];
      v50 = *(_QWORD *)(a1 + 160);
      v48[4] = v48[3];
      *(_QWORD *)(v50 + 96) = 0;
      v51 = *(_QWORD *)(a1 + 160);
      v52 = *(_QWORD *)(v16 + 160);
      *(_QWORD *)(a1 + 152) = v51 + 104;
      *(_QWORD *)(v51 + 104) = v49;
      *(_QWORD *)(v51 + 128) = 1;
      v52 += 88;
      v53 = v60[2];
      *(_DWORD *)(v51 + 136) = 1;
      *(_QWORD *)(v51 + 144) = v52;
      *(_QWORD *)(v51 + 160) = v53;
      v54 = *(_QWORD *)(v51 + 224);
      *(_QWORD *)(v51 + 184) = 9;
      *(_DWORD *)(v51 + 192) = 1;
      *(_QWORD *)(v51 + 200) = v52;
      *(_QWORD *)(a1 + 216) = v54;
      *(_DWORD *)(v16 + 192) = 1;
      return v16;
    }
    _libc_assert_fail("fcts.tomb_nsteps == 1", "fileops.c", 323, "_IO_new_file_fopen");
  }
  v59 = _libc_assert_fail("fcts.towc_nsteps == 1", "fileops.c", 322, "_IO_new_file_fopen");
  return IO_new_file_finish(v59);
}
