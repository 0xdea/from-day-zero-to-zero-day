unsigned __int64 __fastcall sub_4098C0(
        unsigned __int64 a1,
        _QWORD *a2,
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
  char *v16; // x6
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
  unsigned __int64 result; // x0
  __int64 *v33; // x1
  __int64 v34; // x3
  __int64 v35; // x2
  _QWORD *v36; // x0
  __int64 v37; // x2
  unsigned __int64 v38; // x28
  __int64 v39; // x1
  unsigned __int64 v40; // x3
  __int64 v41; // x0
  __int64 v42; // x24
  __int64 v43; // x0
  __int64 v44; // x2
  __int64 v45; // x24
  int v46; // w4
  bool v47; // cc
  unsigned __int64 v48; // x1
  unsigned __int64 v49; // x0
  unsigned __int64 v50; // x23
  unsigned __int64 v51; // x5
  int v52; // w0
  __int64 v53; // x1
  bool v54; // zf
  __int64 v55; // x0
  unsigned __int64 v56; // x0
  char *v57; // x2
  __int64 v58; // x0
  unsigned __int64 v59; // x1
  __int64 v60; // x0
  __int64 v61; // x0
  char *v62; // [xsp+8h] [xbp-28h]
  char *v63; // [xsp+8h] [xbp-28h]
  unsigned __int64 v64; // [xsp+8h] [xbp-28h]
  char *v65; // [xsp+8h] [xbp-28h]
  char *v66; // [xsp+8h] [xbp-28h]
  char *v67; // [xsp+8h] [xbp-28h]
  unsigned __int64 v68; // [xsp+10h] [xbp-20h]
  char *v69; // [xsp+10h] [xbp-20h]
  __int64 v70; // [xsp+10h] [xbp-20h]
  unsigned __int64 v71; // [xsp+10h] [xbp-20h]
  char *v72; // [xsp+10h] [xbp-20h]
  char *v73; // [xsp+10h] [xbp-20h]
  __int64 v74; // [xsp+20h] [xbp-10h] BYREF
  __int64 v75; // [xsp+28h] [xbp-8h]
  __int64 v76; // [xsp+80h] [xbp+50h]
  unsigned __int64 v77; // [xsp+88h] [xbp+58h]

  v75 = qword_48DD60;
  v14 = qword_490F10;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v15 = 0;
    v76 = v10;
    v77 = v11;
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
    v76 = v10;
    v77 = v11;
  }
  v16 = (char *)a2[12];
  v17 = *((_QWORD *)v16 + 1);
  v11 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  v18 = (unsigned __int64)&v16[v17 & 0xFFFFFFFFFFFFFFF8LL];
  v19 = (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 12 == (_QWORD *)v16;
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
  if ( a2 == (_QWORD *)&unk_490670 )
  {
    v41 = qword_4905D8 + 32 + a1;
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
      v41 -= v11;
    if ( qword_4905F8 )
      v42 = ((qword_4966E0 + v41 + qword_4905F8 - 1) & -qword_4905F8) - qword_4966E0;
    else
      v42 = (qword_490F10 - 1 + v41) & -qword_490F10;
    v74 = v42;
    if ( v42 <= 0 )
      goto LABEL_114;
    if ( (byte_4966A0 & 1) != 0
      || (v67 = v16,
          v72 = &v16[v17 & 0xFFFFFFFFFFFFFFF8LL],
          v30 = sub_4118E0(v42),
          v16 = v67,
          v18 = (unsigned __int64)v72,
          v30 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v30 = 0;
    }
    else
    {
      v53 = v42;
      if ( v42 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v58 = v30;
        if ( ((qword_490F10 - 1) & v30) != 0 )
        {
          v53 = v42 + ((qword_490F10 - 1) & v30);
          v58 = -qword_490F10 & v30;
        }
        sub_4117C0(v58, v53, 14);
        v16 = v67;
        v18 = (unsigned __int64)v72;
      }
    }
    if ( v30 )
    {
      v46 = 1;
      v44 = v74;
      v45 = qword_490630;
      if ( qword_490630 )
      {
        v45 = 0;
        goto LABEL_75;
      }
    }
    else
    {
LABEL_114:
      if ( !qword_490600
        || (v63 = v16,
            v68 = v18,
            v43 = sub_408AF0(&v74, a1, v11, qword_490600, qword_490600, (unsigned int)dword_490608),
            v16 = v63,
            v18 = v68,
            v30 = v43,
            v43 == -1) )
      {
        v66 = v16;
        v71 = v18;
        v30 = sub_408AF0(&v74, a1, v11, 0x100000, v14, 0);
        v16 = v66;
        v18 = v71;
        if ( v30 == -1 )
          goto LABEL_63;
      }
      v44 = v74;
      v45 = v30 + v74;
      if ( !v30 )
        goto LABEL_63;
      if ( qword_490630 )
      {
        v29 = v74 + qword_490EF8;
        v46 = 0;
        qword_490EF8 += v74;
        goto LABEL_45;
      }
      v46 = 0;
    }
    qword_490630 = v30;
LABEL_75:
    if ( v46 )
      v54 = v18 == v30;
    else
      v54 = 0;
    v29 = v44 + qword_490EF8;
    qword_490EF8 += v44;
    if ( v54 )
    {
      v30 = qword_4906D0;
      *((_QWORD *)v16 + 1) = (v11 + v44) | 1;
      goto LABEL_19;
    }
LABEL_45:
    if ( (dword_490674 & 2) != 0 )
    {
      v50 = v30 & 0xF;
      if ( (v30 & 0xF) != 0 )
      {
LABEL_109:
        sub_41F250("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2847, "sysmalloc");
        goto LABEL_110;
      }
      v51 = 0;
      if ( !v46 )
        goto LABEL_83;
      if ( (byte_4966A0 & 1) != 0 || (v73 = v16, v64 = v30, v45 = sub_4118E0(0), v16 = v73, v45 == -1) )
      {
        v30 = qword_4906D0;
        v29 = qword_490EF8;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v11 )
        v47 = v18 > v30;
      else
        v47 = 0;
      if ( v47 )
LABEL_110:
        sub_407374((__int64)"break adjusted to free malloc space", a3, a4, a5, a6, a7, a8, a9, a10);
      if ( v11 )
        qword_490EF8 = v30 - v18 + v29;
      v48 = v30 & 0xF;
      if ( (v30 & 0xF) != 0 )
      {
        v49 = 16 - v48 + v11;
        v64 = v30 + 16 - v48;
      }
      else
      {
        v49 = v11;
        v64 = v30;
      }
      v50 = ((v14 - 1 + v30 + v44 + v49) & -v14) - (v30 + v44);
      if ( (v50 & 0x8000000000000000LL) != 0 )
      {
        v61 = sub_41F250("correction >= 0", "malloc.c", 2820, "sysmalloc");
        return sub_40A0A0(v61);
      }
      if ( (byte_4966A0 & 1) != 0 )
        goto LABEL_63;
      v69 = v16;
      v45 = sub_4118E0(v50);
      v16 = v69;
      v51 = v50;
      if ( (unsigned __int64)(v45 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( qword_4905F8 - 1 < v50 )
        {
          v59 = v50;
          v60 = v45;
          if ( ((qword_490F10 - 1) & v45) != 0 )
          {
            v59 = v50 + ((qword_490F10 - 1) & v45);
            v60 = -qword_490F10 & v45;
          }
          sub_4117C0(v60, v59, 14);
          v30 = v64;
          v16 = v69;
          v51 = v50;
        }
        else
        {
          v30 = v64;
        }
        goto LABEL_83;
      }
      if ( (byte_4966A0 & 1) != 0 || (v45 = sub_4118E0(0), v16 = v69, v45 == -1) )
      {
LABEL_63:
        v30 = qword_4906D0;
        v29 = qword_490EF8;
        goto LABEL_19;
      }
    }
    if ( v45 )
    {
      v30 = v64;
      v50 = 0;
      v51 = 0;
LABEL_83:
      v55 = qword_490EF8;
      qword_4906D0 = v30;
      *(_QWORD *)(v30 + 8) = (v45 - v30 + v51) | 1;
      v29 = v50 + v55;
      qword_490EF8 = v50 + v55;
      if ( v11 )
      {
        v56 = (v11 - 32) & 0xFFFFFFFFFFFFFFF0LL;
        v57 = &v16[v56];
        *((_QWORD *)v16 + 1) = v56 | 1;
        *((_QWORD *)v57 + 1) = 17;
        *((_QWORD *)v57 + 3) = 17;
        if ( v56 > 0x1F )
        {
          sub_4094D4(&unk_490670, v16, 1);
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
  v23 = (_QWORD *)((unsigned __int64)v16 & v22);
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
        v28 = ((char *)v23 + v27 - v16) | 1;
        v29 = v27 + a2[273] - v24;
        a2[273] = v29;
        v30 = a2[12];
        *((_QWORD *)v16 + 1) = v28;
        goto LABEL_19;
      }
      v65 = (char *)a2[12];
      v70 = v23[2];
      v52 = sub_411880((char *)v23 + v26, v25 - v26, dword_4966A4 | 3u);
      v16 = v65;
      if ( !v52 )
      {
        v24 = v70;
        v23[3] = v25;
        goto LABEL_18;
      }
    }
  }
  v62 = v16;
  v36 = (_QWORD *)sub_408480(a1 + 80, qword_4905D8);
  if ( v36 )
  {
    v37 = v36[2];
    v38 = (v11 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v39 = a2[273];
    v30 = (unsigned __int64)(v36 + 6);
    v40 = v38 + 16;
    *v36 = a2;
    v36[1] = v23;
    v29 = v37 + v39;
    a2[12] = v36 + 6;
    a2[273] = v29;
    v36[7] = (v37 - 48) | 1;
    *(_QWORD *)&v62[v38 + 24] = 1;
    if ( v38 > 0x1F )
    {
      *(_OWORD *)&v62[v38 + 8] = xmmword_45A910;
      *((_QWORD *)v62 + 1) = v38 | 5;
      sub_4094D4(a2, v62, 1);
      v30 = a2[12];
      v29 = a2[273];
    }
    else
    {
      *((_QWORD *)v62 + 1) = v40 | 1;
      *(_QWORD *)&v62[v40] = v40;
    }
LABEL_19:
    if ( a2[274] < v29 )
      a2[274] = v29;
    v31 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 <= v31 )
    {
      result = v30 + 16;
      v10 = v76;
      v11 = v77;
      a2[12] = v30 + a1;
      *(_QWORD *)(v30 + 8) = a1 | (4LL * (a2 != (_QWORD *)&unk_490670)) | 1;
      *(_QWORD *)(v30 + a1 + 8) = (v31 - a1) | 1;
      goto LABEL_23;
    }
    v10 = v76;
    v11 = v77;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    goto LABEL_34;
  }
  if ( v15 || (result = sub_408C20(a1, v14, 0), result == -1) )
  {
    v30 = a2[12];
    v29 = a2[273];
    goto LABEL_19;
  }
  v10 = v76;
  v11 = v77;
LABEL_23:
  v33 = &qword_48DD60;
  v34 = v75 - qword_48DD60;
  v35 = 0;
  if ( v75 != qword_48DD60 )
  {
LABEL_107:
    v76 = v10;
    v77 = v11;
    sub_412340(result, v33, v35, v34);
    goto LABEL_108;
  }
  return result;
}
