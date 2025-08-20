__int64 __fastcall nl_load_locale_from_archive(int a1, __int64 *a2)
{
  unsigned __int64 *v3; // x21
  _QWORD *v4; // x19
  unsigned __int64 *v5; // x20
  __int64 result; // x0
  __int64 v7; // x0
  __int64 v8; // x23
  __int64 v9; // x0
  unsigned int v10; // w26
  unsigned __int8 *v11; // x2
  unsigned __int64 *v12; // x0
  int v13; // t1
  unsigned __int64 v14; // t2
  unsigned __int64 v15; // x0
  unsigned int v16; // w28
  unsigned __int64 v17; // x24
  unsigned __int64 v18; // x20
  _DWORD *v19; // x19
  unsigned int v20; // w1
  void *v21; // x5
  unsigned int v22; // w27
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  unsigned int v31; // w0
  unsigned int v32; // w7
  _QWORD *v33; // x25
  unsigned int *v34; // x0
  __int64 *v35; // x3
  unsigned __int64 v36; // x4
  unsigned int v37; // w1
  void *v38; // x6
  __int64 v39; // x2
  unsigned __int8 *v40; // x19
  unsigned __int64 v41; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  void *v44; // x4
  void *v45; // x5
  void *v46; // x6
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  _DWORD *v55; // x0
  __int64 v56; // x20
  double v57; // d0
  double v58; // d1
  double v59; // d2
  double v60; // d3
  double v61; // d4
  double v62; // d5
  double v63; // d6
  double v64; // d7
  signed __int64 v65; // x19
  __int64 v66; // x26
  __int64 v67; // x1
  unsigned __int64 v68; // x0
  unsigned __int16 v69; // w1
  __int64 *v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  int v73; // w0
  int v74; // w25
  size_t v75; // x26
  unsigned int *v76; // x0
  __int64 v77; // x6
  unsigned int v78; // w1
  __int64 v79; // x2
  _QWORD *v80; // x20
  __int64 v81; // x0
  double v82; // d0
  double v83; // d1
  double v84; // d2
  double v85; // d3
  double v86; // d4
  double v87; // d5
  double v88; // d6
  double v89; // d7
  __int64 *v90; // x19
  __int64 v91; // x0
  __int64 v92; // x0
  _QWORD *v93; // x23
  __int64 v94; // [xsp+0h] [xbp-10100h] BYREF
  _BYTE v95[1008]; // [xsp+10h] [xbp-100F0h] BYREF
  __int64 v96; // [xsp+400h] [xbp-FD00h]
  _BYTE v97[16]; // [xsp+10000h] [xbp-100h] BYREF
  __int64 v98; // [xsp+10010h] [xbp-F0h]
  int v99; // [xsp+1001Ch] [xbp-E4h]
  _BYTE v100[208]; // [xsp+10028h] [xbp-D8h] BYREF

  v99 = a1;
  v3 = (unsigned __int64 *)*a2;
  sysconf(30, &_stack_chk_guard, 0);
  v4 = (_QWORD *)archloaded;
  if ( !archloaded )
  {
LABEL_7:
    v7 = strchr((__int64)v3, 0x2Eu);
    if ( v7 && (*(_BYTE *)(v7 + 1) & 0xBF) != 0 )
    {
      v40 = (unsigned __int8 *)(v7 + 1);
      v41 = strchrnul(v7 + 1, 0x40u);
      v55 = nl_normalize_codeset(
              v40,
              v41 - (_QWORD)v40,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
      v56 = (__int64)v55;
      if ( !v55 )
        return 0;
      if ( (unsigned int)strncmp((unsigned __int64)v55, (unsigned __int64)v40, v41 - (_QWORD)v40)
        || *(_BYTE *)(v56 + v41 - (_QWORD)v40) )
      {
        v65 = v40 - (unsigned __int8 *)v3;
        v66 = strlen(v56);
        v67 = v65 + v66 + strlen(v41) + 1 + 15;
        v68 = v67 & 0xFFFFFFFFFFFF0000LL;
        v69 = v67 & 0xFFF0;
        v70 = (__int64 *)&v97[-v68];
        if ( v97 != (_BYTE *)v70 )
        {
          do
            v96 = 0;
          while ( &v94 != v70 );
        }
        v94 = 0;
        if ( v69 >= 0x400uLL )
          v96 = 0;
        v3 = (unsigned __int64 *)v95;
        v71 = j_memcpy(v95);
        v72 = j_memcpy(v71 + v65);
        j_memcpy(v72 + v66);
      }
      free(v56, v57, v58, v59, v60, v61, v62, v63, v64);
    }
    if ( archmapped )
    {
      v8 = headmap;
      if ( headmap )
      {
LABEL_11:
        v9 = strlen(v3);
        v10 = v9;
        if ( !v9 )
          goto LABEL_29;
        v11 = (unsigned __int8 *)v3 + v9;
        v12 = v3;
        do
        {
          v13 = *(unsigned __int8 *)v12;
          v12 = (unsigned __int64 *)((char *)v12 + 1);
          HIDWORD(v14) = v10;
          LODWORD(v14) = v10;
          v10 = v13 + (v14 >> 23);
        }
        while ( v12 != (unsigned __int64 *)v11 );
        v15 = v10;
        if ( !v10 )
        {
LABEL_29:
          v15 = 0xFFFFFFFFLL;
          v10 = -1;
        }
        v16 = *(_DWORD *)(v8 + 16);
        v98 = *(unsigned int *)(v8 + 8);
        if ( v16 > 2 )
        {
          v17 = v15 % (v16 - 2) + 1;
          v18 = v15 % v16;
LABEL_17:
          v19 = (_DWORD *)(v8 + v98 + 12 * v18);
          while ( 1 )
          {
            v20 = v19[1];
            if ( !v20 )
              break;
            if ( *v19 == v10 )
            {
              v22 = strcmp(v3, v8 + v20);
              if ( !v22 )
              {
                v31 = v19[2];
                if ( v31 )
                {
                  v32 = dword_496AA4;
                  if ( qword_496AE0 != dword_496AA4 )
                    _libc_assert_fail(
                      "headmap.len == archive_stat.st_size",
                      (__int64)"loadarchive.c",
                      0x136u,
                      (__int64)"_nl_load_locale_from_archive");
                  v33 = v100;
                  v34 = (unsigned int *)(v8 + v31 + 4LL);
                  v35 = (__int64 *)v100;
                  LODWORD(v36) = 0;
                  while ( 1 )
                  {
                    if ( (_DWORD)v36 == 6 )
                    {
                      v35 += 2;
                      v34 += 2;
                      LODWORD(v36) = 7;
                    }
                    v37 = v34[1];
                    v38 = (void *)(*v34 + v37);
                    if ( v32 < (unsigned int)v38 )
                      break;
                    v39 = v8 + *v34;
                    v36 = (unsigned int)(v36 + 1);
                    *v35 = v39;
                    v35[1] = v37;
                    v34 += 2;
                    v35 += 2;
                    if ( (_DWORD)v36 == 13 )
                    {
                      v80 = (_QWORD *)malloc(
                                        0x78u,
                                        v23,
                                        v24,
                                        v25,
                                        v26,
                                        v27,
                                        v28,
                                        v29,
                                        v30,
                                        v37,
                                        v39,
                                        (__int64)v35,
                                        (void *)v36,
                                        v21,
                                        v38);
                      if ( !v80 )
                        return 0;
                      v81 = strdup(*a2);
                      v80[1] = v81;
                      if ( v81 )
                      {
                        v90 = v80 + 2;
                        v91 = archloaded;
                        archloaded = (__int64)v80;
                        *v80 = v91;
                        do
                        {
                          if ( v22 == 6 )
                          {
                            v33 += 2;
                            ++v90;
                            v22 = 7;
                          }
                          v92 = nl_intern_locale_data(v22, *v33, v33[1]);
                          *v90 = v92;
                          if ( v92 )
                          {
                            *(_QWORD *)v92 = v80[1];
                            *(_DWORD *)(v92 + 24) = 2;
                            *(_DWORD *)(v92 + 40) = -1;
                          }
                          ++v22;
                          v33 += 2;
                          ++v90;
                        }
                        while ( v22 != 13 );
                        v93 = &v80[v99];
                        *a2 = v80[1];
                        return v93[2];
                      }
                      else
                      {
                        free((__int64)v80, v82, v83, v84, v85, v86, v87, v88, v89);
                        return 0;
                      }
                    }
                  }
                }
                return 0;
              }
            }
            v18 += v17;
            v19 += 3 * v17;
            if ( v16 <= v18 )
            {
              v18 -= v16;
              goto LABEL_17;
            }
          }
        }
      }
    }
    else
    {
      archmapped = (__int64)&headmap;
      v73 = _open_nocancel("/usr/lib/locale/locale-archive", 0x80000);
      v74 = v73;
      if ( (v73 & 0x80000000) == 0 )
      {
        if ( (unsigned int)fstat64(v73, (struct stat *)&archive_stat) != -1 )
        {
          v75 = qword_496AE0;
          v76 = (unsigned int *)mmap64(0, qword_496AE0, 1, 2, v74, 0);
          v8 = (__int64)v76;
          if ( v76 != (unsigned int *)-1LL )
          {
            v77 = v76[8];
            v78 = v76[6];
            v79 = v76[2] + 12LL * v76[4];
            if ( v79 < v77 + 108LL * v76[9] )
              v79 = v77 + 108LL * v76[9];
            if ( v79 < v76[5] + v78 )
              v79 = v76[5] + v78;
            if ( v75 >= v79 )
            {
              _close_nocancel(v74);
              dword_496AA4 = v75;
              headmap = v8;
              goto LABEL_11;
            }
            munmap(v76, v75);
          }
        }
        _close_nocancel(v74);
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v5 = (unsigned __int64 *)v4[1];
    if ( v5 == v3 || !(unsigned int)strcmp(v3, v4[1]) )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      goto LABEL_7;
  }
  result = v4[v99 + 2];
  *a2 = (__int64)v5;
  return result;
}
