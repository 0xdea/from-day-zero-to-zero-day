__int64 __fastcall IO_new_file_fopen(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  int v8; // w0
  __int64 v9; // x5
  int v10; // w3
  int v11; // w7
  __int64 v12; // x4
  unsigned __int8 *v13; // x0
  unsigned __int8 *v14; // x21
  unsigned int v15; // w6
  unsigned int v16; // t1
  bool v17; // cc
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x21
  __int64 v21; // x23
  __int64 v22; // x0
  unsigned __int8 *v23; // x22
  int v24; // w2
  unsigned __int8 *v25; // x5
  _BYTE *v26; // x4
  int v27; // w9
  int v28; // t1
  unsigned int v29; // w1
  int v31; // w0
  __int64 v32; // x0
  int v33; // w1
  _QWORD *v34; // x0
  __int64 v35; // x4
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x4
  unsigned __int64 StatusReg; // x21
  __int64 v42; // x0
  int v43; // w20
  __int64 v44; // x0
  __int64 v45; // x0
  _QWORD v46[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v47; // [xsp+50h] [xbp+20h]
  __int64 v48; // [xsp+58h] [xbp+28h]
  __int64 v49; // [xsp+60h] [xbp+30h]

  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v8 = *a3;
  v9 = a4;
  switch ( v8 )
  {
    case 'r':
      v10 = 0;
      v11 = 0;
      v12 = 8;
      v47 = v4;
      v48 = v5;
      break;
    case 'w':
      v10 = 576;
      v11 = 1;
      v12 = 4;
      v47 = v4;
      v48 = v5;
      break;
    case 'a':
      v10 = 1088;
      v11 = 1;
      v12 = 4100;
      v47 = v4;
      v48 = v5;
      break;
    default:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      return 0;
  }
  v13 = a3 + 6;
  v14 = a3;
  do
  {
    v16 = *++a3;
    v15 = v16;
    v17 = v16 > 0x63;
    if ( v16 == 99 )
    {
      *(_DWORD *)(a1 + 116) |= 2u;
    }
    else if ( v17 )
    {
      switch ( v15 )
      {
        case 'm':
          *(_DWORD *)(a1 + 116) |= 1u;
          break;
        case 'x':
          v10 |= 0x80u;
          v14 = a3;
          break;
        case 'e':
          v10 |= 0x80000u;
          *(_DWORD *)(a1 + 116) |= 0x40u;
          break;
      }
    }
    else
    {
      if ( v15 == 44 )
        break;
      if ( v15 > 0x2C )
      {
        if ( v15 == 98 )
          v14 = a3;
      }
      else
      {
        if ( !v15 )
          break;
        if ( v15 == 43 )
        {
          v12 &= 0x1000u;
          v14 = a3;
          v11 = 2;
        }
      }
    }
  }
  while ( v13 != a3 );
  v18 = IO_file_open(a1, a2, v10 | (unsigned int)v11, 438, v12, v9);
  if ( !v18 )
    return 0;
  v19 = strstr(v14 + 1, ",ccs=");
  if ( !v19 )
    return v18;
  v20 = v19 + 5;
  v49 = v6;
  v21 = strchrnul(v19 + 5, 44) - (v19 + 5);
  v22 = malloc(v21 + 3);
  v23 = (unsigned __int8 *)v22;
  if ( !v22 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v44 = a1;
    v43 = *(_DWORD *)(StatusReg + 40);
    IO_new_file_close_it(v44);
    goto LABEL_55;
  }
  *(_BYTE *)(j_memcpy(v22) + v21) = 0;
  v24 = *v23;
  if ( *v23 )
  {
    v25 = v23;
    v26 = v23;
    v27 = 0;
    while ( 1 )
    {
      v29 = (unsigned __int8)(v24 - 44);
      if ( v29 <= 0x33 )
        break;
      if ( (word_45E6A0[(unsigned __int8)v24] & 8) != 0 )
        goto LABEL_21;
LABEL_22:
      v28 = *++v25;
      v24 = v28;
      if ( !v28 )
      {
        v31 = v27 + 1;
        if ( v27 <= 1 )
          goto LABEL_43;
        goto LABEL_44;
      }
    }
    if ( (word_45E6A0[(unsigned __int8)v24] & 8) == 0 && ((__int64)0xFFF7FFFFFFFFBFF8LL >> v29) & 1 )
    {
      if ( v24 == 47 )
      {
        if ( v27 == 2 )
          goto LABEL_44;
        ++v27;
        *v26++ = 47;
      }
      goto LABEL_22;
    }
LABEL_21:
    *v26++ = dword_45DDA0[v24];
    goto LABEL_22;
  }
  v26 = v23;
  v31 = 1;
LABEL_43:
  v26 = (_BYTE *)(memset(v26, 47, (unsigned int)(3 - v31)) + (unsigned int)(3 - v31));
LABEL_44:
  *v26 = 0;
  if ( !v23[2] )
  {
    v32 = 0;
    do
    {
      v33 = (unsigned __int8)dword_45DDA0[*(unsigned __int8 *)(v20 + v32)];
      v23[v32++] = v33;
    }
    while ( v33 );
  }
  if ( (unsigned int)_wcsmbs_named_conv(v46, v23) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v42 = a1;
    v43 = 22;
    IO_new_file_close_it(v42);
    free(v23);
LABEL_55:
    *(_DWORD *)(StatusReg + 40) = v43;
    return 0;
  }
  free(v23);
  if ( v46[1] == 1 )
  {
    if ( v46[3] == 1 )
    {
      v34 = *(_QWORD **)(a1 + 160);
      v35 = v46[0];
      v34[11] = 0;
      *v34 = v34[1];
      v36 = *(_QWORD *)(a1 + 160);
      v34[4] = v34[3];
      *(_QWORD *)(v36 + 96) = 0;
      v37 = *(_QWORD *)(a1 + 160);
      v38 = *(_QWORD *)(v18 + 160);
      *(_QWORD *)(a1 + 152) = v37 + 104;
      *(_QWORD *)(v37 + 104) = v35;
      *(_QWORD *)(v37 + 128) = 1;
      v38 += 88;
      v39 = v46[2];
      *(_DWORD *)(v37 + 136) = 1;
      *(_QWORD *)(v37 + 144) = v38;
      *(_QWORD *)(v37 + 160) = v39;
      v40 = *(_QWORD *)(v37 + 224);
      *(_QWORD *)(v37 + 184) = 9;
      *(_DWORD *)(v37 + 192) = 1;
      *(_QWORD *)(v37 + 200) = v38;
      *(_QWORD *)(a1 + 216) = v40;
      *(_DWORD *)(v18 + 192) = 1;
      return v18;
    }
    _libc_assert_fail("fcts.tomb_nsteps == 1", "fileops.c", 323, "_IO_new_file_fopen");
  }
  v45 = _libc_assert_fail("fcts.towc_nsteps == 1", "fileops.c", 322, "_IO_new_file_fopen");
  return IO_new_file_finish(v45);
}
