__int64 __fastcall sub_4477A0(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13,
        long double a14)
{
  __int64 v15; // x0
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  unsigned int v20; // w20
  __int64 v21; // x23
  __int64 *v22; // x24
  __int64 v23; // x2
  int *i; // x28
  const char *v25; // x23
  __int64 v26; // x10
  __int64 v27; // x21
  __int64 v28; // x26
  int v29; // w22
  __int64 v30; // x12
  __int64 v31; // x0
  __int64 v32; // x0
  unsigned __int16 *v33; // x25
  unsigned int v34; // w1
  char *v35; // x19
  __int64 v36; // x0
  long double v37; // q0
  long double v38; // q1
  long double v39; // q2
  long double v40; // q3
  long double v41; // q4
  long double v42; // q5
  long double v43; // q6
  long double v44; // q7
  int v45; // w0
  unsigned int v46; // w1
  unsigned int v47; // w0
  __int64 j; // x1
  __int64 v49; // x0
  unsigned int v50; // w21
  char v51; // w2
  __int64 v52; // x1
  __int64 v53; // x11
  unsigned int *k; // x9
  char *m; // x1
  __int16 v56; // w3
  __int64 v57; // x4
  __int64 v58; // x6
  __int64 v59; // x5
  unsigned int v60; // w2
  unsigned int v61; // w1
  __int64 n; // x1
  __int64 v63; // x4
  __int64 v64; // x3
  unsigned int v65; // w2
  __int64 v67; // x26
  char *v68; // x1
  const char *v69; // x2
  char *v70; // x1
  char *v71; // x19
  __int64 v72; // x0
  long double v73; // q0
  long double v74; // q1
  long double v75; // q2
  long double v76; // q3
  long double v77; // q4
  long double v78; // q5
  long double v79; // q6
  long double v80; // q7
  __int64 v81; // x0
  __int64 v82; // x21
  __int64 *v83; // x19
  __int64 v84; // x0
  __int64 v85; // t1
  char *v86; // x1
  char *v87; // x1
  char *v88; // x1
  __int64 v89; // [xsp+60h] [xbp+60h]
  __int64 v90; // [xsp+60h] [xbp+60h]
  __int64 v91; // [xsp+70h] [xbp+70h]
  __int16 v92; // [xsp+78h] [xbp+78h]
  __int64 v93; // [xsp+90h] [xbp+90h]
  __int64 v96; // [xsp+A8h] [xbp+A8h]
  _BYTE v97[5]; // [xsp+C3h] [xbp+C3h] BYREF
  char *v98[3]; // [xsp+C8h] [xbp+C8h] BYREF

  v15 = a1[13];
  if ( !v15 )
    return 0;
  v16 = *(_QWORD *)(v15 + 8);
  if ( (*((_BYTE *)a1 + 870) & 0x20) == 0 )
  {
    v17 = a1[53];
    v96 = v17;
    v93 = a1[55];
    if ( v17 )
      goto LABEL_4;
LABEL_42:
    v20 = 0;
    if ( !v93 )
      return 0;
    goto LABEL_43;
  }
  v16 += *a1;
  v17 = a1[53];
  v93 = a1[55];
  v96 = v17;
  if ( !v17 )
    goto LABEL_42;
LABEL_4:
  v18 = *a1;
  v19 = *(_QWORD *)(v17 + 8);
  v91 = *a1 + v19;
  if ( *(_WORD *)v91 != 1 )
  {
    v71 = (char *)a1[1];
    v97[0] = 0;
    if ( !*v71 )
    {
      v71 = (char *)off_491918;
      if ( !off_491918 )
        v71 = "<main program>";
    }
    v72 = sub_4244D0(*(unsigned __int16 *)(v18 + v19), v97, 10, 0);
    sub_4324A0(
      (const char **)v98,
      v71,
      "unsupported version %s of Verneed record",
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v72);
LABEL_98:
    v81 = 0;
    goto LABEL_99;
  }
  v20 = 0;
  while ( 1 )
  {
    v21 = v16 + *(unsigned int *)(v91 + 4);
    v22 = (&off_4914A8)[21 * a1[6]];
    if ( v22 )
    {
      while ( !(unsigned int)sub_437560(v21, v22) )
      {
        v22 = (__int64 *)v22[3];
        if ( !v22 )
          goto LABEL_72;
      }
    }
    else
    {
LABEL_72:
      if ( !*((_DWORD *)a1 + 196) )
        goto LABEL_77;
      v67 = 0;
      while ( !(unsigned int)sub_437560(v21, *(_QWORD *)(a1[97] + 8 * v67)) )
      {
        if ( *((_DWORD *)a1 + 196) <= (unsigned int)++v67 )
          goto LABEL_77;
      }
      v22 = *(__int64 **)(a1[97] + 8 * v67);
      if ( !v22 )
LABEL_77:
        sub_41F250("needed != NULL", (__int64)"dl-version.c", 0xCCu, (__int64)"_dl_check_map_versions");
    }
    if ( !a3 || (v22[108] & 0x400000000000LL) == 0 )
    {
      for ( i = (int *)(v91 + *(unsigned int *)(v91 + 8)); ; i = (int *)((char *)i + v46) )
      {
        v25 = (const char *)a1[1];
        v26 = (unsigned int)i[2];
        v27 = v16 + v26;
        if ( !*v25 )
        {
          v25 = (const char *)off_491918;
          if ( !off_491918 )
            v25 = "<main program>";
        }
        v28 = v22[5];
        v92 = *((_WORD *)i + 2);
        v29 = *i;
        v30 = *(_QWORD *)(*(_QWORD *)(v28 + 104) + 8LL);
        if ( (*(_BYTE *)(v28 + 870) & 0x20) != 0 )
          v30 += *(_QWORD *)v28;
        if ( (dword_496770 & 0x10) != 0 )
        {
          v69 = *(const char **)(v28 + 8);
          if ( !*v69 )
          {
            v69 = (const char *)off_491918;
            if ( !off_491918 )
              v69 = "<main program>";
          }
          v90 = v30;
          sub_438334(
            "checking for version `%s' in file %s [%lu] required by file %s [%lu]\n",
            (const char *)(v16 + v26),
            v69,
            *(_QWORD *)(v28 + 48),
            v25,
            a1[6]);
          v30 = v90;
        }
        v31 = *(_QWORD *)(v28 + 440);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8);
          if ( !v32 )
            sub_41F250("def_offset != 0", (__int64)"dl-version.c", 0x57u, (__int64)"match_symbol");
          v33 = (unsigned __int16 *)(v32 + *(_QWORD *)v28);
          if ( *v33 != 1 )
          {
LABEL_24:
            v97[0] = 0;
            v35 = *(char **)(v28 + 8);
            if ( !*v35 )
            {
              v35 = (char *)off_491918;
              if ( !off_491918 )
                v35 = "<main program>";
            }
            v36 = sub_4244D0(*v33, v97, 10, 0);
            sub_4324A0(
              (const char **)v98,
              v35,
              "unsupported version %s of Verdef record",
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v36);
            goto LABEL_28;
          }
          while ( 1 )
          {
            if ( v29 == *((_DWORD *)v33 + 2) )
            {
              v89 = v30;
              v45 = sub_42F240(v27, v30 + *(unsigned int *)((char *)v33 + *((unsigned int *)v33 + 3)));
              v30 = v89;
              if ( !v45 )
                goto LABEL_30;
            }
            v34 = *((_DWORD *)v33 + 4);
            if ( !v34 )
              break;
            v33 = (unsigned __int16 *)((char *)v33 + v34);
            if ( *v33 != 1 )
              goto LABEL_24;
          }
          if ( (v92 & 2) == 0 )
          {
            v87 = *(char **)(v28 + 8);
            if ( !*v87 )
            {
              v87 = (char *)off_491918;
              if ( !off_491918 )
                v87 = "<main program>";
            }
            sub_4324A0(
              (const char **)v98,
              v87,
              "version `%s' not found (required by %s)",
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              v27,
              v25);
            goto LABEL_28;
          }
          if ( a2 )
          {
            v70 = *(char **)(v28 + 8);
            if ( !*v70 )
            {
              v70 = (char *)off_491918;
              if ( !off_491918 )
                v70 = "<main program>";
            }
            sub_4324A0(
              (const char **)v98,
              v70,
              "weak version `%s' not found (required by %s)",
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              v27,
              v25);
            goto LABEL_28;
          }
        }
        else if ( a2 )
        {
          v68 = *(char **)(v28 + 8);
          if ( !*v68 )
          {
            v68 = (char *)off_491918;
            if ( !off_491918 )
              v68 = "<main program>";
          }
          sub_4324A0(
            (const char **)v98,
            v68,
            "no version information available (required by %s)",
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            v25);
LABEL_28:
          sub_432204(0, v98, "version lookup error");
        }
LABEL_30:
        if ( *i != 16584258 || (unsigned int)sub_42F240(v27, "GLIBC_ABI_DT_RELR") )
        {
          v46 = i[3];
          if ( v20 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v20 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v46 )
            break;
        }
        else
        {
          *((_WORD *)a1 + 434) |= 4u;
          v46 = i[3];
          if ( v20 < (*((_WORD *)i + 3) & 0x7FFFu) )
            v20 = *((_WORD *)i + 3) & 0x7FFF;
          if ( !v46 )
            break;
        }
      }
    }
    v47 = *(_DWORD *)(v91 + 12);
    if ( !v47 )
      break;
    v91 += v47;
  }
  if ( !v93 )
  {
    if ( !v20 )
      goto LABEL_68;
    goto LABEL_49;
  }
LABEL_43:
  for ( j = *a1 + *(_QWORD *)(v93 + 8); ; j += (unsigned int)v23 )
  {
    v23 = *(unsigned int *)(j + 16);
    if ( v20 < (*(_WORD *)(j + 4) & 0x7FFFu) )
      v20 = *(_WORD *)(j + 4) & 0x7FFF;
    if ( !(_DWORD)v23 )
      break;
  }
  if ( !v20 )
  {
LABEL_67:
    if ( !v96 )
      return 0;
    goto LABEL_68;
  }
LABEL_49:
  v49 = sub_40CCB0(v20 + 1, 0x18u, a7, a8, a9, a10, a11, a12, a13, a14, v23, a4, a5, a6);
  a1[102] = v49;
  v50 = v20 + 1;
  if ( !v49 )
  {
    v88 = (char *)a1[1];
    if ( !*v88 )
    {
      v88 = (char *)off_491918;
      if ( !off_491918 )
        v88 = "<main program>";
    }
    sub_4323F0(v98, v88, (__int64)"cannot allocate version reference table");
    v81 = 12;
LABEL_99:
    sub_432204(v81, v98, 0);
  }
  v51 = *((_BYTE *)a1 + 870);
  v52 = *(_QWORD *)(a1[67] + 8);
  *((_DWORD *)a1 + 206) = v50;
  if ( (v51 & 0x20) != 0 )
    v52 += *a1;
  a1[113] = v52;
  if ( !v96 )
  {
    if ( !v93 )
      return 0;
    v53 = *a1;
    goto LABEL_62;
  }
  v53 = *a1;
  for ( k = (unsigned int *)(*a1 + *(_QWORD *)(v96 + 8)); ; k = (unsigned int *)((char *)k + v61) )
  {
    for ( m = (char *)k + k[2]; ; m += v60 )
    {
      v56 = *((_WORD *)m + 3);
      if ( v50 > (v56 & 0x7FFFu) )
      {
        v57 = v49 + 24LL * (*((_WORD *)m + 3) & 0x7FFF);
        v58 = v16 + *((unsigned int *)m + 2);
        v59 = v16 + k[1];
        *(_DWORD *)(v57 + 8) = *(_DWORD *)m;
        *(_DWORD *)(v57 + 12) = v56 & 0x8000;
        *(_QWORD *)v57 = v58;
        *(_QWORD *)(v57 + 16) = v59;
      }
      v60 = *((_DWORD *)m + 3);
      if ( !v60 )
        break;
    }
    v61 = k[3];
    if ( !v61 )
      break;
  }
  if ( v93 )
  {
LABEL_62:
    for ( n = v53 + *(_QWORD *)(v93 + 8); ; n += v65 )
    {
      if ( (*(_WORD *)(n + 2) & 1) == 0 )
      {
        v63 = v49 + 24LL * (*(_WORD *)(n + 4) & 0x7FFF);
        v64 = v16 + *(unsigned int *)(n + *(unsigned int *)(n + 12));
        *(_DWORD *)(v63 + 8) = *(_DWORD *)(n + 8);
        *(_QWORD *)v63 = v64;
        *(_QWORD *)(v63 + 16) = 0;
      }
      v65 = *(_DWORD *)(n + 16);
      if ( !v65 )
        break;
    }
    goto LABEL_67;
  }
LABEL_68:
  if ( a1[9] && a1[44] && (*((_WORD *)a1 + 434) & 4) == 0 )
  {
    v82 = *(_QWORD *)(a1[13] + 8);
    if ( (*((_BYTE *)a1 + 870) & 0x20) != 0 )
      v82 += *a1;
    v83 = (__int64 *)a1[2];
    v84 = *v83;
    if ( *v83 )
    {
      while ( v84 != 1 || (unsigned int)sub_42F424(v82 + v83[1], "libc.so.", 8) )
      {
        v85 = v83[2];
        v83 += 2;
        v84 = v85;
        if ( !v85 )
          return 0;
      }
      v86 = (char *)a1[1];
      if ( !*v86 )
      {
        v86 = (char *)off_491918;
        if ( !off_491918 )
          v86 = "<main program>";
      }
      sub_4323F0(v98, v86, (__int64)"DT_RELR without GLIBC_ABI_DT_RELR dependency");
      goto LABEL_98;
    }
  }
  return 0;
}
