__int64 __fastcall nl_intern_locale_data(
        int a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned __int64 v16; // x23
  int v18; // w0
  __int64 v19; // x1
  unsigned int v20; // w22
  unsigned __int64 v21; // x24
  unsigned __int64 v22; // x21
  __int64 v23; // x0
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  __int64 v32; // x19
  __int64 v33; // x8
  _DWORD *v34; // x20
  _DWORD *v35; // x2
  unsigned __int64 v36; // x3
  unsigned int v37; // w1
  unsigned __int64 v38; // x4
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x3
  unsigned int v42; // w0
  bool v43; // zf
  __int64 v44; // x24
  __int64 v45; // x20
  unsigned __int8 *v46; // x0
  int v47; // w1

  if ( a3 <= 7
    || ((v16 = a3, v18 = *a2, a1 == 3)
      ? (v19 = 537202711)
      : (LODWORD(v19) = a1 ^ 0x20031115, a3 = 537462560, !a1)
      ? (v19 = 537462560)
      : (v19 = (unsigned int)v19),
        v18 != (_DWORD)v19
     || (v20 = a2[1], v21 = v20, (unsigned __int64)v20 < nl_category_num_items[a1])
     || v16 <= 4 * ((unsigned __int64)v20 + 2)) )
  {
    v32 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return v32;
  }
  v22 = 8 * (v20 + 7LL);
  if ( a1 )
  {
    v23 = malloc(8 * (v20 + 7LL), a8, a9, a10, a11, a12, a13, a14, a15, v19, a3, a4, a5, a6, a7);
    v32 = v23;
    if ( v23 )
    {
      *(_QWORD *)(v23 + 8) = a2;
      *(_QWORD *)(v23 + 16) = v16;
      v33 = 0;
      *(_QWORD *)(v23 + 32) = 0;
      *(_QWORD *)(v23 + 40) = 0;
      *(_DWORD *)(v23 + 48) = v20;
      if ( v20 )
        goto LABEL_12;
      return v32;
    }
    return 0;
  }
  v39 = malloc(v22 + 24, a8, a9, a10, a11, a12, a13, a14, a15, v19, a3, a4, a5, a6, a7);
  v32 = v39;
  if ( !v39 )
    return 0;
  v40 = v39 + v22;
  *(_QWORD *)(v32 + 8) = a2;
  *(_QWORD *)(v32 + 16) = v16;
  if ( v22 < v22 + 24 )
    v41 = v22 + 24;
  else
    v41 = 8 * (v20 + 7LL);
  *(_QWORD *)(v32 + 32) = v40;
  _memset_chk(v40, 0, 0x18u, v41 - v22);
  *(_QWORD *)(v32 + 40) = 0;
  v42 = a2[1];
  *(_DWORD *)(v32 + 48) = v42;
  v21 = v42;
  if ( v42 )
  {
    v16 = *(_QWORD *)(v32 + 16);
    v33 = 24;
LABEL_12:
    v34 = a2 + 2;
    v35 = (_DWORD *)(v32 + 56);
    v36 = 0;
    while ( 2 )
    {
      v37 = v34[v36];
      v38 = v37;
      if ( v16 < v37 )
        goto LABEL_19;
      switch ( a1 )
      {
        case 1:
          do
          {
            if ( v36 > 5 )
              break;
            if ( nl_value_type_LC_NUMERIC[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 2:
          while ( 2 )
          {
            if ( v36 == 159 )
              goto LABEL_19;
            if ( nl_value_type_LC_TIME[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              goto LABEL_19;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 > v36 )
            {
              v37 = v34[v36];
              v38 = v37;
              if ( v16 < v37 )
                goto LABEL_19;
              continue;
            }
            goto LABEL_33;
          }
        case 3:
          while ( 2 )
          {
            if ( v36 > 0x12 )
              goto LABEL_19;
            if ( nl_value_type_LC_COLLATE[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              goto LABEL_19;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 > v36 )
            {
              v37 = v34[v36];
              v38 = v37;
              if ( v16 < v37 )
                goto LABEL_19;
              continue;
            }
            goto LABEL_33;
          }
        case 4:
          do
          {
            if ( v36 > 0x2D )
              break;
            if ( nl_value_type_LC_MONETARY[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 5:
          do
          {
            if ( v36 > 4 )
              break;
            if ( nl_value_type_LC_TELEPHONE[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 7:
          do
          {
            if ( v36 > 2 )
              break;
            if ( nl_value_type_LC_PAPER[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 8:
          do
          {
            if ( v36 > 6 )
              break;
            if ( nl_value_type_LC_NAME[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 9:
          do
          {
            if ( v36 > 0xC )
              break;
            if ( nl_value_type_LC_ADDRESS[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 10:
          do
          {
            if ( v36 > 4 )
              break;
            if ( nl_value_type_LC_TELEPHONE[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 11:
          do
          {
            if ( v36 > 1 )
              break;
            if ( nl_value_type_LC_MEASUREMENT[v36] != 5 )
              goto LABEL_32;
            if ( (v37 & 3) != 0 )
              break;
            ++v36;
            *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
            v35 += 2;
            if ( v21 <= v36 )
              goto LABEL_33;
            v37 = v34[v36];
            v38 = v37;
          }
          while ( v16 >= v37 );
          goto LABEL_19;
        case 12:
          while ( 2 )
          {
            if ( v36 > 0xF )
              goto LABEL_19;
            if ( nl_value_type_LC_IDENTIFICATION[v36] == 5 )
            {
              if ( (v37 & 3) != 0 )
                goto LABEL_19;
              ++v36;
              *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
              v35 += 2;
              if ( v21 > v36 )
              {
                v37 = v34[v36];
                v38 = v37;
                if ( v16 < v37 )
                  goto LABEL_19;
                continue;
              }
              goto LABEL_33;
            }
            break;
          }
LABEL_32:
          ++v36;
          *(_QWORD *)v35 = *(_QWORD *)(v32 + 8) + v38;
          v35 += 2;
          if ( v36 >= v21 )
            goto LABEL_33;
          continue;
        default:
          if ( a1 )
            _libc_assert_fail("category == LC_CTYPE", (__int64)"loadlocale.c", 0xCEu, (__int64)"_nl_intern_locale_data");
          while ( 2 )
          {
            if ( v36 <= 0x55 )
            {
              if ( nl_value_type_LC_CTYPE[v36] == 5 )
              {
                if ( (v37 & 3) != 0 )
                {
LABEL_19:
                  free(v32, v24, v25, v26, v27, v28, v29, v30, v31);
                  v32 = 0;
                  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
                  return v32;
                }
                ++v36;
                *v35 = *(_DWORD *)(*(_QWORD *)(v32 + 8) + v38);
                v35 += 2;
                if ( v21 <= v36 )
                  goto LABEL_33;
              }
              else
              {
                ++v36;
                *(_QWORD *)v35 = *(_QWORD *)(v32 + 8) + v38;
                v35 += 2;
                if ( v21 <= v36 )
                  goto LABEL_33;
              }
              v37 = v34[v36];
              v38 = v37;
              if ( v16 < v37 )
                goto LABEL_19;
              continue;
            }
            break;
          }
          while ( 1 )
          {
            ++v36;
            *(_QWORD *)v35 = *(_QWORD *)(v32 + 8) + v38;
            v35 += 2;
            if ( v36 >= v21 )
              break;
            v38 = (unsigned int)v34[v36];
            if ( v38 > v16 )
              goto LABEL_19;
          }
LABEL_33:
          if ( v33 )
            v43 = a1 == 0;
          else
            v43 = 0;
          if ( !v43 )
            return v32;
          goto LABEL_38;
      }
    }
  }
LABEL_38:
  v44 = *(_QWORD *)(v32 + 32);
  v45 = 0;
  *(_QWORD *)(v44 + 9) = 0x101010101010101LL;
  *(_WORD *)(v44 + 17) = 257;
  do
  {
    while ( 1 )
    {
      v46 = *(unsigned __int8 **)(v32 + 384 + 8 * v45);
      if ( (_DWORD)v45 + 48 != *v46 || (v47 = 1, v46[1]) )
      {
        *(_BYTE *)(v44 + 8) = 1;
        v47 = (unsigned __int8)strlen(v46);
      }
      *(_BYTE *)(v44 + 9 + v45) = v47;
      if ( v45 )
        break;
      v45 = 1;
      *(_BYTE *)(v44 + 19) = v47;
    }
    if ( *(unsigned __int8 *)(v44 + 19) != v47 )
      *(_BYTE *)(v44 + 19) = 0;
    ++v45;
  }
  while ( v45 != 10 );
  return v32;
}
