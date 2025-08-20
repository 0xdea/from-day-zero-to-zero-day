ssize_t __fastcall dl_debug_vdprintf(int a1, int a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int8 *v4; // x19
  int v5; // w22
  unsigned __int64 v7; // x23
  __pid_t v8; // w27
  int v9; // w20
  __int64 v10; // x1
  int v11; // w1
  bool v12; // zf
  unsigned __int8 *v13; // x2
  int v15; // t1
  __int64 v17; // x4
  int v18; // w2
  unsigned int v20; // w1
  _BYTE *v21; // x19
  char v22; // w7
  int v23; // w4
  int v24; // w2
  _BYTE *v26; // x3
  __int64 v27; // x0
  int *v28; // x0
  void **v29; // x1
  __int64 v30; // x4
  _BYTE *v31; // x3
  _BYTE *v32; // x1
  size_t v34; // x1
  unsigned int *v35; // x0
  int v36; // w3
  unsigned __int64 v37; // x0
  int v38; // w8
  char *v39; // x1
  unsigned int v40; // w2
  char *v41; // x0
  char v42; // w7
  char *v43; // x1
  int v44; // w8
  size_t v45; // x3
  __int64 v46; // x1
  __pid_t v47; // w0
  unsigned __int64 v48; // x0
  __int64 v49; // x0
  void **v50; // x1
  __int64 v51; // x4
  int v52; // w9
  char *v53; // x2
  int *v54; // x0
  unsigned int *v55; // x0
  unsigned __int64 v56; // x0
  unsigned __int64 *v57; // x0
  char *v58; // [xsp+60h] [xbp+60h]
  char *v59; // [xsp+60h] [xbp+60h]
  char v60; // [xsp+68h] [xbp+68h]
  char v61; // [xsp+68h] [xbp+68h]
  int v62; // [xsp+6Ch] [xbp+6Ch]
  int v63; // [xsp+6Ch] [xbp+6Ch]
  __int64 v64; // [xsp+70h] [xbp+70h]
  int v65; // [xsp+78h] [xbp+78h]
  int v66; // [xsp+78h] [xbp+78h]
  _BYTE v68[10]; // [xsp+80h] [xbp+80h] BYREF
  __int16 v69; // [xsp+8Ah] [xbp+8Ah] BYREF
  struct iovec v70[144]; // [xsp+90h] [xbp+90h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a4 + 24);
  v7 = *(_QWORD *)a4;
  v64 = *(_QWORD *)(a4 + 8);
  if ( !*a3 )
  {
    v18 = 0;
    return linux_eabi_syscall(__NR_writev, a1, v70, v18);
  }
  v8 = 0;
  v9 = 0;
  do
  {
    if ( a2 == 1 )
    {
      if ( !v8 )
      {
        v47 = getpid();
        v8 = v47;
        if ( v47 < 0 )
          _libc_assert_fail(
            "pid >= 0 && sizeof (pid_t) <= 4",
            (__int64)"dl-printf.c",
            0x48u,
            (__int64)"_dl_debug_vdprintf");
        v48 = itoa_word(v47, (__int64)&v69, 0xAu, 0);
        if ( v48 > (unsigned __int64)v68 )
          memset(v68, 32, v48 - (_QWORD)v68);
        v69 = 2362;
      }
      if ( v9 > 63 )
        _libc_assert_fail("niov < NIOVMAX", (__int64)"dl-printf.c", 0x51u, (__int64)"_dl_debug_vdprintf");
      v10 = v9++;
      a2 = -1;
      v70[v10].iov_len = 12;
      v70[v10].iov_base = v68;
    }
    v11 = *v4;
    v12 = v11 == 37 || v11 == 0;
    if ( !v12 )
    {
      v13 = v4;
      while ( !a2 || v11 != 10 )
      {
        v15 = *++v13;
        v11 = v15;
        if ( v15 == 37 || v11 == 0 )
          goto LABEL_21;
      }
      v11 = 10;
LABEL_21:
      if ( v9 > 63 )
LABEL_129:
        _libc_assert_fail("niov < NIOVMAX", (__int64)"dl-printf.c", 0x5Eu, (__int64)"_dl_debug_vdprintf");
      v17 = v9;
      v70[v17].iov_len = v13 - v4;
      if ( v13 != v4 )
      {
        ++v9;
        v70[v17].iov_base = v4;
      }
      if ( v11 != 37 )
      {
        if ( v11 == 10 )
        {
          if ( v4 == v13 )
          {
            v49 = v9++;
            v70[v49].iov_base = v13;
            v70[v49].iov_len = 1;
          }
          else
          {
            ++v70[v9 - 1].iov_len;
          }
          v4 = v13 + 1;
          a2 = 1;
        }
        else
        {
          v4 = v13;
        }
        continue;
      }
LABEL_33:
      v20 = v13[1];
      if ( v20 == 48 )
      {
        v22 = 48;
        v21 = v13 + 2;
        v20 = v13[2];
      }
      else
      {
        v21 = v13 + 1;
        v22 = 32;
      }
      v23 = -1;
      if ( v20 == 42 )
      {
        if ( v5 < 0 )
        {
          if ( v5 + 8 <= 0 )
          {
            v28 = (int *)(v64 + v5);
            v5 += 8;
          }
          else
          {
            v28 = (int *)v7;
            v5 += 8;
            v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        else
        {
          v28 = (int *)v7;
          v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v23 = *v28;
        if ( *v28 > 19 )
          _libc_assert_fail("width < IFMTSIZE", (__int64)"dl-printf.c", 0x79u, (__int64)"_dl_debug_vdprintf");
        v20 = (unsigned __int8)*++v21;
      }
      v24 = -1;
      if ( v20 == 46 )
      {
        if ( v21[1] != 42 )
          goto LABEL_51;
        if ( v5 < 0 )
        {
          if ( v5 + 8 <= 0 )
          {
            v54 = (int *)(v64 + v5);
            v5 += 8;
          }
          else
          {
            v54 = (int *)v7;
            v5 += 8;
            v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        else
        {
          v54 = (int *)v7;
          v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v20 = (unsigned __int8)v21[2];
        v21 += 2;
        v24 = *v54;
      }
      if ( v20 == 108 || v20 == 122 )
      {
        v20 = (unsigned __int8)v21[1];
        v26 = v21 + 1;
        if ( v20 != 115 )
        {
          if ( v20 > 0x73 )
          {
            if ( v20 != 117 && v20 != 120 )
LABEL_51:
              _libc_assert_fail(
                "! \"invalid format specifier\"",
                (__int64)"dl-printf.c",
                0xDDu,
                (__int64)"_dl_debug_vdprintf");
          }
          else
          {
            ++v21;
            if ( v20 == 37 )
              goto LABEL_45;
            if ( v20 != 100 )
              goto LABEL_51;
          }
          if ( v5 < 0 )
          {
            if ( v5 + 8 <= 0 )
            {
              v57 = (unsigned __int64 *)(v64 + v5);
              v5 += 8;
            }
            else
            {
              v57 = (unsigned __int64 *)v7;
              v5 += 8;
              v7 = (v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
            }
          }
          else
          {
            v57 = (unsigned __int64 *)v7;
            v7 = (v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v37 = *v57;
          v21 = v26;
          if ( v20 == 100 )
          {
            v38 = v9 + 1;
            v39 = (char *)&v70[65].iov_base + 20 * v9 + 4;
            if ( (v37 & 0x8000000000000000LL) != 0 )
            {
              v56 = -(__int64)v37;
              goto LABEL_113;
            }
            v40 = 10;
            goto LABEL_77;
          }
LABEL_74:
          v38 = v9 + 1;
          v12 = v20 == 120;
          v39 = (char *)&v70[65].iov_base + 20 * v9 + 4;
          if ( v12 )
            v40 = 16;
          else
            v40 = 10;
          goto LABEL_77;
        }
        ++v21;
        if ( (v5 & 0x80000000) == 0 )
          goto LABEL_59;
      }
      else
      {
        if ( v20 != 115 )
        {
          if ( v20 > 0x73 )
          {
            if ( v20 == 117 )
              goto LABEL_71;
            if ( v20 != 120 )
              goto LABEL_51;
            if ( v5 < 0 )
              goto LABEL_102;
LABEL_72:
            v35 = (unsigned int *)v7;
            v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            if ( v20 == 37 )
            {
LABEL_45:
              v27 = v9++;
              v70[v27].iov_base = v21;
              v4 = v21 + 1;
              v70[v27].iov_len = 1;
              continue;
            }
            if ( v20 != 100 )
              goto LABEL_51;
LABEL_71:
            if ( (v5 & 0x80000000) == 0 )
              goto LABEL_72;
LABEL_102:
            if ( v5 + 8 > 0 )
            {
              v55 = (unsigned int *)v7;
              v7 = (v7 + 11) & 0xFFFFFFFFFFFFFFF8LL;
              v5 += 8;
              v36 = *v55;
              v37 = *v55;
              if ( v20 == 100 )
              {
LABEL_104:
                v38 = v9 + 1;
                v40 = 10;
                v39 = (char *)&v70[65].iov_base + 20 * v9 + 4;
                if ( v36 < 0 )
                {
                  v56 = (unsigned int)-v36;
LABEL_113:
                  v59 = v39;
                  v61 = v22;
                  v63 = v23;
                  v66 = v38;
                  v41 = (char *)itoa_word(v56, (__int64)v39, 0xAu, 0);
                  v53 = v41;
                  v43 = v59;
                  v44 = v66;
                  if ( v63 != -1 )
                  {
                    v51 = v63;
                    v42 = v61;
                    if ( v59 - v41 < v63 )
                    {
                      v52 = 1;
                      goto LABEL_92;
                    }
                  }
LABEL_95:
                  v41 = v53 - 1;
                  v45 = v43 - (v53 - 1);
                  *(v53 - 1) = 45;
                  goto LABEL_79;
                }
LABEL_77:
                v58 = v39;
                v60 = v22;
                v62 = v23;
                v65 = v38;
                v41 = (char *)itoa_word(v37, (__int64)v39, v40, 0);
                v42 = v60;
                v43 = v58;
                v44 = v65;
                if ( v62 == -1 )
                {
                  v45 = v58 - v41;
                }
                else
                {
                  v51 = v62;
                  v45 = v58 - v41;
                  v52 = 0;
                  if ( v62 > v58 - v41 )
                  {
LABEL_92:
                    v53 = v41;
                    do
                    {
                      *--v53 = v42;
                      v45 = v43 - v53;
                    }
                    while ( v43 - v53 < v51 );
                    if ( v52 )
                      goto LABEL_95;
                    v41 = v53;
                  }
                }
LABEL_79:
                v46 = v9;
                v4 = v21 + 1;
                v9 = v44;
                v70[v46].iov_base = v41;
                v70[v46].iov_len = v45;
                continue;
              }
              goto LABEL_74;
            }
            v35 = (unsigned int *)(v64 + v5);
            v5 += 8;
          }
          v36 = *v35;
          v37 = *v35;
          if ( v20 == 100 )
            goto LABEL_104;
          goto LABEL_74;
        }
        if ( (v5 & 0x80000000) == 0 )
        {
LABEL_59:
          v29 = (void **)v7;
          v7 = (v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_60;
        }
      }
      if ( v5 + 8 > 0 )
      {
        v50 = (void **)v7;
        v5 += 8;
        v7 = (v7 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        v30 = v9;
        v31 = *v50;
        v70[v9].iov_base = *v50;
        if ( *v31 )
        {
LABEL_61:
          v32 = v31;
          while ( *++v32 )
            ;
          v34 = v32 - v31;
          goto LABEL_64;
        }
LABEL_88:
        v34 = 0;
LABEL_64:
        if ( v24 != -1 && v34 > v24 )
          v34 = v24;
        ++v9;
        v4 = v21 + 1;
        v70[v30].iov_len = v34;
        continue;
      }
      v29 = (void **)(v64 + v5);
      v5 += 8;
LABEL_60:
      v30 = v9;
      v31 = *v29;
      v70[v9].iov_base = *v29;
      if ( *v31 )
        goto LABEL_61;
      goto LABEL_88;
    }
    if ( v9 > 63 )
      goto LABEL_129;
    v70[v9].iov_len = 0;
    if ( v11 == 37 )
    {
      v13 = v4;
      goto LABEL_33;
    }
  }
  while ( *v4 );
  v18 = v9;
  return linux_eabi_syscall(__NR_writev, a1, v70, v18);
}
