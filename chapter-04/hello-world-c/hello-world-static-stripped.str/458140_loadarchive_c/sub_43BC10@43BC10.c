__int64 __fastcall sub_43BC10(int a1, _QWORD *a2)
{
  _BYTE *v3; // x21
  _QWORD *v4; // x19
  _BYTE *v5; // x20
  __int64 result; // x0
  __int64 v7; // x0
  __int64 v8; // x2
  __int64 v9; // x23
  __int64 v10; // x0
  unsigned int v11; // w26
  unsigned __int8 *v12; // x2
  unsigned __int8 *v13; // x0
  int v14; // t1
  unsigned __int64 v15; // t2
  unsigned __int64 v16; // x0
  unsigned int v17; // w28
  unsigned __int64 v18; // x24
  unsigned __int64 v19; // x20
  _DWORD *v20; // x19
  unsigned int v21; // w1
  __int64 v22; // x5
  unsigned int v23; // w27
  long double v24; // q0
  long double v25; // q1
  long double v26; // q2
  long double v27; // q3
  long double v28; // q4
  long double v29; // q5
  long double v30; // q6
  long double v31; // q7
  unsigned int v32; // w0
  unsigned int v33; // w7
  _QWORD *v34; // x25
  unsigned int *v35; // x0
  __int16 **v36; // x3
  __int64 v37; // x4
  unsigned int v38; // w1
  __int16 *v39; // x2
  __int64 v40; // x19
  __int64 v41; // x25
  __int64 v42; // x0
  __int64 v43; // x20
  __int64 v44; // x19
  __int64 v45; // x26
  __int64 v46; // x27
  __int64 v47; // x1
  unsigned __int64 v48; // x0
  unsigned __int16 v49; // w1
  __int64 *v50; // x0
  _BYTE *v51; // x1
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  unsigned int v55; // w25
  unsigned __int64 v56; // x26
  unsigned int *v57; // x0
  __int64 v58; // x6
  unsigned int v59; // w1
  __int64 v60; // x2
  _QWORD *v61; // x20
  __int64 v62; // x0
  __int64 *v63; // x19
  __int64 v64; // x0
  __int64 v65; // x0
  _QWORD *v66; // x23
  __int64 v67; // x0
  __int64 v68; // [xsp+0h] [xbp-10100h] BYREF
  _BYTE v69[1008]; // [xsp+10h] [xbp-100F0h] BYREF
  __int64 v70; // [xsp+400h] [xbp-FD00h]
  _BYTE v71[16]; // [xsp+10000h] [xbp-100h] BYREF
  __int64 v72; // [xsp+10010h] [xbp-F0h]
  int v73; // [xsp+1001Ch] [xbp-E4h]
  _BYTE v74[208]; // [xsp+10028h] [xbp-D8h] BYREF
  __int64 v75; // [xsp+100F8h] [xbp-8h]

  v73 = a1;
  v3 = (_BYTE *)*a2;
  v75 = qword_48DD60;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD))loc_4438F0)(30, &qword_48DD60, 0);
  v4 = (_QWORD *)qword_496A88;
  if ( !qword_496A88 )
  {
LABEL_9:
    v7 = sub_42F180(v3, 46);
    if ( v7 )
    {
      v8 = *(unsigned __int8 *)(v7 + 1);
      if ( (v8 & 0xBF) != 0 )
      {
        v40 = v7 + 1;
        v41 = sub_40DF40(v7 + 1, 64);
        v42 = sub_421840(v40, v41 - v40);
        v43 = v42;
        if ( !v42 )
          goto LABEL_53;
        if ( (unsigned int)sub_42F424(v42, v40, v41 - v40) || *(_BYTE *)(v43 + v41 - v40) )
        {
          v44 = v40 - (_QWORD)v3;
          v45 = ifunc_40DFD0(v43);
          v46 = ifunc_40DFD0(v41) + 1;
          v47 = v44 + v45 + v46 + 15;
          v48 = v47 & 0xFFFFFFFFFFFF0000LL;
          v49 = v47 & 0xFFF0;
          v50 = (__int64 *)&v71[-v48];
          if ( v71 != (_BYTE *)v50 )
          {
            do
              v70 = 0;
            while ( &v68 != v50 );
          }
          v68 = 0;
          if ( v49 >= 0x400uLL )
            v70 = 0;
          v51 = v3;
          v3 = v69;
          v52 = j_ifunc_40DC90(v69, v51, v44);
          v53 = j_ifunc_40DC90(v52 + v44, v43, v45);
          j_ifunc_40DC90(v53 + v45, v41, v46);
        }
        sub_40C1A0(v43);
      }
    }
    if ( qword_496A90 )
    {
      v9 = qword_496A98;
      if ( qword_496A98 )
      {
LABEL_13:
        v10 = ifunc_40DFD0(v3);
        v11 = v10;
        if ( !v10 )
          goto LABEL_31;
        v12 = &v3[v10];
        v13 = v3;
        do
        {
          v14 = *v13++;
          HIDWORD(v15) = v11;
          LODWORD(v15) = v11;
          v11 = v14 + (v15 >> 23);
        }
        while ( v13 != v12 );
        v16 = v11;
        if ( !v11 )
        {
LABEL_31:
          v16 = 0xFFFFFFFFLL;
          v11 = -1;
        }
        v17 = *(_DWORD *)(v9 + 16);
        v72 = *(unsigned int *)(v9 + 8);
        if ( v17 > 2 )
        {
          v18 = v16 % (v17 - 2) + 1;
          v19 = v16 % v17;
LABEL_19:
          v20 = (_DWORD *)(v9 + v72 + 12 * v19);
          while ( 1 )
          {
            v21 = v20[1];
            if ( !v21 )
              break;
            if ( *v20 == v11 )
            {
              v23 = sub_42F240(v3, v9 + v21);
              if ( !v23 )
              {
                v32 = v20[2];
                if ( v32 )
                {
                  v33 = dword_496AA4;
                  if ( qword_496AE0 != dword_496AA4 )
                    sub_41F250(
                      "headmap.len == archive_stat.st_size",
                      (__int64)"loadarchive.c",
                      0x136u,
                      (__int64)"_nl_load_locale_from_archive");
                  v34 = v74;
                  v35 = (unsigned int *)(v9 + v32 + 4LL);
                  v36 = (__int16 **)v74;
                  LODWORD(v37) = 0;
                  while ( 1 )
                  {
                    if ( (_DWORD)v37 == 6 )
                    {
                      v36 += 2;
                      v35 += 2;
                      LODWORD(v37) = 7;
                    }
                    v38 = v35[1];
                    if ( v33 < *v35 + v38 )
                      break;
                    v39 = (__int16 *)(v9 + *v35);
                    v37 = (unsigned int)(v37 + 1);
                    *v36 = v39;
                    v36[1] = (__int16 *)v38;
                    v35 += 2;
                    v36 += 2;
                    if ( (_DWORD)v37 == 13 )
                    {
                      v61 = (_QWORD *)sub_40B890(
                                        0x78u,
                                        v24,
                                        v25,
                                        v26,
                                        v27,
                                        v28,
                                        v29,
                                        v30,
                                        v31,
                                        v38,
                                        v39,
                                        (__int64)v36,
                                        v37,
                                        v22);
                      if ( !v61 )
                        goto LABEL_53;
                      v62 = sub_42F380(*a2);
                      v61[1] = v62;
                      if ( v62 )
                      {
                        v63 = v61 + 2;
                        v64 = qword_496A88;
                        qword_496A88 = (__int64)v61;
                        *v61 = v64;
                        do
                        {
                          if ( v23 == 6 )
                          {
                            v34 += 2;
                            ++v63;
                            v23 = 7;
                          }
                          v65 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))loc_43C1F0)(v23, *v34, v34[1]);
                          *v63 = v65;
                          if ( v65 )
                          {
                            *(_QWORD *)v65 = v61[1];
                            *(_DWORD *)(v65 + 24) = 2;
                            *(_DWORD *)(v65 + 40) = -1;
                          }
                          ++v23;
                          v34 += 2;
                          ++v63;
                        }
                        while ( v23 != 13 );
                        v66 = &v61[v73];
                        *a2 = v61[1];
                        result = v66[2];
                      }
                      else
                      {
                        sub_40C1A0(v61);
                        result = 0;
                      }
                      goto LABEL_7;
                    }
                  }
                }
                break;
              }
            }
            v19 += v18;
            v20 += 3 * v18;
            if ( v17 <= v19 )
            {
              v19 -= v17;
              goto LABEL_19;
            }
          }
        }
      }
    }
    else
    {
      qword_496A90 = (__int64)&qword_496A98;
      v54 = sub_410EE0("/usr/lib/locale/locale-archive", 0x80000, v8);
      v55 = v54;
      if ( (v54 & 0x80000000) == 0 )
      {
        if ( (unsigned int)sub_410930(v54, &unk_496AB0) != -1 )
        {
          v56 = qword_496AE0;
          v57 = (unsigned int *)sub_4117E0(0, qword_496AE0, 1, 2, v55, 0);
          v9 = (__int64)v57;
          if ( v57 != (unsigned int *)-1LL )
          {
            v58 = v57[8];
            v59 = v57[6];
            v60 = v57[2] + 12LL * v57[4];
            if ( v60 < v58 + 108LL * v57[9] )
              v60 = v58 + 108LL * v57[9];
            if ( v60 < v57[5] + v59 )
              v60 = v57[5] + v59;
            if ( v56 >= v60 )
            {
              sub_410CD0(v55);
              dword_496AA4 = v56;
              qword_496A98 = v9;
              goto LABEL_13;
            }
            sub_4118C0(v57, v56);
          }
        }
        sub_410CD0(v55);
      }
    }
LABEL_53:
    result = 0;
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
  result = v4[v73 + 2];
  *a2 = v5;
LABEL_7:
  if ( v75 != qword_48DD60 )
  {
    v67 = sub_412340();
    return sub_43C0F0(v67);
  }
  return result;
}
