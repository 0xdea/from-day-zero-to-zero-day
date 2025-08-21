int __fastcall sub_1193C(int result, const char **a2)
{
  int v3; // r10
  const char *v4; // r0
  FILE *v5; // r0
  in_addr_t v6; // r5
  int v7; // r9
  in_addr_t v8; // r6
  const char *v9; // r0
  const char *v10; // r0
  bool v11; // nf
  unsigned int v12; // r3
  int v13; // r10
  in_addr_t v14; // r10
  char *v15; // r0
  char *v16; // r5
  char *v17; // r0
  char *v18; // r0
  const char *v19; // r5
  const char *v20; // r11
  int i; // r5
  const char *v22; // t1
  char *v23; // r0
  int v24; // r3
  int v25; // r3
  char *v26; // r0
  unsigned __int8 v27; // r0
  _DWORD *v28; // r4
  char *v29; // r5
  char *v30; // r6
  int v31; // t1
  int v32; // t1
  int v33; // [sp+0h] [bp-308h]
  FILE *stream; // [sp+4h] [bp-304h]
  int n; // [sp+8h] [bp-300h]
  char v36; // [sp+Ch] [bp-2FCh]
  int v37; // [sp+14h] [bp-2F4h]
  char v38[11]; // [sp+1Ch] [bp-2ECh] BYREF
  char v39; // [sp+27h] [bp-2E1h] BYREF
  char v40; // [sp+28h] [bp-2E0h] BYREF
  char v41; // [sp+35h] [bp-2D3h] BYREF
  char v42[482]; // [sp+36h] [bp-2D2h] BYREF
  char v43; // [sp+218h] [bp-F0h] BYREF
  _DWORD s[13]; // [sp+21Ch] [bp-ECh] BYREF
  char v45; // [sp+250h] [bp-B8h] BYREF
  char v46[48]; // [sp+280h] [bp-88h] BYREF
  _BYTE v47[16]; // [sp+2B0h] [bp-58h] BYREF
  _BYTE buf[16]; // [sp+2C0h] [bp-48h] BYREF
  _BYTE v49[16]; // [sp+2D0h] [bp-38h] BYREF

  if ( result == 1 )
  {
    v3 = nvram_get_int("ipv6_prefix_length");
    if ( get_ipv6_service(v3) )
    {
      v4 = (const char *)sub_11858("ipv6_prefix");
      inet_pton(10, v4, buf);
      ipv6_router_address(v49);
    }
    v33 = atoi(*a2);
    memset(s, 0, sizeof(s));
    v5 = fopen("/proc/net/nf_conntrack", "r");
    stream = v5;
    if ( v5 )
    {
      sub_118AC(v5);
      v6 = sub_11874("1");
      if ( v6 )
      {
        v9 = (const char *)sub_11858("lan_netmask");
        v6 = inet_addr(v9);
        v10 = (const char *)sub_11858("lan_ipaddr");
        v8 = inet_addr(v10);
        v7 = v8 & v6;
      }
      else
      {
        v7 = 0;
        v8 = 0;
      }
      n = v3 / 8;
      v12 = v3 & 0x80000007;
      v11 = v3 < 0;
      if ( v3 < 0 )
        --v12;
      v13 = v3 & 7;
      if ( v11 )
        v12 = ~(v12 << 29);
      v37 = v13;
      if ( v11 )
        v12 = ~(v12 >> 29);
      v14 = v6;
      if ( v11 )
        LOBYTE(v12) = v12 + 1;
      v36 = 8 - v12;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !fgets(v38, 512, stream) )
          {
            fclose(stream);
            goto LABEL_54;
          }
          if ( strncmp(v38, "ipv4", 4u) )
            break;
          if ( v8 )
          {
            v15 = strstr(&v41, "src=");
            v16 = v15;
            if ( !v15 )
              continue;
            if ( (inet_addr(v15 + 4) & v14) == v7 )
            {
              v17 = strstr(v16 + 13, "dst=");
              if ( !v17 || inet_addr(v17 + 4) == v8 )
                continue;
            }
          }
          v19 = &v39;
LABEL_35:
          if ( v33 )
          {
            v26 = strstr(v38, " mark=");
            if ( v26 )
            {
              v27 = atoi(v26 + 6);
              if ( v27 <= 0xAu )
                ++s[v27];
            }
          }
          else
          {
            if ( !strncmp(v19, "tcp", 3u) )
            {
              v20 = ".pat";
              for ( i = 9; ; --i )
              {
                v22 = (const char *)*((_DWORD *)v20 - 1);
                v20 -= 4;
                if ( strstr(v38, v22) )
                  break;
              }
              ++s[i];
            }
            else if ( !strncmp(v19, "udp", 3u) )
            {
              v23 = strstr(v38, "[ASSURED]");
              if ( v23 )
                v24 = s[11];
              else
                v24 = s[10];
              v25 = v24 + 1;
              if ( v23 )
                s[11] = v25;
              else
                s[10] = v25;
            }
            ++s[12];
          }
        }
        if ( !strncmp(v38, "ipv6", 4u) )
        {
          if ( !v8
            || (v18 = strstr(v42, "src=")) != 0
            && sscanf(v18, "src=%s dst=%s", v46, &v45) == 2
            && inet_pton(10, v46, v47) > 0
            && ((inet_ntop(10, v47, v46, 0x2Eu), memcmp(buf, v47, n))
             || v37 && ((unsigned __int8)v47[n] ^ (unsigned __int8)buf[n]) >> v36) )
          {
            v19 = &v40;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_54:
    v28 = s;
    v29 = v38;
    if ( v33 )
    {
      do
      {
        v32 = v28[1];
        ++v28;
        v29 += sprintf(v29, ",%d", v32);
      }
      while ( v28 != &s[10] );
      return sub_13970(0, "\nnfmarks = [%d%s];\n", s[0], v38);
    }
    else
    {
      v30 = &v43;
      do
      {
        v31 = *((_DWORD *)v30 + 1);
        v30 += 4;
        v29 += sprintf(v29, ",%d", v31);
      }
      while ( v30 != (char *)&s[11] );
      return sub_13970(0, "\nconntrack = [%d%s];\n", s[12], v38);
    }
  }
  return result;
}
