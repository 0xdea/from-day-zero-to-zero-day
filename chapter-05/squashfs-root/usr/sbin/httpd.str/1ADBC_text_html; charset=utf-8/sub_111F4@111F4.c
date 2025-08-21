int __fastcall sub_111F4(int a1)
{
  const char *v2; // r4
  char *v3; // r0
  char *v4; // r8
  const char *i; // r6
  char *v6; // r0
  char *v7; // r0
  size_t v8; // r1
  char *v9; // r0
  int v10; // r1
  const char *v11; // r3
  int v12; // r2
  const char *v13; // r6
  const char *v14; // r1
  int v15; // r3
  const char *v16; // r2
  unsigned int v17; // r0
  bool v18; // cc
  const char *v19; // r1
  const char *v20; // r3
  int v21; // r0
  int v22; // t1
  unsigned __int8 *v23; // r3
  int v24; // r12
  int v25; // r2
  int v26; // r1
  unsigned __int8 *v27; // r3
  unsigned __int8 *v28; // r0
  int v29; // r2
  int v30; // t1
  bool v31; // zf
  char **j; // r7
  bool v33; // zf
  unsigned __int8 *v34; // r0
  int v35; // lr
  unsigned __int8 *v36; // r3
  unsigned __int8 *v37; // r0
  int v38; // r8
  unsigned __int8 *v39; // r0
  int v40; // r1
  int v41; // t1
  bool v42; // zf
  int v43; // r1
  _BYTE v44[128]; // [sp+4h] [bp-A4h] BYREF
  void *ptr; // [sp+84h] [bp-24h] BYREF

  if ( f_read_alloc_string(a1, &ptr, 0x20000) >= 0 )
  {
    if ( !dword_30CB4 )
      sub_B928(200, 0, "text/html; charset=utf-8", 0);
    v2 = (const char *)ptr;
LABEL_70:
    while ( *v2 )
    {
      v3 = strstr(v2, "%>");
      v4 = v3;
      if ( !v3 )
      {
        sub_13954(v2);
        break;
      }
      *v3 = 0;
      for ( i = v2; ; i = v6 + 2 )
      {
        v6 = strstr(i, "<%");
        if ( !v6 )
          break;
      }
      if ( i == v2 )
      {
        v7 = (char *)v2;
        v8 = v4 + 2 - v2;
        *v4 = 37;
        v2 = v4 + 2;
        sub_138EC(v7, v8);
      }
      else
      {
        v9 = (char *)v2;
        v10 = -2 - (_DWORD)v2;
        v2 = v4 + 2;
        sub_138EC(v9, (size_t)&i[v10]);
        v11 = i;
        do
        {
          v12 = *(unsigned __int8 *)v11;
          v13 = v11++;
        }
        while ( v12 == 32 );
        v14 = v13;
        do
        {
          v15 = *(unsigned __int8 *)v14;
          v16 = v14++;
          v17 = (unsigned __int8)(v15 - 97);
          v18 = v17 > 0x19;
          if ( v17 > 0x19 )
            v18 = (unsigned __int8)(v15 - 65) > 0x19u;
        }
        while ( !v18 || (unsigned __int8)(v15 - 48) <= 9u || v15 == 95 );
        if ( v13 != v16 )
        {
          v19 = v16;
          do
          {
            v20 = v19;
            v22 = *(unsigned __int8 *)v19++;
            v21 = v22;
          }
          while ( v22 == 32 );
          if ( v21 == 40 )
          {
            *v16 = 0;
            v23 = (unsigned __int8 *)(v20 + 1);
            v24 = 0;
            v25 = 1;
            while ( 1 )
            {
              v38 = v25 - 1;
              if ( !*v23 )
                break;
              v28 = v23;
              do
              {
                v26 = *v28;
                v27 = v28++;
              }
              while ( v26 == 32 );
              if ( v26 == 41 )
                goto LABEL_31;
              if ( v25 == 33 )
                goto LABEL_70;
              v33 = v26 == 34;
              if ( v26 != 34 )
                v33 = v26 == 39;
              if ( v33 )
              {
                *(_DWORD *)&v44[v24] = v28;
LABEL_51:
                v34 = v27 + 1;
                while ( 1 )
                {
                  v35 = *v34;
                  v27 = v34++;
                  if ( v35 == v26 || !v35 )
                    break;
                  if ( v35 == 92 )
                  {
                    v27 = v34;
                    if ( !*v34 )
                      break;
                    *(v34 - 1) = *v34;
                    goto LABEL_51;
                  }
                }
                if ( !*v27 )
                  goto LABEL_70;
                v38 = v25;
                *v27 = 0;
                v36 = v27 + 1;
              }
              else
              {
                v38 = v25;
                v39 = v27;
                *(_DWORD *)&v44[v24] = v27;
                do
                {
                  v36 = v39;
                  v41 = *v39++;
                  v40 = v41;
                  v42 = v41 == 41;
                  if ( v41 != 41 )
                    v42 = v40 == 44;
                }
                while ( !v42 && v40 != 32 && v40 );
              }
              v37 = v36;
              do
              {
                v43 = *v37;
                v27 = v37++;
              }
              while ( v43 == 32 );
              if ( v43 == 41 )
              {
                *v27 = 0;
                do
                {
LABEL_31:
                  v30 = *++v27;
                  v29 = v30;
                  v31 = v30 == 32;
                  if ( v30 != 32 )
                    v31 = v29 == 59;
                }
                while ( v31 );
                if ( !v29 )
                {
                  for ( j = &off_1B4A4; *j; j += 2 )
                  {
                    if ( !strcmp(*j, v13) )
                    {
                      ((void (__fastcall *)(int, _BYTE *))j[1])(v38, v44);
                      goto LABEL_70;
                    }
                  }
                }
                goto LABEL_70;
              }
              ++v25;
              v24 += 4;
              if ( v43 != 44 )
                goto LABEL_70;
              *v27 = 0;
              v23 = v27 + 1;
            }
          }
        }
      }
    }
    free(ptr);
    return 1;
  }
  else
  {
    free(ptr);
    if ( !dword_30CB4 )
      sub_BA5C(500, 0);
    return 0;
  }
}
