__int64 __fastcall _gconv_transform_ucs4le_internal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        char **a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8)
{
  char *v8; // x21
  unsigned __int64 v9; // x28
  int v10; // w16
  __int64 *v14; // x12
  char **v15; // x0
  unsigned __int64 v16; // x27
  __int64 v17; // x13
  unsigned __int64 v18; // x23
  unsigned __int64 v19; // x26
  char *v20; // x0
  unsigned __int64 v21; // x8
  char *v22; // x19
  unsigned __int64 v23; // x1
  _DWORD *v24; // x2
  int v25; // w1
  unsigned int v26; // w25
  unsigned int v27; // w0
  unsigned __int64 v28; // x1
  bool v29; // zf
  unsigned int *v31; // x3
  unsigned int v32; // w4
  unsigned __int64 v33; // x0
  bool v35; // cc
  __int64 v36; // x2
  int v37; // w6
  char *v38; // x3
  char *v39; // x2
  int v40; // w4
  __int64 v41; // x0
  unsigned __int64 v42; // x3
  unsigned __int64 v43; // x1
  unsigned int *v44; // x2
  __int64 v45; // x0
  unsigned int v46; // w0
  __int64 *v47; // [xsp+0h] [xbp-60h]
  _QWORD *v48; // [xsp+8h] [xbp-58h]
  __int64 v49; // [xsp+10h] [xbp-50h]
  __int64 (__fastcall *v50)(__int64, unsigned __int64, char **, char *, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+18h] [xbp-48h]
  unsigned __int64 v51; // [xsp+20h] [xbp-40h]
  __int64 v52; // [xsp+28h] [xbp-38h]
  int v54; // [xsp+3Ch] [xbp-24h]
  __int64 v55; // [xsp+48h] [xbp-18h] BYREF
  char *v56; // [xsp+50h] [xbp-10h] BYREF

  v9 = a2;
  v10 = *(_DWORD *)(a2 + 16);
  v50 = 0;
  v51 = a2 + 48;
  v52 = a1 + 104;
  v54 = a7;
  if ( (v10 & 1) == 0 )
  {
    v50 = *(__int64 (__fastcall **)(__int64, unsigned __int64, char **, char *, _QWORD, _QWORD *, _QWORD, _QWORD))(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v50 = (__int64 (__fastcall *)(__int64, unsigned __int64, char **, char *, _QWORD, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) ^ _pointer_chk_guard_local);
  }
  if ( !a7 )
  {
    v14 = &v55;
    if ( a5 )
      v15 = a5;
    else
      v15 = (char **)a2;
    v16 = *(_QWORD *)(a2 + 8);
    if ( !a6 )
      v14 = 0;
    v8 = *v15;
    v55 = 0;
    if ( a8 )
    {
      v31 = *(unsigned int **)(a2 + 32);
      v32 = *v31;
      LODWORD(a2) = *v31 & 7;
      if ( (_DWORD)a2 )
      {
        if ( a5 )
          goto LABEL_113;
        v33 = *a3;
        a2 = (int)a2;
        if ( (unsigned __int64)(int)a2 <= 3 && v33 < a4 )
        {
          do
          {
            ++v33;
            ++a2;
            *a3 = v33;
            v35 = a2 <= 3 && a4 > v33;
            *((_BYTE *)v31 + a2 + 3) = *(_BYTE *)(v33 - 1);
          }
          while ( v35 );
        }
        if ( a2 <= 3 )
        {
          v26 = 7;
          *v31 = v32 & 0xFFFFFFF8 | a2;
          return v26;
        }
        if ( *((unsigned __int8 *)v31 + 7) > 0x80u )
        {
          if ( (v10 & 2) == 0 )
            return 6;
        }
        else
        {
          v8 += 4;
          *(v8 - 4) = *((_BYTE *)v31 + 4);
          *(v8 - 3) = *((_BYTE *)v31 + 5);
          *(v8 - 2) = *((_BYTE *)v31 + 6);
          *(v8 - 1) = *((_BYTE *)v31 + 7);
          v32 = *v31;
        }
        v10 = *(_DWORD *)(v9 + 16);
        *v31 = v32 & 0xFFFFFFF8;
      }
    }
    v17 = 0;
LABEL_12:
    v18 = *a3;
    if ( a6 )
      v17 += *a6;
    v19 = v18 + 4;
    if ( v18 + 4 > a4 )
    {
      v22 = v8;
      if ( a4 == v18 )
        v26 = 4;
      else
        v26 = 7;
      *a3 = v18;
LABEL_26:
      if ( a5 )
        goto LABEL_34;
      goto LABEL_27;
    }
    v20 = v8 + 4;
    if ( v16 < (unsigned __int64)(v8 + 4) )
    {
      v23 = v18 + 4;
      v22 = v8;
      v21 = *a3;
LABEL_24:
      *a3 = v21;
      if ( a4 == v21 )
        goto LABEL_44;
      v26 = 7;
      if ( a4 < v23 )
        goto LABEL_26;
      v24 = v22 + 4;
LABEL_42:
      if ( v16 < (unsigned __int64)v24 )
      {
        v26 = 5;
        goto LABEL_26;
      }
      _libc_assert_fail("*outptrp + 4 > outend", "gconv_simple.c", 484, "ucs4le_internal_loop");
LABEL_113:
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs4le_internal");
    }
    v21 = v18 + 4;
    v22 = v8;
    while ( 1 )
    {
      v25 = *(_DWORD *)(v21 - 4);
      if ( v25 < 0 )
      {
        if ( !v14 )
        {
          v22 = v8;
          v26 = 6;
          goto LABEL_26;
        }
        if ( (v10 & 2) == 0 )
        {
          *a3 = v21 - 4;
          v26 = 6;
          if ( a5 )
          {
LABEL_34:
            *a5 = v22;
            return v26;
          }
LABEL_27:
          ++*(_DWORD *)(v9 + 20);
          if ( (v10 & 1) != 0 )
          {
            v41 = *a6;
            *(_QWORD *)v9 = v22;
            *a6 = v41 + v55;
            goto LABEL_36;
          }
          v47 = v14;
          v49 = v17;
          if ( v8 >= v22 )
            goto LABEL_36;
          v48 = a6;
          v56 = *(char **)v9;
          v27 = v50(v52, v51, &v56, v22, 0, a6, 0, a8);
          v14 = v47;
          a6 = v48;
          if ( v27 == 4 )
          {
            if ( v26 == 5 )
              goto LABEL_32;
LABEL_36:
            if ( a8 )
              v29 = v26 == 7;
            else
              v29 = 0;
            if ( !v29 )
              return v26;
            v42 = *a3;
            v43 = a4 - *a3;
            if ( v43 <= 4 )
            {
              v44 = *(unsigned int **)(v9 + 32);
              v45 = 0;
              if ( v43 )
              {
                do
                {
                  *((_BYTE *)v44 + v45 + 4) = *(_BYTE *)(v42 + v45);
                  ++v45;
                }
                while ( v43 != v45 );
                v54 = v43;
              }
              v46 = *v44 & 0xFFFFFFF8;
              *a3 = a4;
              *v44 = v46 | v54;
              return v26;
            }
            _libc_assert_fail(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_ucs4le_internal");
LABEL_110:
            _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs4le_internal");
LABEL_111:
            v39 = v8;
LABEL_86:
            if ( (char *)v28 != v39 )
            {
              do
              {
LABEL_106:
                _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4le_internal");
LABEL_107:
                ;
              }
              while ( (char *)v28 != v8 );
            }
            _libc_assert_fail(
              "nstatus == __GCONV_FULL_OUTPUT",
              "../iconv/skeleton.c",
              595,
              "__gconv_transform_ucs4le_internal");
            return 0;
          }
          v28 = (unsigned __int64)v56;
          if ( v56 == v22 )
            goto LABEL_31;
          v36 = 0;
          if ( v48 )
            v36 = *v48;
          if ( v49 == v36 + v55 )
          {
            *a3 -= v22 - v56;
            goto LABEL_31;
          }
          v37 = *(_DWORD *)(v9 + 16);
          *a3 = v18;
          if ( v19 > a4 )
          {
            v39 = v8;
            v19 = v18;
LABEL_92:
            *a3 = v19;
            goto LABEL_86;
          }
          v38 = v8 + 4;
          if ( v28 < (unsigned __int64)(v8 + 4) )
          {
            if ( a4 == v18 )
              goto LABEL_111;
            if ( (char *)v28 == v8 )
            {
LABEL_96:
              --*(_DWORD *)(v9 + 20);
              goto LABEL_31;
            }
            goto LABEL_106;
          }
          v39 = v8;
          while ( 1 )
          {
            v40 = *(_DWORD *)(v19 - 4);
            if ( v40 < 0 )
            {
              if ( !v47 )
                goto LABEL_107;
              if ( (v37 & 2) == 0 )
              {
                *a3 = v19 - 4;
                goto LABEL_86;
              }
              ++*v47;
            }
            else
            {
              *(_DWORD *)v39 = v40;
              v39 = v38;
            }
            if ( a4 < v19 + 4 )
              goto LABEL_92;
            v38 = v39 + 4;
            if ( v28 < (unsigned __int64)(v39 + 4) )
              break;
            v19 += 4LL;
          }
          *a3 = v19;
          if ( v19 == a4 )
            goto LABEL_86;
          if ( v39 != (char *)v28 )
            goto LABEL_106;
          if ( v39 == v8 )
            goto LABEL_96;
LABEL_31:
          if ( v27 )
          {
            v26 = v27;
            goto LABEL_36;
          }
LABEL_32:
          v8 = *(char **)v9;
          v17 = v55;
          v10 = *(_DWORD *)(v9 + 16);
          goto LABEL_12;
        }
        v23 = v21 + 4;
        ++*v14;
        if ( a4 < v21 + 4 )
          goto LABEL_24;
      }
      else
      {
        *(_DWORD *)v22 = v25;
        v23 = v21 + 4;
        v22 = v20;
        if ( a4 < v21 + 4 )
          goto LABEL_24;
      }
      v20 = v22 + 4;
      v24 = v22 + 4;
      if ( v16 < (unsigned __int64)(v22 + 4) )
      {
        *a3 = v21;
        if ( a4 != v21 )
          goto LABEL_42;
LABEL_44:
        v26 = 4;
        goto LABEL_26;
      }
      v21 = v23;
    }
  }
  if ( a5 )
    goto LABEL_110;
  **(_QWORD **)(a2 + 32) = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0;
  return v50(v52, a2 + 48, 0, 0, 0, a6, a7, a8);
}
