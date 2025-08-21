void __noreturn _libc_message_impl(
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
  __int64 v11; // x25
  struct iovec *v12; // x22
  struct iovec *v13; // x23
  int i; // w24
  int v15; // w1
  unsigned __int8 *v16; // x0
  size_t v17; // x1
  unsigned __int8 *v18; // x21
  int v19; // w0
  int gr_offs; // w1
  char *stack; // x0
  void *v22; // x21
  __int64 v23; // x0
  int v24; // w2
  unsigned __int64 v25; // x0
  __int64 v27; // x20
  _DWORD *v28; // x0
  _DWORD *v29; // x21
  struct iovec *v30; // x19
  _DWORD *v31; // x0
  struct iovec *v32; // x24
  __int64 v33; // x1
  size_t iov_len; // x2
  unsigned int *v35; // x0
  gcc_va_list va; // [xsp+8h] [xbp-98h] BYREF
  struct iovec v37; // [xsp+28h] [xbp-78h] BYREF
  _OWORD v38[6]; // [xsp+38h] [xbp-68h] BYREF
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
  va[0].__gr_offs = -56;
  if ( !*a1 )
    goto LABEL_25;
  v11 = 0;
  v12 = &v37;
  v13 = &v37;
  for ( i = 0; ; i = v19 )
  {
    v15 = v10;
    v16 = v9;
    do
    {
      if ( v15 == 37 && v16[1] == 115 )
        break;
      v16 = (unsigned __int8 *)strchrnul(v16 + 1, 37);
      v15 = *v16;
    }
    while ( *v16 );
    if ( v10 == 37 && v9[1] == 115 )
    {
      gr_offs = va[0].__gr_offs;
      stack = (char *)va[0].__stack;
      if ( va[0].__gr_offs < 0 && (va[0].__gr_offs += 8, gr_offs + 8 <= 0) )
        stack = &v45 + gr_offs;
      else
        va[0].__stack = (void *)(((unsigned __int64)va[0].__stack + 15) & 0xFFFFFFFFFFFFFFF8LL);
      v22 = *(void **)stack;
      v9 += 2;
      v23 = strlen(*(_QWORD *)stack);
      v13->iov_base = v22;
      v13->iov_len = v23;
      v11 += v23;
      v10 = *v9;
      v19 = i + 1;
      ++v13;
      if ( !*v9 )
      {
LABEL_14:
        v24 = v19;
        do
          v25 = linux_eabi_syscall(__NR_writev, 2, &v37, v24);
        while ( v25 > 0xFFFFFFFFFFFFF000LL && v25 == -4 );
        v27 = (dl_pagesize + 4 + v11) & -dl_pagesize;
        v28 = (_DWORD *)mmap64(0, v27, 3, 34, 0xFFFFFFFFLL, 0);
        v29 = v28;
        if ( v28 != (_DWORD *)-1LL )
        {
          v30 = (struct iovec *)v38;
          *v28 = v27;
          v31 = v28 + 1;
          v32 = (struct iovec *)&v38[i];
          while ( 1 )
          {
            v33 = j_memcpy(v31);
            iov_len = v12->iov_len;
            v12 = v30;
            v31 = (_DWORD *)(v33 + iov_len);
            if ( v30 == v32 )
              break;
            ++v30;
          }
          *(_BYTE *)(v33 + iov_len) = 0;
          _set_vma_name(v29, v27, " glibc: fatal");
          v35 = (unsigned int *)_aarch64_swp8_acq(v29, &_abort_msg);
          if ( v35 )
            munmap(v35, *v35);
        }
LABEL_25:
        abort();
      }
    }
    else
    {
      v17 = v16 - v9;
      v18 = v9;
      v9 = v16;
      v13->iov_base = v18;
      v13->iov_len = v17;
      v11 += v17;
      v19 = i + 1;
      ++v13;
      v10 = *v9;
      if ( !*v9 )
        goto LABEL_14;
    }
  }
}
