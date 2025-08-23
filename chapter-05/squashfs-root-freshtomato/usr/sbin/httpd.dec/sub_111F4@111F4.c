int sub_111F4()
{
  const char *v1; // r4
  char *v2; // r0
  char *v3; // r8
  const char *i; // r6
  char *v5; // r0
  char *v6; // r0
  size_t v7; // r1
  char *v8; // r0
  int v9; // r1
  const char *v10; // r3
  int v11; // r2
  const char *v12; // r6
  const char *v13; // r1
  int v14; // r3
  const char *v15; // r2
  unsigned int v16; // r0
  bool v17; // cc
  const char *v18; // r1
  const char *v19; // r3
  int v20; // r0
  int v21; // t1
  unsigned __int8 *v22; // r3
  int v23; // r12
  int v24; // r2
  int v25; // r1
  unsigned __int8 *v26; // r3
  unsigned __int8 *v27; // r0
  int v28; // r2
  int v29; // t1
  bool v30; // zf
  char **j; // r7
  bool v32; // zf
  unsigned __int8 *v33; // r0
  int v34; // lr
  unsigned __int8 *v35; // r3
  unsigned __int8 *v36; // r0
  int v37; // r8
  unsigned __int8 *v38; // r0
  int v39; // r1
  int v40; // t1
  bool v41; // zf
  int v42; // r1
  _BYTE v43[128]; // [sp+4h] [bp-A4h] BYREF
  void *ptr; // [sp+84h] [bp-24h]

  if ( f_read_alloc_string() >= 0 )
  {
    if ( !dword_30CB4 )
      sub_B928(200, 0, "text/html; charset=utf-8", 0);
    v1 = (const char *)ptr;
LABEL_70:
    while ( *v1 )
    {
      v2 = strstr(v1, "%>");
      v3 = v2;
      if ( !v2 )
      {
        sub_13954(v1);
        break;
      }
      *v2 = 0;
      for ( i = v1; ; i = v5 + 2 )
      {
        v5 = strstr(i, "<%");
        if ( !v5 )
          break;
      }
      if ( i == v1 )
      {
        v6 = (char *)v1;
        v7 = v3 + 2 - v1;
        *v3 = 37;
        v1 = v3 + 2;
        sub_138EC(v6, v7);
      }
      else
      {
        v8 = (char *)v1;
        v9 = -2 - (_DWORD)v1;
        v1 = v3 + 2;
        sub_138EC(v8, (size_t)&i[v9]);
        v10 = i;
        do
        {
          v11 = *(unsigned __int8 *)v10;
          v12 = v10++;
        }
        while ( v11 == 32 );
        v13 = v12;
        do
        {
          v14 = *(unsigned __int8 *)v13;
          v15 = v13++;
          v16 = (unsigned __int8)(v14 - 97);
          v17 = v16 > 0x19;
          if ( v16 > 0x19 )
            v17 = (unsigned __int8)(v14 - 65) > 0x19u;
        }
        while ( !v17 || (unsigned __int8)(v14 - 48) <= 9u || v14 == 95 );
        if ( v12 != v15 )
        {
          v18 = v15;
          do
          {
            v19 = v18;
            v21 = *(unsigned __int8 *)v18++;
            v20 = v21;
          }
          while ( v21 == 32 );
          if ( v20 == 40 )
          {
            *v15 = 0;
            v22 = (unsigned __int8 *)(v19 + 1);
            v23 = 0;
            v24 = 1;
            while ( 1 )
            {
              v37 = v24 - 1;
              if ( !*v22 )
                break;
              v27 = v22;
              do
              {
                v25 = *v27;
                v26 = v27++;
              }
              while ( v25 == 32 );
              if ( v25 == 41 )
                goto LABEL_31;
              if ( v24 == 33 )
                goto LABEL_70;
              v32 = v25 == 34;
              if ( v25 != 34 )
                v32 = v25 == 39;
              if ( v32 )
              {
                *(_DWORD *)&v43[v23] = v27;
LABEL_51:
                v33 = v26 + 1;
                while ( 1 )
                {
                  v34 = *v33;
                  v26 = v33++;
                  if ( v34 == v25 || !v34 )
                    break;
                  if ( v34 == 92 )
                  {
                    v26 = v33;
                    if ( !*v33 )
                      break;
                    *(v33 - 1) = *v33;
                    goto LABEL_51;
                  }
                }
                if ( !*v26 )
                  goto LABEL_70;
                v37 = v24;
                *v26 = 0;
                v35 = v26 + 1;
              }
              else
              {
                v37 = v24;
                v38 = v26;
                *(_DWORD *)&v43[v23] = v26;
                do
                {
                  v35 = v38;
                  v40 = *v38++;
                  v39 = v40;
                  v41 = v40 == 41;
                  if ( v40 != 41 )
                    v41 = v39 == 44;
                }
                while ( !v41 && v39 != 32 && v39 );
              }
              v36 = v35;
              do
              {
                v42 = *v36;
                v26 = v36++;
              }
              while ( v42 == 32 );
              if ( v42 == 41 )
              {
                *v26 = 0;
                do
                {
LABEL_31:
                  v29 = *++v26;
                  v28 = v29;
                  v30 = v29 == 32;
                  if ( v29 != 32 )
                    v30 = v28 == 59;
                }
                while ( v30 );
                if ( !v28 )
                {
                  for ( j = &off_1B4A4; *j; j += 2 )
                  {
                    if ( !strcmp(*j, v12) )
                    {
                      ((void (__fastcall *)(int, _BYTE *))j[1])(v37, v43);
                      goto LABEL_70;
                    }
                  }
                }
                goto LABEL_70;
              }
              ++v24;
              v23 += 4;
              if ( v42 != 44 )
                goto LABEL_70;
              *v26 = 0;
              v22 = v26 + 1;
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
      sub_BA5C(500, 0, "Read error");
    return 0;
  }
}
