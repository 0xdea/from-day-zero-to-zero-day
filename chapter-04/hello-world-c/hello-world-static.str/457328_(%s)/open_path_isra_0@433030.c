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
  unsigned __int64 v23; // x22
  unsigned int v24; // w0
  __int16 *v25; // x2
  __int64 v26; // x4
  __int64 v27; // x5
  unsigned int v28; // w23
  __int64 v29; // x1
  __int64 v30; // x3
  __int64 *v31; // x21
  __int64 v32; // x0
  unsigned int v33; // w24
  __int64 v35; // x0
  int v36; // w1
  __int64 *v37; // x3
  unsigned int v38; // w0
  int v39; // w0
  int v40; // w0
  const char *v41; // x1
  __int64 v42; // x2
  __int64 *v43; // x5
  __int64 v44; // x2
  __int64 v45; // x5
  const char *v46; // x1
  const char *v47; // x27
  int v48; // w24
  int *v49; // x21
  __int64 v50; // x20
  _QWORD *v51; // x19
  __int64 v52; // x0
  __int64 v53; // t1
  bool v54; // zf
  __int64 v55; // x0
  __int64 v56; // [xsp+0h] [xbp-20010h] BYREF
  char v57; // [xsp+10h] [xbp-20000h] BYREF
  __int64 v58; // [xsp+400h] [xbp-1FC10h]
  _QWORD v59[2]; // [xsp+10000h] [xbp-10010h] BYREF
  char v60; // [xsp+10010h] [xbp-10000h] BYREF
  __int64 v61; // [xsp+10400h] [xbp-FC10h]
  _BYTE v62[16]; // [xsp+20000h] [xbp-10h] BYREF
  int *v63; // [xsp+20078h] [xbp+68h]
  __int64 *v64; // [xsp+20080h] [xbp+70h]
  __int64 v65; // [xsp+20088h] [xbp+78h]
  __int64 v66; // [xsp+20090h] [xbp+80h]
  __int64 v67; // [xsp+20098h] [xbp+88h]
  __int64 *v68; // [xsp+200A0h] [xbp+90h]
  const char *v69; // [xsp+200A8h] [xbp+98h]
  const char *v70; // [xsp+200B0h] [xbp+A0h]
  _QWORD *v71; // [xsp+200B8h] [xbp+A8h]
  int *v72; // [xsp+200C0h] [xbp+B0h]
  __int64 **v73; // [xsp+200C8h] [xbp+B8h]
  __int64 v74; // [xsp+200D0h] [xbp+C0h]
  int v75; // [xsp+200D8h] [xbp+C8h]
  int v76; // [xsp+200DCh] [xbp+CCh]
  _QWORD *v77; // [xsp+200E0h] [xbp+D0h]
  __int64 *v78; // [xsp+200E8h] [xbp+D8h]
  _BYTE v79[16]; // [xsp+200F0h] [xbp+E0h] BYREF
  int v80; // [xsp+20100h] [xbp+F0h]

  v8 = (_QWORD *)*a4;
  if ( *a4 )
  {
    v13 = a2 + max_dirnamelen + 15;
    v14 = v13 & 0xFFFFFFFFFFFF0000LL;
    v15 = v13 & 0xFFF0;
    v16 = &v62[-v14];
    if ( v62 != (_BYTE *)v16 )
    {
      do
        v61 = 0;
      while ( v59 != v16 );
    }
    v59[0] = 0;
    if ( v15 >= 0x400uLL )
      v61 = 0;
    v17 = &dl_debug_mask;
    v18 = &v60;
    v68 = a4;
    v69 = "\t\t(%s from file %s)\n";
    v70 = 0;
    v72 = &_libc_enable_secure;
    v73 = &dl_ns;
    v74 = a7;
    v76 = 0;
    v77 = v8;
    LODWORD(v78) = a3;
    while ( 1 )
    {
      v20 = *v77;
      v21 = *v17 & 1;
      if ( v21 )
      {
        v41 = *(const char **)(v20 + 8);
        if ( v41 != v70 )
        {
          v71 = v59;
          v42 = *(_QWORD *)(v20 + 16);
          v43 = (_QWORD *)((char *)v59 - ((max_dirnamelen + 15) & 0xFFFFFFFFFFFF0000LL));
          if ( v59 != v43 )
          {
            do
              v58 = 0;
            while ( &v56 != v43 );
          }
          v56 = 0;
          if ( (((_WORD)max_dirnamelen + 15) & 0xFFF0u) >= 0x400uLL )
            v58 = 0;
          v70 = v41;
          v63 = (int *)&v57;
          v67 = v42;
          v75 = v21;
          dl_debug_printf(" search path=");
          v44 = v67;
          v45 = *v77;
          v46 = v70;
          if ( *v77 )
          {
            v64 = a5;
            v65 = a1;
            v47 = v70;
            v48 = v75;
            v66 = v67;
            v67 = v20;
            v49 = v63;
            v63 = v17;
            v50 = v45;
            v70 = v18;
            v51 = v77;
            do
            {
              if ( v47 != *(const char **)(v50 + 8) )
                break;
              v52 = j_memcpy(v49);
              if ( *(_DWORD *)(*v51 + 40LL) != 1 )
              {
                v54 = v48 == 0;
                v48 = 0;
                *(_BYTE *)(v52 + *(_QWORD *)(v50 + 32)) = 0;
                if ( v54 )
                  dl_debug_printf_c(":%s", v49);
                else
                  dl_debug_printf_c("%s", v49);
              }
              v53 = v51[1];
              ++v51;
              v50 = v53;
            }
            while ( v53 );
            v17 = v63;
            a5 = v64;
            v46 = v47;
            a1 = v65;
            v44 = v66;
            v20 = v67;
            v18 = v70;
          }
          v70 = v46;
          if ( v44 )
            dl_debug_printf_c(v69);
          else
            dl_debug_printf_c("\t\t(%s)\n", v46);
        }
      }
      v22 = j_memcpy(v18) + *(_QWORD *)(v20 + 32);
      if ( *(_DWORD *)(v20 + 40) == 1 )
      {
        LODWORD(v30) = 0;
        goto LABEL_20;
      }
      v23 = j_memcpy(v22) + a2 - (_QWORD)v18;
      if ( (*v17 & 1) != 0 )
        dl_debug_printf("  trying file=%s\n", v18);
      v24 = open_verify_constprop_0(v18, a6, a8, 0);
      v28 = v24;
      v29 = *(unsigned int *)(v20 + 40);
      if ( (_DWORD)v29 )
      {
        v30 = (_DWORD)v29 != 1;
        if ( v24 == -1 )
          goto LABEL_24;
      }
      else
      {
        if ( v24 == -1 )
        {
          if ( v74 && (*((_BYTE *)v73[21 * *(_QWORD *)(v74 + 48)] + 870) & 1) != 0 )
          {
            LODWORD(v30) = 1;
LABEL_25:
            v38 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
            if ( v38 > 0x14 )
              return (unsigned int)-1;
            if ( ((0x102004uLL >> v38) & 1) == 0 )
              return (unsigned int)-1;
            goto LABEL_20;
          }
          v18[v23 - a2] = 0;
          if ( (unsigned int)stat64(v18, v79) )
          {
            LODWORD(v30) = 0;
            *(_DWORD *)(v20 + 40) = 1;
          }
          else
          {
            if ( (v80 & 0xF000) == 0x4000 )
              v39 = 2;
            else
              v39 = 1;
            LODWORD(v30) = (v80 & 0xF000) == 0x4000;
            *(_DWORD *)(v20 + 40) = v39;
          }
          goto LABEL_24;
        }
        v30 = 1;
        *(_DWORD *)(v20 + 40) = 2;
      }
      if ( ((unsigned int)v78 & 0x4000000) != 0
        && *v72
        && ((LODWORD(v71) = v30, v40 = fstat64(v24, v79), v30 = (unsigned int)v71, v40) || (v80 & 0x800) == 0) )
      {
        _close_nocancel(v28);
        LODWORD(v30) = (_DWORD)v71;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
      }
      else if ( v28 != -1 )
      {
        v31 = a5;
        v32 = malloc(v23, v29, v25, v30, v26, v27);
        v33 = v28;
        *v31 = v32;
        if ( v32 )
        {
          j_memcpy(v32);
        }
        else
        {
          v33 = -1;
          _close_nocancel(v28);
        }
        return v33;
      }
LABEL_24:
      if ( (_DWORD)v30 )
        goto LABEL_25;
LABEL_20:
      v35 = v77[1];
      ++v77;
      v36 = v76 | v30;
      v76 |= v30;
      if ( !v35 )
      {
        v37 = v68;
        if ( v36 != 1 )
        {
          if ( *((_DWORD *)v68 + 2) )
          {
            v55 = *v68;
            v78 = v68;
            free(v55);
            v37 = v78;
          }
          v54 = v37 == &_rtld_env_path_list || v37 == &_rtld_search_dirs;
          if ( !v54 )
          {
            v33 = -1;
            *v37 = -1;
            return v33;
          }
        }
        return (unsigned int)-1;
      }
    }
  }
  return (unsigned int)-1;
}
