__int64 *__fastcall add_module(unsigned __int8 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x23
  unsigned int v7; // w4
  __int64 v8; // x6
  unsigned int v9; // t1
  _BYTE *v10; // x20
  unsigned int v11; // w4
  unsigned int v12; // t1
  _BYTE *v13; // x27
  __int64 v14; // x6
  _BYTE *v15; // x19
  unsigned int v16; // w4
  unsigned int v17; // t1
  _BYTE *v18; // x26
  unsigned int v19; // w4
  unsigned int v20; // t1
  _BYTE *v21; // x25
  int v22; // w4
  int v23; // t1
  int v24; // w1
  _BYTE *v25; // x2
  _BYTE *v26; // x0
  int v27; // t1
  _BYTE *v28; // x24
  int v29; // w0
  int v30; // w0
  int v32; // w19
  unsigned __int64 v33; // x2
  __int64 *v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  __int64 v48; // x0
  __int64 v49; // x24
  __int64 v50; // x0
  _BYTE *v51; // x23
  _BYTE *v52; // x0
  __int64 v53; // x0
  __int64 v54; // x20
  __int64 v55; // x0
  __int64 v56; // [xsp+0h] [xbp-10050h] BYREF
  _BYTE v57[1008]; // [xsp+10h] [xbp-10040h] BYREF
  __int64 v58; // [xsp+400h] [xbp-FC50h]
  _BYTE v59[24]; // [xsp+10000h] [xbp-50h] BYREF
  _BYTE *v60; // [xsp+10018h] [xbp-38h]
  __int64 v61; // [xsp+10020h] [xbp-30h]
  int v62; // [xsp+1002Ch] [xbp-24h]
  _QWORD v63[2]; // [xsp+10038h] [xbp-18h] BYREF

  v4 = (__int64)a1;
  v7 = *a1;
  if ( (word_45E6A0[*a1] & 0x2000) != 0 )
  {
    do
    {
      v9 = *(unsigned __int8 *)++v4;
      v8 = v9;
      v7 = v9;
    }
    while ( (word_45E6A0[(unsigned __int8)v9] & 0x2000) != 0 );
  }
  else
  {
    v8 = *a1;
  }
  if ( v7 )
  {
    v10 = (_BYTE *)v4;
    while ( (word_45E6A0[v8] & 0x2000) == 0 )
    {
      *v10 = dword_45DDA0[v8];
      v12 = (unsigned __int8)*++v10;
      v11 = v12;
      if ( !v12 )
        return &_stack_chk_guard;
      v8 = v11;
    }
    *v10 = 0;
    v13 = v10 + 1;
    v14 = (unsigned __int8)v10[1];
    v15 = v10 + 1;
    v16 = (unsigned __int8)v10[1];
    if ( (word_45E6A0[v14] & 0x2000) != 0 )
    {
      do
      {
        v17 = (unsigned __int8)*++v15;
        v14 = v17;
        v16 = v17;
      }
      while ( (word_45E6A0[(unsigned __int8)v17] & 0x2000) != 0 );
    }
    v18 = v10 + 1;
    if ( v16 )
    {
      while ( (word_45E6A0[v14] & 0x2000) == 0 )
      {
        *v18++ = dword_45DDA0[v14];
        v20 = (unsigned __int8)*++v15;
        v19 = v20;
        if ( !v20 )
          return &_stack_chk_guard;
        v14 = v19;
      }
      *v18 = 0;
      v21 = v18 + 1;
      do
      {
        v23 = (unsigned __int8)*++v15;
        v22 = v23;
        v24 = word_45E6A0[(unsigned __int8)v23] & 0x2000;
      }
      while ( (word_45E6A0[(unsigned __int8)v23] & 0x2000) != 0 );
      v25 = v18 + 1;
      v26 = v18 + 1;
      if ( v22 )
      {
        while ( 1 )
        {
          v28 = v25 + 1;
          v26 = v25 + 1;
          if ( v24 )
            break;
          *v25 = v22;
          v27 = (unsigned __int8)*++v15;
          LOBYTE(v22) = v27;
          if ( !v27 )
            goto LABEL_27;
          ++v25;
          v24 = word_45E6A0[(unsigned __int8)v22] & 0x2000;
        }
        *v25 = 0;
        v29 = _isoc23_strtoll(v15, v63, 10);
        v62 = 1;
        if ( (_BYTE *)v63[0] != v15 )
        {
          if ( v29 <= 0 )
            v29 = v62;
          v62 = v29;
          v30 = (unsigned __int8)v18[1];
          if ( !v18[1] )
            return &_stack_chk_guard;
LABEL_29:
          v61 = v28 - v21;
          if ( v30 == 47 )
            a3 = 0;
          v32 = 3;
          if ( v28 - v21 > 3 )
          {
            if ( *((_DWORD *)v28 - 1) == 7303982 )
              v32 = 0;
            else
              v32 = 3;
          }
          v60 = &v13[-v4];
          v33 = strnlen(v4, &v13[-v4]);
          v34 = (__int64 *)&v59[-((v33 + 16) & 0xFFFFFFFFFFFF0000LL)];
          if ( v59 != (_BYTE *)v34 )
          {
            do
              v58 = 0;
            while ( &v56 != v34 );
          }
          v56 = 0;
          if ( (((_WORD)v33 + 16) & 0xFFF0u) >= 0x400uLL )
            v58 = 0;
          v57[v33] = 0;
          v63[0] = _memcpy_chk((__int64)v57, v4, v33, v33 + 1);
          if ( !tfind(v63, &_gconv_alias_db, _gconv_alias_compare) )
          {
            v48 = calloc(
                    1u,
                    (unsigned __int64)&v28[v32 + 56 + a3 - v4],
                    v40,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39);
            v49 = v48;
            if ( v48 )
            {
              v50 = v48 + 56;
              v51 = v60;
              *(_QWORD *)v49 = v50;
              v52 = &v51[j_memcpy(v50)];
              *(_QWORD *)(v49 + 8) = v52;
              v53 = j_memcpy(v52) + v18 - v10;
              *(_DWORD *)(v49 + 16) = v62;
              *(_DWORD *)(v49 + 20) = a4;
              *(_QWORD *)(v49 + 24) = v53;
              if ( a3 )
                v53 = j_memcpy(v53) + a3;
              v54 = v61;
              v55 = j_memcpy(v53) + v54;
              if ( v32 )
                *(_DWORD *)(v55 - 1) = 7303982;
              insert_module(v49, 1);
            }
          }
          return &_stack_chk_guard;
        }
      }
      else
      {
LABEL_27:
        v62 = 1;
        *v26 = 0;
        v28 = v26 + 1;
      }
      v30 = (unsigned __int8)v18[1];
      if ( !v18[1] )
        return &_stack_chk_guard;
      goto LABEL_29;
    }
  }
  return &_stack_chk_guard;
}
