unsigned __int64 __fastcall sysmalloc(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // x27
  unsigned __int64 v7; // x28
  __int64 v10; // x23
  int v11; // w24
  __int64 *v12; // x6
  __int64 v13; // x1
  unsigned __int64 v14; // x28
  unsigned __int64 v15; // x7
  bool v16; // zf
  unsigned __int64 v17; // x27
  unsigned __int64 v18; // x2
  __int64 v19; // x21
  _QWORD *v20; // x21
  __int64 v21; // x3
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x22
  unsigned __int64 v28; // x1
  unsigned __int64 result; // x0
  _QWORD *v30; // x0
  __int64 v31; // x2
  unsigned __int64 v32; // x28
  __int64 v33; // x1
  unsigned __int64 v34; // x3
  __int64 v35; // x0
  __int64 v36; // x24
  __int64 v37; // x0
  unsigned __int64 v38; // x2
  __int64 v39; // x24
  __int64 v40; // x4
  bool v41; // cc
  unsigned __int64 v42; // x1
  unsigned __int64 v43; // x0
  unsigned __int64 v44; // x23
  unsigned __int64 v45; // x5
  int v46; // w0
  __int64 v47; // x1
  bool v48; // zf
  __int64 v49; // x0
  unsigned __int64 v50; // x0
  char *v51; // x2
  __int64 v52; // x0
  unsigned __int64 v53; // x1
  __int64 v54; // x0
  unsigned __int64 v55; // x0
  unsigned __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 *v61; // [xsp+8h] [xbp-28h]
  __int64 *v62; // [xsp+8h] [xbp-28h]
  unsigned __int64 v63; // [xsp+8h] [xbp-28h]
  __int64 *v64; // [xsp+8h] [xbp-28h]
  __int64 *v65; // [xsp+8h] [xbp-28h]
  __int64 *v66; // [xsp+8h] [xbp-28h]
  unsigned __int64 v67; // [xsp+10h] [xbp-20h]
  __int64 *v68; // [xsp+10h] [xbp-20h]
  __int64 v69; // [xsp+10h] [xbp-20h]
  unsigned __int64 v70; // [xsp+10h] [xbp-20h]
  char *v71; // [xsp+10h] [xbp-20h]
  __int64 *v72; // [xsp+10h] [xbp-20h]
  unsigned __int64 v73; // [xsp+20h] [xbp-10h] BYREF
  __int64 v74; // [xsp+80h] [xbp+50h]
  unsigned __int64 v75; // [xsp+88h] [xbp+58h]

  v10 = dl_pagesize;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v11 = 0;
    v74 = v6;
    v75 = v7;
  }
  else
  {
    if ( qword_490600 - 1 < a1 )
    {
      result = sysmalloc_mmap_isra_0(a1, qword_490600, dword_490608);
      if ( result != -1 )
        return result;
    }
    result = sysmalloc_mmap_isra_0(a1, v10, 0);
    if ( result != -1 )
      return result;
    if ( !a2 )
      return 0;
    v11 = 1;
    v74 = v6;
    v75 = v7;
  }
  v12 = (__int64 *)a2[12];
  v13 = v12[1];
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = (unsigned __int64)v12 + (v13 & 0xFFFFFFFFFFFFFFF8LL);
  v16 = (v13 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 12 == v12;
  if ( !v16 && (v14 <= 0x1F || (v13 & 1) == 0 || (v15 & (v10 - 1)) != 0) )
  {
    _libc_assert_fail(
      "(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) &"
      "& ((unsigned long) old_end & (pagesize - 1)) == 0)",
      "malloc.c",
      2599,
      "sysmalloc",
      a5,
      a6);
    v74 = v6;
    v75 = v14;
  }
  v17 = a1 + 32;
  if ( a1 + 32 <= v14 )
  {
    _libc_assert_fail(
      "(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)",
      "malloc.c",
      2605,
      "sysmalloc",
      a5,
      a6);
    goto LABEL_107;
  }
  if ( a2 == (_QWORD *)&main_arena )
  {
    v35 = qword_4905D8 + 32 + a1;
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
      v35 -= v14;
    if ( qword_4905F8 )
      v36 = ((_curbrk + v35 + qword_4905F8 - 1) & -qword_4905F8) - _curbrk;
    else
      v36 = (dl_pagesize - 1 + v35) & -dl_pagesize;
    v73 = v36;
    if ( v36 <= 0 )
      goto LABEL_112;
    if ( (_always_fail_morecore & 1) != 0
      || (v66 = v12,
          v71 = (char *)v12 + (v13 & 0xFFFFFFFFFFFFFFF8LL),
          v27 = sbrk(v36),
          v12 = v66,
          v15 = (unsigned __int64)v71,
          v27 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v27 = 0;
    }
    else
    {
      v47 = v36;
      if ( v36 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v52 = v27;
        if ( ((dl_pagesize - 1) & v27) != 0 )
        {
          v47 = v36 + ((dl_pagesize - 1) & v27);
          v52 = -dl_pagesize & v27;
        }
        madvise(v52, v47, 14);
        v12 = v66;
        v15 = (unsigned __int64)v71;
      }
    }
    if ( v27 )
    {
      v40 = 1;
      v38 = v73;
      v39 = qword_490630;
      if ( qword_490630 )
      {
        v39 = 0;
        goto LABEL_74;
      }
    }
    else
    {
LABEL_112:
      if ( !qword_490600
        || (v62 = v12,
            v67 = v15,
            v37 = sysmalloc_mmap_fallback_constprop_0(&v73, a1, v14, qword_490600, qword_490600, dword_490608),
            v12 = v62,
            v15 = v67,
            v27 = v37,
            v37 == -1) )
      {
        v65 = v12;
        v70 = v15;
        v27 = sysmalloc_mmap_fallback_constprop_0(&v73, a1, v14, 0x100000u, v10, 0);
        v12 = v65;
        v15 = v70;
        if ( v27 == -1 )
          goto LABEL_62;
      }
      v38 = v73;
      v39 = v27 + v73;
      if ( !v27 )
        goto LABEL_62;
      if ( qword_490630 )
      {
        v26 = v73 + qword_490EF8;
        v40 = 0;
        qword_490EF8 += v73;
LABEL_44:
        if ( (dword_490674 & 2) == 0 )
        {
          if ( v14 )
            v41 = v15 > v27;
          else
            v41 = 0;
          if ( !v41 )
          {
            if ( v14 )
              qword_490EF8 = v27 - v15 + v26;
            v42 = v27 & 0xF;
            if ( (v27 & 0xF) != 0 )
            {
              v43 = 16 - v42 + v14;
              v63 = v27 + 16 - v42;
            }
            else
            {
              v43 = v14;
              v63 = v27;
            }
            v44 = ((v10 - 1 + v27 + v38 + v43) & -v10) - (v27 + v38);
            if ( (v44 & 0x8000000000000000LL) == 0 )
            {
              if ( (_always_fail_morecore & 1) != 0 )
                goto LABEL_62;
              v68 = v12;
              v39 = sbrk(v44);
              v12 = v68;
              v45 = v44;
              if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
              {
                if ( qword_4905F8 - 1 < v44 )
                {
                  v53 = v44;
                  v54 = v39;
                  if ( ((dl_pagesize - 1) & v39) != 0 )
                  {
                    v53 = v44 + ((dl_pagesize - 1) & v39);
                    v54 = -dl_pagesize & v39;
                  }
                  madvise(v54, v53, 14);
                  v27 = v63;
                  v12 = v68;
                  v45 = v44;
                }
                else
                {
                  v27 = v63;
                }
                goto LABEL_82;
              }
              if ( (_always_fail_morecore & 1) != 0 )
                goto LABEL_62;
              v39 = sbrk(0);
              v12 = v68;
              if ( v39 == -1 )
                goto LABEL_62;
              goto LABEL_100;
            }
LABEL_109:
            v55 = _libc_assert_fail("correction >= 0", "malloc.c", 2820, "sysmalloc", v40, a6, v12, v15);
            return int_malloc(v55, v56, v57, v58, v59, v60);
          }
LABEL_108:
          malloc_printerr("break adjusted to free malloc space");
          goto LABEL_109;
        }
        v44 = v27 & 0xF;
        if ( (v27 & 0xF) == 0 )
        {
          v45 = 0;
          if ( !(_DWORD)v40 )
          {
LABEL_82:
            v49 = qword_490EF8;
            qword_4906D0 = v27;
            *(_QWORD *)(v27 + 8) = (v39 - v27 + v45) | 1;
            v26 = v44 + v49;
            qword_490EF8 = v44 + v49;
            if ( v14 )
            {
              v50 = (v14 - 32) & 0xFFFFFFFFFFFFFFF0LL;
              v51 = (char *)v12 + v50;
              v12[1] = v50 | 1;
              *((_QWORD *)v51 + 1) = 17;
              *((_QWORD *)v51 + 3) = 17;
              if ( v50 > 0x1F )
              {
                int_free((__int64)&main_arena, v12, 1);
                v27 = qword_4906D0;
                v26 = qword_490EF8;
              }
            }
            goto LABEL_19;
          }
          if ( (_always_fail_morecore & 1) != 0 || (v72 = v12, v63 = v27, v39 = sbrk(0), v12 = v72, v39 == -1) )
          {
            v27 = qword_4906D0;
            v26 = qword_490EF8;
            goto LABEL_19;
          }
LABEL_100:
          if ( v39 )
          {
            v27 = v63;
            v44 = 0;
            v45 = 0;
            goto LABEL_82;
          }
LABEL_62:
          v27 = qword_4906D0;
          v26 = qword_490EF8;
          goto LABEL_19;
        }
LABEL_107:
        _libc_assert_fail("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2847, "sysmalloc");
        goto LABEL_108;
      }
      v40 = 0;
    }
    qword_490630 = v27;
LABEL_74:
    if ( (_DWORD)v40 )
      v48 = v15 == v27;
    else
      v48 = 0;
    v26 = v38 + qword_490EF8;
    qword_490EF8 += v38;
    if ( v48 )
    {
      v27 = qword_4906D0;
      v12[1] = (v14 + v38) | 1;
      goto LABEL_19;
    }
    goto LABEL_44;
  }
  if ( qword_490600 )
  {
    v18 = 4 * qword_490600;
    v19 = -4 * qword_490600;
  }
  else
  {
    v19 = -67108864;
    v18 = 0x4000000;
  }
  v20 = (_QWORD *)((unsigned __int64)v12 & v19);
  v21 = v20[2];
  if ( (__int64)(v17 - v14) > 0 )
  {
    v22 = ((v17 - v14 - 1 + v20[4]) & -v20[4]) + v21;
    if ( v18 >= v22 )
    {
      v23 = v20[3];
      if ( v22 <= v23 )
      {
LABEL_18:
        v20[2] = v22;
        v24 = v20[2];
        v25 = ((char *)v20 + v24 - (char *)v12) | 1;
        v26 = v24 + a2[273] - v21;
        a2[273] = v26;
        v27 = a2[12];
        v12[1] = v25;
        goto LABEL_19;
      }
      v64 = (__int64 *)a2[12];
      v69 = v20[2];
      v46 = mprotect((char *)v20 + v23, v22 - v23, mtag_mmap_flags | 3u);
      v12 = v64;
      if ( !v46 )
      {
        v21 = v69;
        v20[3] = v22;
        goto LABEL_18;
      }
    }
  }
  v61 = v12;
  v30 = (_QWORD *)new_heap(a1 + 80, qword_4905D8);
  if ( v30 )
  {
    v31 = v30[2];
    v32 = (v14 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v33 = a2[273];
    v27 = (unsigned __int64)(v30 + 6);
    v34 = v32 + 16;
    *v30 = a2;
    v30[1] = v20;
    v26 = v31 + v33;
    a2[12] = v30 + 6;
    a2[273] = v26;
    v30[7] = (v31 - 48) | 1;
    *(__int64 *)((char *)v61 + v32 + 24) = 1;
    if ( v32 > 0x1F )
    {
      *(_OWORD *)((char *)v61 + v32 + 8) = xmmword_45A910;
      v61[1] = v32 | 5;
      int_free((__int64)a2, v61, 1);
      v27 = a2[12];
      v26 = a2[273];
    }
    else
    {
      v61[1] = v34 | 1;
      *(__int64 *)((char *)v61 + v34) = v34;
    }
LABEL_19:
    if ( a2[274] < v26 )
      a2[274] = v26;
    v28 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 <= v28 )
    {
      result = v27 + 16;
      a2[12] = v27 + a1;
      *(_QWORD *)(v27 + 8) = a1 | (4LL * (a2 != (_QWORD *)&main_arena)) | 1;
      *(_QWORD *)(v27 + a1 + 8) = (v28 - a1) | 1;
      return result;
    }
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( v11 || (result = sysmalloc_mmap_isra_0(a1, v10, 0), result == -1) )
  {
    v27 = a2[12];
    v26 = a2[273];
    goto LABEL_19;
  }
  return result;
}
