void __fastcall sub_43BC10(int a1, _QWORD *a2)
{
  _BYTE *v3; // x21
  _QWORD *v4; // x19
  _BYTE *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x2
  __int64 v8; // x23
  __int64 v9; // x0
  unsigned int v10; // w26
  unsigned __int8 *v11; // x2
  unsigned __int8 *v12; // x0
  int v13; // t1
  unsigned __int64 v14; // t2
  unsigned __int64 v15; // x0
  unsigned int v16; // w28
  unsigned __int64 v17; // x24
  unsigned __int64 v18; // x20
  _DWORD *v19; // x19
  unsigned int v20; // w1
  __int64 v21; // x5
  unsigned int v22; // w27
  long double v23; // q0
  long double v24; // q1
  long double v25; // q2
  long double v26; // q3
  long double v27; // q4
  long double v28; // q5
  long double v29; // q6
  long double v30; // q7
  unsigned int v31; // w0
  unsigned int v32; // w7
  _QWORD *v33; // x25
  unsigned int *v34; // x0
  __int16 **v35; // x3
  __int64 v36; // x4
  unsigned int v37; // w1
  __int16 *v38; // x2
  __int64 v39; // x19
  __int64 v40; // x25
  __int64 v41; // x0
  __int64 v42; // x20
  __int64 v43; // x19
  __int64 v44; // x26
  __int64 v45; // x27
  __int64 v46; // x1
  unsigned __int64 v47; // x0
  unsigned __int16 v48; // w1
  __int64 *v49; // x0
  _BYTE *v50; // x1
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  unsigned int v54; // w25
  unsigned __int64 v55; // x26
  unsigned int *v56; // x0
  __int64 v57; // x6
  unsigned int v58; // w1
  __int64 v59; // x2
  _QWORD *v60; // x20
  __int64 v61; // x0
  __int64 *v62; // x19
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // [xsp+0h] [xbp-10100h] BYREF
  _BYTE v66[1008]; // [xsp+10h] [xbp-100F0h] BYREF
  __int64 v67; // [xsp+400h] [xbp-FD00h]
  _BYTE v68[16]; // [xsp+10000h] [xbp-100h] BYREF
  __int64 v69; // [xsp+10010h] [xbp-F0h]
  int v70; // [xsp+1001Ch] [xbp-E4h]
  _BYTE v71[208]; // [xsp+10028h] [xbp-D8h] BYREF
  __int64 v72; // [xsp+100F8h] [xbp-8h]

  v70 = a1;
  v3 = (_BYTE *)*a2;
  v72 = qword_48DD60;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD))loc_4438F0)(30, &qword_48DD60, 0);
  v4 = (_QWORD *)qword_496A88;
  if ( !qword_496A88 )
  {
LABEL_9:
    v6 = sub_42F180(v3, 46);
    if ( v6 )
    {
      v7 = *(unsigned __int8 *)(v6 + 1);
      if ( (v7 & 0xBF) != 0 )
      {
        v39 = v6 + 1;
        v40 = sub_40DF40(v6 + 1, 64);
        v41 = sub_421840(v39, v40 - v39);
        v42 = v41;
        if ( !v41 )
          goto LABEL_7;
        if ( (unsigned int)sub_42F424(v41, v39, v40 - v39) || *(_BYTE *)(v42 + v40 - v39) )
        {
          v43 = v39 - (_QWORD)v3;
          v44 = ifunc_40DFD0(v42);
          v45 = ifunc_40DFD0(v40) + 1;
          v46 = v43 + v44 + v45 + 15;
          v47 = v46 & 0xFFFFFFFFFFFF0000LL;
          v48 = v46 & 0xFFF0;
          v49 = (__int64 *)&v68[-v47];
          if ( v68 != (_BYTE *)v49 )
          {
            do
              v67 = 0;
            while ( &v65 != v49 );
          }
          v65 = 0;
          if ( v48 >= 0x400uLL )
            v67 = 0;
          v50 = v3;
          v3 = v66;
          v51 = j_ifunc_40DC90(v66, v50, v43);
          v52 = j_ifunc_40DC90(v51 + v43, v42, v44);
          j_ifunc_40DC90(v52 + v44, v40, v45);
        }
        sub_40C1A0(v42);
      }
    }
    if ( qword_496A90 )
    {
      v8 = qword_496A98;
      if ( !qword_496A98 )
        goto LABEL_7;
      goto LABEL_13;
    }
    qword_496A90 = (__int64)&qword_496A98;
    v53 = sub_410EE0("/usr/lib/locale/locale-archive", 0x80000, v7);
    v54 = v53;
    if ( (v53 & 0x80000000) != 0 )
      goto LABEL_7;
    if ( (unsigned int)sub_410930(v53, &unk_496AB0) != -1 )
    {
      v55 = qword_496AE0;
      v56 = (unsigned int *)sub_4117E0(0, qword_496AE0, 1, 2, v54, 0);
      v8 = (__int64)v56;
      if ( v56 != (unsigned int *)-1LL )
      {
        v57 = v56[8];
        v58 = v56[6];
        v59 = v56[2] + 12LL * v56[4];
        if ( v59 < v57 + 108LL * v56[9] )
          v59 = v57 + 108LL * v56[9];
        if ( v59 < v56[5] + v58 )
          v59 = v56[5] + v58;
        if ( v55 >= v59 )
        {
          sub_410CD0(v54);
          dword_496AA4 = v55;
          qword_496A98 = v8;
LABEL_13:
          v9 = ifunc_40DFD0(v3);
          v10 = v9;
          if ( !v9 )
            goto LABEL_31;
          v11 = &v3[v9];
          v12 = v3;
          do
          {
            v13 = *v12++;
            HIDWORD(v14) = v10;
            LODWORD(v14) = v10;
            v10 = v13 + (v14 >> 23);
          }
          while ( v12 != v11 );
          v15 = v10;
          if ( !v10 )
          {
LABEL_31:
            v15 = 0xFFFFFFFFLL;
            v10 = -1;
          }
          v16 = *(_DWORD *)(v8 + 16);
          v69 = *(unsigned int *)(v8 + 8);
          if ( v16 > 2 )
          {
            v17 = v15 % (v16 - 2) + 1;
            v18 = v15 % v16;
LABEL_19:
            v19 = (_DWORD *)(v8 + v69 + 12 * v18);
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
                    v33 = v71;
                    v34 = (unsigned int *)(v8 + v31 + 4LL);
                    v35 = (__int16 **)v71;
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
                      if ( v32 < *v34 + v37 )
                        break;
                      v38 = (__int16 *)(v8 + *v34);
                      v36 = (unsigned int)(v36 + 1);
                      *v35 = v38;
                      v35[1] = (__int16 *)v37;
                      v34 += 2;
                      v35 += 2;
                      if ( (_DWORD)v36 == 13 )
                      {
                        v60 = (_QWORD *)sub_40B890(
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
                                          v38,
                                          (__int64)v35,
                                          v36,
                                          v21);
                        if ( v60 )
                        {
                          v61 = sub_42F380(*a2);
                          v60[1] = v61;
                          if ( v61 )
                          {
                            v62 = v60 + 2;
                            v63 = qword_496A88;
                            qword_496A88 = (__int64)v60;
                            *v60 = v63;
                            do
                            {
                              if ( v22 == 6 )
                              {
                                v33 += 2;
                                ++v62;
                                v22 = 7;
                              }
                              v64 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))loc_43C1F0)(v22, *v33, v33[1]);
                              *v62 = v64;
                              if ( v64 )
                              {
                                *(_QWORD *)v64 = v60[1];
                                *(_DWORD *)(v64 + 24) = 2;
                                *(_DWORD *)(v64 + 40) = -1;
                              }
                              ++v22;
                              v33 += 2;
                              ++v62;
                            }
                            while ( v22 != 13 );
                            *a2 = v60[1];
                          }
                          else
                          {
                            sub_40C1A0(v60);
                          }
                        }
                        goto LABEL_7;
                      }
                    }
                  }
                  goto LABEL_7;
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
          goto LABEL_7;
        }
        sub_4118C0(v56, v55);
      }
    }
    sub_410CD0(v54);
    goto LABEL_7;
  }
  while ( 1 )
  {
    v5 = (_BYTE *)v4[1];
    if ( v5 == v3 || !(unsigned int)sub_42F240(v3, v4[1]) )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      goto LABEL_9;
  }
  *a2 = v5;
LABEL_7:
  if ( v72 != qword_48DD60 )
  {
    sub_412340();
    sub_43C0F0();
  }
}
