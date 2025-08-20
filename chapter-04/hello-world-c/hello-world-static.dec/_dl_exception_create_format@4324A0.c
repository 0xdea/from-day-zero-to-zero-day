const char *dl_exception_create_format(
        const char **a1,
        __int64 a2,
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
  __int64 v17; // x0
  __int64 v18; // x25
  unsigned __int64 v19; // x22
  int v20; // w0
  void *stack; // x2
  __int64 v22; // x1
  __int64 v23; // x19
  unsigned int v24; // w0
  int v25; // w1
  char *v26; // x0
  __int64 v27; // x0
  _BYTE *v28; // x19
  int v29; // w3
  _BYTE *v30; // x22
  unsigned __int8 *v31; // x20
  const char *result; // x0
  unsigned int v33; // w0
  int v34; // w1
  char *v35; // x0
  __int64 v36; // x0
  int gr_offs; // w1
  char *v38; // x0
  unsigned __int64 v39; // x21
  int v40; // w1
  unsigned __int64 *v41; // x0
  __int64 v42; // x0
  gcc_va_list va; // [xsp+50h] [xbp+50h] BYREF
  __int64 vars0; // [xsp+78h] [xbp+78h]
  void *vars8; // [xsp+80h] [xbp+80h]
  void *vars10; // [xsp+88h] [xbp+88h]
  void *vars18; // [xsp+90h] [xbp+90h]
  char v48; // [xsp+A0h] [xbp+A0h] BYREF

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
    v17 = strlen(a2);
    v18 = v17 + 1;
    v19 = v17 + 2;
  }
  else
  {
    v19 = 2;
    v18 = 1;
  }
  v20 = *a3;
  stack = va[0].__stack;
  v22 = 4294967256LL;
  va_start(va, a11);
  va[0].__gr_offs = -40;
  if ( !*a3 )
  {
LABEL_16:
    v27 = malloc(v19, a4, a5, a6, a7, a8, a9, a10, a11, v22, (__int64)stack, v11, v12, v13, v14);
    v28 = (_BYTE *)v27;
    if ( !v27 )
      goto LABEL_60;
    a1[1] = (const char *)v27;
    a1[2] = (const char *)v27;
    v29 = *a3;
    v30 = (_BYTE *)(v27 + v19);
    va_end(va);
    va_start(va, a11);
    va[0].__gr_offs = -40;
    if ( !*a3 )
    {
LABEL_23:
      if ( v30 == v28 || (*v28 = 0, v30 - (v28 + 1) != v18) )
LABEL_33:
        length_mismatch();
      result = (const char *)j_memcpy(v28 + 1);
      *a1 = result;
      return result;
    }
    while ( v29 == 37 )
    {
      v33 = a3[1];
      v31 = a3 + 1;
      if ( v33 == 115 )
      {
        gr_offs = va[0].__gr_offs;
        v38 = (char *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
          v38 = &v48 + gr_offs;
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v39 = strlen(*(_QWORD *)v38);
        if ( v30 - v28 < v39 )
          goto LABEL_33;
        v28 = (_BYTE *)(j_memcpy(v28) + v39);
      }
      else
      {
        if ( v33 > 0x73 )
        {
          if ( v33 == 120 )
          {
            v34 = va[0].__gr_offs;
            v35 = (char *)va[0].__stack;
            if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v34 + 8 <= 0) )
              v35 = &v48 + v34;
            else
              va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 11) & 0xFFFFFFFFFFFFFFF8LL);
            v36 = itoa_word(*(unsigned int *)v35, (__int64)(v28 + 8), 0x10u, 0);
            if ( (_BYTE *)v36 != v28 )
              memset(v28, 48, v36 - (_QWORD)v28);
            v28 += 8;
            goto LABEL_22;
          }
          if ( v33 != 122 )
LABEL_52:
            dl_fatal_printf("Fatal error: invalid format in exception string\n");
        }
        else
        {
          if ( v33 == 37 )
          {
            if ( v30 == v28 )
              goto LABEL_33;
            goto LABEL_21;
          }
          if ( v33 != 108 )
            goto LABEL_52;
        }
        if ( a3[2] != 120 )
          goto LABEL_52;
        v40 = va[0].__gr_offs;
        v41 = (unsigned __int64 *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v40 + 8 <= 0) )
          v41 = (unsigned __int64 *)(&v48 + v40);
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v42 = itoa_word(*v41, (__int64)(v28 + 16), 0x10u, 0);
        if ( (_BYTE *)v42 != v28 )
          memset(v28, 48, v42 - (_QWORD)v28);
        v31 = a3 + 2;
        v28 += 16;
      }
LABEL_22:
      v29 = v31[1];
      a3 = v31 + 1;
      if ( !v31[1] )
        goto LABEL_23;
    }
    if ( v30 == v28 )
      goto LABEL_33;
    v31 = a3;
LABEL_21:
    *v28++ = v29;
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
      v26 = &v48 + v25;
    else
      va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
    v19 += strlen(*(_QWORD *)v26);
    v20 = *(unsigned __int8 *)(v23 + 1);
    v22 = v23 + 1;
  }
  while ( *(_BYTE *)(v23 + 1) );
LABEL_15:
  if ( (v19 & 0x8000000000000000LL) == 0 )
    goto LABEL_16;
LABEL_60:
  result = "out of memory";
  *a1 = (const char *)&qword_456B08;
  a1[1] = "out of memory";
  a1[2] = 0;
  return result;
}
