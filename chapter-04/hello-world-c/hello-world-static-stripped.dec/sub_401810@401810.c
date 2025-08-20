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
  char *v10; // x2
  __int64 v11; // x1
  int v12; // w21
  __int64 v13; // x3
  _DWORD *stack; // x0
  __int64 v15; // x25
  struct iovec *v16; // x22
  struct iovec *v17; // x23
  int i; // w24
  int v19; // w1
  unsigned __int8 *v20; // x0
  size_t v21; // x1
  unsigned __int8 *v22; // x21
  int v23; // w0
  int gr_offs; // w1
  char *v25; // x0
  void *v26; // x21
  __int64 v27; // x0
  int v28; // w2
  unsigned __int64 v29; // x0
  __int64 v31; // x20
  _DWORD *v32; // x21
  struct iovec *v33; // x19
  _DWORD *v34; // x0
  struct iovec *v35; // x24
  __int64 v36; // x1
  size_t iov_len; // x2
  gcc_va_list va; // [xsp+8h] [xbp-98h] BYREF
  struct iovec v39; // [xsp+28h] [xbp-78h] BYREF
  _OWORD v40[6]; // [xsp+38h] [xbp-68h] BYREF
  __int64 v41; // [xsp+98h] [xbp-8h]
  char v42; // [xsp+F0h] [xbp+50h] BYREF
  __int64 vars0; // [xsp+F8h] [xbp+58h]
  __int64 vars8; // [xsp+100h] [xbp+60h]
  __int64 vars10; // [xsp+108h] [xbp+68h]
  __int64 vars18; // [xsp+110h] [xbp+70h]
  __int64 vars20; // [xsp+118h] [xbp+78h]
  __int64 vars28; // [xsp+120h] [xbp+80h]
  char v49; // [xsp+130h] [xbp+90h] BYREF

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
  v10 = &v42;
  v11 = 4294967240LL;
  v12 = *a1;
  v41 = qword_48DD60;
  v13 = 0;
  stack = va[0].__stack;
  va[0].__gr_offs = -56;
  if ( !v12 )
    goto LABEL_25;
  v15 = 0;
  v16 = &v39;
  v17 = &v39;
  for ( i = 0; ; i = v23 )
  {
    v19 = v12;
    v20 = v9;
    do
    {
      if ( v19 == 37 && v20[1] == 115 )
        break;
      v20 = (unsigned __int8 *)sub_40DF40(v20 + 1, 37);
      v19 = *v20;
    }
    while ( *v20 );
    if ( v12 == 37 && v9[1] == 115 )
    {
      gr_offs = va[0].__gr_offs;
      v25 = (char *)va[0].__stack;
      if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
        v25 = &v49 + gr_offs;
      else
        va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
      v26 = *(void **)v25;
      v9 += 2;
      v27 = ifunc_40DFD0(*(_QWORD *)v25);
      v17->iov_base = v26;
      v17->iov_len = v27;
      v15 += v27;
      v12 = *v9;
      v23 = i + 1;
      ++v17;
      if ( !*v9 )
      {
LABEL_14:
        v28 = v23;
        do
          v29 = linux_eabi_syscall(__NR_writev, 2, &v39, v28);
        while ( v29 > 0xFFFFFFFFFFFFF000LL && v29 == -4 );
        v31 = (qword_490F10 + 4 + v15) & -qword_490F10;
        stack = (_DWORD *)sub_4117E0(0, v31, 3, 34, 0xFFFFFFFFLL, 0);
        v32 = stack;
        if ( stack != (_DWORD *)-1LL )
        {
          v33 = (struct iovec *)v40;
          *stack = v31;
          v34 = stack + 1;
          v35 = (struct iovec *)&v40[i];
          while ( 1 )
          {
            v36 = j_ifunc_40DC90(v34, v16->iov_base, v16->iov_len);
            iov_len = v16->iov_len;
            v16 = v33;
            v34 = (_DWORD *)(v36 + iov_len);
            if ( v33 == v35 )
              break;
            ++v33;
          }
          *(_BYTE *)(v36 + iov_len) = 0;
          sub_411AE0(v32, v31, " glibc: fatal");
          stack = (_DWORD *)sub_44D5F0(v32, &unk_492200);
          if ( stack )
            stack = (_DWORD *)sub_4118C0(stack, (unsigned int)*stack);
        }
LABEL_25:
        sub_4002C0((__int64)stack, v11, (__int64)v10, v13);
      }
    }
    else
    {
      v21 = v20 - v9;
      v22 = v9;
      v9 = v20;
      v17->iov_base = v22;
      v17->iov_len = v21;
      v15 += v21;
      v23 = i + 1;
      ++v17;
      v12 = *v9;
      if ( !*v9 )
        goto LABEL_14;
    }
  }
}
