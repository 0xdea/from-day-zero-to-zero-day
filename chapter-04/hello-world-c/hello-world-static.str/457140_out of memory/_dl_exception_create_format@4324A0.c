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
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v16; // x0
  __int64 v17; // x25
  unsigned __int64 v18; // x22
  int v19; // w0
  __int16 *stack; // x2
  __int64 v21; // x1
  __int64 v22; // x19
  unsigned int v23; // w0
  int v24; // w1
  char *v25; // x0
  const char *v26; // x0
  char *v27; // x19
  int v28; // w3
  const char *v29; // x22
  unsigned __int8 *v30; // x20
  const char *result; // x0
  unsigned int v32; // w0
  int v33; // w1
  char *v34; // x0
  __int64 v35; // x0
  int gr_offs; // w1
  char *v37; // x0
  unsigned __int64 v38; // x21
  int v39; // w1
  char *v40; // x0
  __int64 v41; // x0
  gcc_va_list va; // [xsp+50h] [xbp+50h] BYREF
  __int64 vars0; // [xsp+78h] [xbp+78h]
  __int64 vars8; // [xsp+80h] [xbp+80h]
  __int64 vars10; // [xsp+88h] [xbp+88h]
  __int64 vars18; // [xsp+90h] [xbp+90h]
  char v47; // [xsp+A0h] [xbp+A0h] BYREF

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
    v16 = strlen(a2);
    v17 = v16 + 1;
    v18 = v16 + 2;
  }
  else
  {
    v18 = 2;
    v17 = 1;
  }
  v19 = *a3;
  stack = (__int16 *)va[0].__stack;
  v21 = 4294967256LL;
  va_start(va, a11);
  va[0].__gr_offs = -40;
  if ( !*a3 )
  {
LABEL_16:
    v26 = (const char *)malloc(v18, v21, stack, v11, v12, v13);
    v27 = (char *)v26;
    if ( !v26 )
      goto LABEL_60;
    a1[1] = v26;
    a1[2] = v26;
    v28 = *a3;
    v29 = &v26[v18];
    va_end(va);
    va_start(va, a11);
    va[0].__gr_offs = -40;
    if ( !*a3 )
    {
LABEL_23:
      if ( v29 == v27 || (*v27 = 0, v29 - (v27 + 1) != v17) )
LABEL_33:
        length_mismatch();
      result = (const char *)j_memcpy(v27 + 1);
      *a1 = result;
      return result;
    }
    while ( v28 == 37 )
    {
      v32 = a3[1];
      v30 = a3 + 1;
      if ( v32 == 115 )
      {
        gr_offs = va[0].__gr_offs;
        v37 = (char *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
          v37 = &v47 + gr_offs;
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v38 = strlen(*(_QWORD *)v37);
        if ( v29 - v27 < v38 )
          goto LABEL_33;
        v27 = (char *)(j_memcpy(v27) + v38);
      }
      else
      {
        if ( v32 > 0x73 )
        {
          if ( v32 == 120 )
          {
            v33 = va[0].__gr_offs;
            v34 = (char *)va[0].__stack;
            if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v33 + 8 <= 0) )
              v34 = &v47 + v33;
            else
              va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 11) & 0xFFFFFFFFFFFFFFF8LL);
            v35 = itoa_word(*(unsigned int *)v34, v27 + 8, 16, 0);
            if ( (char *)v35 != v27 )
              memset(v27, 48, v35 - (_QWORD)v27);
            v27 += 8;
            goto LABEL_22;
          }
          if ( v32 != 122 )
LABEL_52:
            dl_fatal_printf("Fatal error: invalid format in exception string\n");
        }
        else
        {
          if ( v32 == 37 )
          {
            if ( v29 == v27 )
              goto LABEL_33;
            goto LABEL_21;
          }
          if ( v32 != 108 )
            goto LABEL_52;
        }
        if ( a3[2] != 120 )
          goto LABEL_52;
        v39 = va[0].__gr_offs;
        v40 = (char *)va[0].__stack;
        if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v39 + 8 <= 0) )
          v40 = &v47 + v39;
        else
          va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
        v41 = itoa_word(*(_QWORD *)v40, v27 + 16, 16, 0);
        if ( (char *)v41 != v27 )
          memset(v27, 48, v41 - (_QWORD)v27);
        v30 = a3 + 2;
        v27 += 16;
      }
LABEL_22:
      v28 = v30[1];
      a3 = v30 + 1;
      if ( !v30[1] )
        goto LABEL_23;
    }
    if ( v29 == v27 )
      goto LABEL_33;
    v30 = a3;
LABEL_21:
    *v27++ = v28;
    goto LABEL_22;
  }
  v21 = (__int64)a3;
  do
  {
    while ( 1 )
    {
      v22 = v21 + 1;
      if ( v19 == 37 )
        break;
      ++v18;
      v22 = v21;
LABEL_6:
      v19 = *(unsigned __int8 *)(v22 + 1);
      v21 = v22 + 1;
      if ( !*(_BYTE *)(v22 + 1) )
        goto LABEL_15;
    }
    v23 = *(unsigned __int8 *)(v21 + 1);
    if ( v23 == 120 )
      goto LABEL_28;
    if ( v23 > 0x78 )
    {
      if ( v23 != 122 )
      {
LABEL_59:
        ++v18;
        goto LABEL_6;
      }
LABEL_27:
      if ( *(_BYTE *)(v21 + 2) == 120 )
      {
        v18 += 16LL;
        v22 = v21 + 2;
        goto LABEL_6;
      }
LABEL_28:
      v18 += 8LL;
      goto LABEL_6;
    }
    if ( v23 == 108 )
      goto LABEL_27;
    if ( v23 != 115 )
      goto LABEL_59;
    v24 = va[0].__gr_offs;
    v25 = (char *)va[0].__stack;
    if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, v24 + 8 <= 0) )
      v25 = &v47 + v24;
    else
      va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
    v18 += strlen(*(_QWORD *)v25);
    v19 = *(unsigned __int8 *)(v22 + 1);
    v21 = v22 + 1;
  }
  while ( *(_BYTE *)(v22 + 1) );
LABEL_15:
  if ( (v18 & 0x8000000000000000LL) == 0 )
    goto LABEL_16;
LABEL_60:
  result = "out of memory";
  *a1 = (const char *)&qword_456B08;
  a1[1] = "out of memory";
  a1[2] = 0;
  return result;
}
