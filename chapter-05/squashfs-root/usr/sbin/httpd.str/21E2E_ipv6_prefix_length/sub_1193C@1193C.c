int __fastcall sub_1193C(int result, const char **a2)
{
  int v3; // r10
  const char *v4; // r0
  in_addr_t v5; // r5
  int v6; // r9
  in_addr_t v7; // r6
  const char *v8; // r0
  const char *v9; // r0
  bool v10; // nf
  unsigned int v11; // r3
  int v12; // r10
  in_addr_t v13; // r10
  char *v14; // r0
  char *v15; // r5
  char *v16; // r0
  char *v17; // r0
  const char *v18; // r5
  const char *v19; // r11
  int i; // r5
  const char *v21; // t1
  char *v22; // r0
  int v23; // r3
  int v24; // r3
  char *v25; // r0
  unsigned __int8 v26; // r0
  _DWORD *v27; // r4
  char *v28; // r5
  char *v29; // r6
  int v30; // t1
  int v31; // t1
  int v32; // [sp+0h] [bp-308h]
  FILE *stream; // [sp+4h] [bp-304h]
  int n; // [sp+8h] [bp-300h]
  char v35; // [sp+Ch] [bp-2FCh]
  int v36; // [sp+14h] [bp-2F4h]
  char v37[11]; // [sp+1Ch] [bp-2ECh] BYREF
  char v38; // [sp+27h] [bp-2E1h] BYREF
  char v39; // [sp+28h] [bp-2E0h] BYREF
  char v40; // [sp+35h] [bp-2D3h] BYREF
  char v41[482]; // [sp+36h] [bp-2D2h] BYREF
  char v42; // [sp+218h] [bp-F0h] BYREF
  _DWORD s[13]; // [sp+21Ch] [bp-ECh] BYREF
  char v44; // [sp+250h] [bp-B8h] BYREF
  char v45[48]; // [sp+280h] [bp-88h] BYREF
  _BYTE v46[16]; // [sp+2B0h] [bp-58h] BYREF
  _BYTE buf[16]; // [sp+2C0h] [bp-48h] BYREF
  _BYTE v48[16]; // [sp+2D0h] [bp-38h] BYREF

  if ( result == 1 )
  {
    v3 = nvram_get_int("ipv6_prefix_length");
    if ( get_ipv6_service() )
    {
      v4 = (const char *)sub_11858("ipv6_prefix");
      inet_pton(10, v4, buf);
      ipv6_router_address(v48);
    }
    v32 = atoi(*a2);
    memset(s, 0, sizeof(s));
    stream = fopen("/proc/net/nf_conntrack", "r");
    if ( stream )
    {
      sub_118AC();
      v5 = sub_11874("1");
      if ( v5 )
      {
        v8 = (const char *)sub_11858("lan_netmask");
        v5 = inet_addr(v8);
        v9 = (const char *)sub_11858("lan_ipaddr");
        v7 = inet_addr(v9);
        v6 = v7 & v5;
      }
      else
      {
        v6 = 0;
        v7 = 0;
      }
      n = v3 / 8;
      v11 = v3 & 0x80000007;
      v10 = v3 < 0;
      if ( v3 < 0 )
        --v11;
      v12 = v3 & 7;
      if ( v10 )
        v11 = ~(v11 << 29);
      v36 = v12;
      if ( v10 )
        v11 = ~(v11 >> 29);
      v13 = v5;
      if ( v10 )
        LOBYTE(v11) = v11 + 1;
      v35 = 8 - v11;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !fgets(v37, 512, stream) )
          {
            fclose(stream);
            goto LABEL_54;
          }
          if ( strncmp(v37, "ipv4", 4u) )
            break;
          if ( v7 )
          {
            v14 = strstr(&v40, "src=");
            v15 = v14;
            if ( !v14 )
              continue;
            if ( (inet_addr(v14 + 4) & v13) == v6 )
            {
              v16 = strstr(v15 + 13, "dst=");
              if ( !v16 || inet_addr(v16 + 4) == v7 )
                continue;
            }
          }
          v18 = &v38;
LABEL_35:
          if ( v32 )
          {
            v25 = strstr(v37, " mark=");
            if ( v25 )
            {
              v26 = atoi(v25 + 6);
              if ( v26 <= 0xAu )
                ++s[v26];
            }
          }
          else
          {
            if ( !strncmp(v18, "tcp", 3u) )
            {
              v19 = ".pat";
              for ( i = 9; ; --i )
              {
                v21 = (const char *)*((_DWORD *)v19 - 1);
                v19 -= 4;
                if ( strstr(v37, v21) )
                  break;
              }
              ++s[i];
            }
            else if ( !strncmp(v18, "udp", 3u) )
            {
              v22 = strstr(v37, "[ASSURED]");
              if ( v22 )
                v23 = s[11];
              else
                v23 = s[10];
              v24 = v23 + 1;
              if ( v22 )
                s[11] = v24;
              else
                s[10] = v24;
            }
            ++s[12];
          }
        }
        if ( !strncmp(v37, "ipv6", 4u) )
        {
          if ( !v7
            || (v17 = strstr(v41, "src=")) != 0
            && sscanf(v17, "src=%s dst=%s", v45, &v44) == 2
            && inet_pton(10, v45, v46) > 0
            && ((inet_ntop(10, v46, v45, 0x2Eu), memcmp(buf, v46, n))
             || v36 && ((unsigned __int8)v46[n] ^ (unsigned __int8)buf[n]) >> v35) )
          {
            v18 = &v39;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_54:
    v27 = s;
    v28 = v37;
    if ( v32 )
    {
      do
      {
        v31 = v27[1];
        ++v27;
        v28 += sprintf(v28, ",%d", v31);
      }
      while ( v27 != &s[10] );
      return sub_13970(0, "\nnfmarks = [%d%s];\n", s[0], v37);
    }
    else
    {
      v29 = &v42;
      do
      {
        v30 = *((_DWORD *)v29 + 1);
        v29 += 4;
        v28 += sprintf(v28, ",%d", v30);
      }
      while ( v29 != (char *)&s[11] );
      return sub_13970(0, "\nconntrack = [%d%s];\n", s[12], v37);
    }
  }
  return result;
}
