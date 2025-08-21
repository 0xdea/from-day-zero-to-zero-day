void __noreturn sub_401810(
        unsigned __int8 *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        ...)
{
  unsigned __int8 *v9; // x20
  int v10; // w21
  _DWORD *stack; // x0
  __int64 v12; // x25
  struct iovec *v13; // x22
  struct iovec *v14; // x23
  int i; // w24
  int v16; // w1
  unsigned __int8 *v17; // x0
  size_t v18; // x1
  unsigned __int8 *v19; // x21
  int v20; // w0
  int gr_offs; // w1
  char *v22; // x0
  void *v23; // x21
  __int64 v24; // x0
  int v25; // w2
  unsigned __int64 v26; // x0
  __int64 v28; // x20
  _DWORD *v29; // x21
  struct iovec *v30; // x19
  _DWORD *v31; // x0
  struct iovec *v32; // x24
  __int64 v33; // x1
  size_t iov_len; // x2
  gcc_va_list va; // [xsp+8h] [xbp-98h] BYREF
  struct iovec v36; // [xsp+28h] [xbp-78h] BYREF
  _OWORD v37[6]; // [xsp+38h] [xbp-68h] BYREF
  __int64 v38; // [xsp+98h] [xbp-8h]
  __int64 vars0; // [xsp+F8h] [xbp+58h]
  __int64 vars8; // [xsp+100h] [xbp+60h]
  __int64 vars10; // [xsp+108h] [xbp+68h]
  __int64 vars18; // [xsp+110h] [xbp+70h]
  __int64 vars20; // [xsp+118h] [xbp+78h]
  __int64 vars28; // [xsp+120h] [xbp+80h]
  char v45; // [xsp+130h] [xbp+90h] BYREF

  va_start(va, a9);
  vars0 = va_arg(va, _QWORD);
  vars8 = va_arg(va, _QWORD);
  vars10 = va_arg(va, _QWORD);
  vars18 = va_arg(va, _QWORD);
  vars20 = va_arg(va, _QWORD);
  vars28 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a9);
  v9 = a1;
  v10 = *a1;
  v38 = qword_48DD60;
  stack = va[0].__stack;
  va[0].__gr_offs = -56;
  if ( !v10 )
    goto LABEL_25;
  v12 = 0;
  v13 = &v36;
  v14 = &v36;
  for ( i = 0; ; i = v20 )
  {
    v16 = v10;
    v17 = v9;
    do
    {
      if ( v16 == 37 && v17[1] == 115 )
        break;
      v17 = (unsigned __int8 *)sub_40DF40(v17 + 1, 37);
      v16 = *v17;
    }
    while ( *v17 );
    if ( v10 == 37 && v9[1] == 115 )
    {
      gr_offs = va[0].__gr_offs;
      v22 = (char *)va[0].__stack;
      if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
        v22 = &v45 + gr_offs;
      else
        va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
      v23 = *(void **)v22;
      v9 += 2;
      v24 = ifunc_40DFD0(*(_QWORD *)v22);
      v14->iov_base = v23;
      v14->iov_len = v24;
      v12 += v24;
      v10 = *v9;
      v20 = i + 1;
      ++v14;
      if ( !*v9 )
      {
LABEL_14:
        v25 = v20;
        do
          v26 = linux_eabi_syscall(__NR_writev, 2, &v36, v25);
        while ( v26 > 0xFFFFFFFFFFFFF000LL && v26 == -4 );
        v28 = (qword_490F10 + 4 + v12) & -qword_490F10;
        stack = (_DWORD *)sub_4117E0(0, v28, 3, 34, 0xFFFFFFFFLL, 0);
        v29 = stack;
        if ( stack != (_DWORD *)-1LL )
        {
          v30 = (struct iovec *)v37;
          *stack = v28;
          v31 = stack + 1;
          v32 = (struct iovec *)&v37[i];
          while ( 1 )
          {
            v33 = j_ifunc_40DC90(v31, v13->iov_base, v13->iov_len);
            iov_len = v13->iov_len;
            v13 = v30;
            v31 = (_DWORD *)(v33 + iov_len);
            if ( v30 == v32 )
              break;
            ++v30;
          }
          *(_BYTE *)(v33 + iov_len) = 0;
          sub_411AE0(v29, v28, " glibc: fatal");
          stack = (_DWORD *)sub_44D5F0(v29, &unk_492200);
          if ( stack )
            stack = (_DWORD *)sub_4118C0(stack, (unsigned int)*stack);
        }
LABEL_25:
        sub_4002C0(stack);
      }
    }
    else
    {
      v18 = v17 - v9;
      v19 = v9;
      v9 = v17;
      v14->iov_base = v19;
      v14->iov_len = v18;
      v12 += v18;
      v20 = i + 1;
      ++v14;
      v10 = *v9;
      if ( !*v9 )
        goto LABEL_14;
    }
  }
}
