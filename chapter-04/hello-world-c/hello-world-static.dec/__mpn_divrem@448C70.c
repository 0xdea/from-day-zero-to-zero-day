__int64 __fastcall _mpn_divrem(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v10; // x0
  __int64 v11; // x26
  unsigned __int64 *v12; // x25
  unsigned __int64 *v13; // x22
  unsigned __int64 v14; // x11
  unsigned __int64 v15; // x27
  unsigned __int64 v16; // x28
  int v17; // w0
  __int64 v18; // x24
  unsigned __int64 v19; // x23
  unsigned __int64 v20; // x10
  unsigned __int64 v21; // x11
  __int128 v22; // t2
  unsigned __int64 v23; // x0
  unsigned __int64 v25; // x11
  unsigned __int64 v26; // x0
  unsigned __int64 v27; // x1
  unsigned __int64 v28; // x2
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // x11
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x3
  __int64 v34; // x2
  unsigned __int64 v35; // x0
  unsigned __int128 i; // kr00_16
  unsigned __int64 *v37; // x8
  unsigned __int64 v38; // x4
  unsigned __int64 v39; // x6
  unsigned __int64 v40; // x1
  unsigned __int64 v41; // x16
  __int64 v42; // x3
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x12
  unsigned __int64 v45; // x7
  unsigned __int64 v46; // x1
  unsigned __int64 v47; // x2
  unsigned __int64 v48; // x15
  unsigned __int64 v49; // x0
  unsigned __int64 v50; // x1
  __int128 v51; // t2
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x2
  unsigned __int64 v55; // x17
  unsigned __int64 v56; // x0
  unsigned __int64 v58; // x17
  unsigned __int64 v59; // x16
  unsigned __int64 v60; // x0
  unsigned __int128 v62; // kr20_16
  unsigned __int64 v64; // x15
  unsigned __int128 v65; // kr10_16
  unsigned __int64 v66; // x0
  unsigned __int64 v67; // x8
  __int64 v68; // x3
  unsigned __int64 v69; // x9
  __int64 v70; // x10
  __int64 v71; // x12
  unsigned __int64 v72; // x6
  unsigned __int64 v73; // x0
  unsigned __int64 v74; // x7
  unsigned __int64 v75; // x1
  __int64 v76; // x11
  unsigned __int64 v77; // x0
  unsigned __int64 v78; // x4
  bool v79; // cf
  unsigned __int64 v80; // x4
  __int64 v81; // x7
  unsigned __int64 v82; // x1
  unsigned __int64 v83; // x0
  __int128 v84; // t2
  __int64 v86; // x19
  unsigned __int64 v87; // x4
  unsigned __int64 v88; // x0
  unsigned __int64 v89; // x7
  unsigned __int64 v90; // x3
  unsigned __int64 v91; // x6
  unsigned __int64 v92; // x0
  unsigned __int64 v94; // x6
  unsigned __int64 v95; // x1
  unsigned __int64 v96; // x3
  unsigned __int64 v97; // x0
  unsigned __int64 v101; // [xsp+70h] [xbp+70h]
  unsigned __int64 v102; // [xsp+70h] [xbp+70h]
  __int64 v103; // [xsp+78h] [xbp+78h]
  __int64 v104; // [xsp+78h] [xbp+78h]
  __int64 v105; // [xsp+78h] [xbp+78h]
  __int64 v106; // [xsp+80h] [xbp+80h]
  unsigned __int64 v107; // [xsp+88h] [xbp+88h]
  __int64 v108; // [xsp+98h] [xbp+98h]
  unsigned __int64 v109; // [xsp+A0h] [xbp+A0h]
  unsigned __int64 v110; // [xsp+B0h] [xbp+B0h]

  if ( a6 != 1 )
  {
    if ( a6 != 2 )
    {
      v103 = 0;
      if ( a6 )
      {
        v10 = 8 * a6 - 8;
        v11 = 8 * a6 - 16;
        v106 = a6;
        v12 = &a3[a4 - a6];
        v13 = (unsigned __int64 *)((char *)v12 + v10);
        v14 = *(unsigned __int64 *)((char *)v12 + v10);
        v108 = v10;
        v15 = *(unsigned __int64 *)((char *)a5 + v10);
        v16 = *(unsigned __int64 *)((char *)a5 + v11);
        if ( v15 > v14
          || v15 >= v14
          && (v101 = *(unsigned __int64 *)((char *)v12 + v10),
              v17 = _mpn_cmp((__int64)v12, (__int64)a5, a6 - 1),
              v14 = v101,
              v17 < 0) )
        {
          v104 = 0;
        }
        else
        {
          _mpn_sub_n(v12, v12, a5, a6);
          v14 = *v13;
          v104 = 1;
        }
        v18 = a4 + a2 - a6 - 1;
        if ( v18 >= 0 )
        {
          v107 = HIDWORD(v15);
          v109 = HIDWORD(v16);
          do
          {
            if ( a2 > v18 )
            {
              v102 = *v13;
              if ( ((a6 - 1) & 0x8000000000000000LL) == 0 )
              {
                v110 = v14;
                j_memmove(v12 + 1, v12, v106 * 8);
                v14 = v110;
              }
              *v12 = 0;
            }
            else
            {
              v13 = (unsigned __int64 *)((char *)--v12 + v108);
              v102 = v12[v106];
            }
            v19 = -1;
            if ( v15 != v14 )
            {
              v20 = v14 / v107;
              *((_QWORD *)&v22 + 1) = v14 % v107;
              *(_QWORD *)&v22 = *v13;
              v21 = v22 >> 32;
              v23 = (unsigned int)v15 * v20;
              if ( v23 > v21 )
              {
                v79 = __CFADD__(v15, v21);
                v21 += v15;
                if ( !v79 && v23 > v21 )
                {
                  v20 -= 2LL;
                  v21 += v15;
                }
                else
                {
                  --v20;
                }
              }
              v25 = v21 - v23;
              v26 = v25 / v107;
              v27 = (unsigned int)*v13 | ((unsigned __int64)(unsigned int)(v25 % v107) << 32);
              v28 = (unsigned int)v15 * (v25 / v107);
              if ( v28 > v27 )
              {
                v79 = __CFADD__(v15, v27);
                v27 += v15;
                if ( !v79 && v28 > v27 )
                {
                  v26 -= 2LL;
                  v27 += v15;
                }
                else
                {
                  --v26;
                }
              }
              v30 = v27 - v28;
              v19 = v26 | (v20 << 32);
              v31 = v109 * (unsigned int)v26;
              v32 = (unsigned int)v16 * (unsigned __int64)(unsigned int)v26;
              v33 = v109 * HIDWORD(v19);
              v34 = (unsigned int)v32;
              v35 = v31 + HIDWORD(v19) * (unsigned int)v16 + HIDWORD(v32);
              if ( v31 > v35 )
                v33 += 0x100000000LL;
              for ( i = __PAIR128__(v33 + HIDWORD(v35), v34 + (v35 << 32));
                    __PAIR128__(v30, *(unsigned __int64 *)((char *)v12 + v11)) < i;
                    i -= v16 )
              {
                v79 = __CFADD__(v30, v15);
                v30 += v15;
                --v19;
                if ( v79 )
                  break;
              }
            }
            if ( v102 != _mpn_submul_1(v12, a5, a6, v19) )
            {
              --v19;
              _mpn_add_n(v12, v12, a5, a6);
            }
            *(_QWORD *)(a1 + 8 * v18--) = v19;
            v14 = *v13;
          }
          while ( v18 != -1 );
        }
        return v104;
      }
      return v103;
    }
    v103 = 0;
    v37 = &a3[a4 - 2];
    v39 = *a5;
    v38 = a5[1];
    v40 = v37[1];
    v41 = *v37;
    if ( v38 <= v40 && (v38 < v40 || v39 <= v41) )
    {
      v40 = (__PAIR128__(v40, v41) - __PAIR128__(v38, v39)) >> 64;
      v41 -= v39;
      v103 = 1;
    }
    v42 = a4 + a2 - 3;
    if ( a4 + a2 - 3 < 0 )
    {
LABEL_71:
      *v37 = v41;
      v37[1] = v40;
      return v103;
    }
    v43 = HIDWORD(v38);
    v44 = HIDWORD(v39);
    while ( 1 )
    {
      if ( a2 <= v42 )
      {
        v45 = *--v37;
        if ( v38 != v40 )
          goto LABEL_47;
      }
      else
      {
        *v37 = 0;
        v45 = 0;
        if ( v38 != v40 )
        {
LABEL_47:
          v48 = v40 / v43;
          v49 = (unsigned int)v38 * (v40 / v43);
          *((_QWORD *)&v51 + 1) = v40 % v43;
          *(_QWORD *)&v51 = v41;
          v50 = v51 >> 32;
          if ( v49 > v50 )
          {
            v79 = __CFADD__(v38, v50);
            v50 += v38;
            if ( !v79 && v49 > v50 )
            {
              v48 -= 2LL;
              v50 += v38;
            }
            else
            {
              --v48;
            }
          }
          v53 = v50 - v49;
          v54 = v53 / v43;
          v55 = (unsigned int)v38 * (v53 / v43);
          v56 = (unsigned int)v41 | ((unsigned __int64)(unsigned int)(v53 % v43) << 32);
          if ( v55 > v56 )
          {
            v79 = __CFADD__(v38, v56);
            v56 += v38;
            if ( !v79 && v55 > v56 )
            {
              v54 -= 2LL;
              v56 += v38;
            }
            else
            {
              --v54;
            }
          }
          v64 = v54 | (v48 << 32);
          v46 = v56 - v55;
          v58 = v44 * (unsigned int)v64;
          v59 = v44 * HIDWORD(v64);
          v60 = v58
              + HIDWORD(v64) * (unsigned int)v39
              + (((unsigned int)v39 * (unsigned __int64)(unsigned int)v64) >> 32);
          if ( v58 > v60 )
            v59 += 0x100000000LL;
          v65 = __PAIR128__(v59 + HIDWORD(v60), (unsigned int)(v39 * v64) + (v60 << 32));
          goto LABEL_62;
        }
      }
      v46 = v38 + v41;
      if ( __CFADD__(v38, v41) )
      {
        v47 = v38 + v41 - v39;
        *(_QWORD *)(a1 + 8 * v42--) = -1;
        v41 = v39 + v45;
        if ( __CFADD__(v39, v45) )
          v40 = v47 + 1;
        else
          v40 = v47;
        if ( v42 == -1 )
          goto LABEL_71;
      }
      else
      {
        v64 = -1;
        v65 = __PAIR128__(v39 - (v39 != 0), -(__int64)v39);
        do
        {
LABEL_62:
          if ( *((_QWORD *)&v65 + 1) <= v46 && (*((_QWORD *)&v65 + 1) != v46 || (unsigned __int64)v65 <= v45) )
            break;
          --v64;
          v65 -= v39;
          v79 = __CFADD__(v46, v38);
          v46 += v38;
        }
        while ( !v79 );
        *(_QWORD *)(a1 + 8 * v42--) = v64;
        v62 = __PAIR128__(v46, v45) - v65;
        v40 = (__PAIR128__(v46, v45) - v65) >> 64;
        v41 = v62;
        if ( v42 == -1 )
          goto LABEL_71;
      }
    }
  }
  v105 = 0;
  v66 = a3[a4 - 1];
  v67 = *a5;
  if ( *a5 <= v66 )
  {
    v66 -= v67;
    v105 = 1;
  }
  v68 = a4 - 2;
  if ( a4 - 2 >= 0 )
  {
    v69 = HIDWORD(v67);
    v70 = (unsigned int)*a5;
    v71 = a1 + 8 * a2;
    while ( 1 )
    {
      v72 = v66 / v69;
      v80 = a3[v68];
      v81 = v66 / v69 - 1;
      v82 = v72 * v70;
      *((_QWORD *)&v84 + 1) = v66 % v69;
      *(_QWORD *)&v84 = v80;
      v83 = v84 >> 32;
      if ( v83 < v72 * v70 )
      {
        v79 = __CFADD__(v67, v83);
        v83 += v67;
        if ( v79 || v83 >= v82 )
        {
          v72 = v81;
        }
        else
        {
          v72 -= 2LL;
          v83 += v67;
        }
      }
      v73 = v83 - v82;
      v74 = v73 / v69;
      v75 = v73 % v69;
      v76 = v73 / v69 - 1;
      v77 = v73 / v69 * v70;
      v78 = (unsigned int)v80 | ((unsigned __int64)(unsigned int)v75 << 32);
      if ( v78 >= v77 )
        goto LABEL_85;
      v79 = __CFADD__(v67, v78);
      v78 += v67;
      v79 = v79 || v78 >= v77;
      if ( v79 )
      {
        v74 = v76;
LABEL_85:
        *(_QWORD *)(v71 + 8 * v68--) = v74 | (v72 << 32);
        v66 = v78 - v77;
        if ( v68 == -1 )
          break;
      }
      else
      {
        *(_QWORD *)(v71 + 8 * v68--) = (v74 - 2) | (v72 << 32);
        v66 = v78 + v67 - v77;
        if ( v68 == -1 )
          break;
      }
    }
  }
  v86 = a2 - 1;
  if ( v86 >= 0 )
  {
    v87 = HIDWORD(v67);
    do
    {
      while ( 1 )
      {
        v94 = v66 / v87;
        v95 = v94;
        v96 = v66 / v87 * (unsigned int)v67;
        v97 = (v66 % v87) << 32;
        if ( v97 < v94 * (unsigned int)v67 )
        {
          v79 = __CFADD__(v67, v97);
          v97 += v67;
          v95 = v94 - 1;
          if ( !v79 && v97 < v96 )
          {
            v95 = v94 - 2;
            v97 += v67;
          }
        }
        v88 = v97 - v96;
        v89 = v88 / v87;
        v90 = v89;
        v91 = v88 / v87 * (unsigned int)v67;
        v92 = (v88 % v87) << 32;
        if ( v92 < v89 * (unsigned int)v67 )
        {
          v79 = __CFADD__(v67, v92);
          v92 += v67;
          v90 = v89 - 1;
          if ( !v79 && v92 < v91 )
            break;
        }
        *(_QWORD *)(a1 + 8 * v86--) = v90 | (v95 << 32);
        v66 = v92 - v91;
        if ( v86 == -1 )
          goto LABEL_109;
      }
      *(_QWORD *)(a1 + 8 * v86--) = (v89 - 2) | (v95 << 32);
      v66 = v92 + v67 - v91;
    }
    while ( v86 != -1 );
  }
LABEL_109:
  *a3 = v66;
  return v105;
}
