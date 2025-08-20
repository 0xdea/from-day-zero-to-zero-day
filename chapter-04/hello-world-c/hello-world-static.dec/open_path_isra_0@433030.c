__int64 __fastcall open_path_isra_0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  _QWORD *v8; // x10
  __int64 v13; // x0
  unsigned __int64 v14; // x1
  unsigned __int16 v15; // w0
  _QWORD *v16; // x1
  int *v17; // x20
  const char *v18; // x19
  __int64 v20; // x21
  int v21; // w3
  __int64 v22; // x0
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  unsigned __int64 v31; // x22
  int v32; // w0
  __int64 v33; // x2
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  int v37; // w23
  __int64 v38; // x1
  __int64 v39; // x3
  __int64 *v40; // x21
  __int64 v41; // x0
  unsigned int v42; // w24
  __int64 v44; // x0
  int v45; // w1
  __int64 *v46; // x3
  unsigned int v47; // w0
  int v48; // w0
  int v49; // w0
  const char *v50; // x1
  __int64 v51; // x2
  __int64 *v52; // x5
  __int64 v53; // x2
  __int64 v54; // x5
  const char *v55; // x1
  const char *v56; // x27
  int v57; // w24
  int *v58; // x21
  __int64 v59; // x20
  _QWORD *v60; // x19
  __int64 v61; // x0
  const char *v62; // x0
  __int64 v63; // t1
  bool v64; // zf
  __int64 v65; // x0
  __int64 v66; // [xsp+0h] [xbp-20010h] BYREF
  char v67; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v68; // [xsp+400h] [xbp-1FC10h]
  _QWORD v69[2]; // [xsp+10000h] [xbp-10010h] BYREF
  char v70; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v71; // [xsp+10400h] [xbp-FC10h]
  _BYTE v72[16]; // [xsp+20000h] [xbp-10h] BYREF
  int *v73; // [xsp+20078h] [xbp+68h]
  __int64 *v74; // [xsp+20080h] [xbp+70h]
  __int64 v75; // [xsp+20088h] [xbp+78h]
  __int64 v76; // [xsp+20090h] [xbp+80h]
  __int64 v77; // [xsp+20098h] [xbp+88h]
  __int64 *v78; // [xsp+200A0h] [xbp+90h]
  const char *v79; // [xsp+200A8h] [xbp+98h]
  const char *v80; // [xsp+200B0h] [xbp+A0h]
  _QWORD *v81; // [xsp+200B8h] [xbp+A8h]
  int *v82; // [xsp+200C0h] [xbp+B0h]
  __int64 **v83; // [xsp+200C8h] [xbp+B8h]
  __int64 v84; // [xsp+200D0h] [xbp+C0h]
  int v85; // [xsp+200D8h] [xbp+C8h]
  int v86; // [xsp+200DCh] [xbp+CCh]
  _QWORD *v87; // [xsp+200E0h] [xbp+D0h]
  __int64 *v88; // [xsp+200E8h] [xbp+D8h]
  _BYTE v89[16]; // [xsp+200F0h] [xbp+E0h] BYREF
  int v90; // [xsp+20100h] [xbp+F0h]

  v8 = (_QWORD *)*a4;
  if ( *a4 )
  {
    v13 = a2 + max_dirnamelen + 15;
    v14 = v13 & 0xFFFFFFFFFFFF0000LL;
    v15 = v13 & 0xFFF0;
    v16 = &v72[-v14];
    if ( v72 != (_BYTE *)v16 )
    {
      do
        v71 = 0;
      while ( v69 != v16 );
    }
    v69[0] = 0;
    if ( v15 >= 0x400uLL )
      v71 = 0;
    v17 = &dl_debug_mask;
    v18 = &v70;
    v78 = a4;
    v79 = "\t\t(%s from file %s)\n";
    v80 = 0;
    v82 = &_libc_enable_secure;
    v83 = &dl_ns;
    v84 = a7;
    v86 = 0;
    v87 = v8;
    LODWORD(v88) = a3;
    while ( 1 )
    {
      v20 = *v87;
      v21 = *v17 & 1;
      if ( v21 )
      {
        v50 = *(const char **)(v20 + 8);
        if ( v50 != v80 )
        {
          v81 = v69;
          v51 = *(_QWORD *)(v20 + 16);
          v52 = (_QWORD *)((char *)v69 - ((max_dirnamelen + 15) & 0xFFFFFFFFFFFF0000LL));
          if ( v69 != v52 )
          {
            do
              v68 = 0;
            while ( &v66 != v52 );
          }
          v66 = 0;
          if ( (((_WORD)max_dirnamelen + 15) & 0xFFF0u) >= 0x400uLL )
            v68 = 0;
          v80 = v50;
          v73 = (int *)&v67;
          v77 = v51;
          v85 = v21;
          dl_debug_printf(" search path=");
          v53 = v77;
          v54 = *v87;
          v55 = v80;
          if ( *v87 )
          {
            v74 = a5;
            v75 = a1;
            v56 = v80;
            v57 = v85;
            v76 = v77;
            v77 = v20;
            v58 = v73;
            v73 = v17;
            v59 = v54;
            v80 = v18;
            v60 = v87;
            do
            {
              if ( v56 != *(const char **)(v59 + 8) )
                break;
              v61 = j_memcpy(v58);
              if ( *(_DWORD *)(*v60 + 40LL) != 1 )
              {
                v64 = v57 == 0;
                v57 = 0;
                *(_BYTE *)(v61 + *(_QWORD *)(v59 + 32)) = 0;
                if ( v64 )
                  v62 = ":%s";
                else
                  v62 = "%s";
                dl_debug_printf_c(v62, v58);
              }
              v63 = v60[1];
              ++v60;
              v59 = v63;
            }
            while ( v63 );
            v17 = v73;
            a5 = v74;
            v55 = v56;
            a1 = v75;
            v53 = v76;
            v20 = v77;
            v18 = v80;
          }
          v80 = v55;
          if ( v53 )
            dl_debug_printf_c(v79);
          else
            dl_debug_printf_c("\t\t(%s)\n", v55);
        }
      }
      v22 = j_memcpy(v18) + *(_QWORD *)(v20 + 32);
      if ( *(_DWORD *)(v20 + 40) == 1 )
      {
        LODWORD(v39) = 0;
        goto LABEL_20;
      }
      v31 = j_memcpy(v22) + a2 - (_QWORD)v18;
      if ( (*v17 & 1) != 0 )
        dl_debug_printf("  trying file=%s\n", v18);
      v32 = open_verify_constprop_0(v18, a6, a8, 0);
      v37 = v32;
      v38 = *(unsigned int *)(v20 + 40);
      if ( (_DWORD)v38 )
      {
        v39 = (_DWORD)v38 != 1;
        if ( v32 == -1 )
          goto LABEL_24;
      }
      else
      {
        if ( v32 == -1 )
        {
          if ( v84 && (*((_BYTE *)v83[21 * *(_QWORD *)(v84 + 48)] + 870) & 1) != 0 )
          {
            LODWORD(v39) = 1;
LABEL_25:
            v47 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
            if ( v47 > 0x14 )
              return (unsigned int)-1;
            if ( ((0x102004uLL >> v47) & 1) == 0 )
              return (unsigned int)-1;
            goto LABEL_20;
          }
          v18[v31 - a2] = 0;
          if ( (unsigned int)stat64(v18, v89) )
          {
            LODWORD(v39) = 0;
            *(_DWORD *)(v20 + 40) = 1;
          }
          else
          {
            if ( (v90 & 0xF000) == 0x4000 )
              v48 = 2;
            else
              v48 = 1;
            LODWORD(v39) = (v90 & 0xF000) == 0x4000;
            *(_DWORD *)(v20 + 40) = v48;
          }
          goto LABEL_24;
        }
        v39 = 1;
        *(_DWORD *)(v20 + 40) = 2;
      }
      if ( ((unsigned int)v88 & 0x4000000) != 0
        && *v82
        && ((LODWORD(v81) = v39, v49 = fstat64(v32, (struct stat *)v89), v39 = (unsigned int)v81, v49)
         || (v90 & 0x800) == 0) )
      {
        _close_nocancel(v37);
        LODWORD(v39) = (_DWORD)v81;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
      }
      else if ( v37 != -1 )
      {
        v40 = a5;
        v41 = malloc(v31, v23, v24, v25, v26, v27, v28, v29, v30, v38, v33, v39, v34, v35, v36);
        v42 = v37;
        *v40 = v41;
        if ( v41 )
        {
          j_memcpy(v41);
        }
        else
        {
          v42 = -1;
          _close_nocancel(v37);
        }
        return v42;
      }
LABEL_24:
      if ( (_DWORD)v39 )
        goto LABEL_25;
LABEL_20:
      v44 = v87[1];
      ++v87;
      v45 = v86 | v39;
      v86 |= v39;
      if ( !v44 )
      {
        v46 = v78;
        if ( v45 != 1 )
        {
          if ( *((_DWORD *)v78 + 2) )
          {
            v65 = *v78;
            v88 = v78;
            free(v65, v23, v24, v25, v26, v27, v28, v29, v30);
            v46 = v88;
          }
          v64 = v46 == &_rtld_env_path_list || v46 == &_rtld_search_dirs;
          if ( !v64 )
          {
            v42 = -1;
            *v46 = -1;
            return v42;
          }
        }
        return (unsigned int)-1;
      }
    }
  }
  return (unsigned int)-1;
}
