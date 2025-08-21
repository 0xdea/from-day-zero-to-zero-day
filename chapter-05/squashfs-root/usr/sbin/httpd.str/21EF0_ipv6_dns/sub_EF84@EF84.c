int sub_EF84()
{
  const char *v0; // r5
  const char *v1; // r8
  const char *v2; // r6
  size_t v3; // r4
  FILE *v4; // r0
  FILE *v5; // r6
  _BOOL4 v6; // r3
  FILE *v7; // r0
  FILE *v8; // r5
  int v9; // r0
  FILE *v10; // r0
  FILE *v11; // r4
  int i; // r7
  const char *v13; // r0
  int v14; // r0
  const char *v15; // r8
  int v16; // r0
  const char *v17; // r8
  _BYTE *wan6face; // r0
  int v19; // r0
  const char *v20; // r5
  int v21; // r4
  const char *v22; // r6
  const char *v23; // r6
  char *v24; // r6
  const char *v25; // r6
  const char *v26; // r6
  const char *v27; // r6
  char *v28; // r6
  const char *v29; // r6
  FILE *v30; // r7
  int v31; // r4
  int uptime; // r4
  unsigned int v33; // r10
  unsigned int v34; // r9
  unsigned int v35; // r11
  FILE *v36; // r5
  FILE *v37; // r0
  FILE *v38; // r4
  char *v39; // r5
  char *v40; // r0
  const char *v42; // [sp+54h] [bp-4C4h]
  int v43; // [sp+58h] [bp-4C0h]
  int v44; // [sp+5Ch] [bp-4BCh]
  int v45; // [sp+60h] [bp-4B8h]
  int v46; // [sp+64h] [bp-4B4h]
  int v47; // [sp+68h] [bp-4B0h]
  int v48; // [sp+6Ch] [bp-4ACh]
  int v49; // [sp+70h] [bp-4A8h]
  int procs; // [sp+74h] [bp-4A4h]
  char s[8]; // [sp+78h] [bp-4A0h] BYREF
  char v52; // [sp+83h] [bp-495h] BYREF
  char v53[500]; // [sp+84h] [bp-494h] BYREF
  char v54[128]; // [sp+278h] [bp-2A0h] BYREF
  char v55[64]; // [sp+2F8h] [bp-220h] BYREF
  char v56[64]; // [sp+338h] [bp-1E0h] BYREF
  char v57[64]; // [sp+378h] [bp-1A0h] BYREF
  _BYTE v58[64]; // [sp+3B8h] [bp-160h] BYREF
  struct sysinfo info; // [sp+3F8h] [bp-120h] BYREF
  char v60[76]; // [sp+438h] [bp-E0h] BYREF
  char v61[12]; // [sp+484h] [bp-94h] BYREF
  char v62[16]; // [sp+498h] [bp-80h] BYREF
  _DWORD v63[4]; // [sp+4A8h] [bp-70h] BYREF
  char v64[8]; // [sp+4B8h] [bp-60h] BYREF
  char v65[12]; // [sp+4C8h] [bp-50h] BYREF
  char v66[8]; // [sp+4D4h] [bp-44h] BYREF
  char v67[4]; // [sp+4DCh] [bp-3Ch] BYREF
  char v68[12]; // [sp+4E4h] [bp-34h] BYREF

  strcpy(v65, "/proc/stat");
  sub_17D84((int)v57, (int)v56, (int)v68, (int)v67, v66);
  sub_15EFC(v54);
  memset(v63, 0, sizeof(v63));
  v0 = (const char *)nvram_get("board_id");
  v1 = (const char *)nvram_get("cfe_version");
  v2 = (const char *)nvram_get("bl_version");
  strcpy(v64, &::s);
  if ( v2 )
  {
    v3 = strlen(v2);
    strncpy((char *)v63, v2, 0xFu);
    HIBYTE(v63[3]) = 0;
  }
  else if ( v1 )
  {
    v3 = strlen(v1);
    strncpy((char *)v63, v1, 0xFu);
    HIBYTE(v63[3]) = 0;
  }
  else
  {
    if ( v0 )
    {
      v3 = 0;
    }
    else
    {
      v4 = popen("strings /dev/mtd0ro | grep bl_version | cut -d '=' -f2", "r");
      v5 = v4;
      if ( v4 )
      {
        if ( fgets((char *)v63, 15, v4) )
          v3 = strlen((const char *)v63);
        else
          v3 = 0;
        pclose(v5);
      }
      else
      {
        v3 = 0;
      }
    }
    v6 = v3 == 0;
    if ( !v0 )
      v6 = 0;
    if ( v6 )
    {
      if ( strncmp(v0, "U12H", 4u) )
        goto LABEL_22;
      v7 = popen("strings /dev/mtd1ro | grep cfe_version | cut -d '=' -f2", "r");
      v8 = v7;
      if ( !v7 )
        goto LABEL_22;
      v3 = (size_t)fgets((char *)v63, 15, v7);
      if ( v3 )
        v3 = strlen((const char *)v63);
      pclose(v8);
    }
  }
  if ( !v3 )
  {
LABEL_22:
    strcpy(v64, "--");
    goto LABEL_24;
  }
  strcpy(v64, (const char *)v63);
  v64[strcspn(v64, "\n")] = 0;
LABEL_24:
  v9 = sub_13954("\nsysinfo = {\n");
  if ( get_ipv6_service(v9) )
  {
    v10 = fopen("/var/dhcp6c_duid_gui", "r");
    v11 = v10;
    if ( v10 )
    {
      fgets(s, 64, v10);
      sub_13970(0, "\tip6_duid: '%s',\n", s);
      fclose(v11);
    }
    else
    {
      sub_13970(0, "\tip6_duid: '%s',\n", "--");
    }
    for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
    {
      LOWORD(v63[0]) = 48;
      if ( i )
        LOBYTE(v63[0]) += i;
      else
        strcpy((char *)v63, &::s);
      memset(v62, 0, sizeof(v62));
      snprintf(v62, 0x10u, "lan%s_ipaddr", (const char *)v63);
      v13 = (const char *)sub_E670(v62);
      if ( *v13 )
      {
        memset(v62, 0, sizeof(v62));
        snprintf(v62, 0x10u, "lan%s_ifname", (const char *)v63);
        v14 = sub_E670(v62);
        v15 = (const char *)getifaddr(v14, 10, 0);
        if ( v15 )
        {
          memset(v60, 0, 0x2Eu);
          snprintf(v60, 0x2Eu, "%s", v15);
          sub_13970(0, "\tip6_lan%s: '%s',\n", (const char *)v63, v60);
        }
        v16 = sub_E670(v62);
        v13 = (const char *)getifaddr(v16, 10, 1);
        v17 = v13;
        if ( v13 )
        {
          memset(v60, 0, 0x2Eu);
          snprintf(v60, 0x2Eu, "%s", v17);
          v13 = (const char *)sub_13970(0, "\tip6_lan%s_ll: '%s',\n", (const char *)v63, v60);
        }
      }
    }
    wan6face = (_BYTE *)get_wan6face(v13);
    if ( *wan6face )
    {
      v19 = get_wan6face(wan6face);
      v20 = (const char *)getifaddr(v19, 10, 0);
      if ( v20 )
      {
        memset(v60, 0, 0x2Eu);
        snprintf(v60, 0x2Eu, "%s", v20);
        sub_13970(0, "\tip6_wan: '%s',\n", v60);
      }
    }
    v21 = 0;
    v22 = (const char *)sub_E670("ipv6_dns");
    memset(v60, 0, 0x2Eu);
    v23 = &v22[strspn(v22, " ")];
    strncpy(v60, v23, 0x2Eu);
    v60[strcspn(v60, " ")] = 0;
    v60[45] = 0;
    v24 = strchr(v23, 32);
    while ( v60[0] )
    {
      if ( v21 )
      {
        if ( v21 == 1 && inet_pton(10, v60, v61) == 1 )
        {
          v21 = 2;
          sub_13970(0, "\tip6_wan_dns2: '%s',\n", v60);
        }
      }
      else if ( inet_pton(10, v60, v61) == 1 )
      {
        v21 = 1;
        sub_13970(0, "\tip6_wan_dns1: '%s',\n", v60);
      }
      if ( v24 )
        v25 = &v24[strspn(v24, " ")];
      else
        v25 = &::s;
      strncpy(v60, v25, 0x2Eu);
      v60[strcspn(v60, " ")] = 0;
      v60[45] = 0;
      v24 = strchr(v25, 32);
    }
    if ( !v21 )
    {
      v26 = (const char *)sub_E670("ipv6_get_dns");
      memset(v60, 0, 0x2Eu);
      v27 = &v26[strspn(v26, " ")];
      strncpy(v60, v27, 0x2Eu);
      v60[strcspn(v60, " ")] = 0;
      v60[45] = 0;
      v28 = strchr(v27, 32);
      while ( v60[0] )
      {
        if ( v21 )
        {
          if ( v21 == 1 && inet_pton(10, v60, v61) == 1 )
          {
            v21 = 2;
            sub_13970(0, "\tip6_wan_dns2: '%s',\n", v60);
          }
        }
        else if ( inet_pton(10, v60, v61) == 1 )
        {
          v21 = 1;
          sub_13970(0, "\tip6_wan_dns1: '%s',\n", v60);
        }
        if ( v28 )
          v29 = &v28[strspn(v28, " ")];
        else
          v29 = &::s;
        strncpy(v60, v29, 0x2Eu);
        v60[strcspn(v60, " ")] = 0;
        v60[45] = 0;
        v28 = strchr(v29, 32);
      }
    }
    memset(v60, 0, 0x2Eu);
  }
  sysinfo(&info);
  memset(&v60[48], 0, 0x1Cu);
  v30 = fopen("/proc/meminfo", "r");
  if ( v30 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( !fgets(s, 128, v30) )
      {
        fclose(v30);
        if ( v31 )
        {
          *(_DWORD *)&v60[72] = *(_DWORD *)&v60[52];
          if ( sub_E68C("t_cafree") )
            *(_DWORD *)&v60[72] += *(_DWORD *)&v60[60] + *(_DWORD *)&v60[56];
        }
        goto LABEL_86;
      }
      if ( !strncmp(s, "MemTotal:", 9u) )
      {
        *(_DWORD *)&v60[48] = strtoul(v53, 0, 10) << 10;
        goto LABEL_81;
      }
      if ( !strncmp(s, "MemFree:", 8u) )
      {
        *(_DWORD *)&v60[52] = strtoul(v53, 0, 10) << 10;
        goto LABEL_81;
      }
      if ( !strncmp(s, "Buffers:", 8u) )
      {
        *(_DWORD *)&v60[56] = strtoul(v53, 0, 10) << 10;
        goto LABEL_81;
      }
      if ( !strncmp(s, "Cached:", 7u) )
      {
        *(_DWORD *)&v60[60] = strtoul(v53, 0, 10) << 10;
        goto LABEL_81;
      }
      if ( !strncmp(s, "SwapTotal:", 0xAu) )
        break;
      if ( !strncmp(s, "SwapFree:", 9u) )
      {
        *(_DWORD *)&v60[68] = strtoul(&v52, 0, 10) << 10;
LABEL_81:
        ++v31;
      }
    }
    *(_DWORD *)&v60[64] = strtoul(v53, 0, 10) << 10;
    goto LABEL_81;
  }
LABEL_86:
  uptime = info.uptime;
  v42 = (const char *)sub_E81C(v58, info.uptime);
  v44 = *(_DWORD *)&v60[52];
  v43 = *(_DWORD *)&v60[48];
  v46 = *(_DWORD *)&v60[60];
  v45 = *(_DWORD *)&v60[56];
  v48 = *(_DWORD *)&v60[68];
  v47 = *(_DWORD *)&v60[64];
  v33 = info.loads[0];
  v34 = info.loads[1];
  v35 = info.loads[2];
  v49 = *(_DWORD *)&v60[72];
  procs = info.procs;
  v36 = fopen("/proc/mtd", "r");
  if ( v36 )
  {
    while ( fgets(s, 512, v36) && (sscanf(s, "%*s %X %*s %16s", &v68[8], v61) != 2 || strcmp(v61, "\"linux\"")) )
      ;
    fclose(v36);
  }
  sub_13970(
    0,
    "\tuptime: %ld,\n"
    "\tuptime_s: '%s',\n"
    "\tloads: [%ld, %ld, %ld],\n"
    "\ttotalram: %lu,\n"
    "\tfreeram: %lu,\n"
    "\tbufferram: %lu,\n"
    "\tcached: %lu,\n"
    "\ttotalswap: %lu,\n"
    "\tfreeswap: %lu,\n"
    "\ttotalfreeram: %lu,\n"
    "\tprocs: %d,\n"
    "\tflashsize: %d,\n"
    "\tsystemtype: '%s',\n"
    "\tcpumodel: '%s',\n"
    "\tbogomips: '%s',\n"
    "\tcpuclk: '%s',\n"
    "\tcputemp: '%s',\n"
    "\twlsense: '%s',\n"
    "\tcfeversion: '%s'",
    uptime,
    v42,
    v33,
    v34,
    v35,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    procs,
    128,
    v57,
    v56,
    v68,
    v67,
    v66,
    v54,
    v64);
  v37 = fopen(v65, "r");
  v38 = v37;
  if ( v37 )
  {
    fgets(v55, 64, v37);
    v39 = strchr(v55, 32);
    if ( v39 )
      v39 += 2;
    v40 = strchr(v55, 10);
    if ( v40 )
      *v40 = 0;
    sub_13970(0, ",\n\tjiffies: '");
    sub_13970(0, "%s", v39);
    sub_13954("'\n");
    fclose(v38);
  }
  else
  {
    sub_13954("\n");
  }
  return sub_13954("};\n");
}
