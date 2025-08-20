__int64 __fastcall _gconv_transform_internal_ucs4le(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 *v8; // x27
  __int64 v9; // x28
  __int64 v10; // x11
  int v13; // w8
  unsigned __int64 v16; // x9
  __int64 *v17; // x1
  unsigned __int64 *v18; // x0
  unsigned __int64 v19; // x21
  __int64 *v20; // x0
  __int64 *v21; // x25
  unsigned __int64 v22; // x19
  __int64 v23; // x3
  __int64 v24; // x2
  unsigned __int64 v25; // x3
  unsigned int v26; // w22
  int v27; // w1
  unsigned int v28; // w8
  unsigned __int64 v29; // x22
  unsigned int v30; // w7
  int v31; // w20
  __int64 *v32; // x25
  bool v33; // zf
  int *v35; // x8
  int v36; // w13
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x0
  bool v40; // cc
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x20
  unsigned __int64 v44; // x20
  unsigned __int64 v45; // x0
  unsigned __int64 v46; // x4
  unsigned __int64 v47; // x2
  unsigned int *v48; // x6
  __int64 v49; // x0
  unsigned int v50; // w0
  __int64 v51; // x0
  unsigned __int64 v53; // [xsp+10h] [xbp-40h]
  unsigned int v54; // [xsp+10h] [xbp-40h]
  __int64 *v55; // [xsp+20h] [xbp-30h]
  __int64 (__fastcall *v56)(__int64, __int64 *, _QWORD *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+28h] [xbp-28h]
  __int64 v57; // [xsp+30h] [xbp-20h]
  _QWORD var10[14]; // [xsp+40h] [xbp-10h] BYREF

  v10 = a1 + 104;
  v13 = *((_DWORD *)a2 + 4);
  v16 = 0;
  v17 = a2 + 6;
  if ( (v13 & 1) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v16 ^= _pointer_chk_guard_local;
  }
  if ( !a7 )
  {
    if ( a5 )
      v18 = a5;
    else
      v18 = (unsigned __int64 *)a2;
    v19 = a2[1];
    v8 = (__int64 *)*v18;
    if ( a8 )
    {
      v35 = (int *)a2[4];
      v36 = *v35;
      LODWORD(v37) = *v35 & 7;
      if ( (_DWORD)v37 )
      {
        if ( a5 )
        {
          _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4le");
          goto LABEL_80;
        }
        v38 = *a3;
        v37 = (int)v37;
        if ( a4 > *a3 && (unsigned __int64)(int)v37 <= 3 )
        {
          do
          {
            ++v38;
            ++v37;
            *a3 = v38;
            v40 = v37 <= 3 && a4 > v38;
            *((_BYTE *)v35 + v37 + 3) = *(_BYTE *)(v38 - 1);
          }
          while ( v40 );
        }
        if ( v37 <= 3 )
        {
LABEL_72:
          *v35 = v36 & 0xFFFFFFF8 | v37;
          return 7;
        }
        v8 = (__int64 *)((char *)v8 + 4);
        *((_BYTE *)v8 - 4) = *((_BYTE *)v35 + 4);
        *((_BYTE *)v8 - 3) = *((_BYTE *)v35 + 5);
        *((_BYTE *)v8 - 2) = *((_BYTE *)v35 + 6);
        *((_BYTE *)v8 - 1) = *((_BYTE *)v35 + 7);
        *v35 &= 0xFFFFFFF8;
      }
    }
    v55 = v17;
    v20 = a2;
    v21 = v8;
    v8 = v20;
    v56 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD))v16;
    v57 = v10;
    while ( 1 )
    {
      v22 = *a3;
      v9 = 0;
      if ( a6 )
        v9 = *a6;
      v23 = v19 - (_QWORD)v21;
      if ( (__int64)(v19 - (_QWORD)v21) > (__int64)(a4 - v22) )
        v23 = a4 - v22;
      v24 = v23 + 3;
      if ( v23 >= 0 )
        v24 = v23;
      *a3 = v22 + (v24 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = j_memcpy(v21) + (v24 & 0xFFFFFFFFFFFFFFFCLL);
      v26 = 4;
      if ( a4 != *a3 )
      {
        if ( v19 < v25 + 4 )
          v26 = 5;
        else
          v26 = 7;
      }
      if ( a5 )
      {
        *a5 = v25;
        return v26;
      }
      v27 = *((_DWORD *)v8 + 4);
      ++*((_DWORD *)v8 + 5);
      if ( (v27 & 1) != 0 )
      {
        v30 = a8;
        v31 = 0;
        v32 = v8;
        *v8 = v25;
        goto LABEL_29;
      }
      if ( v25 <= (unsigned __int64)v21 )
        goto LABEL_28;
      v53 = v25;
      var10[0] = *v8;
      v28 = v56(v57, v55, var10, v25, 0, a6, 0, a8);
      if ( v28 == 4 )
      {
        if ( v26 != 5 )
        {
LABEL_28:
          v30 = a8;
          v31 = 0;
          v32 = v8;
          goto LABEL_29;
        }
      }
      else
      {
        v29 = var10[0];
        if ( var10[0] == v53 )
          goto LABEL_25;
        v41 = 0;
        if ( a6 )
          v41 = *a6;
        if ( v41 == v9 )
        {
          *a3 -= v53 - var10[0];
          if ( v28 )
            goto LABEL_69;
        }
        else
        {
          v42 = var10[0] - (_QWORD)v21;
          if ( var10[0] - (_QWORD)v21 > (signed __int64)(a4 - v22) )
            v42 = a4 - v22;
          v54 = v28;
          v43 = v42 + 3;
          if ( v42 >= 0 )
            v43 = v42;
          v44 = v43 & 0xFFFFFFFFFFFFFFFCLL;
          *a3 = v22 + v44;
          v45 = j_memcpy(v21) + v44;
          if ( a4 == *a3 )
          {
            if ( var10[0] != v45 )
              goto LABEL_71;
            goto LABEL_68;
          }
          v28 = v54;
          if ( v29 >= v45 + 4 )
          {
            if ( v45 != var10[0] )
            {
LABEL_71:
              _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4le");
              goto LABEL_72;
            }
LABEL_68:
            _libc_assert_fail(
              "nstatus == __GCONV_FULL_OUTPUT",
              "../iconv/skeleton.c",
              595,
              "__gconv_transform_internal_ucs4le");
LABEL_69:
            v30 = a8;
            v31 = 0;
            v32 = v8;
            v26 = v28;
LABEL_29:
            if ( v30 )
              v33 = v26 == 7;
            else
              v33 = 0;
            if ( !v33 )
              return v26;
            v46 = *a3;
            v47 = a4 - *a3;
            if ( v47 <= 4 )
            {
              v48 = (unsigned int *)v32[4];
              v49 = 0;
              if ( v47 )
              {
                do
                {
                  *((_BYTE *)v48 + v49 + 4) = *(_BYTE *)(v46 + v49);
                  ++v49;
                }
                while ( v47 != v49 );
                v31 = v47;
              }
              v50 = *v48;
              *a3 = a4;
              *v48 = v50 & 0xFFFFFFF8 | v31;
              return 7;
            }
LABEL_80:
            _libc_assert_fail(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_internal_ucs4le");
LABEL_81:
            var10[12] = v8;
            var10[13] = v9;
            v51 = _libc_assert_fail(
                    "outbufstart == NULL",
                    "../iconv/skeleton.c",
                    350,
                    "__gconv_transform_internal_ucs4le");
            return _gconv_transform_ucs4le_internal(v51);
          }
          if ( v45 != var10[0] )
            goto LABEL_71;
          if ( v21 != (__int64 *)v45 )
          {
LABEL_25:
            if ( v28 )
              goto LABEL_69;
            goto LABEL_26;
          }
          --*((_DWORD *)v8 + 5);
          if ( v54 )
            goto LABEL_69;
        }
      }
LABEL_26:
      v21 = (__int64 *)*v8;
    }
  }
  if ( a5 )
    goto LABEL_81;
  *(_QWORD *)a2[4] = 0;
  if ( (a2[2] & 1) != 0 )
    return 0;
  return ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD))v16)(
           v10,
           v17,
           0,
           0,
           0,
           a6,
           a7);
}
