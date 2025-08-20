__int64 __fastcall sub_4098C0(
        unsigned __int64 a1,
        int *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // x27
  unsigned __int64 v11; // x28
  __int64 v14; // x23
  int v15; // w24
  unsigned __int64 v16; // x6
  __int64 v17; // x1
  unsigned __int64 v18; // x7
  bool v19; // zf
  unsigned __int64 v20; // x27
  unsigned __int64 v21; // x2
  __int64 v22; // x21
  _QWORD *v23; // x21
  __int64 v24; // x3
  unsigned __int64 v25; // x22
  unsigned __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  unsigned __int64 v29; // x1
  unsigned __int64 v30; // x22
  unsigned __int64 v31; // x1
  __int64 result; // x0
  __int64 *v33; // x1
  __int64 v34; // x3
  __int64 v35; // x2
  _QWORD *v36; // x0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  __int64 v44; // x2
  unsigned __int64 v45; // x28
  __int64 v46; // x1
  unsigned __int64 v47; // x3
  unsigned __int64 v48; // x0
  __int64 v49; // x24
  __int64 v50; // x0
  unsigned __int64 v51; // x2
  __int64 v52; // x24
  int v53; // w4
  bool v54; // cc
  unsigned __int64 v55; // x1
  unsigned __int64 v56; // x0
  unsigned __int64 v57; // x23
  unsigned __int64 v58; // x5
  int v59; // w0
  __int64 v60; // x1
  bool v61; // zf
  __int64 v62; // x0
  unsigned __int64 v63; // x0
  unsigned __int64 v64; // x2
  __int64 v65; // x0
  unsigned __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x0
  unsigned __int64 v69; // [xsp+8h] [xbp-28h]
  unsigned __int64 v70; // [xsp+8h] [xbp-28h]
  unsigned __int64 v71; // [xsp+8h] [xbp-28h]
  unsigned __int64 v72; // [xsp+8h] [xbp-28h]
  unsigned __int64 v73; // [xsp+8h] [xbp-28h]
  unsigned __int64 v74; // [xsp+8h] [xbp-28h]
  unsigned __int64 v75; // [xsp+10h] [xbp-20h]
  unsigned __int64 v76; // [xsp+10h] [xbp-20h]
  __int64 v77; // [xsp+10h] [xbp-20h]
  unsigned __int64 v78; // [xsp+10h] [xbp-20h]
  unsigned __int64 v79; // [xsp+10h] [xbp-20h]
  unsigned __int64 v80; // [xsp+10h] [xbp-20h]
  unsigned __int64 v81; // [xsp+20h] [xbp-10h] BYREF
  __int64 v82; // [xsp+28h] [xbp-8h]
  __int64 v83; // [xsp+80h] [xbp+50h]
  unsigned __int64 v84; // [xsp+88h] [xbp+58h]

  v82 = qword_48DD60;
  v14 = qword_490F10;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v15 = 0;
    v83 = v10;
    v84 = v11;
  }
  else
  {
    if ( qword_490600 - 1 < a1 )
    {
      result = sub_408C20(a1, qword_490600, dword_490608);
      if ( result != -1 )
        goto LABEL_23;
    }
    result = sub_408C20(a1, v14, 0);
    if ( result != -1 )
      goto LABEL_23;
    if ( !a2 )
    {
LABEL_34:
      result = 0;
      goto LABEL_23;
    }
    v15 = 1;
    v83 = v10;
    v84 = v11;
  }
  v16 = *((_QWORD *)a2 + 12);
  v17 = *(_QWORD *)(v16 + 8);
  v11 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  v18 = v16 + (v17 & 0xFFFFFFFFFFFFFFF8LL);
  v19 = (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 24 == (int *)v16;
  if ( !v19 && (v11 <= 0x1F || (v17 & 1) == 0 || (v18 & (v14 - 1)) != 0) )
  {
    result = sub_41F250(
               "(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (o"
               "ld_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)",
               "malloc.c",
               2599,
               "sysmalloc");
    goto LABEL_107;
  }
  v20 = a1 + 32;
  if ( a1 + 32 <= v11 )
  {
LABEL_108:
    sub_41F250("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)", "malloc.c", 2605, "sysmalloc");
    goto LABEL_109;
  }
  if ( a2 == &dword_490670 )
  {
    v48 = qword_4905D8 + 32 + a1;
    if ( (a2[1] & 2) == 0 )
      v48 -= v11;
    if ( qword_4905F8 )
      v49 = ((qword_4966E0 + v48 + qword_4905F8 - 1) & -qword_4905F8) - qword_4966E0;
    else
      v49 = (qword_490F10 - 1 + v48) & -qword_490F10;
    v81 = v49;
    if ( v49 <= 0 )
      goto LABEL_114;
    if ( (byte_4966A0 & 1) != 0
      || (v74 = v16,
          v79 = v16 + (v17 & 0xFFFFFFFFFFFFFFF8LL),
          v30 = sub_4118E0(v49),
          v16 = v74,
          v18 = v79,
          v30 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v30 = 0;
    }
    else
    {
      v60 = v49;
      if ( v49 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v65 = v30;
        if ( ((qword_490F10 - 1) & v30) != 0 )
        {
          v60 = v49 + ((qword_490F10 - 1) & v30);
          v65 = -qword_490F10 & v30;
        }
        sub_4117C0(v65, v60, 14);
        v16 = v74;
        v18 = v79;
      }
    }
    if ( v30 )
    {
      v53 = 1;
      v51 = v81;
      v52 = qword_490630;
      if ( qword_490630 )
      {
        v52 = 0;
        goto LABEL_75;
      }
    }
    else
    {
LABEL_114:
      if ( !qword_490600
        || (v70 = v16,
            v75 = v18,
            v50 = sub_408AF0(&v81, a1, v11, qword_490600, qword_490600, dword_490608),
            v16 = v70,
            v18 = v75,
            v30 = v50,
            v50 == -1) )
      {
        v73 = v16;
        v78 = v18;
        v30 = sub_408AF0(&v81, a1, v11, 0x100000u, v14, 0);
        v16 = v73;
        v18 = v78;
        if ( v30 == -1 )
          goto LABEL_63;
      }
      v51 = v81;
      v52 = v30 + v81;
      if ( !v30 )
        goto LABEL_63;
      if ( qword_490630 )
      {
        v29 = v81 + qword_490EF8;
        v53 = 0;
        qword_490EF8 += v81;
        goto LABEL_45;
      }
      v53 = 0;
    }
    qword_490630 = v30;
LABEL_75:
    if ( v53 )
      v61 = v18 == v30;
    else
      v61 = 0;
    v29 = v51 + qword_490EF8;
    qword_490EF8 += v51;
    if ( v61 )
    {
      v30 = qword_4906D0;
      *(_QWORD *)(v16 + 8) = (v11 + v51) | 1;
      goto LABEL_19;
    }
LABEL_45:
    if ( (dword_490674 & 2) != 0 )
    {
      v57 = v30 & 0xF;
      if ( (v30 & 0xF) != 0 )
      {
LABEL_109:
        sub_41F250("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2847, "sysmalloc");
        goto LABEL_110;
      }
      v58 = 0;
      if ( !v53 )
        goto LABEL_83;
      if ( (byte_4966A0 & 1) != 0 || (v80 = v16, v71 = v30, v52 = sub_4118E0(0), v16 = v80, v52 == -1) )
      {
        v30 = qword_4906D0;
        v29 = qword_490EF8;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v11 )
        v54 = v18 > v30;
      else
        v54 = 0;
      if ( v54 )
LABEL_110:
        sub_407374((__int64)"break adjusted to free malloc space", a3, a4, a5, a6, a7, a8, a9, a10);
      if ( v11 )
        qword_490EF8 = v30 - v18 + v29;
      v55 = v30 & 0xF;
      if ( (v30 & 0xF) != 0 )
      {
        v56 = 16 - v55 + v11;
        v71 = v30 + 16 - v55;
      }
      else
      {
        v56 = v11;
        v71 = v30;
      }
      v57 = ((v14 - 1 + v30 + v51 + v56) & -v14) - (v30 + v51);
      if ( (v57 & 0x8000000000000000LL) != 0 )
      {
        v68 = sub_41F250("correction >= 0", "malloc.c", 2820, "sysmalloc");
        return sub_40A0A0(v68);
      }
      if ( (byte_4966A0 & 1) != 0 )
        goto LABEL_63;
      v76 = v16;
      v52 = sub_4118E0(v57);
      v16 = v76;
      v58 = v57;
      if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( qword_4905F8 - 1 < v57 )
        {
          v66 = v57;
          v67 = v52;
          if ( ((qword_490F10 - 1) & v52) != 0 )
          {
            v66 = v57 + ((qword_490F10 - 1) & v52);
            v67 = -qword_490F10 & v52;
          }
          sub_4117C0(v67, v66, 14);
          v30 = v71;
          v16 = v76;
          v58 = v57;
        }
        else
        {
          v30 = v71;
        }
        goto LABEL_83;
      }
      if ( (byte_4966A0 & 1) != 0 || (v52 = sub_4118E0(0), v16 = v76, v52 == -1) )
      {
LABEL_63:
        v30 = qword_4906D0;
        v29 = qword_490EF8;
        goto LABEL_19;
      }
    }
    if ( v52 )
    {
      v30 = v71;
      v57 = 0;
      v58 = 0;
LABEL_83:
      v62 = qword_490EF8;
      qword_4906D0 = v30;
      *(_QWORD *)(v30 + 8) = (v52 - v30 + v58) | 1;
      v29 = v57 + v62;
      qword_490EF8 = v57 + v62;
      if ( v11 )
      {
        v63 = (v11 - 32) & 0xFFFFFFFFFFFFFFF0LL;
        v64 = v16 + v63;
        *(_QWORD *)(v16 + 8) = v63 | 1;
        *(_QWORD *)(v64 + 8) = 17;
        *(_QWORD *)(v64 + 24) = 17;
        if ( v63 > 0x1F )
        {
          sub_4094D4((__int64)&dword_490670, v16, 1, a3, a4, a5, a6, a7, a8, a9, a10);
          v30 = qword_4906D0;
          v29 = qword_490EF8;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_63;
  }
  if ( qword_490600 )
  {
    v21 = 4 * qword_490600;
    v22 = -4 * qword_490600;
  }
  else
  {
    v22 = -67108864;
    v21 = 0x4000000;
  }
  v23 = (_QWORD *)(v16 & v22);
  v24 = v23[2];
  if ( (__int64)(v20 - v11) > 0 )
  {
    v25 = ((v20 - v11 - 1 + v23[4]) & -v23[4]) + v24;
    if ( v21 >= v25 )
    {
      v26 = v23[3];
      if ( v25 <= v26 )
      {
LABEL_18:
        v23[2] = v25;
        v27 = v23[2];
        v28 = ((unsigned __int64)v23 + v27 - v16) | 1;
        v29 = v27 + *((_QWORD *)a2 + 273) - v24;
        *((_QWORD *)a2 + 273) = v29;
        v30 = *((_QWORD *)a2 + 12);
        *(_QWORD *)(v16 + 8) = v28;
        goto LABEL_19;
      }
      v72 = *((_QWORD *)a2 + 12);
      v77 = v23[2];
      v59 = sub_411880((char *)v23 + v26, v25 - v26, dword_4966A4 | 3u);
      v16 = v72;
      if ( !v59 )
      {
        v24 = v77;
        v23[3] = v25;
        goto LABEL_18;
      }
    }
  }
  v69 = v16;
  v36 = sub_408480(a1 + 80, qword_4905D8);
  if ( v36 )
  {
    v44 = v36[2];
    v45 = (v11 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v46 = *((_QWORD *)a2 + 273);
    v30 = (unsigned __int64)(v36 + 6);
    v47 = v45 + 16;
    *v36 = a2;
    v36[1] = v23;
    v29 = v44 + v46;
    *((_QWORD *)a2 + 12) = v36 + 6;
    *((_QWORD *)a2 + 273) = v29;
    v36[7] = (v44 - 48) | 1;
    *(_QWORD *)(v69 + v45 + 16 + 8) = 1;
    if ( v45 > 0x1F )
    {
      *(_OWORD *)(v69 + v45 + 8) = xmmword_45A910;
      *(_QWORD *)(v69 + 8) = v45 | 5;
      sub_4094D4((__int64)a2, v69, 1, COERCE_DOUBLE(17), v37, v38, v39, v40, v41, v42, v43);
      v30 = *((_QWORD *)a2 + 12);
      v29 = *((_QWORD *)a2 + 273);
    }
    else
    {
      *(_QWORD *)(v69 + 8) = v47 | 1;
      *(_QWORD *)(v69 + v47) = v47;
    }
LABEL_19:
    if ( *((_QWORD *)a2 + 274) < v29 )
      *((_QWORD *)a2 + 274) = v29;
    v31 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 <= v31 )
    {
      result = v30 + 16;
      v10 = v83;
      v11 = v84;
      *((_QWORD *)a2 + 12) = v30 + a1;
      *(_QWORD *)(v30 + 8) = a1 | (4LL * (a2 != &dword_490670)) | 1;
      *(_QWORD *)(v30 + a1 + 8) = (v31 - a1) | 1;
      goto LABEL_23;
    }
    v10 = v83;
    v11 = v84;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    goto LABEL_34;
  }
  if ( v15 || (result = sub_408C20(a1, v14, 0), result == -1) )
  {
    v30 = *((_QWORD *)a2 + 12);
    v29 = *((_QWORD *)a2 + 273);
    goto LABEL_19;
  }
  v10 = v83;
  v11 = v84;
LABEL_23:
  v33 = &qword_48DD60;
  v34 = v82 - qword_48DD60;
  v35 = 0;
  if ( v82 != qword_48DD60 )
  {
LABEL_107:
    v83 = v10;
    v84 = v11;
    sub_412340(result, v33, v35, v34);
    goto LABEL_108;
  }
  return result;
}
