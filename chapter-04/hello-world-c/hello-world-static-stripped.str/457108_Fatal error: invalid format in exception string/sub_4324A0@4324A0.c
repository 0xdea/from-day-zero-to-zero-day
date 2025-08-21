const char *sub_4324A0(
        const char **a1,
        char *a2,
        unsigned __int8 *a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        long double a11,
        ...)
{
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  char *v16; // x23
  __int64 v17; // x0
  __int64 v18; // x25
  unsigned __int64 v19; // x22
  int v20; // w0
  __int16 *stack; // x2
  __int64 v22; // x1
  __int64 v23; // x19
  unsigned int v24; // w0
  int v25; // w1
  char *v26; // x0
  __int64 v27; // x0
  long double v28; // q0
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
  char *v43; // x0
  __int64 v44; // x0
  gcc_va_list va; // [xsp+50h] [xbp+50h] BYREF
  __int64 vars0; // [xsp+78h] [xbp+78h]
  __int64 vars8; // [xsp+80h] [xbp+80h]
  __int64 vars10; // [xsp+88h] [xbp+88h]
  __int64 vars18; // [xsp+90h] [xbp+90h]
  char v50; // [xsp+A0h] [xbp+A0h] BYREF

  va_start(va, a11);
  vars0 = va_arg(va, _QWORD);
  v11 = vars0;
  vars8 = va_arg(va, _QWORD);
  v12 = vars8;
  vars10 = va_arg(va, _QWORD);
  v13 = vars10;
  vars18 = va_arg(va, _QWORD);
  va_end(va);
  if ( a2 )
  {
    v16 = a2;
    v17 = ifunc_40DFD0(a2);
    v18 = v17 + 1;
    v19 = v17 + 2;
  }
  else
  {
    v19 = 2;
    v16 = "";
    v18 = 1;
  }
  v20 = *a3;
  stack = (__int16 *)va[0].__stack;
  v22 = 4294967256LL;
  va_start(va, a11);
  va[0].__gr_offs = -40;
  if ( !*a3 )
  {
LABEL_16:
    v27 = sub_40B890(v19, a4, a5, a6, a7, a8, a9, a10, a11, v22, stack, v11, v12, v13);
    v29 = (_BYTE *)v27;
    if ( !v27 )
      goto LABEL_60;
    a1[1] = (const char *)v27;
    a1[2] = (const char *)v27;
    v30 = *a3;
    v31 = (_BYTE *)(v27 + v19);
    va_end(va);
    va_start(va, a11);
    va[0].__gr_offs = -40;
    if ( !*a3 )
    {
LABEL_23:
      if ( v31 == v29 || (*v29 = 0, v31 - (v29 + 1) != v18) )
LABEL_33:
        sub_4323B0(v28);
      result = (const char *)j_ifunc_40DC90(v29 + 1, v16, v18);
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
            v37 = sub_4244D0(*(unsigned int *)v36, v29 + 8, 16, 0);
            if ( (_BYTE *)v37 != v29 )
              ifunc_40DE70(v29, 48, v37 - (_QWORD)v29);
            v29 += 8;
            goto LABEL_22;
          }
          if ( v34 != 122 )
LABEL_52:
            sub_4385C0("Fatal error: invalid format in exception string\n", v28);
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
        v43 = (char *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v42 + 8 <= 0) )
          v43 = &v50 + v42;
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v44 = sub_4244D0(*(_QWORD *)v43, v29 + 16, 16, 0);
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
  v22 = (__int64)a3;
  do
  {
    while ( 1 )
    {
      v23 = v22 + 1;
      if ( v20 == 37 )
        break;
      ++v19;
      v23 = v22;
LABEL_6:
      v20 = *(unsigned __int8 *)(v23 + 1);
      v22 = v23 + 1;
      if ( !*(_BYTE *)(v23 + 1) )
        goto LABEL_15;
    }
    v24 = *(unsigned __int8 *)(v22 + 1);
    if ( v24 == 120 )
      goto LABEL_28;
    if ( v24 > 0x78 )
    {
      if ( v24 != 122 )
      {
LABEL_59:
        ++v19;
        goto LABEL_6;
      }
LABEL_27:
      if ( *(_BYTE *)(v22 + 2) == 120 )
      {
        v19 += 16LL;
        v23 = v22 + 2;
        goto LABEL_6;
      }
LABEL_28:
      v19 += 8LL;
      goto LABEL_6;
    }
    if ( v24 == 108 )
      goto LABEL_27;
    if ( v24 != 115 )
      goto LABEL_59;
    v25 = va[0].__gr_offs;
    v26 = (char *)va[0].__stack;
    if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v25 + 8 <= 0) )
      v26 = &v50 + v25;
    else
      va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
    v19 += ifunc_40DFD0(*(_QWORD *)v26);
    v20 = *(unsigned __int8 *)(v23 + 1);
    v22 = v23 + 1;
  }
  while ( *(_BYTE *)(v23 + 1) );
LABEL_15:
  if ( (v19 & 0x8000000000000000LL) == 0 )
    goto LABEL_16;
LABEL_60:
  result = "out of memory";
  *a1 = "";
  a1[1] = "out of memory";
  a1[2] = 0;
  return result;
}
