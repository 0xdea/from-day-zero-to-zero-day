const char *sub_4324A0(
        const char **a1,
        char *a2,
        unsigned __int8 *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        ...)
{
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  char *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x25
  unsigned __int64 v20; // x22
  int v21; // w0
  void *stack; // x2
  __int64 v23; // x1
  __int64 v24; // x19
  unsigned int v25; // w0
  int v26; // w1
  char *v27; // x0
  __int64 v28; // x0
  _BYTE *v29; // x19
  int v30; // w3
  _BYTE *v31; // x22
  unsigned __int8 *v32; // x20
  const char *result; // x0
  unsigned int v34; // w0
  int v35; // w1
  char *v36; // x0
  __int64 v37; // x0
  int gr_offs; // w1
  char *v39; // x0
  __int64 v40; // x26
  unsigned __int64 v41; // x21
  int v42; // w1
  unsigned __int64 *v43; // x0
  __int64 v44; // x0
  gcc_va_list va; // [xsp+50h] [xbp+50h] BYREF
  __int64 vars0; // [xsp+78h] [xbp+78h]
  void *vars8; // [xsp+80h] [xbp+80h]
  void *vars10; // [xsp+88h] [xbp+88h]
  void *vars18; // [xsp+90h] [xbp+90h]
  char v50; // [xsp+A0h] [xbp+A0h] BYREF

  va_start(va, a11);
  vars0 = va_arg(va, _QWORD);
  v11 = vars0;
  vars8 = va_arg(va, void *);
  v12 = vars8;
  vars10 = va_arg(va, void *);
  v13 = vars10;
  vars18 = va_arg(va, void *);
  v14 = vars18;
  va_end(va);
  if ( a2 )
  {
    v17 = a2;
    v18 = ifunc_40DFD0(a2);
    v19 = v18 + 1;
    v20 = v18 + 2;
  }
  else
  {
    v20 = 2;
    v17 = "";
    v19 = 1;
  }
  v21 = *a3;
  stack = va[0].__stack;
  v23 = 4294967256LL;
  va_start(va, a11);
  va[0].__gr_offs = -40;
  if ( !*a3 )
  {
LABEL_16:
    v28 = sub_40B890(v20, a4, a5, a6, a7, a8, a9, a10, a11, v23, (__int64)stack, v11, v12, v13, v14);
    v29 = (_BYTE *)v28;
    if ( !v28 )
      goto LABEL_60;
    a1[1] = (const char *)v28;
    a1[2] = (const char *)v28;
    v30 = *a3;
    v31 = (_BYTE *)(v28 + v20);
    va_end(va);
    va_start(va, a11);
    va[0].__gr_offs = -40;
    if ( !*a3 )
    {
LABEL_23:
      if ( v31 == v29 || (*v29 = 0, v31 - (v29 + 1) != v19) )
LABEL_33:
        sub_4323B0();
      result = (const char *)j_ifunc_40DC90(v29 + 1, v17, v19);
      *a1 = result;
      return result;
    }
    while ( v30 == 37 )
    {
      v34 = a3[1];
      v32 = a3 + 1;
      if ( v34 == 115 )
      {
        gr_offs = va[0].__gr_offs;
        v39 = (char *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
          v39 = &v50 + gr_offs;
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v40 = *(_QWORD *)v39;
        v41 = ifunc_40DFD0(*(_QWORD *)v39);
        if ( v31 - v29 < v41 )
          goto LABEL_33;
        v29 = (_BYTE *)(j_ifunc_40DC90(v29, v40, v41) + v41);
      }
      else
      {
        if ( v34 > 0x73 )
        {
          if ( v34 == 120 )
          {
            v35 = va[0].__gr_offs;
            v36 = (char *)va[0].__stack;
            if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v35 + 8 <= 0) )
              v36 = &v50 + v35;
            else
              va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 11) & 0xFFFFFFFFFFFFFFF8LL);
            v37 = sub_4244D0(*(unsigned int *)v36, (__int64)(v29 + 8), 0x10u, 0);
            if ( (_BYTE *)v37 != v29 )
              ifunc_40DE70(v29, 48, v37 - (_QWORD)v29);
            v29 += 8;
            goto LABEL_22;
          }
          if ( v34 != 122 )
LABEL_52:
            sub_4385C0("Fatal error: invalid format in exception string\n");
        }
        else
        {
          if ( v34 == 37 )
          {
            if ( v31 == v29 )
              goto LABEL_33;
            goto LABEL_21;
          }
          if ( v34 != 108 )
            goto LABEL_52;
        }
        if ( a3[2] != 120 )
          goto LABEL_52;
        v42 = va[0].__gr_offs;
        v43 = (unsigned __int64 *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v42 + 8 <= 0) )
          v43 = (unsigned __int64 *)(&v50 + v42);
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v44 = sub_4244D0(*v43, (__int64)(v29 + 16), 0x10u, 0);
        if ( (_BYTE *)v44 != v29 )
          ifunc_40DE70(v29, 48, v44 - (_QWORD)v29);
        v32 = a3 + 2;
        v29 += 16;
      }
LABEL_22:
      v30 = v32[1];
      a3 = v32 + 1;
      if ( !v32[1] )
        goto LABEL_23;
    }
    if ( v31 == v29 )
      goto LABEL_33;
    v32 = a3;
LABEL_21:
    *v29++ = v30;
    goto LABEL_22;
  }
  v23 = (__int64)a3;
  do
  {
    while ( 1 )
    {
      v24 = v23 + 1;
      if ( v21 == 37 )
        break;
      ++v20;
      v24 = v23;
LABEL_6:
      v21 = *(unsigned __int8 *)(v24 + 1);
      v23 = v24 + 1;
      if ( !*(_BYTE *)(v24 + 1) )
        goto LABEL_15;
    }
    v25 = *(unsigned __int8 *)(v23 + 1);
    if ( v25 == 120 )
      goto LABEL_28;
    if ( v25 > 0x78 )
    {
      if ( v25 != 122 )
      {
LABEL_59:
        ++v20;
        goto LABEL_6;
      }
LABEL_27:
      if ( *(_BYTE *)(v23 + 2) == 120 )
      {
        v20 += 16LL;
        v24 = v23 + 2;
        goto LABEL_6;
      }
LABEL_28:
      v20 += 8LL;
      goto LABEL_6;
    }
    if ( v25 == 108 )
      goto LABEL_27;
    if ( v25 != 115 )
      goto LABEL_59;
    v26 = va[0].__gr_offs;
    v27 = (char *)va[0].__stack;
    if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v26 + 8 <= 0) )
      v27 = &v50 + v26;
    else
      va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
    v20 += ifunc_40DFD0(*(_QWORD *)v27);
    v21 = *(unsigned __int8 *)(v24 + 1);
    v23 = v24 + 1;
  }
  while ( *(_BYTE *)(v24 + 1) );
LABEL_15:
  if ( (v20 & 0x8000000000000000LL) == 0 )
    goto LABEL_16;
LABEL_60:
  result = "out of memory";
  *a1 = "";
  a1[1] = "out of memory";
  a1[2] = 0;
  return result;
}
