unsigned __int64 __fastcall sub_4098C0(
        unsigned __int64 a1,
        _QWORD *a2,
        long double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // x27
  unsigned __int64 v15; // x28
  __int64 v18; // x23
  int v19; // w24
  unsigned __int64 v20; // x6
  __int64 v21; // x1
  unsigned __int64 v22; // x7
  bool v23; // zf
  unsigned __int64 v24; // x27
  unsigned __int64 v25; // x2
  __int64 v26; // x21
  _QWORD *v27; // x21
  __int64 v28; // x3
  unsigned __int64 v29; // x22
  unsigned __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  unsigned __int64 v33; // x1
  unsigned __int64 v34; // x22
  unsigned __int64 v35; // x1
  unsigned __int64 result; // x0
  __int64 *v37; // x1
  __int64 v38; // x3
  __int64 v39; // x2
  _QWORD *v40; // x0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  __int64 v48; // x2
  unsigned __int64 v49; // x28
  __int64 v50; // x1
  unsigned __int64 v51; // x3
  __int64 v52; // x0
  __int64 v53; // x24
  __int64 v54; // x0
  unsigned __int64 v55; // x2
  __int64 v56; // x24
  __int64 v57; // x4
  bool v58; // cc
  unsigned __int64 v59; // x1
  unsigned __int64 v60; // x0
  unsigned __int64 v61; // x23
  unsigned __int64 v62; // x5
  int v63; // w0
  __int64 v64; // x1
  bool v65; // zf
  __int64 v66; // x0
  unsigned __int64 v67; // x0
  unsigned __int64 v68; // x2
  __int64 v69; // x0
  unsigned __int64 v70; // x1
  __int64 v71; // x0
  long double v72; // q0
  _QWORD *v73; // x0
  unsigned __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x5
  double v79; // d1
  double v80; // d2
  double v81; // d3
  double v82; // d4
  double v83; // d5
  double v84; // d6
  double v85; // d7
  unsigned __int64 v86; // [xsp+8h] [xbp-28h]
  unsigned __int64 v87; // [xsp+8h] [xbp-28h]
  unsigned __int64 v88; // [xsp+8h] [xbp-28h]
  unsigned __int64 v89; // [xsp+8h] [xbp-28h]
  unsigned __int64 v90; // [xsp+8h] [xbp-28h]
  unsigned __int64 v91; // [xsp+8h] [xbp-28h]
  unsigned __int64 v92; // [xsp+10h] [xbp-20h]
  unsigned __int64 v93; // [xsp+10h] [xbp-20h]
  __int64 v94; // [xsp+10h] [xbp-20h]
  unsigned __int64 v95; // [xsp+10h] [xbp-20h]
  unsigned __int64 v96; // [xsp+10h] [xbp-20h]
  unsigned __int64 v97; // [xsp+10h] [xbp-20h]
  unsigned __int64 v98; // [xsp+20h] [xbp-10h] BYREF
  __int64 v99; // [xsp+28h] [xbp-8h]
  __int64 v100; // [xsp+80h] [xbp+50h]
  unsigned __int64 v101; // [xsp+88h] [xbp+58h]

  v99 = qword_48DD60;
  v18 = qword_490F10;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v19 = 0;
    v100 = v14;
    v101 = v15;
  }
  else
  {
    if ( qword_490600 - 1 < a1 )
    {
      result = sub_408C20(a1, qword_490600, dword_490608);
      if ( result != -1 )
        goto LABEL_23;
    }
    result = sub_408C20(a1, v18, 0);
    if ( result != -1 )
      goto LABEL_23;
    if ( !a2 )
    {
LABEL_34:
      result = 0;
      goto LABEL_23;
    }
    v19 = 1;
    v100 = v14;
    v101 = v15;
  }
  v20 = a2[12];
  v21 = *(_QWORD *)(v20 + 8);
  v15 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  v22 = v20 + (v21 & 0xFFFFFFFFFFFFFFF8LL);
  v23 = (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 12 == (_QWORD *)v20;
  if ( !v23 && (v15 <= 0x1F || (v21 & 1) == 0 || (v22 & (v18 - 1)) != 0) )
  {
    sub_41F250(
      "(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) &"
      "& ((unsigned long) old_end & (pagesize - 1)) == 0)",
      "malloc.c",
      2599,
      "sysmalloc",
      a13,
      a14,
      *(double *)&a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10);
    goto LABEL_107;
  }
  v24 = a1 + 32;
  if ( a1 + 32 <= v15 )
  {
LABEL_108:
    a3 = sub_41F250("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)", "malloc.c", 2605, "sysmalloc");
    goto LABEL_109;
  }
  if ( a2 == (_QWORD *)&dword_490670 )
  {
    v52 = qword_4905D8 + 32 + a1;
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
      v52 -= v15;
    if ( qword_4905F8 )
      v53 = ((qword_4966E0 + v52 + qword_4905F8 - 1) & -qword_4905F8) - qword_4966E0;
    else
      v53 = (qword_490F10 - 1 + v52) & -qword_490F10;
    v98 = v53;
    if ( v53 <= 0 )
      goto LABEL_114;
    if ( (byte_4966A0 & 1) != 0
      || (v91 = v20,
          v96 = v20 + (v21 & 0xFFFFFFFFFFFFFFF8LL),
          v34 = sub_4118E0(v53),
          v20 = v91,
          v22 = v96,
          v34 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v34 = 0;
    }
    else
    {
      v64 = v53;
      if ( v53 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v69 = v34;
        if ( ((qword_490F10 - 1) & v34) != 0 )
        {
          v64 = v53 + ((qword_490F10 - 1) & v34);
          v69 = -qword_490F10 & v34;
        }
        sub_4117C0(v69, v64, 14);
        v20 = v91;
        v22 = v96;
      }
    }
    if ( v34 )
    {
      v57 = 1;
      v55 = v98;
      v56 = qword_490630;
      if ( qword_490630 )
      {
        v56 = 0;
        goto LABEL_75;
      }
    }
    else
    {
LABEL_114:
      if ( !qword_490600
        || (v87 = v20,
            v92 = v22,
            v54 = sub_408AF0(&v98, a1, v15, qword_490600, qword_490600, dword_490608),
            v20 = v87,
            v22 = v92,
            v34 = v54,
            v54 == -1) )
      {
        v90 = v20;
        v95 = v22;
        v34 = sub_408AF0(&v98, a1, v15, 0x100000u, v18, 0);
        v20 = v90;
        v22 = v95;
        if ( v34 == -1 )
          goto LABEL_63;
      }
      v55 = v98;
      v56 = v34 + v98;
      if ( !v34 )
        goto LABEL_63;
      if ( qword_490630 )
      {
        v33 = v98 + qword_490EF8;
        v57 = 0;
        qword_490EF8 += v98;
        goto LABEL_45;
      }
      v57 = 0;
    }
    qword_490630 = v34;
LABEL_75:
    if ( (_DWORD)v57 )
      v65 = v22 == v34;
    else
      v65 = 0;
    v33 = v55 + qword_490EF8;
    qword_490EF8 += v55;
    if ( v65 )
    {
      v34 = qword_4906D0;
      *(_QWORD *)(v20 + 8) = (v15 + v55) | 1;
      goto LABEL_19;
    }
LABEL_45:
    if ( (dword_490674 & 2) != 0 )
    {
      v61 = v34 & 0xF;
      if ( (v34 & 0xF) != 0 )
      {
LABEL_109:
        a3 = sub_41F250(
               "((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0",
               "malloc.c",
               2847,
               "sysmalloc",
               *(double *)&a3);
        goto LABEL_110;
      }
      v62 = 0;
      if ( !(_DWORD)v57 )
        goto LABEL_83;
      if ( (byte_4966A0 & 1) != 0 || (v97 = v20, v88 = v34, v56 = sub_4118E0(0), v20 = v97, v56 == -1) )
      {
        v34 = qword_4906D0;
        v33 = qword_490EF8;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v15 )
        v58 = v22 > v34;
      else
        v58 = 0;
      if ( v58 )
LABEL_110:
        sub_407374((__int64)"break adjusted to free malloc space", *(double *)&a3, a4, a5, a6, a7, a8, a9, a10);
      if ( v15 )
        qword_490EF8 = v34 - v22 + v33;
      v59 = v34 & 0xF;
      if ( (v34 & 0xF) != 0 )
      {
        v60 = 16 - v59 + v15;
        v88 = v34 + 16 - v59;
      }
      else
      {
        v60 = v15;
        v88 = v34;
      }
      v61 = ((v18 - 1 + v34 + v55 + v60) & -v18) - (v34 + v55);
      if ( (v61 & 0x8000000000000000LL) != 0 )
      {
        v72 = sub_41F250("correction >= 0", "malloc.c", 2820, "sysmalloc", v57, a14, v20, v22);
        return sub_40A0A0(v73, v74, v75, v76, v72, v79, v80, v81, v82, v83, v84, v85, v77, v78);
      }
      if ( (byte_4966A0 & 1) != 0 )
        goto LABEL_63;
      v93 = v20;
      v56 = sub_4118E0(v61);
      v20 = v93;
      v62 = v61;
      if ( (unsigned __int64)(v56 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( qword_4905F8 - 1 < v61 )
        {
          v70 = v61;
          v71 = v56;
          if ( ((qword_490F10 - 1) & v56) != 0 )
          {
            v70 = v61 + ((qword_490F10 - 1) & v56);
            v71 = -qword_490F10 & v56;
          }
          sub_4117C0(v71, v70, 14);
          v34 = v88;
          v20 = v93;
          v62 = v61;
        }
        else
        {
          v34 = v88;
        }
        goto LABEL_83;
      }
      if ( (byte_4966A0 & 1) != 0 || (v56 = sub_4118E0(0), v20 = v93, v56 == -1) )
      {
LABEL_63:
        v34 = qword_4906D0;
        v33 = qword_490EF8;
        goto LABEL_19;
      }
    }
    if ( v56 )
    {
      v34 = v88;
      v61 = 0;
      v62 = 0;
LABEL_83:
      v66 = qword_490EF8;
      qword_4906D0 = v34;
      *(_QWORD *)(v34 + 8) = (v56 - v34 + v62) | 1;
      v33 = v61 + v66;
      qword_490EF8 = v61 + v66;
      if ( v15 )
      {
        v67 = (v15 - 32) & 0xFFFFFFFFFFFFFFF0LL;
        v68 = v20 + v67;
        *(_QWORD *)(v20 + 8) = v67 | 1;
        *(_QWORD *)(v68 + 8) = 17;
        *(_QWORD *)(v68 + 24) = 17;
        if ( v67 > 0x1F )
        {
          sub_4094D4((__int64)&dword_490670, v20, 1, *(double *)&a3, a4, a5, a6, a7, a8, a9, a10);
          v34 = qword_4906D0;
          v33 = qword_490EF8;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_63;
  }
  if ( qword_490600 )
  {
    v25 = 4 * qword_490600;
    v26 = -4 * qword_490600;
  }
  else
  {
    v26 = -67108864;
    v25 = 0x4000000;
  }
  v27 = (_QWORD *)(v20 & v26);
  v28 = v27[2];
  if ( (__int64)(v24 - v15) > 0 )
  {
    v29 = ((v24 - v15 - 1 + v27[4]) & -v27[4]) + v28;
    if ( v25 >= v29 )
    {
      v30 = v27[3];
      if ( v29 <= v30 )
      {
LABEL_18:
        v27[2] = v29;
        v31 = v27[2];
        v32 = ((unsigned __int64)v27 + v31 - v20) | 1;
        v33 = v31 + a2[273] - v28;
        a2[273] = v33;
        v34 = a2[12];
        *(_QWORD *)(v20 + 8) = v32;
        goto LABEL_19;
      }
      v89 = a2[12];
      v94 = v27[2];
      v63 = sub_411880((char *)v27 + v30, v29 - v30, dword_4966A4 | 3u);
      v20 = v89;
      if ( !v63 )
      {
        v28 = v94;
        v27[3] = v29;
        goto LABEL_18;
      }
    }
  }
  v86 = v20;
  v40 = (_QWORD *)sub_408480(a1 + 80, qword_4905D8);
  if ( v40 )
  {
    v48 = v40[2];
    v49 = (v15 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v50 = a2[273];
    v34 = (unsigned __int64)(v40 + 6);
    v51 = v49 + 16;
    *v40 = a2;
    v40[1] = v27;
    v33 = v48 + v50;
    a2[12] = v40 + 6;
    a2[273] = v33;
    v40[7] = (v48 - 48) | 1;
    *(_QWORD *)(v86 + v49 + 16 + 8) = 1;
    if ( v49 > 0x1F )
    {
      *(_OWORD *)(v86 + v49 + 8) = xmmword_45A910;
      *(_QWORD *)(v86 + 8) = v49 | 5;
      sub_4094D4((__int64)a2, v86, 1, COERCE_DOUBLE(17), v41, v42, v43, v44, v45, v46, v47);
      v34 = a2[12];
      v33 = a2[273];
    }
    else
    {
      *(_QWORD *)(v86 + 8) = v51 | 1;
      *(_QWORD *)(v86 + v51) = v51;
    }
LABEL_19:
    if ( a2[274] < v33 )
      a2[274] = v33;
    v35 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 <= v35 )
    {
      result = v34 + 16;
      v14 = v100;
      v15 = v101;
      a2[12] = v34 + a1;
      *(_QWORD *)(v34 + 8) = a1 | (4LL * (a2 != (_QWORD *)&dword_490670)) | 1;
      *(_QWORD *)(v34 + a1 + 8) = (v35 - a1) | 1;
      goto LABEL_23;
    }
    v14 = v100;
    v15 = v101;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    goto LABEL_34;
  }
  if ( v19 || (result = sub_408C20(a1, v18, 0), result == -1) )
  {
    v34 = a2[12];
    v33 = a2[273];
    goto LABEL_19;
  }
  v14 = v100;
  v15 = v101;
LABEL_23:
  v37 = &qword_48DD60;
  v38 = v99 - qword_48DD60;
  v39 = 0;
  if ( v99 != qword_48DD60 )
  {
LABEL_107:
    v100 = v14;
    v101 = v15;
    sub_412340(result, v37, v39, v38);
    goto LABEL_108;
  }
  return result;
}
