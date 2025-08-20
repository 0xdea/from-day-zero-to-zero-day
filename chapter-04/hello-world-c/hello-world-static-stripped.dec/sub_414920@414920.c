// write access to const memory has been detected, the output may be wrong!
__int64 *sub_414920()
{
  __int64 v0; // x21
  __int64 v1; // x22
  int v2; // w23
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x6
  int v6; // w2
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w0
  __int64 v10; // x0
  int v11; // w4
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x1
  unsigned __int64 v18; // x0
  unsigned __int64 v19; // t1
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x4
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 *v30; // x0
  __int64 v31; // x2
  bool v32; // zf
  __int64 v33; // x1
  __int64 (*v34)(void); // x2
  __int64 *v35; // x0
  __int64 v36; // x2
  bool v37; // zf
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 *v40; // x0
  __int64 v41; // x1
  bool v42; // zf
  __int64 v43; // x1
  const char *v44; // x19
  unsigned __int8 *v45; // x0
  _BOOL4 v46; // w1
  __int64 v47; // x0
  unsigned __int8 *v48; // x0
  _BOOL4 v49; // w2
  unsigned __int8 *v50; // x0
  _BOOL4 v51; // w2
  unsigned __int8 *v52; // x0
  _BOOL4 v53; // w1
  int v54; // w5
  int v55; // w6
  unsigned __int64 v56; // x0
  unsigned __int64 v57; // x2
  __int64 *result; // x0
  __int64 v59; // x0
  unsigned __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x3
  __int64 v69; // x0
  __int64 *v70; // [xsp+70h] [xbp+60h] BYREF
  __int64 v71; // [xsp+78h] [xbp+68h] BYREF
  __int64 v72; // [xsp+80h] [xbp+70h]
  __int64 v73; // [xsp+88h] [xbp+78h]

  qword_491360 = sub_437AD0();
  qword_4912C0 = qword_496760;
  word_4912D0 = qword_496768;
  if ( qword_496758 )
  {
    v3 = sub_437850("", "", 1, 0, 0x1000000, 0);
    v4 = v3;
    if ( v3 )
    {
      v5 = qword_496758;
      v6 = *(unsigned __int16 *)(qword_496758 + 56);
      v7 = v5 + *(_QWORD *)(v5 + 32);
      *(_QWORD *)(v3 + 752) = v7;
      *(_WORD *)(v3 + 768) = v6;
      if ( v6 )
      {
        v8 = v7 + 56 + 56LL * (unsigned int)(v6 - 1);
        do
        {
          while ( 1 )
          {
            v9 = *(_DWORD *)v7;
            if ( *(_DWORD *)v7 != 2 )
              break;
            v10 = *(unsigned int *)(v7 + 4);
            v7 += 56;
            v11 = *(_BYTE *)(v4 + 870) & 0xDF | (32 * (((v10 ^ 2uLL) >> 1) & 1));
            v12 = *(_QWORD *)(v7 - 16) >> 4;
            *(_QWORD *)(v4 + 16) = *(_QWORD *)(v7 - 40);
            *(_WORD *)(v4 + 770) = v12;
            *(_BYTE *)(v4 + 870) = v11;
            if ( v7 == v8 )
              goto LABEL_10;
          }
          if ( v9 == 1 )
          {
            v59 = *(_QWORD *)(v7 + 16);
            if ( !*(_QWORD *)v4 )
              *(_QWORD *)v4 = v59;
            v60 = v59 + *(_QWORD *)(v7 + 40);
            if ( v60 >= *(_QWORD *)(v4 + 928) )
              *(_QWORD *)(v4 + 928) = v60;
          }
          else if ( v9 == 7 )
          {
            sub_41F250("ph->p_type != PT_TLS", "setup-vdso.h", 57, "setup_vdso");
            goto LABEL_148;
          }
          v7 += 56;
        }
        while ( v7 != v8 );
      }
LABEL_10:
      v13 = *(_QWORD *)v4;
      *(_QWORD *)(v4 + 920) = v5;
      v14 = *(_QWORD *)(v4 + 16);
      v15 = v5 - v13;
      v16 = *(_QWORD *)(v4 + 928);
      v17 = v14 + v15;
      *(_QWORD *)v4 = v15;
      *(_QWORD *)(v4 + 16) = v14 + v15;
      *(_QWORD *)(v4 + 928) = v16 + v15;
      if ( !(v14 + v15) )
        goto LABEL_39;
      v18 = *(_QWORD *)(v14 + v15);
      if ( v18 )
      {
        do
        {
          if ( v18 > 0x25 )
          {
            if ( v18 - 1879048192 > 5 )
            {
              if ( 1879048191 - v18 > 0xF )
              {
                if ( (unsigned int)(2 * v18) <= 0xFFFFFFF8 )
                {
                  if ( 1879047679 - v18 <= 0xB )
                  {
                    v18 = 1879047742 - v18;
                  }
                  else
                  {
                    if ( 1879047935 - v18 > 0xA )
                      goto LABEL_16;
                    v18 = 1879048010 - v18;
                  }
                }
                else
                {
                  v18 = (unsigned int)(59 - ((2 * (int)v18) >> 1));
                }
              }
              else
              {
                v18 = 1879048235 - v18;
              }
            }
            else
            {
              v18 -= 1879048154LL;
            }
          }
          *(_QWORD *)(v4 + 64 + 8 * v18) = v17;
LABEL_16:
          v19 = *(_QWORD *)(v17 + 16);
          v17 += 16;
          v18 = v19;
        }
        while ( v19 );
      }
      if ( !v15 || (*(_BYTE *)(v4 + 870) & 0x20) != 0 )
      {
        v20 = *(_QWORD *)(v4 + 224);
        if ( !v20 )
          goto LABEL_20;
      }
      else
      {
        v61 = *(_QWORD *)(v4 + 96);
        if ( v61 )
          *(_QWORD *)(v61 + 8) += v15;
        v62 = *(_QWORD *)(v4 + 88);
        if ( v62 )
          *(_QWORD *)(v62 + 8) += v15;
        v63 = *(_QWORD *)(v4 + 104);
        if ( v63 )
          *(_QWORD *)(v63 + 8) += v15;
        v64 = *(_QWORD *)(v4 + 112);
        if ( v64 )
          *(_QWORD *)(v64 + 8) += v15;
        v21 = *(_QWORD *)(v4 + 352);
        if ( v21 )
          *(_QWORD *)(v21 + 8) += v15;
        v65 = *(_QWORD *)(v4 + 248);
        if ( v65 )
          *(_QWORD *)(v65 + 8) += v15;
        v66 = *(_QWORD *)(v4 + 536);
        if ( v66 )
          *(_QWORD *)(v66 + 8) += v15;
        v67 = *(_QWORD *)(v4 + 744);
        if ( v67 )
          *(_QWORD *)(v67 + 8) += v15;
        v68 = *(_QWORD *)(v4 + 120);
        v20 = *(_QWORD *)(v4 + 224);
        if ( v68 )
        {
          v69 = *(_QWORD *)(v68 + 8);
          if ( v69 )
            *(_QWORD *)(v68 + 8) = v15 + v69;
          if ( !v20 )
            goto LABEL_21;
        }
        else if ( !v20 )
        {
LABEL_23:
          if ( !v21 || *(_QWORD *)(*(_QWORD *)(v4 + 360) + 8LL) == 8 )
          {
            v22 = *(_QWORD *)(v4 + 304);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 8);
              *(_DWORD *)(v4 + 1064) = v23;
              if ( (v23 & 2) != 0 )
                *(_QWORD *)(v4 + 192) = v22;
              if ( (v23 & 4) != 0 )
                *(_QWORD *)(v4 + 240) = v22;
              if ( (v23 & 8) != 0 )
                *(_QWORD *)(v4 + 256) = v22;
            }
            v24 = *(_QWORD *)(v4 + 448);
            if ( !v24 )
              goto LABEL_37;
            v25 = *(_QWORD *)(v24 + 8);
            *(_DWORD *)(v4 + 1060) = v25;
            if ( (v25 & 8) != 0 )
              *(_BYTE *)(v4 + 872) = 1;
            if ( (dword_496770 & 0x40) != 0 && (v25 & 0xF7FFF716) != 0 )
            {
              sub_438334("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v25 & 0xF7FFF716);
              if ( (*(_DWORD *)(v4 + 1060) & 1) == 0 )
              {
LABEL_37:
                if ( *(_QWORD *)(v4 + 296) )
                  *(_QWORD *)(v4 + 184) = 0;
LABEL_39:
                sub_439FD0(v4);
                v26 = *(_QWORD *)(v4 + 984);
                v27 = *(_QWORD *)(v4 + 176);
                *(_WORD *)(v4 + 868) |= 8u;
                *(_DWORD *)(v4 + 1052) = 1;
                *(_QWORD *)v26 = v4 + 40;
                *(_DWORD *)(v26 + 8) = 1;
                if ( v27 )
                {
                  v28 = 0;
                  if ( (*(_BYTE *)(v4 + 870) & 0x20) != 0 )
                    v28 = *(_QWORD *)v4;
                  v29 = *(_QWORD *)(v27 + 8) + *(_QWORD *)(*(_QWORD *)(v4 + 104) + 8LL) + v28;
                  **(_QWORD **)(v4 + 56) = v29;
                  *(_QWORD *)(v4 + 8) = v29;
                }
                sub_4377B0(v4, 0);
                qword_490F20 = 1;
                qword_496778 = v4;
                goto LABEL_44;
              }
            }
            else if ( (v25 & 1) == 0 )
            {
              goto LABEL_37;
            }
            *(_QWORD *)(v4 + 256) = *(_QWORD *)(v4 + 448);
            goto LABEL_37;
          }
LABEL_148:
          sub_41F250(
            "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
            "get-dynamic-info.h",
            130,
            "elf_get_dynamic_info");
          goto LABEL_149;
        }
      }
      if ( *(_QWORD *)(v20 + 8) != 7 )
      {
LABEL_149:
        sub_41F250("info[DT_PLTREL]->d_un.d_val == DT_RELA", "get-dynamic-info.h", 115, "elf_get_dynamic_info");
        goto LABEL_150;
      }
LABEL_20:
      if ( !*(_QWORD *)(v4 + 120) )
      {
LABEL_22:
        v21 = *(_QWORD *)(v4 + 352);
        goto LABEL_23;
      }
LABEL_21:
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 136) + 8LL) != 24 )
      {
LABEL_150:
        sub_41F250(
          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
          "get-dynamic-info.h",
          123,
          "elf_get_dynamic_info");
        return &qword_490FD0;
      }
      goto LABEL_22;
    }
  }
  v4 = qword_496778;
  if ( qword_496778 )
  {
LABEL_44:
    v71 = 0x2000000000LL;
    v72 = 0;
    v70 = &v71;
    v73 = 0;
    v30 = (__int64 *)sub_436B10("__kernel_clock_gettime", v4, &v70, v4 + 984, &off_48C3C0, 0, 0, 0);
    if ( v70 )
    {
      v31 = 0;
      if ( v30 )
        v32 = *((unsigned __int16 *)v70 + 3) == 65521;
      else
        v32 = 1;
      if ( !v32 )
        v31 = *v30;
      v33 = qword_496778;
      v34 = (__int64 (*)(void))(v31 + v70[1]);
    }
    else
    {
      v34 = 0;
      v33 = qword_496778;
    }
    off_48F788 = v34;
    if ( v33 )
    {
      v71 = 0x2000000000LL;
      v72 = 0;
      v70 = &v71;
      v73 = 0;
      v35 = (__int64 *)sub_436B10("__kernel_gettimeofday", v33, &v70, v33 + 984, &off_48C3C0, 0, 0, 0);
      if ( v70 )
      {
        v36 = 0;
        if ( v35 )
          v37 = *((unsigned __int16 *)v70 + 3) == 65521;
        else
          v37 = 1;
        if ( !v37 )
          v36 = *v35;
        v38 = qword_496778;
        v39 = v36 + v70[1];
      }
      else
      {
        v39 = 0;
        v38 = qword_496778;
      }
      qword_48F790 = v39;
      if ( v38
        && (v71 = 0x2000000000LL,
            v72 = 0,
            v70 = &v71,
            v73 = 0,
            v40 = (__int64 *)sub_436B10("__kernel_clock_getres", v38, &v70, v38 + 984, &off_48C3C0, 0, 0, 0),
            v70) )
      {
        v41 = 0;
        if ( v40 )
          v42 = *((unsigned __int16 *)v70 + 3) == 65521;
        else
          v42 = 1;
        if ( !v42 )
          v41 = *v40;
        v43 = v41 + v70[1];
      }
      else
      {
        v43 = 0;
      }
    }
    else
    {
      v43 = 0;
      qword_48F790 = 0;
    }
    goto LABEL_67;
  }
  v43 = 0;
  off_48F788 = 0;
  qword_48F790 = 0;
LABEL_67:
  qword_48F798 = v43;
  if ( dword_491570 )
  {
    v44 = "GCONV_PATH";
    do
    {
      sub_423500(v44);
      v44 += ifunc_40DFD0(v44) + 1;
    }
    while ( v44 < byte_45ACCE );
  }
  v45 = (unsigned __int8 *)sub_422890("LD_WARN");
  v46 = 0;
  if ( v45 )
    v46 = *v45 != 0;
  dword_496780 = v46;
  v47 = sub_422890("LD_LIBRARY_PATH");
  sub_433E00(v47, "LD_LIBRARY_PATH", 0, 0);
  qword_496788 = qword_496790;
  v48 = (unsigned __int8 *)sub_422890("LD_BIND_NOW");
  v49 = 1;
  if ( v48 )
    v49 = *v48 == 0;
  dword_496798 = v49;
  v50 = (unsigned __int8 *)sub_422890("LD_BIND_NOT");
  v51 = 0;
  if ( v50 )
    v51 = *v50 != 0;
  dword_49679C = v51;
  v52 = (unsigned __int8 *)sub_422890("LD_DYNAMIC_WEAK");
  v53 = 1;
  if ( v52 )
    v53 = *v52 == 0;
  dword_4967A0 = v53;
  if ( (_QWORD)xmmword_496728 )
  {
    if ( *(_BYTE *)xmmword_496728 )
      qword_4967A8 = ifunc_40DFD0(xmmword_496728);
    else
      *(_QWORD *)&xmmword_496728 = 0;
  }
  v54 = 0;
  v55 = 0;
  v56 = qword_496760;
  v57 = qword_496760 + 56 * qword_496768;
  if ( qword_496760 < v57 )
  {
    do
    {
      while ( *(_DWORD *)v56 == 1685382481 )
      {
        v2 = *(_DWORD *)(v56 + 4);
        v56 += 56LL;
        v55 = 1;
        if ( v56 >= v57 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)v56 == 1685382482 )
      {
        v0 = *(_QWORD *)(v56 + 16);
        v54 = 1;
        v1 = *(_QWORD *)(v56 + 40);
      }
      v56 += 56LL;
    }
    while ( v56 < v57 );
LABEL_88:
    if ( v54 )
    {
      unk_491478 = v0;
      unk_491480 = v1;
    }
    if ( v55 )
      dword_490F28 = v2;
  }
  if ( sub_445740 )
    sub_445740();
  result = &qword_490FD0;
  if ( unk_491480 )
    return (__int64 *)sub_4387E0();
  return result;
}
