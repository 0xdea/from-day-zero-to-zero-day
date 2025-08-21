__int64 __fastcall sub_4466D0(__int64 **a1)
{
  __int64 v1; // x24
  __int64 v2; // x26
  __int64 v3; // x28
  __int64 *v4; // x20
  __int64 v6; // x25
  __int64 v7; // x0
  __int64 *v8; // x22
  __int64 v9; // x19
  __int64 **v10; // x2
  __int64 *v11; // x3
  __int64 result; // x0
  __int64 v13; // x19
  int v14; // w3
  __int64 v15; // x20
  __int64 v16; // x0
  int v17; // w3
  unsigned int v18; // w3
  __int64 i; // x20
  __int64 *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x0
  long double v24; // q0
  long double v25; // q1
  long double v26; // q2
  long double v27; // q3
  long double v28; // q4
  long double v29; // q5
  long double v30; // q6
  long double v31; // q7
  unsigned __int64 v32; // x2
  unsigned int v33; // w24
  __int64 v34; // x5
  unsigned int v35; // w0
  __int64 v36; // x1
  unsigned int v37; // w3
  __int64 v38; // x4
  __int64 v39; // x20
  unsigned __int64 v40; // x28
  __int64 v41; // x0
  __int64 v42; // x3
  unsigned __int64 *v43; // x1
  unsigned __int64 *v44; // x0
  unsigned __int64 v45; // t1
  __int64 v46; // x0
  __int64 v47; // x2
  unsigned __int64 v48; // x0
  __int64 v49; // x5
  __int64 v51; // x0
  long double v52; // q0
  __int64 v53; // x3
  __int64 v54; // x0
  __int64 v55; // x3
  __int64 v56; // x0
  __int64 v57; // x2
  __int64 v58; // x4
  __int64 v59; // x5
  long double v60; // q0
  long double v61; // q1
  long double v62; // q2
  long double v63; // q3
  long double v64; // q4
  long double v65; // q5
  long double v66; // q6
  long double v67; // q7
  __int64 v68; // x20
  __int64 v69; // x0
  unsigned int v70; // w3
  __int64 v71; // x1
  _QWORD *v72; // x0
  __int64 *v73; // x4
  __int64 *v74; // x2
  __int64 v75; // t1
  __int64 v76; // x3
  unsigned __int64 v77; // x3
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x24
  __int64 v81; // x25
  unsigned int v82; // w3
  __int64 v83; // x0
  long double v84; // q0
  unsigned __int64 *v85; // [xsp+60h] [xbp+60h]
  __int64 v86; // [xsp+60h] [xbp+60h]
  __int64 v87; // [xsp+68h] [xbp+68h]
  unsigned __int64 v88; // [xsp+78h] [xbp+78h]

  v4 = *a1;
  LODWORD(v6) = *((_DWORD *)a1 + 2);
  if ( sub_42F180(*a1, 36) || (v8 = a1[4], v8 == (__int64 *)-2LL) || (v9 = 0, !sub_42F180(v4, 47)) )
  {
    v1 = (__int64)off_4914A8;
    v7 = sub_4462F0(a1[2]);
    v8 = a1[4];
    v9 = v7 ? v7 : v1;
    if ( v8 == (__int64 *)-2LL )
    {
      v8 = *(__int64 **)(v9 + 48);
      a1[4] = v8;
    }
  }
  v10 = &(&off_4914A8)[21 * (_QWORD)v8];
  v11 = v10[4];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v10 + 7);
  *((_BYTE *)a1 + 44) = v11 != 0;
  sub_4123E4(0, v8);
  result = sub_435460(v9, v4, 2, 0, (unsigned int)v6 | 0x10000000, a1[4]);
  a1[3] = (__int64 *)result;
  v13 = result;
  if ( result )
  {
    if ( (v6 & 0x40000000) != 0 )
      return result;
    v14 = *(_DWORD *)(result + 864);
    v15 = v6 & 0x1000;
    v16 = *(_QWORD *)(result + 776);
    v17 = v14 + 1;
    *(_DWORD *)(v13 + 864) = v17;
    if ( !v16 )
    {
      if ( (v6 & 0x1000) != 0 )
        *(_BYTE *)(v13 + 872) = 1;
      sub_44B8C0(v13, 0, 0, 0, (unsigned int)v6 & 0x88000008);
      v18 = *(_DWORD *)(v13 + 784);
      for ( i = 0; v18 > (unsigned int)i; ++i )
      {
        while ( 1 )
        {
          v20 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * i) + 40LL);
          if ( !v20[102] )
            break;
          if ( v18 <= (unsigned int)++i )
            goto LABEL_22;
        }
        sub_4477A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * i) + 40LL), 0, 0);
        v21 = v20[22];
        if ( !v21 )
          goto LABEL_20;
        v22 = 0;
        if ( (*((_BYTE *)v20 + 870) & 0x20) != 0 )
          v22 = *v20;
        if ( !(unsigned int)sub_42F240(*(_QWORD *)(v21 + 8) + *(_QWORD *)(v20[13] + 8) + v22, "ld-linux-aarch64.so.1") )
        {
          sub_4480D0(v20);
          v18 = *(_DWORD *)(v13 + 784);
        }
        else
        {
LABEL_20:
          v18 = *(_DWORD *)(v13 + 784);
        }
      }
LABEL_22:
      v23 = sub_412370(a1[4]);
      *(_DWORD *)(v23 + 24) = 0;
      LODWORD(v8) = v23;
      sub_412360(v23);
      v2 = (__int64)&dword_496770;
      sub_43AAC0(v13, 0);
      if ( (dword_496770 & 0x200) != 0 )
        sub_446560(v13, 0);
      v32 = *(_QWORD *)(v13 + 1032);
      v33 = v6 & 0x8000001;
      v34 = 0;
      v35 = 0;
      v36 = *(_QWORD *)v32;
      if ( !dword_496798 )
        v33 = v6 & 0x8000000;
      v37 = -1;
      do
      {
        v38 = v35++;
        if ( (*(_WORD *)(*(_QWORD *)(v36 + 40) + 868LL) & 8) == 0 )
        {
          v34 = v35;
          if ( v37 == -1 )
            v37 = v38;
        }
        v36 = *(_QWORD *)(v32 + 8LL * v35);
      }
      while ( v36 );
      if ( (unsigned int)v34 > v37 )
      {
        v39 = 8LL * (unsigned int)(v34 - 1);
        v40 = 8 * ((unsigned int)(v34 - 1) - (unsigned __int64)((_DWORD)v34 - 1 - v37));
        while ( 1 )
        {
          v41 = *(_QWORD *)(v32 + v39);
          if ( (*(_WORD *)(*(_QWORD *)(v41 + 40) + 868LL) & 8) == 0 )
            sub_438930(v41, *(_QWORD *)(v41 + 976), v33, 0, v38);
          if ( v40 == v39 )
            break;
          v32 = *(_QWORD *)(v13 + 1032);
          v39 -= 8;
        }
      }
      v42 = *(unsigned int *)(v13 + 784);
      v1 = v13 + 776;
      v15 = 0;
      if ( (_DWORD)v42 )
        goto LABEL_40;
LABEL_129:
      v1 = 0;
      if ( (v6 & 0x100) == 0 )
        goto LABEL_71;
LABEL_115:
      sub_446174(v13);
      goto LABEL_71;
    }
    v2 = (__int64)&dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
      sub_438334(
        "opening file=%s [%lu]; direct_opencount=%u\n\n",
        *(const char **)(v13 + 8),
        *(_QWORD *)(v13 + 48),
        v17);
    LODWORD(v8) = v6 & 0x100;
    if ( (v6 & 0x100) == 0 )
    {
      if ( (v6 & 0x1000) == 0 )
        goto LABEL_132;
      if ( (dword_496770 & 0x40) != 0 )
        goto LABEL_147;
LABEL_139:
      *(_BYTE *)(v13 + 871) = 1;
      goto LABEL_132;
    }
    if ( (*(_WORD *)(v13 + 868) & 0x20) != 0 )
    {
      if ( (v6 & 0x1000) == 0 )
        goto LABEL_132;
    }
    else
    {
      sub_446174(v13);
      if ( (v6 & 0x1000) == 0 )
      {
LABEL_126:
        if ( (*(_WORD *)(v13 + 868) & 0x20) == 0 )
          sub_445EF0(v13);
        goto LABEL_132;
      }
    }
    if ( (dword_496770 & 0x40) != 0 && (*(_BYTE *)(v13 + 871) & 1) == 0 )
      goto LABEL_141;
    *(_BYTE *)(v13 + 871) = 1;
    goto LABEL_126;
  }
  if ( (v6 & 4) != 0 )
    return result;
  sub_41F250("mode & RTLD_NOLOAD", "dl-open.c", 585, "dl_open_worker_begin");
LABEL_96:
  sub_438334("activating NODELETE for %s [%lu]\n", (const char *)v4[1], v4[6]);
LABEL_74:
  *(_WORD *)((char *)v4 + 871) = v6;
  while ( 1 )
  {
    v4 = (__int64 *)v4[3];
    if ( !v4 )
      break;
LABEL_72:
    if ( (v4[109] & 1) != 0 )
    {
      if ( (*(_DWORD *)v2 & 0x40) != 0 )
        goto LABEL_96;
      goto LABEL_74;
    }
  }
LABEL_76:
  v70 = *(_DWORD *)(v13 + 784);
  v6 = v13 + 776;
  v15 = 0;
  v3 = 0x1200000000LL;
  while ( v70 > (unsigned int)v15 )
  {
    v71 = 0;
    v72 = *(_QWORD **)(*(_QWORD *)(v13 + 776) + 8 * v15);
    if ( (v72[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v73 = (__int64 *)v72[122];
      v71 = *v73;
      if ( *v73 )
      {
        v74 = v73 + 1;
        while ( v71 != v6 )
        {
          v75 = *v74++;
          v71 = v75;
          if ( !v75 )
          {
            do
              v76 = v71++;
            while ( v73[v71] );
            v77 = v76 + 2;
            v78 = 8 * v71;
            goto LABEL_88;
          }
        }
        goto LABEL_80;
      }
      v77 = 1;
      v78 = 0;
      v71 = 0;
LABEL_88:
      if ( v72[121] <= v77 )
      {
        v84 = sub_41F250("cnt + 1 < imap->l_scope_max", "dl-open.c", 339, "update_scopes");
LABEL_146:
        sub_41F250("imap->l_need_tls_init == 0", "dl-open.c", 438, "update_tls_slotinfo", *(double *)&v84);
LABEL_147:
        if ( (*(_BYTE *)(v13 + 871) & 1) != 0 )
          goto LABEL_139;
LABEL_141:
        sub_438334("marking %s [%lu] as NODELETE\n", *(const char **)(v13 + 8), *(_QWORD *)(v13 + 48));
        *(_BYTE *)(v13 + 871) = 1;
        if ( (_DWORD)v8 )
          goto LABEL_126;
LABEL_132:
        result = *(unsigned int *)(sub_412370(a1[4]) + 24);
        if ( !(_DWORD)result )
          return result;
        sub_41F250("r_state == RT_CONSISTENT", "dl-open.c", 627, "dl_open_worker_begin");
LABEL_134:
        v53 = v49;
        v87 = 4;
LABEL_55:
        v86 = v49;
        v54 = j_ifunc_40DC90(v53, v43, 8 * v32);
        v34 = v86;
        v55 = v54;
        v56 = *(_QWORD *)(v3 + 976);
        *(_QWORD *)(v3 + 976) = v55;
        if ( v86 != v56 )
          sub_439EF0();
        v42 = *(unsigned int *)(v13 + 784);
        *(_QWORD *)(v3 + 968) = v87;
        while ( (unsigned int)v42 > (unsigned int)++v15 )
        {
LABEL_40:
          v3 = *(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * v15);
          if ( (*(_QWORD *)(v3 + 864) & 0x1300000000LL) == 0x1200000000LL )
          {
            v43 = *(unsigned __int64 **)(v3 + 976);
            v32 = *v43;
            if ( *v43 )
            {
              v44 = v43 + 1;
              while ( v32 != v1 )
              {
                v45 = *v44++;
                v32 = v45;
                if ( !v45 )
                {
                  v46 = 0;
                  do
                  {
                    v47 = v46++;
                    v34 = v43[v46];
                  }
                  while ( v34 );
                  v32 = v47 + 2;
                  goto LABEL_48;
                }
              }
            }
            else
            {
              v32 = 1;
LABEL_48:
              v48 = *(_QWORD *)(v3 + 968);
              if ( v48 <= v32 )
              {
                v49 = v3 + 936;
                if ( v48 <= 3 && v43 != (unsigned __int64 *)v49 )
                  goto LABEL_134;
                v85 = *(unsigned __int64 **)(v3 + 976);
                v87 = 2 * v48;
                v88 = v32;
                v51 = sub_40B890(
                        16 * v48,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30,
                        v31,
                        2 * v48,
                        (__int16 *)v32,
                        v42,
                        v38,
                        v49);
                v43 = v85;
                v53 = v51;
                v49 = v3 + 936;
                v32 = v88;
                if ( !v51 )
                  sub_432250(12, "dlopen", 0, "cannot create scope list", v52);
                goto LABEL_55;
              }
            }
          }
        }
        if ( !(_DWORD)v42 )
          goto LABEL_129;
        v68 = 0;
        v1 = 0;
        do
        {
          while ( 1 )
          {
            v69 = *(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * v68);
            if ( (*(_WORD *)(v69 + 868) & 0x10) == 0 )
            {
              if ( *(_QWORD *)(v69 + 1144) )
                break;
            }
            if ( (unsigned int)v42 <= (unsigned int)++v68 )
              goto LABEL_70;
          }
          sub_412C90(v69, 0, v24, v25, v26, v27, v28, v29, v30, v31, v32, v42, v38, v34);
          v42 = *(unsigned int *)(v13 + 784);
          ++v68;
          v1 = 1;
        }
        while ( (unsigned int)v42 > (unsigned int)v68 );
LABEL_70:
        if ( (v6 & 0x100) != 0 )
          goto LABEL_115;
LABEL_71:
        LOWORD(v6) = 1;
        v4 = (&off_4914A8)[21 * *(_QWORD *)(v13 + 48)];
        if ( v4 )
          goto LABEL_72;
        goto LABEL_76;
      }
      v73[v77] = 0;
      __dmb(0xBu);
      *(_QWORD *)(v72[122] + v78) = v6;
      if ( (*(_DWORD *)v2 & 0x200) != 0 )
      {
LABEL_90:
        sub_446560(v72, v71);
        v70 = *(_DWORD *)(v13 + 784);
        goto LABEL_80;
      }
    }
    else if ( (*(_DWORD *)v2 & 0x200) != 0 )
    {
      goto LABEL_90;
    }
    v70 = *(_DWORD *)(v13 + 784);
LABEL_80:
    ++v15;
  }
  if ( (sub_4458A0(v13) & 1) == 0 )
    sub_432250(12, **(_QWORD **)(v13 + 56), 0, "cannot allocate address lookup data", v60);
  if ( (_DWORD)v1 )
  {
    v79 = *(unsigned int *)(v13 + 784);
    v15 = (unsigned int)v79;
    if ( (_DWORD)v79 )
    {
      v80 = 0;
      do
      {
        while ( 1 )
        {
          v81 = *(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * v80);
          if ( (*(_WORD *)(v81 + 868) & 0x10) == 0 )
          {
            if ( *(_QWORD *)(v81 + 1144) )
            {
              sub_412C90(
                *(_QWORD *)(*(_QWORD *)(v13 + 776) + 8 * v80),
                1,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67,
                v57,
                v79,
                v58,
                v59);
              v79 = *(unsigned int *)(v13 + 784);
              if ( *(__int16 *)(v81 + 868) < 0 )
                break;
            }
          }
          if ( (unsigned int)v79 <= (unsigned int)++v80 )
            goto LABEL_107;
        }
        if ( (_DWORD)v79 == (_DWORD)v15 )
          v15 = (unsigned int)v80;
        else
          v15 = (unsigned int)v15;
        ++v80;
      }
      while ( (unsigned int)v79 > (unsigned int)v80 );
    }
LABEL_107:
    if ( qword_4921D0 == -1 )
      sub_4385C0("TLS generation counter wrapped!  Please report this.", v60);
    atomic_store(qword_4921D0 + 1, (unsigned __int64 *)&qword_4921D0);
    v82 = *(_DWORD *)(v13 + 784);
    if ( v82 > (unsigned int)v15 )
    {
      v1 = 8LL * (unsigned int)v15;
      v3 = 0x801000000000LL;
      v2 = 0x800000000000LL;
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v13 + 776) + v1);
        if ( (*(_QWORD *)(v6 + 864) & 0x801000000000LL) == 0x800000000000LL && *(_QWORD *)(v6 + 1144) )
        {
          v83 = *(_QWORD *)(*(_QWORD *)(v13 + 776) + v1);
          *(_WORD *)(v6 + 868) &= ~0x8000u;
          sub_412DA4(v83);
          if ( *(__int16 *)(v6 + 868) < 0 )
            goto LABEL_146;
          v82 = *(_DWORD *)(v13 + 784);
        }
        v15 = (unsigned int)(v15 + 1);
        v1 += 8;
      }
      while ( (unsigned int)v15 < v82 );
    }
  }
  if ( (*((_BYTE *)a1 + 44) & 1) == 0 )
    sub_44B710((&off_4914A8)[21 * (_QWORD)a1[4] + 4], 0);
  result = 1;
  *((_BYTE *)a1 + 45) = 1;
  return result;
}
