_QWORD *__fastcall nl_intern_locale_data(int a1, int *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // x23
  int v9; // w0
  __int64 v10; // x1
  unsigned int v11; // w22
  unsigned __int64 v12; // x24
  __int64 v13; // x21
  __int64 v14; // x0
  _QWORD *v15; // x19
  __int64 v16; // x8
  int *v17; // x20
  _DWORD *v18; // x2
  unsigned __int64 v19; // x3
  unsigned int v20; // w1
  unsigned __int64 v21; // x4
  _QWORD *v22; // x0
  unsigned int v23; // w0
  bool v24; // zf
  __int64 v25; // x24
  __int64 v26; // x20
  unsigned __int8 *v27; // x0
  int v28; // w1

  if ( a3 <= 7
    || ((v7 = a3, v9 = *a2, a1 == 3)
      ? (v10 = 537202711)
      : (LODWORD(v10) = a1 ^ 0x20031115, a3 = 537462560, !a1)
      ? (v10 = 537462560)
      : (v10 = (unsigned int)v10),
        v9 != (_DWORD)v10
     || (v11 = a2[1], v12 = v11, (unsigned __int64)v11 < nl_category_num_items[a1])
     || v7 <= 4 * ((unsigned __int64)v11 + 2)) )
  {
    v15 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return v15;
  }
  v13 = v11 + 7LL;
  if ( a1 )
  {
    v14 = malloc(8 * (v11 + 7LL), v10, (__int16 *)a3, a4, a5, a6);
    v15 = (_QWORD *)v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 8) = a2;
      *(_QWORD *)(v14 + 16) = v7;
      v16 = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0;
      *(_DWORD *)(v14 + 48) = v11;
      if ( v11 )
        goto LABEL_12;
      return v15;
    }
    return 0;
  }
  v22 = (_QWORD *)malloc(v13 * 8 + 24, v10, (__int16 *)a3, a4, a5, a6);
  v15 = v22;
  if ( !v22 )
    return 0;
  v22[1] = a2;
  v22[2] = v7;
  v22[4] = &v22[v13];
  _memset_chk();
  v15[5] = 0;
  v23 = a2[1];
  *((_DWORD *)v15 + 12) = v23;
  v12 = v23;
  if ( v23 )
  {
    v7 = v15[2];
    v16 = 24;
LABEL_12:
    v17 = a2 + 2;
    v18 = v15 + 7;
    v19 = 0;
    while ( 2 )
    {
      v20 = v17[v19];
      v21 = v20;
      if ( v7 < v20 )
        goto LABEL_19;
      switch ( a1 )
      {
        case 1:
          do
          {
            if ( v19 > 5 )
              break;
            if ( nl_value_type_LC_NUMERIC[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 2:
          while ( 2 )
          {
            if ( v19 == 159 )
              goto LABEL_19;
            if ( nl_value_type_LC_TIME[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              goto LABEL_19;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 > v19 )
            {
              v20 = v17[v19];
              v21 = v20;
              if ( v7 < v20 )
                goto LABEL_19;
              continue;
            }
            goto LABEL_30;
          }
        case 3:
          while ( 2 )
          {
            if ( v19 > 0x12 )
              goto LABEL_19;
            if ( nl_value_type_LC_COLLATE[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              goto LABEL_19;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 > v19 )
            {
              v20 = v17[v19];
              v21 = v20;
              if ( v7 < v20 )
                goto LABEL_19;
              continue;
            }
            goto LABEL_30;
          }
        case 4:
          do
          {
            if ( v19 > 0x2D )
              break;
            if ( nl_value_type_LC_MONETARY[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 5:
          do
          {
            if ( v19 > 4 )
              break;
            if ( nl_value_type_LC_TELEPHONE[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 7:
          do
          {
            if ( v19 > 2 )
              break;
            if ( nl_value_type_LC_PAPER[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 8:
          do
          {
            if ( v19 > 6 )
              break;
            if ( nl_value_type_LC_NAME[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 9:
          do
          {
            if ( v19 > 0xC )
              break;
            if ( nl_value_type_LC_ADDRESS[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 10:
          do
          {
            if ( v19 > 4 )
              break;
            if ( nl_value_type_LC_TELEPHONE[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 11:
          do
          {
            if ( v19 > 1 )
              break;
            if ( nl_value_type_LC_MEASUREMENT[v19] != 5 )
              goto LABEL_29;
            if ( (v20 & 3) != 0 )
              break;
            ++v19;
            *v18 = *(_DWORD *)(v15[1] + v21);
            v18 += 2;
            if ( v12 <= v19 )
              goto LABEL_30;
            v20 = v17[v19];
            v21 = v20;
          }
          while ( v7 >= v20 );
          goto LABEL_19;
        case 12:
          while ( 2 )
          {
            if ( v19 > 0xF )
              goto LABEL_19;
            if ( nl_value_type_LC_IDENTIFICATION[v19] == 5 )
            {
              if ( (v20 & 3) != 0 )
                goto LABEL_19;
              ++v19;
              *v18 = *(_DWORD *)(v15[1] + v21);
              v18 += 2;
              if ( v12 > v19 )
              {
                v20 = v17[v19];
                v21 = v20;
                if ( v7 < v20 )
                  goto LABEL_19;
                continue;
              }
              goto LABEL_30;
            }
            break;
          }
LABEL_29:
          ++v19;
          *(_QWORD *)v18 = v15[1] + v21;
          v18 += 2;
          if ( v19 >= v12 )
            goto LABEL_30;
          continue;
        default:
          if ( a1 )
            _libc_assert_fail("category == LC_CTYPE", (__int64)"loadlocale.c", 0xCEu, (__int64)"_nl_intern_locale_data");
          while ( 2 )
          {
            if ( v19 <= 0x55 )
            {
              if ( nl_value_type_LC_CTYPE[v19] == 5 )
              {
                if ( (v20 & 3) != 0 )
                {
LABEL_19:
                  free(v15);
                  v15 = 0;
                  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
                  return v15;
                }
                ++v19;
                *v18 = *(_DWORD *)(v15[1] + v21);
                v18 += 2;
                if ( v12 <= v19 )
                  goto LABEL_30;
              }
              else
              {
                ++v19;
                *(_QWORD *)v18 = v15[1] + v21;
                v18 += 2;
                if ( v12 <= v19 )
                  goto LABEL_30;
              }
              v20 = v17[v19];
              v21 = v20;
              if ( v7 < v20 )
                goto LABEL_19;
              continue;
            }
            break;
          }
          while ( 1 )
          {
            ++v19;
            *(_QWORD *)v18 = v15[1] + v21;
            v18 += 2;
            if ( v19 >= v12 )
              break;
            v21 = (unsigned int)v17[v19];
            if ( v21 > v7 )
              goto LABEL_19;
          }
LABEL_30:
          if ( v16 )
            v24 = a1 == 0;
          else
            v24 = 0;
          if ( !v24 )
            return v15;
          goto LABEL_35;
      }
    }
  }
LABEL_35:
  v25 = v15[4];
  v26 = 0;
  *(_QWORD *)(v25 + 9) = 0x101010101010101LL;
  *(_WORD *)(v25 + 17) = 257;
  do
  {
    while ( 1 )
    {
      v27 = (unsigned __int8 *)v15[v26 + 48];
      if ( (_DWORD)v26 + 48 != *v27 || (v28 = 1, v27[1]) )
      {
        *(_BYTE *)(v25 + 8) = 1;
        v28 = (unsigned __int8)strlen(v27);
      }
      *(_BYTE *)(v25 + 9 + v26) = v28;
      if ( v26 )
        break;
      v26 = 1;
      *(_BYTE *)(v25 + 19) = v28;
    }
    if ( *(unsigned __int8 *)(v25 + 19) != v28 )
      *(_BYTE *)(v25 + 19) = 0;
    ++v26;
  }
  while ( v26 != 10 );
  return v15;
}
