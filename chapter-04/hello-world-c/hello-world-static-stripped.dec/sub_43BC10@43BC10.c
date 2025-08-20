__int64 __fastcall sub_43BC10(int a1, __int64 *a2)
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
  unsigned __int64 v56; // x20
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
  __int64 v67; // x27
  __int64 v68; // x1
  unsigned __int64 v69; // x0
  unsigned __int16 v70; // w1
  __int64 *v71; // x0
  unsigned __int64 *v72; // x1
  __int64 v73; // x0
  __int64 v74; // x0
  int v75; // w0
  int v76; // w25
  size_t v77; // x26
  unsigned int *v78; // x0
  __int64 v79; // x6
  unsigned int v80; // w1
  __int64 v81; // x2
  _QWORD *v82; // x20
  __int64 v83; // x0
  double v84; // d0
  double v85; // d1
  double v86; // d2
  double v87; // d3
  double v88; // d4
  double v89; // d5
  double v90; // d6
  double v91; // d7
  __int64 *v92; // x19
  __int64 v93; // x0
  __int64 v94; // x0
  _QWORD *v95; // x23
  __int64 v96; // x0
  __int64 v97; // [xsp+0h] [xbp-10100h] BYREF
  _BYTE v98[1008]; // [xsp+10h] [xbp-100F0h] BYREF
  __int64 v99; // [xsp+400h] [xbp-FD00h]
  _BYTE v100[16]; // [xsp+10000h] [xbp-100h] BYREF
  __int64 v101; // [xsp+10010h] [xbp-F0h]
  int v102; // [xsp+1001Ch] [xbp-E4h]
  _BYTE v103[208]; // [xsp+10028h] [xbp-D8h] BYREF
  __int64 v104; // [xsp+100F8h] [xbp-8h]

  v102 = a1;
  v3 = (unsigned __int64 *)*a2;
  v104 = qword_48DD60;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD))loc_4438F0)(30, &qword_48DD60, 0);
  v4 = (_QWORD *)qword_496A88;
  if ( !qword_496A88 )
  {
LABEL_9:
    v7 = sub_42F180((__int64)v3, 0x2Eu);
    if ( v7 && (*(_BYTE *)(v7 + 1) & 0xBF) != 0 )
    {
      v40 = (unsigned __int8 *)(v7 + 1);
      v41 = sub_40DF40(v7 + 1, 0x40u);
      v55 = sub_421840(v40, v41 - (_QWORD)v40, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54);
      v56 = (unsigned __int64)v55;
      if ( !v55 )
        goto LABEL_53;
      if ( (unsigned int)sub_42F424((unsigned __int64)v55, (unsigned __int64)v40, v41 - (_QWORD)v40)
        || *(_BYTE *)(v56 + v41 - (_QWORD)v40) )
      {
        v65 = v40 - (unsigned __int8 *)v3;
        v66 = ifunc_40DFD0(v56);
        v67 = ifunc_40DFD0(v41) + 1;
        v68 = v65 + v66 + v67 + 15;
        v69 = v68 & 0xFFFFFFFFFFFF0000LL;
        v70 = v68 & 0xFFF0;
        v71 = (__int64 *)&v100[-v69];
        if ( v100 != (_BYTE *)v71 )
        {
          do
            v99 = 0;
          while ( &v97 != v71 );
        }
        v97 = 0;
        if ( v70 >= 0x400uLL )
          v99 = 0;
        v72 = v3;
        v3 = (unsigned __int64 *)v98;
        v73 = j_ifunc_40DC90(v98, v72, v65);
        v74 = j_ifunc_40DC90(v73 + v65, v56, v66);
        j_ifunc_40DC90(v74 + v66, v41, v67);
      }
      sub_40C1A0(v56, v57, v58, v59, v60, v61, v62, v63, v64);
    }
    if ( qword_496A90 )
    {
      v8 = qword_496A98;
      if ( qword_496A98 )
      {
LABEL_13:
        v9 = ifunc_40DFD0(v3);
        v10 = v9;
        if ( !v9 )
          goto LABEL_31;
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
LABEL_31:
          v15 = 0xFFFFFFFFLL;
          v10 = -1;
        }
        v16 = *(_DWORD *)(v8 + 16);
        v101 = *(unsigned int *)(v8 + 8);
        if ( v16 > 2 )
        {
          v17 = v15 % (v16 - 2) + 1;
          v18 = v15 % v16;
LABEL_19:
          v19 = (_DWORD *)(v8 + v101 + 12 * v18);
          while ( 1 )
          {
            v20 = v19[1];
            if ( !v20 )
              break;
            if ( *v19 == v10 )
            {
              v22 = sub_42F240(v3, v8 + v20);
              if ( !v22 )
              {
                v31 = v19[2];
                if ( v31 )
                {
                  v32 = dword_496AA4;
                  if ( qword_496AE0 != dword_496AA4 )
                    sub_41F250(
                      "headmap.len == archive_stat.st_size",
                      (__int64)"loadarchive.c",
                      0x136u,
                      (__int64)"_nl_load_locale_from_archive");
                  v33 = v103;
                  v34 = (unsigned int *)(v8 + v31 + 4LL);
                  v35 = (__int64 *)v103;
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
                      v82 = (_QWORD *)sub_40B890(
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
                      if ( !v82 )
                        goto LABEL_53;
                      v83 = sub_42F380(*a2);
                      v82[1] = v83;
                      if ( v83 )
                      {
                        v92 = v82 + 2;
                        v93 = qword_496A88;
                        qword_496A88 = (__int64)v82;
                        *v82 = v93;
                        do
                        {
                          if ( v22 == 6 )
                          {
                            v33 += 2;
                            ++v92;
                            v22 = 7;
                          }
                          v94 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))loc_43C1F0)(v22, *v33, v33[1]);
                          *v92 = v94;
                          if ( v94 )
                          {
                            *(_QWORD *)v94 = v82[1];
                            *(_DWORD *)(v94 + 24) = 2;
                            *(_DWORD *)(v94 + 40) = -1;
                          }
                          ++v22;
                          v33 += 2;
                          ++v92;
                        }
                        while ( v22 != 13 );
                        v95 = &v82[v102];
                        *a2 = v82[1];
                        result = v95[2];
                      }
                      else
                      {
                        sub_40C1A0((unsigned __int64)v82, v84, v85, v86, v87, v88, v89, v90, v91);
                        result = 0;
                      }
                      goto LABEL_7;
                    }
                  }
                }
                break;
              }
            }
            v18 += v17;
            v19 += 3 * v17;
            if ( v16 <= v18 )
            {
              v18 -= v16;
              goto LABEL_19;
            }
          }
        }
      }
    }
    else
    {
      qword_496A90 = (__int64)&qword_496A98;
      v75 = sub_410EE0("/usr/lib/locale/locale-archive", 0x80000);
      v76 = v75;
      if ( (v75 & 0x80000000) == 0 )
      {
        if ( (unsigned int)sub_410930(v75, (struct stat *)&unk_496AB0) != -1 )
        {
          v77 = qword_496AE0;
          v78 = (unsigned int *)sub_4117E0(0, qword_496AE0, 1, 2, v76, 0);
          v8 = (__int64)v78;
          if ( v78 != (unsigned int *)-1LL )
          {
            v79 = v78[8];
            v80 = v78[6];
            v81 = v78[2] + 12LL * v78[4];
            if ( v81 < v79 + 108LL * v78[9] )
              v81 = v79 + 108LL * v78[9];
            if ( v81 < v78[5] + v80 )
              v81 = v78[5] + v80;
            if ( v77 >= v81 )
            {
              sub_410CD0(v76);
              dword_496AA4 = v77;
              qword_496A98 = v8;
              goto LABEL_13;
            }
            sub_4118C0(v78, v77);
          }
        }
        sub_410CD0(v76);
      }
    }
LABEL_53:
    result = 0;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v5 = (unsigned __int64 *)v4[1];
    if ( v5 == v3 || !(unsigned int)sub_42F240(v3, v4[1]) )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      goto LABEL_9;
  }
  result = v4[v102 + 2];
  *a2 = (__int64)v5;
LABEL_7:
  if ( v104 != qword_48DD60 )
  {
    v96 = sub_412340();
    return sub_43C0F0(v96);
  }
  return result;
}
