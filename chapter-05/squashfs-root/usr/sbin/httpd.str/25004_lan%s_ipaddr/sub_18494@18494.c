FILE *sub_18494()
{
  int v0; // r5
  int i; // r6
  const char *v2; // r0
  int v3; // r3
  const char *v4; // r0
  in_addr_t v5; // r9
  const char *v6; // r0
  in_addr_t v7; // r0
  FILE *result; // r0
  bool v9; // zf
  char *v10; // r0
  char *v11; // r5
  char *v12; // r0
  const char *v13; // r7
  int v14; // r8
  int v15; // r10
  int v16; // r0
  _DWORD *v17; // r8
  char *v18; // r0
  char *v19; // r7
  FILE *stream; // [sp+14h] [bp-240h]
  char v21[256]; // [sp+18h] [bp-23Ch] BYREF
  char s[256]; // [sp+118h] [bp-13Ch] BYREF
  char v23[36]; // [sp+218h] [bp-3Ch] BYREF
  char dest[24]; // [sp+23Ch] [bp-18h] BYREF
  char v25[15]; // [sp+254h] [bp+0h] BYREF
  char j; // [sp+263h] [bp+Fh]
  char v27[32]; // [sp+264h] [bp+10h]
  char v28[16]; // [sp+284h] [bp+30h] BYREF
  char v29[16]; // [sp+294h] [bp+40h] BYREF
  char v30[16]; // [sp+2A4h] [bp+50h] BYREF
  char v31[16]; // [sp+2B4h] [bp+60h] BYREF
  int v32; // [sp+2C4h] [bp+70h] BYREF
  int v33; // [sp+2C8h] [bp+74h] BYREF
  char v34; // [sp+2CCh] [bp+78h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; i = (unsigned __int16)(i + 1) )
  {
    strcpy(v25, "0");
    if ( i )
      v25[0] += i;
    else
      strcpy(v25, &::s);
    memset(s, 0, sizeof(s));
    snprintf(s, 0x100u, "lan%s_ifname", v25);
    v2 = sub_180E0((int)s);
    v3 = *(unsigned __int8 *)v2;
    if ( *v2 )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x100u, "lan%s_ipaddr", v25);
      v4 = sub_180E0((int)s);
      v5 = inet_addr(v4);
      memset(s, 0, sizeof(s));
      snprintf(s, 0x100u, "lan%s_netmask", v25);
      v6 = sub_180E0((int)s);
      v7 = inet_addr(v6);
      *(_DWORD *)&v27[v0] = v7;
      *(_DWORD *)&v27[v0 + 16] = v7 & v5;
    }
    else
    {
      *(_DWORD *)&v27[v0] = v3;
      *(_DWORD *)&v27[v0 + 16] = v3;
    }
    v0 += 4;
  }
  strcpy(dest, "/proc/net/ip_conntrack");
  result = fopen(dest, "r");
  stream = result;
  if ( result )
  {
    sub_118AC(result);
    while ( fgets(s, 256, stream) )
    {
      if ( sscanf(s, "%*s %u %u", &v33, &v34) == 2 )
      {
        v9 = v33 == 17;
        if ( v33 != 17 )
          v9 = v33 == 6;
        if ( v9 )
        {
          v10 = strstr(s, "src=");
          v11 = v10;
          if ( v10 )
          {
            if ( sscanf(v10, "src=%s dst=%s %n", v31, v30, &v32) == 2 )
            {
              v12 = strstr(&v11[v32], "src=");
              if ( v12 )
              {
                if ( sscanf(v12, "src=%s dst=%s", v29, v28) == 2 )
                {
                  snprintf(v21, 0x100u, "%s %s %s %s", v31, v30, v29, v28);
                  remove_dups();
                  v13 = &v21[strspn(v21, " ")];
                  strncpy(v25, v13, 0x10u);
                  v25[strcspn(v25, " ")] = 0;
                  for ( j = 0; ; j = 0 )
                  {
                    v19 = strchr(v13, 32);
                    if ( !v25[0] )
                      break;
                    v14 = 0;
                    while ( 1 )
                    {
                      v15 = *(_DWORD *)&v27[v14];
                      if ( v15 )
                      {
                        if ( (inet_addr(v25) & v15) == *(_DWORD *)&v27[v14 + 16] )
                          break;
                      }
                      v14 += 4;
                      if ( v14 == 16 )
                        goto LABEL_33;
                    }
                    strncpy(v23, v25, 0x10u);
                    v16 = sub_182C0(dword_30B38, (int)v23, (int (__fastcall *)(int, int))off_30B3C);
                    if ( !v16 )
                    {
                      v17 = (_DWORD *)dword_30B38;
                      v18 = sub_1844C(v25);
                      dword_30B38 = sub_18258(v17, (int)v18, (int (__fastcall *)(int, _DWORD *))off_30B3C);
                      v16 = sub_182C0(dword_30B38, (int)v23, (int (__fastcall *)(int, int))off_30B3C);
                    }
                    if ( v33 == 6 )
                    {
                      ++*(_DWORD *)(v16 + 16);
                    }
                    else if ( v33 == 17 )
                    {
                      ++*(_DWORD *)(v16 + 20);
                    }
LABEL_33:
                    if ( v19 )
                      v13 = &v19[strspn(v19, " ")];
                    else
                      v13 = &::s;
                    strncpy(v25, v13, 0x10u);
                    v25[strcspn(v25, " ")] = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    return (FILE *)fclose(stream);
  }
  return result;
}
