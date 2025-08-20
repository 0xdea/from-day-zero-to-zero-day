__int64 __fastcall sysmalloc(
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
  unsigned __int64 v18; // x28
  unsigned __int64 v19; // x7
  bool v20; // zf
  unsigned __int64 v21; // x27
  unsigned __int64 v22; // x2
  __int64 v23; // x21
  _QWORD *v24; // x21
  __int64 v25; // x3
  unsigned __int64 v26; // x22
  unsigned __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x21
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // x22
  unsigned __int64 v32; // x1
  __int64 result; // x0
  _QWORD *v34; // x0
  double v35; // d1
  double v36; // d2
  double v37; // d3
  double v38; // d4
  double v39; // d5
  double v40; // d6
  double v41; // d7
  __int64 v42; // x2
  unsigned __int64 v43; // x28
  __int64 v44; // x1
  unsigned __int64 v45; // x3
  unsigned __int64 v46; // x0
  __int64 v47; // x24
  __int64 v48; // x0
  unsigned __int64 v49; // x2
  __int64 v50; // x24
  int v51; // w4
  bool v52; // cc
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x0
  unsigned __int64 v55; // x23
  unsigned __int64 v56; // x5
  int v57; // w0
  __int64 v58; // x1
  bool v59; // zf
  __int64 v60; // x0
  unsigned __int64 v61; // x0
  unsigned __int64 v62; // x2
  __int64 v63; // x0
  unsigned __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x0
  unsigned __int64 v67; // [xsp+8h] [xbp-28h]
  unsigned __int64 v68; // [xsp+8h] [xbp-28h]
  unsigned __int64 v69; // [xsp+8h] [xbp-28h]
  unsigned __int64 v70; // [xsp+8h] [xbp-28h]
  unsigned __int64 v71; // [xsp+8h] [xbp-28h]
  unsigned __int64 v72; // [xsp+8h] [xbp-28h]
  unsigned __int64 v73; // [xsp+10h] [xbp-20h]
  unsigned __int64 v74; // [xsp+10h] [xbp-20h]
  __int64 v75; // [xsp+10h] [xbp-20h]
  unsigned __int64 v76; // [xsp+10h] [xbp-20h]
  unsigned __int64 v77; // [xsp+10h] [xbp-20h]
  unsigned __int64 v78; // [xsp+10h] [xbp-20h]
  unsigned __int64 v79; // [xsp+20h] [xbp-10h] BYREF
  __int64 v80; // [xsp+80h] [xbp+50h]
  unsigned __int64 v81; // [xsp+88h] [xbp+58h]

  v14 = dl_pagesize;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v15 = 0;
    v80 = v10;
    v81 = v11;
  }
  else
  {
    if ( qword_490600 - 1 < a1 )
    {
      result = sysmalloc_mmap_isra_0(a1, qword_490600, dword_490608);
      if ( result != -1 )
        return result;
    }
    result = sysmalloc_mmap_isra_0(a1, v14, 0);
    if ( result != -1 )
      return result;
    if ( !a2 )
      return 0;
    v15 = 1;
    v80 = v10;
    v81 = v11;
  }
  v16 = *((_QWORD *)a2 + 12);
  v17 = *(_QWORD *)(v16 + 8);
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v16 + (v17 & 0xFFFFFFFFFFFFFFF8LL);
  v20 = (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 24 == (int *)v16;
  if ( !v20 && (v18 <= 0x1F || (v17 & 1) == 0 || (v19 & (v14 - 1)) != 0) )
  {
    _libc_assert_fail(
      "(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) &"
      "& ((unsigned long) old_end & (pagesize - 1)) == 0)",
      "malloc.c",
      2599,
      "sysmalloc");
    v80 = v10;
    v81 = v18;
  }
  v21 = a1 + 32;
  if ( a1 + 32 <= v18 )
  {
    _libc_assert_fail("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)", "malloc.c", 2605, "sysmalloc");
    goto LABEL_107;
  }
  if ( a2 == &main_arena )
  {
    v46 = qword_4905D8 + 32 + a1;
    if ( (a2[1] & 2) == 0 )
      v46 -= v18;
    if ( qword_4905F8 )
      v47 = ((_curbrk + v46 + qword_4905F8 - 1) & -qword_4905F8) - _curbrk;
    else
      v47 = (dl_pagesize - 1 + v46) & -dl_pagesize;
    v79 = v47;
    if ( v47 <= 0 )
      goto LABEL_112;
    if ( (_always_fail_morecore & 1) != 0
      || (v72 = v16,
          v77 = v16 + (v17 & 0xFFFFFFFFFFFFFFF8LL),
          v31 = sbrk(v47),
          v16 = v72,
          v19 = v77,
          v31 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v31 = 0;
    }
    else
    {
      v58 = v47;
      if ( v47 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v63 = v31;
        if ( ((dl_pagesize - 1) & v31) != 0 )
        {
          v58 = v47 + ((dl_pagesize - 1) & v31);
          v63 = -dl_pagesize & v31;
        }
        madvise(v63, v58, 14);
        v16 = v72;
        v19 = v77;
      }
    }
    if ( v31 )
    {
      v51 = 1;
      v49 = v79;
      v50 = qword_490630;
      if ( qword_490630 )
      {
        v50 = 0;
        goto LABEL_74;
      }
    }
    else
    {
LABEL_112:
      if ( !qword_490600
        || (v68 = v16,
            v73 = v19,
            v48 = sysmalloc_mmap_fallback_constprop_0(&v79, a1, v18, qword_490600, qword_490600, dword_490608),
            v16 = v68,
            v19 = v73,
            v31 = v48,
            v48 == -1) )
      {
        v71 = v16;
        v76 = v19;
        v31 = sysmalloc_mmap_fallback_constprop_0(&v79, a1, v18, 0x100000u, v14, 0);
        v16 = v71;
        v19 = v76;
        if ( v31 == -1 )
          goto LABEL_62;
      }
      v49 = v79;
      v50 = v31 + v79;
      if ( !v31 )
        goto LABEL_62;
      if ( qword_490630 )
      {
        v30 = v79 + qword_490EF8;
        v51 = 0;
        qword_490EF8 += v79;
LABEL_44:
        if ( (dword_490674 & 2) == 0 )
        {
          if ( v18 )
            v52 = v19 > v31;
          else
            v52 = 0;
          if ( !v52 )
          {
            if ( v18 )
              qword_490EF8 = v31 - v19 + v30;
            v53 = v31 & 0xF;
            if ( (v31 & 0xF) != 0 )
            {
              v54 = 16 - v53 + v18;
              v69 = v31 + 16 - v53;
            }
            else
            {
              v54 = v18;
              v69 = v31;
            }
            v55 = ((v14 - 1 + v31 + v49 + v54) & -v14) - (v31 + v49);
            if ( (v55 & 0x8000000000000000LL) != 0 )
            {
              v66 = _libc_assert_fail("correction >= 0", "malloc.c", 2820, "sysmalloc");
              return int_malloc(v66);
            }
            if ( (_always_fail_morecore & 1) != 0 )
              goto LABEL_62;
            v74 = v16;
            v50 = sbrk(v55);
            v16 = v74;
            v56 = v55;
            if ( (unsigned __int64)(v50 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( qword_4905F8 - 1 < v55 )
              {
                v64 = v55;
                v65 = v50;
                if ( ((dl_pagesize - 1) & v50) != 0 )
                {
                  v64 = v55 + ((dl_pagesize - 1) & v50);
                  v65 = -dl_pagesize & v50;
                }
                madvise(v65, v64, 14);
                v31 = v69;
                v16 = v74;
                v56 = v55;
              }
              else
              {
                v31 = v69;
              }
              goto LABEL_82;
            }
            if ( (_always_fail_morecore & 1) != 0 )
              goto LABEL_62;
            v50 = sbrk(0);
            v16 = v74;
            if ( v50 == -1 )
              goto LABEL_62;
            goto LABEL_100;
          }
LABEL_108:
          malloc_printerr((__int64)"break adjusted to free malloc space", a3, a4, a5, a6, a7, a8, a9, a10);
        }
        v55 = v31 & 0xF;
        if ( (v31 & 0xF) == 0 )
        {
          v56 = 0;
          if ( !v51 )
          {
LABEL_82:
            v60 = qword_490EF8;
            qword_4906D0 = v31;
            *(_QWORD *)(v31 + 8) = (v50 - v31 + v56) | 1;
            v30 = v55 + v60;
            qword_490EF8 = v55 + v60;
            if ( v18 )
            {
              v61 = (v18 - 32) & 0xFFFFFFFFFFFFFFF0LL;
              v62 = v16 + v61;
              *(_QWORD *)(v16 + 8) = v61 | 1;
              *(_QWORD *)(v62 + 8) = 17;
              *(_QWORD *)(v62 + 24) = 17;
              if ( v61 > 0x1F )
              {
                int_free((__int64)&main_arena, v16, 1, a3, a4, a5, a6, a7, a8, a9, a10);
                v31 = qword_4906D0;
                v30 = qword_490EF8;
              }
            }
            goto LABEL_19;
          }
          if ( (_always_fail_morecore & 1) != 0 || (v78 = v16, v69 = v31, v50 = sbrk(0), v16 = v78, v50 == -1) )
          {
            v31 = qword_4906D0;
            v30 = qword_490EF8;
            goto LABEL_19;
          }
LABEL_100:
          if ( v50 )
          {
            v31 = v69;
            v55 = 0;
            v56 = 0;
            goto LABEL_82;
          }
LABEL_62:
          v31 = qword_4906D0;
          v30 = qword_490EF8;
          goto LABEL_19;
        }
LABEL_107:
        _libc_assert_fail("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2847, "sysmalloc");
        goto LABEL_108;
      }
      v51 = 0;
    }
    qword_490630 = v31;
LABEL_74:
    if ( v51 )
      v59 = v19 == v31;
    else
      v59 = 0;
    v30 = v49 + qword_490EF8;
    qword_490EF8 += v49;
    if ( v59 )
    {
      v31 = qword_4906D0;
      *(_QWORD *)(v16 + 8) = (v18 + v49) | 1;
      goto LABEL_19;
    }
    goto LABEL_44;
  }
  if ( qword_490600 )
  {
    v22 = 4 * qword_490600;
    v23 = -4 * qword_490600;
  }
  else
  {
    v23 = -67108864;
    v22 = 0x4000000;
  }
  v24 = (_QWORD *)(v16 & v23);
  v25 = v24[2];
  if ( (__int64)(v21 - v18) > 0 )
  {
    v26 = ((v21 - v18 - 1 + v24[4]) & -v24[4]) + v25;
    if ( v22 >= v26 )
    {
      v27 = v24[3];
      if ( v26 <= v27 )
      {
LABEL_18:
        v24[2] = v26;
        v28 = v24[2];
        v29 = ((unsigned __int64)v24 + v28 - v16) | 1;
        v30 = v28 + *((_QWORD *)a2 + 273) - v25;
        *((_QWORD *)a2 + 273) = v30;
        v31 = *((_QWORD *)a2 + 12);
        *(_QWORD *)(v16 + 8) = v29;
        goto LABEL_19;
      }
      v70 = *((_QWORD *)a2 + 12);
      v75 = v24[2];
      v57 = mprotect((char *)v24 + v27, v26 - v27, mtag_mmap_flags | 3u);
      v16 = v70;
      if ( !v57 )
      {
        v25 = v75;
        v24[3] = v26;
        goto LABEL_18;
      }
    }
  }
  v67 = v16;
  v34 = new_heap(a1 + 80, qword_4905D8);
  if ( v34 )
  {
    v42 = v34[2];
    v43 = (v18 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v44 = *((_QWORD *)a2 + 273);
    v31 = (unsigned __int64)(v34 + 6);
    v45 = v43 + 16;
    *v34 = a2;
    v34[1] = v24;
    v30 = v42 + v44;
    *((_QWORD *)a2 + 12) = v34 + 6;
    *((_QWORD *)a2 + 273) = v30;
    v34[7] = (v42 - 48) | 1;
    *(_QWORD *)(v67 + v43 + 16 + 8) = 1;
    if ( v43 > 0x1F )
    {
      *(_OWORD *)(v67 + v43 + 8) = xmmword_45A910;
      *(_QWORD *)(v67 + 8) = v43 | 5;
      int_free((__int64)a2, v67, 1, COERCE_DOUBLE(17), v35, v36, v37, v38, v39, v40, v41);
      v31 = *((_QWORD *)a2 + 12);
      v30 = *((_QWORD *)a2 + 273);
    }
    else
    {
      *(_QWORD *)(v67 + 8) = v45 | 1;
      *(_QWORD *)(v67 + v45) = v45;
    }
LABEL_19:
    if ( *((_QWORD *)a2 + 274) < v30 )
      *((_QWORD *)a2 + 274) = v30;
    v32 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v21 <= v32 )
    {
      result = v31 + 16;
      *((_QWORD *)a2 + 12) = v31 + a1;
      *(_QWORD *)(v31 + 8) = a1 | (4LL * (a2 != &main_arena)) | 1;
      *(_QWORD *)(v31 + a1 + 8) = (v32 - a1) | 1;
      return result;
    }
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( v15 || (result = sysmalloc_mmap_isra_0(a1, v14, 0), result == -1) )
  {
    v31 = *((_QWORD *)a2 + 12);
    v30 = *((_QWORD *)a2 + 273);
    goto LABEL_19;
  }
  return result;
}
