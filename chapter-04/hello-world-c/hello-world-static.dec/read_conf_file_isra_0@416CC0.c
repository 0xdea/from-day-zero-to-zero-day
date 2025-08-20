__int64 *__fastcall read_conf_file_isra_0(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // x0
  double v4; // d0
  double v5; // d1
  double v6; // d2
  double v7; // d3
  double v8; // d4
  double v9; // d5
  double v10; // d6
  double v11; // d7
  int *v12; // x19
  int v13; // w0
  __int64 v14; // x2
  __int64 v15; // x23
  unsigned __int8 *v16; // x28
  unsigned __int8 *v17; // x0
  void *v18; // x4
  int v19; // t1
  unsigned __int8 v20; // w3
  unsigned __int8 *v21; // x23
  int v22; // t1
  __int64 v23; // x0
  __int64 v25; // x2
  unsigned int v26; // w0
  unsigned int v27; // t1
  unsigned __int8 *v28; // x3
  _DWORD *v29; // x6
  unsigned __int64 v30; // x5
  __int64 v31; // x3
  int v32; // w0
  unsigned int v33; // t1
  _BYTE *v34; // x24
  unsigned int v35; // w0
  unsigned int v36; // t1
  _QWORD *v37; // x28
  int v38; // w0
  int v39; // w3
  __int64 v42; // [xsp+18h] [xbp-28h]
  unsigned __int8 *v43; // [xsp+28h] [xbp-18h] BYREF
  __int64 v44; // [xsp+30h] [xbp-10h] BYREF

  v3 = (int *)fopen64(a1, "rce");
  v43 = 0;
  v44 = 0;
  if ( v3 )
  {
    v12 = v3;
    v13 = *v3;
    *v12 = v13 | 0x8000;
    if ( (v13 & 0x10) != 0 )
    {
      v23 = 0;
    }
    else
    {
      do
      {
        v15 = getdelim(&v43, &v44, 10, v12);
        if ( v15 < 0 )
          break;
        v16 = v43;
        v17 = (unsigned __int8 *)strchr(v43, 35, v14);
        if ( v17 )
        {
          *v17 = 0;
        }
        else if ( v16[v15 - 1] == 10 )
        {
          v16[v15 - 1] = 0;
        }
        if ( (word_45E6A0[*v16] & 0x2000) != 0 )
        {
          do
            v19 = *++v16;
          while ( (word_45E6A0[v19] & 0x2000) != 0 );
        }
        if ( v17 != v16 )
        {
          v20 = *v16;
          v21 = v16;
          if ( *v16 )
          {
            do
            {
              if ( (word_45E6A0[v20] & 0x2000) != 0 )
                break;
              v22 = *++v21;
              v20 = v22;
            }
            while ( v22 );
            if ( v21 - v16 == 5 )
            {
              if ( *(_DWORD *)v16 == 1634298977 && v16[4] == 115 )
              {
                v25 = *v21;
                v26 = *v21;
                if ( (word_45E6A0[v25] & 0x2000) != 0 )
                {
                  do
                  {
                    v27 = *++v21;
                    v25 = v27;
                    v26 = v27;
                  }
                  while ( (word_45E6A0[(unsigned __int8)v27] & 0x2000) != 0 );
                }
                if ( v26 )
                {
                  v28 = v21;
                  v29 = dword_45DDA0;
                  while ( (word_45E6A0[v25] & 0x2000) == 0 )
                  {
                    *v28++ = dword_45DDA0[v25];
                    if ( !*v28 )
                      goto LABEL_16;
                    v25 = *v28;
                  }
                  *v28 = 0;
                  v30 = v28[1];
                  v31 = (__int64)(v28 + 1);
                  v42 = v31;
                  v32 = v30;
                  if ( (word_45E6A0[(unsigned __int8)v30] & 0x2000) != 0 )
                  {
                    do
                    {
                      v33 = *(unsigned __int8 *)++v31;
                      v30 = v33;
                      v32 = v33;
                    }
                    while ( (word_45E6A0[(unsigned __int8)v33] & 0x2000) != 0 );
                  }
                  v34 = (_BYTE *)v42;
                  if ( v32 )
                  {
                    while ( (word_45E6A0[v30] & 0x2000) == 0 )
                    {
                      *v34++ = dword_45DDA0[v30];
                      v36 = *(unsigned __int8 *)++v31;
                      v35 = v36;
                      if ( !v36 )
                        break;
                      v30 = v35;
                    }
                    if ( (_BYTE *)v42 != v34 )
                    {
                      *v34 = 0;
                      v37 = (_QWORD *)_gconv_modules_db;
LABEL_40:
                      if ( v37 )
                      {
                        while ( 1 )
                        {
                          v38 = strcmp(v21, *v37);
                          if ( !v38 )
                            break;
                          if ( v38 < 0 )
                          {
                            v37 = (_QWORD *)v37[4];
                            goto LABEL_40;
                          }
                          v37 = (_QWORD *)v37[6];
                          if ( !v37 )
                            goto LABEL_44;
                        }
                      }
                      else
                      {
LABEL_44:
                        add_alias2_part_0(
                          (__int64)v21,
                          v42,
                          (__int64)(v34 + 1),
                          v31,
                          v18,
                          (void *)v30,
                          v29,
                          v4,
                          v5,
                          v6,
                          v7,
                          v8,
                          v9,
                          v10,
                          v11);
                      }
                    }
                  }
                }
              }
            }
            else if ( v21 - v16 == 6 && *(_DWORD *)v16 == 1969516397 && *((_WORD *)v16 + 2) == 25964 )
            {
              v39 = modcounter_0++;
              add_module(v21, a2, a3, v39);
            }
          }
        }
LABEL_16:
        ;
      }
      while ( (*v12 & 0x10) == 0 );
      v23 = (__int64)v43;
    }
    free(v23, v4, v5, v6, v7, v8, v9, v10, v11);
    fclose(v12);
  }
  return &_stack_chk_guard;
}
