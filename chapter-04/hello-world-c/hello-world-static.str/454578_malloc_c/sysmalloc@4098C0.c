__int64 __fastcall sysmalloc(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v2; // x27
  unsigned __int64 v3; // x28
  __int64 v6; // x23
  int v7; // w24
  char *v8; // x6
  __int64 v9; // x1
  unsigned __int64 v10; // x28
  unsigned __int64 v11; // x7
  bool v12; // zf
  unsigned __int64 v13; // x27
  unsigned __int64 v14; // x2
  __int64 v15; // x21
  _QWORD *v16; // x21
  __int64 v17; // x3
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  unsigned __int64 v22; // x1
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x1
  __int64 result; // x0
  _QWORD *v26; // x0
  __int64 v27; // x2
  unsigned __int64 v28; // x28
  __int64 v29; // x1
  unsigned __int64 v30; // x3
  __int64 v31; // x0
  __int64 v32; // x24
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x24
  int v36; // w4
  bool v37; // cc
  unsigned __int64 v38; // x1
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x23
  unsigned __int64 v41; // x5
  int v42; // w0
  __int64 v43; // x1
  bool v44; // zf
  __int64 v45; // x0
  unsigned __int64 v46; // x0
  char *v47; // x2
  __int64 v48; // x0
  unsigned __int64 v49; // x1
  __int64 v50; // x0
  __int64 v51; // x0
  char *v52; // [xsp+8h] [xbp-28h]
  char *v53; // [xsp+8h] [xbp-28h]
  unsigned __int64 v54; // [xsp+8h] [xbp-28h]
  char *v55; // [xsp+8h] [xbp-28h]
  char *v56; // [xsp+8h] [xbp-28h]
  char *v57; // [xsp+8h] [xbp-28h]
  unsigned __int64 v58; // [xsp+10h] [xbp-20h]
  char *v59; // [xsp+10h] [xbp-20h]
  __int64 v60; // [xsp+10h] [xbp-20h]
  unsigned __int64 v61; // [xsp+10h] [xbp-20h]
  char *v62; // [xsp+10h] [xbp-20h]
  char *v63; // [xsp+10h] [xbp-20h]
  __int64 v64; // [xsp+20h] [xbp-10h] BYREF
  __int64 v65; // [xsp+80h] [xbp+50h]
  unsigned __int64 v66; // [xsp+88h] [xbp+58h]

  v6 = dl_pagesize;
  if ( a2 && (qword_4905E0 > a1 || dword_49060C >= dword_490610) )
  {
    v7 = 0;
    v65 = v2;
    v66 = v3;
  }
  else
  {
    if ( qword_490600 - 1 < a1 )
    {
      result = sysmalloc_mmap_isra_0(a1, qword_490600, dword_490608);
      if ( result != -1 )
        return result;
    }
    result = sysmalloc_mmap_isra_0(a1, v6, 0);
    if ( result != -1 )
      return result;
    if ( !a2 )
      return 0;
    v7 = 1;
    v65 = v2;
    v66 = v3;
  }
  v8 = (char *)a2[12];
  v9 = *((_QWORD *)v8 + 1);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = (unsigned __int64)&v8[v9 & 0xFFFFFFFFFFFFFFF8LL];
  v12 = (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 + 12 == (_QWORD *)v8;
  if ( !v12 && (v10 <= 0x1F || (v9 & 1) == 0 || (v11 & (v6 - 1)) != 0) )
  {
    _libc_assert_fail(
      "(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) &"
      "& ((unsigned long) old_end & (pagesize - 1)) == 0)",
      "malloc.c",
      2599,
      "sysmalloc");
    v65 = v2;
    v66 = v10;
  }
  v13 = a1 + 32;
  if ( a1 + 32 <= v10 )
  {
    _libc_assert_fail("(unsigned long) (old_size) < (unsigned long) (nb + MINSIZE)", "malloc.c", 2605, "sysmalloc");
    goto LABEL_107;
  }
  if ( a2 == (_QWORD *)&main_arena )
  {
    v31 = qword_4905D8 + 32 + a1;
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
      v31 -= v10;
    if ( qword_4905F8 )
      v32 = ((_curbrk + v31 + qword_4905F8 - 1) & -qword_4905F8) - _curbrk;
    else
      v32 = (dl_pagesize - 1 + v31) & -dl_pagesize;
    v64 = v32;
    if ( v32 <= 0 )
      goto LABEL_112;
    if ( (_always_fail_morecore & 1) != 0
      || (v57 = v8,
          v62 = &v8[v9 & 0xFFFFFFFFFFFFFFF8LL],
          v23 = sbrk(v32),
          v8 = v57,
          v11 = (unsigned __int64)v62,
          v23 - 1 > 0xFFFFFFFFFFFFFFFDLL) )
    {
      v23 = 0;
    }
    else
    {
      v43 = v32;
      if ( v32 > (unsigned __int64)(qword_4905F8 - 1) )
      {
        v48 = v23;
        if ( ((dl_pagesize - 1) & v23) != 0 )
        {
          v43 = v32 + ((dl_pagesize - 1) & v23);
          v48 = -dl_pagesize & v23;
        }
        madvise(v48, v43, 14);
        v8 = v57;
        v11 = (unsigned __int64)v62;
      }
    }
    if ( v23 )
    {
      v36 = 1;
      v34 = v64;
      v35 = qword_490630;
      if ( qword_490630 )
      {
        v35 = 0;
        goto LABEL_74;
      }
    }
    else
    {
LABEL_112:
      if ( !qword_490600
        || (v53 = v8,
            v58 = v11,
            v33 = sysmalloc_mmap_fallback_constprop_0(
                    &v64,
                    a1,
                    v10,
                    qword_490600,
                    qword_490600,
                    (unsigned int)dword_490608),
            v8 = v53,
            v11 = v58,
            v23 = v33,
            v33 == -1) )
      {
        v56 = v8;
        v61 = v11;
        v23 = sysmalloc_mmap_fallback_constprop_0(&v64, a1, v10, 0x100000, v6, 0);
        v8 = v56;
        v11 = v61;
        if ( v23 == -1 )
          goto LABEL_62;
      }
      v34 = v64;
      v35 = v23 + v64;
      if ( !v23 )
        goto LABEL_62;
      if ( qword_490630 )
      {
        v22 = v64 + qword_490EF8;
        v36 = 0;
        qword_490EF8 += v64;
LABEL_44:
        if ( (dword_490674 & 2) == 0 )
        {
          if ( v10 )
            v37 = v11 > v23;
          else
            v37 = 0;
          if ( !v37 )
          {
            if ( v10 )
              qword_490EF8 = v23 - v11 + v22;
            v38 = v23 & 0xF;
            if ( (v23 & 0xF) != 0 )
            {
              v39 = 16 - v38 + v10;
              v54 = v23 + 16 - v38;
            }
            else
            {
              v39 = v10;
              v54 = v23;
            }
            v40 = ((v6 - 1 + v23 + v34 + v39) & -v6) - (v23 + v34);
            if ( (v40 & 0x8000000000000000LL) == 0 )
            {
              if ( (_always_fail_morecore & 1) != 0 )
                goto LABEL_62;
              v59 = v8;
              v35 = sbrk(v40);
              v8 = v59;
              v41 = v40;
              if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
              {
                if ( qword_4905F8 - 1 < v40 )
                {
                  v49 = v40;
                  v50 = v35;
                  if ( ((dl_pagesize - 1) & v35) != 0 )
                  {
                    v49 = v40 + ((dl_pagesize - 1) & v35);
                    v50 = -dl_pagesize & v35;
                  }
                  madvise(v50, v49, 14);
                  v23 = v54;
                  v8 = v59;
                  v41 = v40;
                }
                else
                {
                  v23 = v54;
                }
                goto LABEL_82;
              }
              if ( (_always_fail_morecore & 1) != 0 )
                goto LABEL_62;
              v35 = sbrk(0);
              v8 = v59;
              if ( v35 == -1 )
                goto LABEL_62;
              goto LABEL_100;
            }
LABEL_109:
            v51 = _libc_assert_fail("correction >= 0", "malloc.c", 2820, "sysmalloc");
            return int_malloc(v51);
          }
LABEL_108:
          malloc_printerr("break adjusted to free malloc space");
          goto LABEL_109;
        }
        v40 = v23 & 0xF;
        if ( (v23 & 0xF) == 0 )
        {
          v41 = 0;
          if ( !v36 )
          {
LABEL_82:
            v45 = qword_490EF8;
            qword_4906D0 = v23;
            *(_QWORD *)(v23 + 8) = (v35 - v23 + v41) | 1;
            v22 = v40 + v45;
            qword_490EF8 = v40 + v45;
            if ( v10 )
            {
              v46 = (v10 - 32) & 0xFFFFFFFFFFFFFFF0LL;
              v47 = &v8[v46];
              *((_QWORD *)v8 + 1) = v46 | 1;
              *((_QWORD *)v47 + 1) = 17;
              *((_QWORD *)v47 + 3) = 17;
              if ( v46 > 0x1F )
              {
                int_free(&main_arena, v8, 1);
                v23 = qword_4906D0;
                v22 = qword_490EF8;
              }
            }
            goto LABEL_19;
          }
          if ( (_always_fail_morecore & 1) != 0 || (v63 = v8, v54 = v23, v35 = sbrk(0), v8 = v63, v35 == -1) )
          {
            v23 = qword_4906D0;
            v22 = qword_490EF8;
            goto LABEL_19;
          }
LABEL_100:
          if ( v35 )
          {
            v23 = v54;
            v40 = 0;
            v41 = 0;
            goto LABEL_82;
          }
LABEL_62:
          v23 = qword_4906D0;
          v22 = qword_490EF8;
          goto LABEL_19;
        }
LABEL_107:
        _libc_assert_fail("((unsigned long) chunk2mem (brk) & MALLOC_ALIGN_MASK) == 0", "malloc.c", 2847, "sysmalloc");
        goto LABEL_108;
      }
      v36 = 0;
    }
    qword_490630 = v23;
LABEL_74:
    if ( v36 )
      v44 = v11 == v23;
    else
      v44 = 0;
    v22 = v34 + qword_490EF8;
    qword_490EF8 += v34;
    if ( v44 )
    {
      v23 = qword_4906D0;
      *((_QWORD *)v8 + 1) = (v10 + v34) | 1;
      goto LABEL_19;
    }
    goto LABEL_44;
  }
  if ( qword_490600 )
  {
    v14 = 4 * qword_490600;
    v15 = -4 * qword_490600;
  }
  else
  {
    v15 = -67108864;
    v14 = 0x4000000;
  }
  v16 = (_QWORD *)((unsigned __int64)v8 & v15);
  v17 = v16[2];
  if ( (__int64)(v13 - v10) > 0 )
  {
    v18 = ((v13 - v10 - 1 + v16[4]) & -v16[4]) + v17;
    if ( v14 >= v18 )
    {
      v19 = v16[3];
      if ( v18 <= v19 )
      {
LABEL_18:
        v16[2] = v18;
        v20 = v16[2];
        v21 = ((char *)v16 + v20 - v8) | 1;
        v22 = v20 + a2[273] - v17;
        a2[273] = v22;
        v23 = a2[12];
        *((_QWORD *)v8 + 1) = v21;
        goto LABEL_19;
      }
      v55 = (char *)a2[12];
      v60 = v16[2];
      v42 = mprotect((char *)v16 + v19, v18 - v19, mtag_mmap_flags | 3u);
      v8 = v55;
      if ( !v42 )
      {
        v17 = v60;
        v16[3] = v18;
        goto LABEL_18;
      }
    }
  }
  v52 = v8;
  v26 = (_QWORD *)new_heap(a1 + 80, qword_4905D8);
  if ( v26 )
  {
    v27 = v26[2];
    v28 = (v10 - 32) & 0xFFFFFFFFFFFFFFF0LL;
    v29 = a2[273];
    v23 = (unsigned __int64)(v26 + 6);
    v30 = v28 + 16;
    *v26 = a2;
    v26[1] = v16;
    v22 = v27 + v29;
    a2[12] = v26 + 6;
    a2[273] = v22;
    v26[7] = (v27 - 48) | 1;
    *(_QWORD *)&v52[v28 + 24] = 1;
    if ( v28 > 0x1F )
    {
      *(_OWORD *)&v52[v28 + 8] = xmmword_45A910;
      *((_QWORD *)v52 + 1) = v28 | 5;
      int_free(a2, v52, 1);
      v23 = a2[12];
      v22 = a2[273];
    }
    else
    {
      *((_QWORD *)v52 + 1) = v30 | 1;
      *(_QWORD *)&v52[v30] = v30;
    }
LABEL_19:
    if ( a2[274] < v22 )
      a2[274] = v22;
    v24 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 <= v24 )
    {
      result = v23 + 16;
      a2[12] = v23 + a1;
      *(_QWORD *)(v23 + 8) = a1 | (4LL * (a2 != (_QWORD *)&main_arena)) | 1;
      *(_QWORD *)(v23 + a1 + 8) = (v24 - a1) | 1;
      return result;
    }
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( v7 || (result = sysmalloc_mmap_isra_0(a1, v6, 0), result == -1) )
  {
    v23 = a2[12];
    v22 = a2[273];
    goto LABEL_19;
  }
  return result;
}
