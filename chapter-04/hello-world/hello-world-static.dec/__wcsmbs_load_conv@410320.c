__int64 *__fastcall _wcsmbs_load_conv(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  _QWORD *v16; // x22
  _BYTE *v17; // x4
  __int64 *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x8
  int v21; // w1
  __int64 v22; // x2
  int v23; // w3
  unsigned __int64 v24; // x5
  bool v25; // zf
  int v26; // t1
  __int64 v27; // x2
  unsigned __int64 v28; // x0
  unsigned __int16 v29; // w2
  _QWORD *v30; // x0
  _BYTE *v31; // x21
  _BYTE *v32; // x2
  _BYTE *v33; // x6
  int v34; // t1
  double v35; // d0
  double v36; // d1
  double v37; // d2
  double v38; // d3
  double v39; // d4
  double v40; // d5
  double v41; // d6
  double v42; // d7
  __int64 v43; // x0
  unsigned __int64 v44; // x1
  __int64 v45; // x0
  unsigned __int64 v46; // x1
  _QWORD v48[2]; // [xsp+10h] [xbp-10030h] BYREF
  _BYTE v49[1008]; // [xsp+20h] [xbp-10020h] BYREF
  __int64 v50; // [xsp+410h] [xbp-FC30h]
  _BYTE v51[24]; // [xsp+10010h] [xbp-30h] BYREF
  unsigned __int64 v52; // [xsp+10028h] [xbp-18h] BYREF
  __int64 v53; // [xsp+10030h] [xbp-10h] BYREF

  v2 = *(_QWORD **)(a1 + 32);
  pthread_rwlock_wrlock(&_libc_setlocale_lock);
  if ( !*v2 )
  {
    v16 = (_QWORD *)calloc(1u, 0x20u, v8, v9, v10, v11, v12, v13, v14, v15, v3, v4, v5, v6, v7);
    if ( !v16 )
    {
LABEL_30:
      *v2 = &_wcsmbs_gconv_fcts_c;
      goto LABEL_24;
    }
    v17 = *(_BYTE **)(a1 + 168);
    if ( *(_DWORD *)(a1 + 44) )
    {
      v19 = 11;
      v18 = (__int64 *)"TRANSLIT";
      v20 = 8;
    }
    else
    {
      v18 = &qword_456B08;
      v19 = 3;
      v20 = 0;
    }
    v21 = (unsigned __int8)*v17;
    if ( *v17 )
    {
      v22 = *(_QWORD *)(a1 + 168);
      v23 = (unsigned __int8)*v17;
      v24 = 0;
      do
      {
        v25 = v23 == 47;
        v26 = *(unsigned __int8 *)++v22;
        v23 = v26;
        if ( v25 )
          ++v24;
      }
      while ( v23 );
      v27 = v22 - (_QWORD)v17 + v19 + 15;
      v28 = v27 & 0xFFFFFFFFFFFF0000LL;
      v29 = v27 & 0xFFF0;
      v30 = &v51[-v28];
      if ( v51 != (_BYTE *)v30 )
      {
        do
          v50 = 0;
        while ( v48 != v30 );
      }
      v48[0] = 0;
      if ( v29 >= 0x400uLL )
        v50 = 0;
      v31 = v49;
      v32 = v49;
      do
      {
        v33 = v32;
        *v32++ = dword_45DDA0[v21];
        v34 = (unsigned __int8)*++v17;
        v21 = v34;
      }
      while ( v34 );
      if ( v24 > 1 )
      {
LABEL_17:
        *v32 = 0;
        if ( !(unsigned int)_gconv_find_transform((__int64)"INTERNAL", (__int64)v31, &v53, (__int64)&v52, 0) )
        {
          v44 = v52;
          v43 = v53;
          if ( v52 <= 1 )
          {
            *v16 = v53;
            v16[1] = v44;
            if ( v43 )
            {
              if ( !(unsigned int)_gconv_find_transform((__int64)v31, (__int64)"INTERNAL", &v53, (__int64)&v52, 0) )
              {
                v46 = v52;
                v45 = v53;
                if ( v52 <= 1 )
                {
                  v16[2] = v53;
                  v16[3] = v46;
                  if ( v45 )
                  {
LABEL_23:
                    *v2 = v16;
                    goto LABEL_24;
                  }
                  goto LABEL_35;
                }
                _gconv_close_transform(v53);
              }
              v16[2] = 0;
LABEL_35:
              if ( *v16 )
                _gconv_close_transform(*v16);
LABEL_29:
              free((__int64)v16, v35, v36, v37, v38, v39, v40, v41, v42);
              goto LABEL_30;
            }
LABEL_28:
            if ( v16[2] )
              goto LABEL_23;
            goto LABEL_29;
          }
          _gconv_close_transform(v53);
        }
        *v16 = 0;
        goto LABEL_28;
      }
      *v32 = 47;
      if ( v24 )
      {
        v32 = v33 + 2;
        goto LABEL_17;
      }
    }
    else
    {
      v32 = v48;
      v31 = v48;
      LOBYTE(v48[0]) = 47;
    }
    v32[1] = 47;
    if ( v20 )
    {
      v32 += 10;
      *((_QWORD *)v32 - 1) = *v18;
    }
    else
    {
      v32 += 2;
    }
    goto LABEL_17;
  }
LABEL_24:
  pthread_rwlock_unlock(&_libc_setlocale_lock);
  return &_stack_chk_guard;
}
