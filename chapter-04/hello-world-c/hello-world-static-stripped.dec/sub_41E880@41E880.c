__int64 __fastcall sub_41E880(int a1, char *a2)
{
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 i; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 v10; // x22
  _BYTE *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x27
  __int64 v14; // x0
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  void (*v23)(void); // x0
  char **v24; // x20
  char *v25; // x0
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  char *v34; // x22
  char **v36; // x0
  _QWORD *v37; // x0
  __int64 v38; // x0
  double v39; // d0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  char *v47; // x24
  char *v48; // x27
  char ***v49; // x28
  void (*v50)(void); // x0
  char *v51; // x0
  double v52; // d0
  double v53; // d1
  double v54; // d2
  double v55; // d3
  double v56; // d4
  double v57; // d5
  double v58; // d6
  double v59; // d7
  double v60; // d0
  double v61; // d1
  double v62; // d2
  double v63; // d3
  double v64; // d4
  double v65; // d5
  double v66; // d6
  double v67; // d7
  char *v68; // x0
  char *v69; // x0
  __int64 v70; // x2
  int8x16_t *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x24
  __int64 v74; // x28
  __int64 v75; // x26
  double v76; // d0
  double v77; // d1
  double v78; // d2
  double v79; // d3
  double v80; // d4
  double v81; // d5
  double v82; // d6
  double v83; // d7
  __int64 v84; // x2
  _BYTE *v85; // x0
  int v86; // w0
  int v87; // w0
  __int64 v88; // x0
  unsigned __int64 v89; // [xsp+8h] [xbp-108h]
  char **v90; // [xsp+18h] [xbp-F8h]
  unsigned __int64 v91; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v92; // [xsp+30h] [xbp-E0h] BYREF
  char *v93[13]; // [xsp+38h] [xbp-D8h] BYREF
  char *v94[13]; // [xsp+A0h] [xbp-70h] BYREF
  __int64 v95; // [xsp+108h] [xbp-8h]
  char *v96; // [xsp+120h] [xbp+10h]
  __int64 v97; // [xsp+128h] [xbp+18h]
  __int64 v98; // [xsp+140h] [xbp+30h]
  __int64 v99; // [xsp+148h] [xbp+38h]
  __int64 v100; // [xsp+150h] [xbp+40h]
  __int64 v101; // [xsp+158h] [xbp+48h]
  __int64 v102; // [xsp+160h] [xbp+50h]
  __int64 v103; // [xsp+168h] [xbp+58h]

  v10 = a1;
  v95 = qword_48DD60;
  if ( (unsigned __int64)a1 > 0xC )
  {
    v34 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  else
  {
    v97 = v3;
    v2 = a2;
    if ( !a2 )
    {
      v3 = v97;
      v34 = (char *)off_491820[a1 + 16];
      goto LABEL_28;
    }
    v99 = v5;
    v101 = v7;
    i = a1 + 16LL;
    sub_42E1E0(&unk_4968B8, a2, &qword_48DD60);
    if ( !(unsigned int)sub_42F240(v2, off_491820[v10 + 16]) )
    {
      sub_42DFB0(&unk_4968B8);
      v34 = (char *)off_491820[i];
      v3 = v97;
      v5 = v99;
      v7 = v101;
      goto LABEL_28;
    }
    v91 = 0;
    v92 = 0;
    v11 = (_BYTE *)sub_422890("LOCPATH");
    if ( v11 && *v11 && ((unsigned int)sub_42EE80() || (unsigned int)sub_42ED90(&v91, &v92, "/usr/lib/locale", 58)) )
    {
      v34 = 0;
      sub_42DFB0(&unk_4968B8);
      v3 = v97;
      v5 = v99;
      v7 = v101;
      goto LABEL_28;
    }
    if ( (_DWORD)v10 != 6 )
    {
      v102 = v8;
      v103 = v9;
      v13 = qword_48F930[v10];
      v94[0] = v2;
      if ( v13 )
      {
        v14 = sub_43B3B0(v91, v92, (unsigned int)v10, v94);
        i = v14;
        if ( !v14 )
          goto LABEL_80;
        v2 = v94[0];
        if ( *(_DWORD *)(v14 + 40) != -1 )
          *(_DWORD *)(v14 + 40) = -1;
      }
      else
      {
        i = 0;
      }
      if ( v2 == "C" || (v94[0] = (char *)sub_42F380(v2)) != 0 )
      {
        v2 = (char *)sub_41E580(v10, v94);
        if ( v2 )
        {
          if ( v13 )
          {
            off_491820[v10] = (char **)i;
            v23 = (void (*)(void))off_48F9A0[v10];
            if ( v23 )
              v23();
          }
          v24 = (char **)v94[0];
          v25 = (char *)off_491820[v10 + 16];
          if ( v94[0] != v25 )
          {
            if ( v25 != "C" )
              sub_40C1A0((unsigned __int64)v25, v15, v16, v17, v18, v19, v20, v21, v22);
            off_491820[v10 + 16] = v24;
          }
          if ( v2 != off_4918D0[0] )
          {
            if ( off_4918D0[0] != "C" )
              sub_40C1A0((unsigned __int64)off_4918D0[0], v15, v16, v17, v18, v19, v20, v21, v22);
            off_4918D0[0] = v2;
          }
          LODWORD(qword_496940) = qword_496940 + 1;
          goto LABEL_26;
        }
        if ( v94[0] != "C" )
          sub_40C1A0((unsigned __int64)v94[0], v15, v16, v17, v18, v19, v20, v21, v22);
      }
LABEL_80:
      v94[0] = 0;
LABEL_26:
      sub_42DFB0(&unk_4968B8);
      sub_40C1A0(v91, v26, v27, v28, v29, v30, v31, v32, v33);
      v34 = v94[0];
      v3 = v97;
      v5 = v99;
      v7 = v101;
      v8 = v102;
      v9 = v103;
      goto LABEL_28;
    }
    LODWORD(i) = 0;
    v36 = v93;
    v90 = v93;
    do
    {
      while ( (_DWORD)i == 6 )
      {
        v37 = v36 + 1;
        LODWORD(i) = 8;
        *v37 = v2;
        v36 = (char **)(v37 + 1);
      }
      LODWORD(i) = i + 1;
      *v36++ = v2;
    }
    while ( (_DWORD)i != 13 );
    v89 = sub_42F180(v2, 59, v12);
    if ( v89 )
    {
      v89 = sub_42F380(v2);
      v71 = (int8x16_t *)v89;
      if ( v89 )
      {
        v102 = v8;
        v103 = v9;
        while ( 1 )
        {
          v72 = sub_42F180(v71, 61, v70);
          v73 = v72;
          if ( !v72 )
            break;
          v74 = v72 - (_QWORD)v71;
          v75 = 0;
          while ( 1 )
          {
            if ( v75 == 6 )
              v75 = 7;
            if ( v74 == byte_456930[v75]
              && !(unsigned int)sub_40DAC0(
                                  v71,
                                  (int8x16_t *)&aLcCollate[(unsigned __int8)asc_45B298[v75]],
                                  v73 - (_QWORD)v71) )
            {
              break;
            }
            if ( ++v75 == 13 )
              goto LABEL_90;
          }
          v93[(int)v75] = (char *)(v73 + 1);
          v85 = (_BYTE *)sub_42F180(v73 + 1, 59, v84);
          if ( !v85 )
            break;
          *v85 = 0;
          v71 = (int8x16_t *)(v85 + 1);
        }
        v86 = 0;
        while ( 1 )
        {
          if ( v86 == 6 )
          {
            ++v90;
            v86 = 7;
          }
          if ( *v90 == v2 )
            break;
          ++v86;
          ++v90;
          if ( v86 == 13 )
            goto LABEL_45;
        }
LABEL_90:
        sub_42DFB0(&unk_4968B8);
        sub_40C1A0(v89, v76, v77, v78, v79, v80, v81, v82, v83);
        v8 = v102;
        v9 = v103;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      }
      else
      {
        sub_42DFB0(&unk_4968B8);
      }
      v3 = v97;
      v34 = 0;
      v5 = v99;
      v7 = v101;
    }
    else
    {
      while ( (_DWORD)i )
      {
        LODWORD(v34) = i - 1;
        if ( (_DWORD)i == 7 )
        {
          LODWORD(i) = 5;
        }
        else
        {
          v87 = i;
          LODWORD(i) = i - 1;
          LODWORD(v34) = v87;
        }
        v38 = sub_43B3B0(v91, v92, (unsigned int)i, &v93[(int)i]);
        v94[(int)i] = (char *)v38;
        if ( v38 )
        {
          if ( *(_DWORD *)(v38 + 40) != -1 )
            *(_DWORD *)(v38 + 40) = -1;
          v47 = v93[(int)i];
          if ( v47 != "C" )
          {
            v102 = v8;
            v103 = v9;
            v48 = (char *)off_491820[(int)i + 16];
            if ( (unsigned int)sub_42F240(v47, v48) )
            {
              v68 = (char *)sub_42F380(v47);
              v93[(int)i] = v68;
              v8 = v102;
              v9 = v103;
              if ( !v68 )
                goto LABEL_68;
            }
            else
            {
              v93[(int)i] = v48;
LABEL_45:
              v8 = v102;
              v9 = v103;
            }
          }
        }
        else if ( v93[(int)i] != "C" )
        {
LABEL_68:
          if ( (_DWORD)v34 != 13 )
            goto LABEL_69;
LABEL_81:
          v34 = 0;
          goto LABEL_66;
        }
      }
      v34 = (char *)sub_41E580(6, v93);
      if ( !v34 )
      {
LABEL_69:
        v2 = (char *)((int)v34 + 1);
        do
        {
          if ( (_DWORD)v34 == 6 )
          {
            ++v2;
            LODWORD(v34) = 7;
          }
          v69 = v93[(_QWORD)v2 - 1];
          if ( v69 != "C" && v69 != (char *)*(&off_491898 + (_QWORD)v2) )
            sub_40C1A0((unsigned __int64)v69, v39, v40, v41, v42, v43, v44, v45, v46);
          LODWORD(v34) = (_DWORD)v34 + 1;
          ++v2;
        }
        while ( (_DWORD)v34 != 13 );
        goto LABEL_81;
      }
      v102 = v8;
      v103 = v9;
      v49 = off_491820;
      for ( i = 1; i != 14; ++i )
      {
        if ( (_DWORD)i == 7 )
        {
          ++v49;
          i = 8;
        }
        if ( qword_48F930[i - 1] )
        {
          *v49 = (char **)v94[i - 1];
          v50 = (void (*)(void))off_48F9A0[i - 1];
          if ( v50 )
            v50();
        }
        v51 = (char *)v49[16];
        v2 = v93[i - 1];
        if ( v2 != v51 )
        {
          if ( v51 != "C" )
            sub_40C1A0((unsigned __int64)v51, v39, v40, v41, v42, v43, v44, v45, v46);
          v49[16] = (char **)v2;
        }
        ++v49;
      }
      if ( v34 != off_4918D0[0] )
      {
        if ( off_4918D0[0] != "C" )
          sub_40C1A0((unsigned __int64)off_4918D0[0], v39, v40, v41, v42, v43, v44, v45, v46);
        off_4918D0[0] = v34;
      }
      v8 = v102;
      v9 = v103;
      LODWORD(qword_496940) = qword_496940 + 1;
LABEL_66:
      sub_42DFB0(&unk_4968B8);
      sub_40C1A0(v91, v52, v53, v54, v55, v56, v57, v58, v59);
      sub_40C1A0(v89, v60, v61, v62, v63, v64, v65, v66, v67);
      v3 = v97;
      v5 = v99;
      v7 = v101;
    }
  }
LABEL_28:
  if ( v95 == qword_48DD60 )
    return (__int64)v34;
  v96 = v2;
  v97 = v3;
  v98 = v4;
  v99 = v5;
  v100 = i;
  v101 = v7;
  v102 = v8;
  v103 = v9;
  v88 = sub_412340();
  return sub_41EF50(v88);
}
