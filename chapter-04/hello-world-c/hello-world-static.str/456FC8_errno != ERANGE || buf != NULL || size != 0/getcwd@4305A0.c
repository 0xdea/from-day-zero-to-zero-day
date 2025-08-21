char *__fastcall getcwd(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  __int64 v14; // x27
  __int64 v15; // x28
  char *v16; // x3
  __int16 *v17; // x2
  int v18; // w0
  char *v19; // x0
  char *v20; // x19
  __int64 v21; // x26
  __int64 v22; // x27
  unsigned __int64 StatusReg; // x21
  __int64 v24; // x23
  unsigned int v25; // w24
  __int64 v26; // x0
  __int64 v27; // x28
  _BOOL4 v28; // w20
  __int64 v29; // x0
  __int64 v30; // x19
  __int64 v31; // x20
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  unsigned __int64 v35; // x26
  __int64 v36; // x2
  char *v37; // x0
  __int64 v38; // x3
  bool v39; // zf
  int v40; // w0
  int v42; // w19
  bool v43; // zf
  bool v44; // zf
  __int64 v45; // x1
  __int16 *v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x0
  unsigned __int64 v51; // x19
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  char *v56; // x0
  char *v57; // [xsp+0h] [xbp-F0h]
  __int128 v58; // [xsp+8h] [xbp-E8h]
  unsigned __int64 v59; // [xsp+18h] [xbp-D8h]
  char *v60; // [xsp+18h] [xbp-D8h]
  unsigned __int64 v61; // [xsp+20h] [xbp-D0h]
  __int64 v62; // [xsp+30h] [xbp-C0h]
  unsigned __int64 v63; // [xsp+30h] [xbp-C0h]
  __int64 v64; // [xsp+38h] [xbp-B8h]
  __int64 v65; // [xsp+40h] [xbp-B0h]
  __int64 v66; // [xsp+48h] [xbp-A8h]
  _BOOL4 v67; // [xsp+50h] [xbp-A0h]
  _BOOL4 v68; // [xsp+54h] [xbp-9Ch]
  __int64 v69; // [xsp+58h] [xbp-98h]
  __int64 v70; // [xsp+68h] [xbp-88h] BYREF
  __int64 v71; // [xsp+70h] [xbp-80h]
  int v72; // [xsp+78h] [xbp-78h]
  __int64 v73; // [xsp+100h] [xbp+10h]
  __int64 v74; // [xsp+108h] [xbp+18h]
  __int64 v75; // [xsp+110h] [xbp+20h]
  __int64 v76; // [xsp+118h] [xbp+28h]
  __int64 v77; // [xsp+120h] [xbp+30h]
  __int64 v78; // [xsp+128h] [xbp+38h]
  __int64 v79; // [xsp+130h] [xbp+40h]
  __int64 v80; // [xsp+138h] [xbp+48h]
  __int64 v81; // [xsp+140h] [xbp+50h]
  __int64 v82; // [xsp+148h] [xbp+58h]

  v16 = a1;
  v17 = (__int16 *)&_stack_chk_guard;
  *(_QWORD *)&v58 = a1;
  *((_QWORD *)&v58 + 1) = a2;
  if ( a2 )
  {
    v57 = a1;
    if ( a1 )
      goto LABEL_7;
  }
  else
  {
    if ( a1 )
    {
LABEL_57:
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      return 0;
    }
    v18 = getpagesize();
    if ( v18 < 4096 )
      v18 = 4096;
    a2 = v18;
  }
  v59 = a2;
  v57 = (char *)malloc(a2, a2, v17, (__int64)v16, a5, a6);
  a2 = v59;
  if ( !v57 )
    return 0;
LABEL_7:
  v19 = linux_eabi_syscall(__NR_getcwd, v57, a2);
  if ( (unsigned __int64)v19 > 0xFFFFFFFFFFFFF000LL )
  {
    v75 = v8;
    v76 = v9;
    v40 = -(int)v19;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v40;
  }
  else
  {
    if ( (int)v19 > 0 )
    {
      if ( *v57 == 47 )
      {
        if ( v58 == 0 )
          *(_QWORD *)&v58 = realloc((__int64)v57, (int)v19, *((__int64 *)&v58 + 1), (__int64)v16, a5, a6);
        v50 = v58;
        if ( !(_QWORD)v58 )
          return v57;
        return (char *)v50;
      }
      goto LABEL_10;
    }
    if ( !(_DWORD)v19 )
      goto LABEL_10;
    v75 = v8;
    v76 = v9;
    v40 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  }
  if ( v40 != 36 )
  {
    if ( v40 == 34 && v58 == 0 )
    {
      v73 = v6;
      v74 = v7;
      v77 = v10;
      v78 = v11;
      v79 = v12;
      v80 = v13;
      v81 = v14;
      v82 = v15;
      _libc_assert_fail(
        "errno != ERANGE || buf != NULL || size != 0",
        (__int64)"../sysdeps/unix/sysv/linux/getcwd.c",
        0x7Bu,
        (__int64)"__getcwd");
    }
    if ( (_QWORD)v58 )
      return 0;
LABEL_54:
    free(v57);
    return 0;
  }
  v8 = v75;
  v9 = v76;
LABEL_10:
  if ( v58 == 0 )
  {
    free(v57);
    v57 = (char *)malloc(0x1000u, v45, v46, v47, v48, v49);
    if ( !v57 )
      return 0;
    v60 = 0;
    v61 = 4096;
    v75 = v8;
    v76 = v9;
    goto LABEL_14;
  }
  if ( *((_QWORD *)&v58 + 1) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( (_QWORD)v58 )
      return 0;
    goto LABEL_54;
  }
  if ( !*((_QWORD *)&v58 + 1) )
    goto LABEL_57;
  v60 = v57;
  v61 = *((_QWORD *)&v58 + 1);
  v75 = v8;
  v76 = v9;
LABEL_14:
  v20 = &v57[v61];
  v57[v61 - 1] = 0;
  if ( (lstat64(".", &v70) & 0x80000000) != 0 || (v21 = v70, v22 = v71, (lstat64("/", &v70) & 0x80000000) != 0) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v42 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_71;
  }
  v62 = (__int64)(v20 - 1);
  v65 = v70;
  v66 = v71;
  v67 = v22 != v71 || v21 != v70;
  v68 = v67;
  if ( !v67 )
    goto LABEL_97;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v24 = 0;
  v25 = -100;
  while ( 2 )
  {
    v26 = openat64(v25, "..", 0);
    v25 = v26;
    if ( (v26 & 0x80000000) != 0 )
    {
      v68 = 0;
      v42 = *(_DWORD *)(StatusReg + 40);
      if ( !v24 )
        goto LABEL_71;
      goto LABEL_103;
    }
    if ( (unsigned int)fstat64(v26, &v70) )
    {
      v42 = *(_DWORD *)(StatusReg + 40);
      if ( !v24 )
        goto LABEL_94;
LABEL_103:
      closedir(v24);
      if ( v68 )
        goto LABEL_94;
LABEL_71:
      if ( !v60 )
        free(v57);
      *(_DWORD *)(StatusReg + 40) = v42;
      if ( (_QWORD)v58 )
        v44 = 1;
      else
        v44 = *((_QWORD *)&v58 + 1) == 0;
      if ( !v44 )
        free(v60);
      return 0;
    }
    if ( v24 && (unsigned int)closedir(v24) || (v27 = v70, v64 = v71, (v24 = fdopendir(v25)) == 0) )
    {
      v42 = *(_DWORD *)(StatusReg + 40);
LABEL_94:
      _close_nocancel(v25);
      goto LABEL_71;
    }
    v28 = v67;
    do
    {
LABEL_24:
      *(_DWORD *)(StatusReg + 40) = 0;
      v29 = readdir64(v24);
      if ( v29 )
      {
LABEL_25:
        if ( *(_BYTE *)(v29 + 19) != 46 )
          goto LABEL_26;
        goto LABEL_60;
      }
      while ( 1 )
      {
        v42 = *(_DWORD *)(StatusReg + 40);
        if ( v42 )
          v43 = 1;
        else
          v43 = !v28;
        if ( v43 )
          goto LABEL_68;
        rewinddir(v24);
        v29 = readdir64(v24);
        if ( !v29 )
        {
          v42 = *(_DWORD *)(StatusReg + 40);
LABEL_68:
          if ( !v42 )
          {
            v42 = 2;
            *(_DWORD *)(StatusReg + 40) = 2;
          }
          closedir(v24);
          goto LABEL_71;
        }
        v28 = 0;
        if ( *(_BYTE *)(v29 + 19) != 46 )
          break;
LABEL_60:
        if ( !*(_BYTE *)(v29 + 20) )
          goto LABEL_24;
        if ( (*(_QWORD *)(v29 + 16) & 0xFFFF00000000LL) != 0x2E00000000LL )
        {
LABEL_26:
          if ( !v28 )
            break;
          if ( *(_QWORD *)v29 == v22 || v27 != v21 )
          {
            v28 = *(_QWORD *)v29 == v22 || v27 != v21;
            break;
          }
          goto LABEL_24;
        }
        *(_DWORD *)(StatusReg + 40) = 0;
        v29 = readdir64(v24);
        if ( v29 )
          goto LABEL_25;
      }
      v30 = v29 + 19;
    }
    while ( (unsigned int)fstatat64(v25, v29 + 19, &v70, 256) || (v72 & 0xF000) != 0x4000 || v70 != v21 || v71 != v22 );
    v31 = v62 - (_QWORD)v57;
    v35 = strlen(v30);
    if ( v62 - (__int64)v57 <= v35 )
    {
      if ( *((_QWORD *)&v58 + 1) )
      {
        v42 = 34;
        *(_DWORD *)(StatusReg + 40) = 34;
        closedir(v24);
        goto LABEL_71;
      }
      if ( v35 < v61 )
        v36 = v61;
      else
        v36 = v35;
      v69 = v36;
      v63 = v36 + v61;
      if ( __CFADD__(v36, v61) || (v37 = realloc((__int64)v57, v36 + v61, v36, v32, v33, v34)) == 0 )
      {
        *(_DWORD *)(StatusReg + 40) = 12;
        closedir(v24);
        if ( !v60 )
          free(v57);
        *(_DWORD *)(StatusReg + 40) = 12;
        return 0;
      }
      v57 = v37;
      v61 = v63;
      v62 = j_memcpy(&v37[v31 + v69]);
    }
    v38 = j_memcpy(v62 - v35);
    *(_BYTE *)(v38 - 1) = 47;
    v39 = v65 == v27 && v66 == v64;
    v62 = v38 - 1;
    if ( !v39 )
    {
      v22 = v64;
      v21 = v27;
      continue;
    }
    break;
  }
  if ( (unsigned int)closedir(v24) )
  {
    v42 = *(_DWORD *)(StatusReg + 40);
    goto LABEL_71;
  }
  v20 = &v57[v61];
LABEL_97:
  if ( (char *)v62 == &v57[v61 - 1] )
    *(_BYTE *)--v62 = 47;
  v51 = (unsigned __int64)&v20[-v62];
  j_memmove(v57, v62, v51);
  if ( !*((_QWORD *)&v58 + 1) )
  {
    if ( v51 >= v61 )
      return v57;
    v60 = realloc((__int64)v57, v51, v52, v53, v54, v55);
  }
  v56 = v60;
  if ( !v60 )
    return v57;
  return v56;
}
