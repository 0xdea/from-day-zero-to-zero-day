// write access to const memory has been detected, the output may be wrong!
__int64 *sub_414920()
{
  __int64 v0; // x21
  __int64 v1; // x22
  int v2; // w23
  __int64 v3; // x0
  long double v4; // q0
  __int64 v5; // x19
  __int64 v6; // x6
  int v7; // w2
  __int64 v8; // x1
  __int64 v9; // x2
  int v10; // w0
  __int64 v11; // x0
  int v12; // w4
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x3
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x1
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // t1
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x2
  __int64 v28; // x4
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 *v31; // x0
  __int64 v32; // x2
  bool v33; // zf
  __int64 v34; // x1
  void *v35; // x2
  __int64 *v36; // x0
  __int64 v37; // x2
  bool v38; // zf
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 *v41; // x0
  __int64 v42; // x1
  bool v43; // zf
  __int64 v44; // x1
  const char *v45; // x19
  unsigned __int8 *v46; // x0
  _BOOL4 v47; // w1
  __int64 v48; // x0
  unsigned __int8 *v49; // x0
  _BOOL4 v50; // w2
  unsigned __int8 *v51; // x0
  _BOOL4 v52; // w2
  unsigned __int8 *v53; // x0
  _BOOL4 v54; // w1
  int v55; // w5
  int v56; // w6
  unsigned __int64 v57; // x0
  unsigned __int64 v58; // x2
  __int64 *result; // x0
  __int64 v60; // x0
  unsigned __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x3
  __int64 v70; // x0
  __int64 *v71; // [xsp+70h] [xbp+60h] BYREF
  __int64 v72; // [xsp+78h] [xbp+68h] BYREF
  __int64 v73; // [xsp+80h] [xbp+70h]
  __int64 v74; // [xsp+88h] [xbp+78h]

  qword_491360 = sub_437AD0();
  qword_4912C0 = qword_496760;
  word_4912D0 = qword_496768;
  if ( qword_496758 )
  {
    v3 = sub_437850("", "", 1, 0, 0x1000000, 0);
    v5 = v3;
    if ( v3 )
    {
      v6 = qword_496758;
      v7 = *(unsigned __int16 *)(qword_496758 + 56);
      v8 = v6 + *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v3 + 752) = v8;
      *(_WORD *)(v3 + 768) = v7;
      if ( v7 )
      {
        v9 = v8 + 56 + 56LL * (unsigned int)(v7 - 1);
        do
        {
          while ( 1 )
          {
            v10 = *(_DWORD *)v8;
            if ( *(_DWORD *)v8 != 2 )
              break;
            v11 = *(unsigned int *)(v8 + 4);
            v8 += 56;
            v12 = *(_BYTE *)(v5 + 870) & 0xDF | (32 * (((v11 ^ 2uLL) >> 1) & 1));
            v13 = *(_QWORD *)(v8 - 16) >> 4;
            *(_QWORD *)(v5 + 16) = *(_QWORD *)(v8 - 40);
            *(_WORD *)(v5 + 770) = v13;
            *(_BYTE *)(v5 + 870) = v12;
            if ( v8 == v9 )
              goto LABEL_10;
          }
          if ( v10 == 1 )
          {
            v60 = *(_QWORD *)(v8 + 16);
            if ( !*(_QWORD *)v5 )
              *(_QWORD *)v5 = v60;
            v61 = v60 + *(_QWORD *)(v8 + 40);
            if ( v61 >= *(_QWORD *)(v5 + 928) )
              *(_QWORD *)(v5 + 928) = v61;
          }
          else if ( v10 == 7 )
          {
            v4 = sub_41F250("ph->p_type != PT_TLS", "setup-vdso.h", 57, "setup_vdso");
            goto LABEL_148;
          }
          v8 += 56;
        }
        while ( v8 != v9 );
      }
LABEL_10:
      v14 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 920) = v6;
      v15 = *(_QWORD *)(v5 + 16);
      v16 = v6 - v14;
      v17 = *(_QWORD *)(v5 + 928);
      v18 = v15 + v16;
      *(_QWORD *)v5 = v16;
      *(_QWORD *)(v5 + 16) = v15 + v16;
      *(_QWORD *)(v5 + 928) = v17 + v16;
      if ( !(v15 + v16) )
        goto LABEL_39;
      v19 = *(_QWORD *)(v15 + v16);
      if ( v19 )
      {
        do
        {
          if ( v19 > 0x25 )
          {
            if ( v19 - 1879048192 > 5 )
            {
              if ( 1879048191 - v19 > 0xF )
              {
                if ( (unsigned int)(2 * v19) <= 0xFFFFFFF8 )
                {
                  if ( 1879047679 - v19 <= 0xB )
                  {
                    v19 = 1879047742 - v19;
                  }
                  else
                  {
                    if ( 1879047935 - v19 > 0xA )
                      goto LABEL_16;
                    v19 = 1879048010 - v19;
                  }
                }
                else
                {
                  v19 = (unsigned int)(59 - ((2 * (int)v19) >> 1));
                }
              }
              else
              {
                v19 = 1879048235 - v19;
              }
            }
            else
            {
              v19 -= 1879048154LL;
            }
          }
          *(_QWORD *)(v5 + 64 + 8 * v19) = v18;
LABEL_16:
          v20 = *(_QWORD *)(v18 + 16);
          v18 += 16;
          v19 = v20;
        }
        while ( v20 );
      }
      if ( !v16 || (*(_BYTE *)(v5 + 870) & 0x20) != 0 )
      {
        v21 = *(_QWORD *)(v5 + 224);
        if ( !v21 )
          goto LABEL_20;
      }
      else
      {
        v62 = *(_QWORD *)(v5 + 96);
        if ( v62 )
          *(_QWORD *)(v62 + 8) += v16;
        v63 = *(_QWORD *)(v5 + 88);
        if ( v63 )
          *(_QWORD *)(v63 + 8) += v16;
        v64 = *(_QWORD *)(v5 + 104);
        if ( v64 )
          *(_QWORD *)(v64 + 8) += v16;
        v65 = *(_QWORD *)(v5 + 112);
        if ( v65 )
          *(_QWORD *)(v65 + 8) += v16;
        v22 = *(_QWORD *)(v5 + 352);
        if ( v22 )
          *(_QWORD *)(v22 + 8) += v16;
        v66 = *(_QWORD *)(v5 + 248);
        if ( v66 )
          *(_QWORD *)(v66 + 8) += v16;
        v67 = *(_QWORD *)(v5 + 536);
        if ( v67 )
          *(_QWORD *)(v67 + 8) += v16;
        v68 = *(_QWORD *)(v5 + 744);
        if ( v68 )
          *(_QWORD *)(v68 + 8) += v16;
        v69 = *(_QWORD *)(v5 + 120);
        v21 = *(_QWORD *)(v5 + 224);
        if ( v69 )
        {
          v70 = *(_QWORD *)(v69 + 8);
          if ( v70 )
            *(_QWORD *)(v69 + 8) = v16 + v70;
          if ( !v21 )
            goto LABEL_21;
        }
        else if ( !v21 )
        {
LABEL_23:
          if ( !v22 || *(_QWORD *)(*(_QWORD *)(v5 + 360) + 8LL) == 8 )
          {
            v23 = *(_QWORD *)(v5 + 304);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v23 + 8);
              *(_DWORD *)(v5 + 1064) = v24;
              if ( (v24 & 2) != 0 )
                *(_QWORD *)(v5 + 192) = v23;
              if ( (v24 & 4) != 0 )
                *(_QWORD *)(v5 + 240) = v23;
              if ( (v24 & 8) != 0 )
                *(_QWORD *)(v5 + 256) = v23;
            }
            v25 = *(_QWORD *)(v5 + 448);
            if ( !v25 )
              goto LABEL_37;
            v26 = *(_QWORD *)(v25 + 8);
            *(_DWORD *)(v5 + 1060) = v26;
            if ( (v26 & 8) != 0 )
              *(_BYTE *)(v5 + 872) = 1;
            if ( (dword_496770 & 0x40) != 0 && (v26 & 0xF7FFF716) != 0 )
            {
              sub_438334("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v26 & 0xF7FFF716);
              if ( (*(_DWORD *)(v5 + 1060) & 1) == 0 )
              {
LABEL_37:
                if ( *(_QWORD *)(v5 + 296) )
                  *(_QWORD *)(v5 + 184) = 0;
LABEL_39:
                sub_439FD0(v5);
                v27 = *(_QWORD *)(v5 + 984);
                v28 = *(_QWORD *)(v5 + 176);
                *(_WORD *)(v5 + 868) |= 8u;
                *(_DWORD *)(v5 + 1052) = 1;
                *(_QWORD *)v27 = v5 + 40;
                *(_DWORD *)(v27 + 8) = 1;
                if ( v28 )
                {
                  v29 = 0;
                  if ( (*(_BYTE *)(v5 + 870) & 0x20) != 0 )
                    v29 = *(_QWORD *)v5;
                  v30 = *(_QWORD *)(v28 + 8) + *(_QWORD *)(*(_QWORD *)(v5 + 104) + 8LL) + v29;
                  **(_QWORD **)(v5 + 56) = v30;
                  *(_QWORD *)(v5 + 8) = v30;
                }
                sub_4377B0(v5, 0);
                qword_490F20 = 1;
                qword_496778 = v5;
                goto LABEL_44;
              }
            }
            else if ( (v26 & 1) == 0 )
            {
              goto LABEL_37;
            }
            *(_QWORD *)(v5 + 256) = *(_QWORD *)(v5 + 448);
            goto LABEL_37;
          }
LABEL_148:
          v4 = sub_41F250(
                 "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
                 "get-dynamic-info.h",
                 130,
                 "elf_get_dynamic_info",
                 *(double *)&v4);
          goto LABEL_149;
        }
      }
      if ( *(_QWORD *)(v21 + 8) != 7 )
      {
LABEL_149:
        v4 = sub_41F250(
               "info[DT_PLTREL]->d_un.d_val == DT_RELA",
               "get-dynamic-info.h",
               115,
               "elf_get_dynamic_info",
               *(double *)&v4);
        goto LABEL_150;
      }
LABEL_20:
      if ( !*(_QWORD *)(v5 + 120) )
      {
LABEL_22:
        v22 = *(_QWORD *)(v5 + 352);
        goto LABEL_23;
      }
LABEL_21:
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL) != 24 )
      {
LABEL_150:
        sub_41F250(
          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
          "get-dynamic-info.h",
          123,
          "elf_get_dynamic_info",
          *(double *)&v4);
        return &qword_490FD0;
      }
      goto LABEL_22;
    }
  }
  v5 = qword_496778;
  if ( qword_496778 )
  {
LABEL_44:
    v72 = 0x2000000000LL;
    v73 = 0;
    v71 = &v72;
    v74 = 0;
    v31 = (__int64 *)sub_436B10("__kernel_clock_gettime", v5, &v71, v5 + 984, &off_48C3C0, 0, 0, 0);
    if ( v71 )
    {
      v32 = 0;
      if ( v31 )
        v33 = *((unsigned __int16 *)v71 + 3) == 65521;
      else
        v33 = 1;
      if ( !v33 )
        v32 = *v31;
      v34 = qword_496778;
      v35 = (void *)(v32 + v71[1]);
    }
    else
    {
      v35 = 0;
      v34 = qword_496778;
    }
    off_48F788 = v35;
    if ( v34 )
    {
      v72 = 0x2000000000LL;
      v73 = 0;
      v71 = &v72;
      v74 = 0;
      v36 = (__int64 *)sub_436B10("__kernel_gettimeofday", v34, &v71, v34 + 984, &off_48C3C0, 0, 0, 0);
      if ( v71 )
      {
        v37 = 0;
        if ( v36 )
          v38 = *((unsigned __int16 *)v71 + 3) == 65521;
        else
          v38 = 1;
        if ( !v38 )
          v37 = *v36;
        v39 = qword_496778;
        v40 = v37 + v71[1];
      }
      else
      {
        v40 = 0;
        v39 = qword_496778;
      }
      qword_48F790 = v40;
      if ( v39
        && (v72 = 0x2000000000LL,
            v73 = 0,
            v71 = &v72,
            v74 = 0,
            v41 = (__int64 *)sub_436B10("__kernel_clock_getres", v39, &v71, v39 + 984, &off_48C3C0, 0, 0, 0),
            v71) )
      {
        v42 = 0;
        if ( v41 )
          v43 = *((unsigned __int16 *)v71 + 3) == 65521;
        else
          v43 = 1;
        if ( !v43 )
          v42 = *v41;
        v44 = v42 + v71[1];
      }
      else
      {
        v44 = 0;
      }
    }
    else
    {
      v44 = 0;
      qword_48F790 = 0;
    }
    goto LABEL_67;
  }
  v44 = 0;
  off_48F788 = 0;
  qword_48F790 = 0;
LABEL_67:
  qword_48F798 = v44;
  if ( dword_491570 )
  {
    v45 = "GCONV_PATH";
    do
    {
      sub_423500(v45);
      v45 += ifunc_40DFD0(v45) + 1;
    }
    while ( v45 < byte_45ACCE );
  }
  v46 = (unsigned __int8 *)sub_422890("LD_WARN");
  v47 = 0;
  if ( v46 )
    v47 = *v46 != 0;
  dword_496780 = v47;
  v48 = sub_422890("LD_LIBRARY_PATH");
  sub_433E00(v48, "LD_LIBRARY_PATH", 0, 0);
  qword_496788 = qword_496790;
  v49 = (unsigned __int8 *)sub_422890("LD_BIND_NOW");
  v50 = 1;
  if ( v49 )
    v50 = *v49 == 0;
  dword_496798 = v50;
  v51 = (unsigned __int8 *)sub_422890("LD_BIND_NOT");
  v52 = 0;
  if ( v51 )
    v52 = *v51 != 0;
  dword_49679C = v52;
  v53 = (unsigned __int8 *)sub_422890("LD_DYNAMIC_WEAK");
  v54 = 1;
  if ( v53 )
    v54 = *v53 == 0;
  dword_4967A0 = v54;
  if ( (_QWORD)xmmword_496728 )
  {
    if ( *(_BYTE *)xmmword_496728 )
      qword_4967A8 = ifunc_40DFD0(xmmword_496728);
    else
      *(_QWORD *)&xmmword_496728 = 0;
  }
  v55 = 0;
  v56 = 0;
  v57 = qword_496760;
  v58 = qword_496760 + 56 * qword_496768;
  if ( qword_496760 < v58 )
  {
    do
    {
      while ( *(_DWORD *)v57 == 1685382481 )
      {
        v2 = *(_DWORD *)(v57 + 4);
        v57 += 56LL;
        v56 = 1;
        if ( v57 >= v58 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)v57 == 1685382482 )
      {
        v0 = *(_QWORD *)(v57 + 16);
        v55 = 1;
        v1 = *(_QWORD *)(v57 + 40);
      }
      v57 += 56LL;
    }
    while ( v57 < v58 );
LABEL_88:
    if ( v55 )
    {
      unk_491478 = v0;
      unk_491480 = v1;
    }
    if ( v56 )
      dword_490F28 = v2;
  }
  if ( sub_445740 )
    sub_445740();
  result = &qword_490FD0;
  if ( unk_491480 )
    return (__int64 *)sub_4387E0();
  return result;
}
