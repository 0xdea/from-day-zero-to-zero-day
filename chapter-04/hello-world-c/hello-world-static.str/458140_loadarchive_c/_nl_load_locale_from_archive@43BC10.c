__int64 __fastcall nl_load_locale_from_archive(int a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // x21
  __int64 v4; // x2
  _QWORD *v5; // x19
  unsigned __int8 *v6; // x20
  __int64 result; // x0
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x23
  __int64 v11; // x0
  unsigned int v12; // w26
  unsigned __int8 *v13; // x2
  unsigned __int8 *v14; // x0
  int v15; // t1
  unsigned __int64 v16; // t2
  unsigned __int64 v17; // x0
  unsigned int v18; // w28
  unsigned __int64 v19; // x24
  unsigned __int64 v20; // x20
  _DWORD *v21; // x19
  unsigned int v22; // w1
  __int64 v23; // x5
  unsigned int v24; // w27
  unsigned int v25; // w0
  unsigned int v26; // w7
  _QWORD *v27; // x25
  unsigned int *v28; // x0
  __int16 **v29; // x3
  __int64 v30; // x4
  unsigned int v31; // w1
  __int16 *v32; // x2
  __int64 v33; // x19
  __int64 v34; // x25
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x19
  __int64 v38; // x26
  __int64 v39; // x1
  unsigned __int64 v40; // x0
  unsigned __int16 v41; // w1
  __int64 *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  unsigned int v46; // w25
  unsigned __int64 v47; // x26
  unsigned int *v48; // x0
  __int64 v49; // x6
  unsigned int v50; // w1
  __int64 v51; // x2
  _QWORD *v52; // x20
  __int64 v53; // x0
  __int64 *v54; // x19
  __int64 v55; // x0
  __int64 v56; // x0
  _QWORD *v57; // x23
  __int64 v58; // [xsp+0h] [xbp-10100h] BYREF
  _BYTE v59[1008]; // [xsp+10h] [xbp-100F0h] BYREF
  __int64 v60; // [xsp+400h] [xbp-FD00h]
  _BYTE v61[16]; // [xsp+10000h] [xbp-100h] BYREF
  __int64 v62; // [xsp+10010h] [xbp-F0h]
  int v63; // [xsp+1001Ch] [xbp-E4h]
  _BYTE v64[208]; // [xsp+10028h] [xbp-D8h] BYREF

  v63 = a1;
  v3 = *a2;
  sysconf(30, &_stack_chk_guard, 0);
  v5 = (_QWORD *)archloaded;
  if ( !archloaded )
  {
LABEL_7:
    v8 = strchr(v3, 46, v4);
    if ( v8 )
    {
      v9 = *(unsigned __int8 *)(v8 + 1);
      if ( (v9 & 0xBF) != 0 )
      {
        v33 = v8 + 1;
        v34 = strchrnul(v8 + 1, 64);
        v35 = nl_normalize_codeset(v33, v34 - v33);
        v36 = v35;
        if ( !v35 )
          return 0;
        if ( (unsigned int)strncmp(v35, v33, v34 - v33) || *(_BYTE *)(v36 + v34 - v33) )
        {
          v37 = v33 - (_QWORD)v3;
          v38 = strlen(v36);
          v39 = v37 + v38 + strlen(v34) + 1 + 15;
          v40 = v39 & 0xFFFFFFFFFFFF0000LL;
          v41 = v39 & 0xFFF0;
          v42 = (__int64 *)&v61[-v40];
          if ( v61 != (_BYTE *)v42 )
          {
            do
              v60 = 0;
            while ( &v58 != v42 );
          }
          v58 = 0;
          if ( v41 >= 0x400uLL )
            v60 = 0;
          v3 = v59;
          v43 = j_memcpy(v59);
          v44 = j_memcpy(v43 + v37);
          j_memcpy(v44 + v38);
        }
        free(v36);
      }
    }
    if ( archmapped )
    {
      v10 = headmap;
      if ( headmap )
      {
LABEL_11:
        v11 = strlen(v3);
        v12 = v11;
        if ( !v11 )
          goto LABEL_29;
        v13 = &v3[v11];
        v14 = v3;
        do
        {
          v15 = *v14++;
          HIDWORD(v16) = v12;
          LODWORD(v16) = v12;
          v12 = v15 + (v16 >> 23);
        }
        while ( v14 != v13 );
        v17 = v12;
        if ( !v12 )
        {
LABEL_29:
          v17 = 0xFFFFFFFFLL;
          v12 = -1;
        }
        v18 = *(_DWORD *)(v10 + 16);
        v62 = *(unsigned int *)(v10 + 8);
        if ( v18 > 2 )
        {
          v19 = v17 % (v18 - 2) + 1;
          v20 = v17 % v18;
LABEL_17:
          v21 = (_DWORD *)(v10 + v62 + 12 * v20);
          while ( 1 )
          {
            v22 = v21[1];
            if ( !v22 )
              break;
            if ( *v21 == v12 )
            {
              v24 = strcmp(v3, v10 + v22);
              if ( !v24 )
              {
                v25 = v21[2];
                if ( v25 )
                {
                  v26 = dword_496AA4;
                  if ( qword_496AE0 != dword_496AA4 )
                    _libc_assert_fail(
                      "headmap.len == archive_stat.st_size",
                      (__int64)"loadarchive.c",
                      0x136u,
                      (__int64)"_nl_load_locale_from_archive");
                  v27 = v64;
                  v28 = (unsigned int *)(v10 + v25 + 4LL);
                  v29 = (__int16 **)v64;
                  LODWORD(v30) = 0;
                  while ( 1 )
                  {
                    if ( (_DWORD)v30 == 6 )
                    {
                      v29 += 2;
                      v28 += 2;
                      LODWORD(v30) = 7;
                    }
                    v31 = v28[1];
                    if ( v26 < *v28 + v31 )
                      break;
                    v32 = (__int16 *)(v10 + *v28);
                    v30 = (unsigned int)(v30 + 1);
                    *v29 = v32;
                    v29[1] = (__int16 *)v31;
                    v28 += 2;
                    v29 += 2;
                    if ( (_DWORD)v30 == 13 )
                    {
                      v52 = (_QWORD *)malloc(0x78u, v31, v32, (__int64)v29, v30, v23);
                      if ( !v52 )
                        return 0;
                      v53 = strdup(*a2);
                      v52[1] = v53;
                      if ( v53 )
                      {
                        v54 = v52 + 2;
                        v55 = archloaded;
                        archloaded = (__int64)v52;
                        *v52 = v55;
                        do
                        {
                          if ( v24 == 6 )
                          {
                            v27 += 2;
                            ++v54;
                            v24 = 7;
                          }
                          v56 = nl_intern_locale_data(v24, *v27, v27[1]);
                          *v54 = v56;
                          if ( v56 )
                          {
                            *(_QWORD *)v56 = v52[1];
                            *(_DWORD *)(v56 + 24) = 2;
                            *(_DWORD *)(v56 + 40) = -1;
                          }
                          ++v24;
                          v27 += 2;
                          ++v54;
                        }
                        while ( v24 != 13 );
                        v57 = &v52[v63];
                        *a2 = (unsigned __int8 *)v52[1];
                        return v57[2];
                      }
                      else
                      {
                        free(v52);
                        return 0;
                      }
                    }
                  }
                }
                return 0;
              }
            }
            v20 += v19;
            v21 += 3 * v19;
            if ( v18 <= v20 )
            {
              v20 -= v18;
              goto LABEL_17;
            }
          }
        }
      }
    }
    else
    {
      archmapped = (__int64)&headmap;
      v45 = _open_nocancel("/usr/lib/locale/locale-archive", 0x80000, v9);
      v46 = v45;
      if ( (v45 & 0x80000000) == 0 )
      {
        if ( (unsigned int)fstat64(v45, &archive_stat) != -1 )
        {
          v47 = qword_496AE0;
          v48 = (unsigned int *)mmap64(0, qword_496AE0, 1, 2, v46, 0);
          v10 = (__int64)v48;
          if ( v48 != (unsigned int *)-1LL )
          {
            v49 = v48[8];
            v50 = v48[6];
            v51 = v48[2] + 12LL * v48[4];
            if ( v51 < v49 + 108LL * v48[9] )
              v51 = v49 + 108LL * v48[9];
            if ( v51 < v48[5] + v50 )
              v51 = v48[5] + v50;
            if ( v47 >= v51 )
            {
              _close_nocancel(v46);
              dword_496AA4 = v47;
              headmap = v10;
              goto LABEL_11;
            }
            munmap(v48, v47);
          }
        }
        _close_nocancel(v46);
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = (unsigned __int8 *)v5[1];
    if ( v6 == v3 || !(unsigned int)strcmp(v3, v5[1]) )
      break;
    v5 = (_QWORD *)*v5;
    if ( !v5 )
      goto LABEL_7;
  }
  result = v5[v63 + 2];
  *a2 = v6;
  return result;
}
