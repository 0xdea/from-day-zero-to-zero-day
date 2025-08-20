__int64 __fastcall _gconv_transform_ascii_internal(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // x19
  __int64 v9; // x20
  int v11; // w15
  _QWORD *v16; // x0
  unsigned __int64 v17; // x28
  __int64 *v18; // x1
  __int64 v19; // x20
  _DWORD *v20; // x24
  __int64 v21; // x10
  _DWORD *v22; // x6
  __int64 v23; // x0
  _DWORD *v24; // x19
  unsigned int v25; // w25
  int v26; // w8
  __int64 v27; // x1
  int v28; // w1
  unsigned int v29; // w0
  unsigned __int64 v30; // x1
  __int64 v32; // x2
  int v33; // w7
  _DWORD *v34; // x3
  __int64 v35; // x10
  _DWORD *v36; // x2
  int v37; // w4
  __int64 v38; // x6
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v42)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *); // [xsp+10h] [xbp-50h]
  __int64 v43; // [xsp+18h] [xbp-48h]
  __int64 v44; // [xsp+20h] [xbp-40h]
  __int64 *v46; // [xsp+38h] [xbp-28h]
  __int64 v47; // [xsp+48h] [xbp-18h] BYREF
  _QWORD var10[6]; // [xsp+50h] [xbp-10h] BYREF

  v11 = *(_DWORD *)(a2 + 16);
  v42 = 0;
  v43 = a2 + 48;
  v44 = a1 + 104;
  if ( (v11 & 1) == 0 )
  {
    v42 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *))(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v42 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(a1 + 144)
                                                                                        ^ _pointer_chk_guard_local);
  }
  if ( !a7 )
  {
    if ( a5 )
      v16 = a5;
    else
      v16 = (_QWORD *)a2;
    v17 = *(_QWORD *)(a2 + 8);
    if ( a6 )
      v18 = &v47;
    else
      v18 = 0;
    v19 = 0;
    v20 = (_DWORD *)*v16;
    v46 = v18;
    v47 = 0;
    while ( 1 )
    {
      v21 = *a3;
      if ( a6 )
        v19 += *a6;
      if ( a4 == v21 )
      {
        v27 = a4;
        v24 = v20;
        v25 = 4;
        goto LABEL_23;
      }
      v22 = v20 + 1;
      if ( v17 >= (unsigned __int64)(v20 + 1) )
      {
        v23 = v21 + 1;
        v24 = v20;
        v25 = 4;
        do
        {
          v26 = *(unsigned __int8 *)(v23 - 1);
          v27 = v23;
          if ( (v26 & 0x80) != 0 )
          {
            if ( !v46 || (v11 & 2) == 0 )
            {
              v27 = v23 - 1;
              v25 = 6;
              goto LABEL_23;
            }
            v25 = 6;
            ++*v46;
            if ( a4 == v23 )
              goto LABEL_23;
          }
          else
          {
            *v24 = v26;
            v24 = v22;
            if ( a4 == v23 )
              goto LABEL_23;
          }
          v22 = v24 + 1;
          ++v23;
        }
        while ( v17 >= (unsigned __int64)(v24 + 1) );
        *a3 = v27;
        v25 = 5;
        if ( a5 )
          goto LABEL_31;
        goto LABEL_24;
      }
      while ( 1 )
      {
        v27 = v21;
        v24 = v20;
        v25 = 5;
LABEL_23:
        *a3 = v27;
        if ( a5 )
        {
LABEL_31:
          *a5 = v24;
          return v25;
        }
LABEL_24:
        v28 = *(_DWORD *)(a2 + 16);
        ++*(_DWORD *)(a2 + 20);
        if ( (v28 & 1) != 0 )
        {
          v39 = *a6;
          *(_QWORD *)a2 = v24;
          *a6 = v39 + v47;
          return v25;
        }
        v41 = v21;
        if ( v24 <= v20 )
        {
          v29 = v25;
          goto LABEL_28;
        }
        var10[0] = *(_QWORD *)a2;
        v29 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD))v42)(
                v44,
                v43,
                var10,
                v24,
                0,
                a6,
                0,
                a8);
        if ( v29 == 4 )
        {
          v29 = v25;
          if ( v25 != 5 )
            goto LABEL_28;
          goto LABEL_29;
        }
        v30 = var10[0];
        if ( v24 == (_DWORD *)var10[0] )
          goto LABEL_28;
        v32 = 0;
        if ( a6 )
          v32 = *a6;
        if ( v32 + v47 == v19 )
        {
          v40 = (__int64)v24 - var10[0] + 3;
          if ( (__int64)v24 - var10[0] >= 0 )
            v40 = (__int64)v24 - var10[0];
          *a3 -= v40 >> 2;
          goto LABEL_28;
        }
        v33 = *(_DWORD *)(a2 + 16);
        *a3 = v41;
        if ( a4 != v41 )
          break;
        if ( (_DWORD *)v30 != v20 )
          goto LABEL_49;
LABEL_67:
        v29 = _libc_assert_fail(
                "nstatus == __GCONV_FULL_OUTPUT",
                "../iconv/skeleton.c",
                595,
                "__gconv_transform_ascii_internal");
LABEL_68:
        if ( (_DWORD *)v30 == v20 )
          goto LABEL_63;
LABEL_49:
        _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ascii_internal");
      }
      v34 = v20 + 1;
      if ( v30 < (unsigned __int64)(v20 + 1) )
        goto LABEL_68;
      v35 = v41 + 1;
      v36 = v20;
      do
      {
        v37 = *(unsigned __int8 *)(v35 - 1);
        v38 = v35;
        if ( (v37 & 0x80) != 0 )
        {
          if ( !v46 || (v33 & 2) == 0 )
          {
            *a3 = v35 - 1;
            if ( v36 == (_DWORD *)v30 )
              goto LABEL_67;
            goto LABEL_49;
          }
          ++*v46;
        }
        else
        {
          *v36 = v37;
          v36 = v34;
        }
        if ( a4 == v35 )
        {
          *a3 = a4;
          if ( v36 != (_DWORD *)v30 )
            goto LABEL_49;
          goto LABEL_67;
        }
        v34 = v36 + 1;
        ++v35;
      }
      while ( v30 >= (unsigned __int64)(v36 + 1) );
      *a3 = v38;
      if ( v36 != (_DWORD *)v30 )
        goto LABEL_49;
      if ( v36 != v20 )
        goto LABEL_28;
LABEL_63:
      --*(_DWORD *)(a2 + 20);
LABEL_28:
      if ( v29 )
        return v29;
LABEL_29:
      v20 = *(_DWORD **)a2;
      v19 = v47;
      v11 = *(_DWORD *)(a2 + 16);
    }
  }
  if ( a5 )
  {
    _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ascii_internal");
    var10[4] = v8;
    var10[5] = v9;
  }
  **(_QWORD **)(a2 + 32) = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) == 0 )
    return v42(v44, a2 + 48, 0, 0, 0, a6);
  return 0;
}
