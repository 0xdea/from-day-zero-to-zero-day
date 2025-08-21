int __fastcall sub_11D6C(int result, const char **a2)
{
  const char *v2; // r0
  const char *v3; // r0
  in_addr_t v4; // r8
  int v5; // r6
  const char *v6; // r0
  int v7; // r9
  bool v8; // nf
  unsigned int v9; // r3
  int v10; // r6
  char *v11; // r0
  int v12; // r0
  int v13; // r7
  bool v14; // zf
  char *v15; // r0
  char *v16; // r6
  const char *v17; // r6
  bool v18; // zf
  char v19; // r3
  char *v20; // r0
  char *v21; // r0
  bool v22; // zf
  bool v24; // zf
  _BOOL4 v25; // r10
  _BOOL4 v26; // r3
  int v27; // r2
  int v28; // [sp+0h] [bp-358h]
  const char *v29; // [sp+4h] [bp-354h]
  const char *v30; // [sp+8h] [bp-350h]
  const char *v31; // [sp+Ch] [bp-34Ch]
  const char *v32; // [sp+10h] [bp-348h]
  const char *v33; // [sp+14h] [bp-344h]
  const char *v34; // [sp+18h] [bp-340h]
  int v35; // [sp+1Ch] [bp-33Ch]
  int v36; // [sp+20h] [bp-338h]
  unsigned int v37; // [sp+2Ch] [bp-32Ch]
  int v38; // [sp+2Ch] [bp-32Ch]
  int v39; // [sp+30h] [bp-328h]
  in_addr_t v40; // [sp+34h] [bp-324h]
  int n; // [sp+38h] [bp-320h]
  int v42; // [sp+3Ch] [bp-31Ch]
  int v43; // [sp+40h] [bp-318h]
  FILE *stream; // [sp+44h] [bp-314h]
  char v45; // [sp+48h] [bp-310h]
  char s[25]; // [sp+50h] [bp-308h] BYREF
  char v47[487]; // [sp+69h] [bp-2EFh] BYREF
  char v48[48]; // [sp+250h] [bp-108h] BYREF
  char v49[48]; // [sp+280h] [bp-D8h] BYREF
  _DWORD v50[4]; // [sp+2B0h] [bp-A8h] BYREF
  _BYTE buf[16]; // [sp+2C0h] [bp-98h] BYREF
  _DWORD v52[4]; // [sp+2D0h] [bp-88h] BYREF
  _BYTE v53[16]; // [sp+2E0h] [bp-78h] BYREF
  _BYTE v54[16]; // [sp+2F0h] [bp-68h] BYREF
  _BYTE v55[16]; // [sp+300h] [bp-58h] BYREF
  _BYTE v56[16]; // [sp+310h] [bp-48h] BYREF
  int af; // [sp+320h] [bp-38h] BYREF
  int v58; // [sp+324h] [bp-34h] BYREF
  int v59; // [sp+328h] [bp-30h] BYREF
  int v60; // [sp+32Ch] [bp-2Ch] BYREF

  if ( result == 1 )
  {
    v39 = atoi(*a2);
    v2 = (const char *)sub_11858("lan_netmask");
    v40 = inet_addr(v2);
    v3 = (const char *)sub_11858("lan_ipaddr");
    v4 = inet_addr(v3);
    v43 = v4 & v40;
    v5 = nvram_get_int("ipv6_prefix_length");
    if ( get_ipv6_service() )
    {
      v6 = (const char *)sub_11858("ipv6_prefix");
      inet_pton(10, v6, buf);
      ipv6_router_address(v52);
    }
    if ( sub_11874("0") )
      v4 = 0;
    sub_13954("\nctdump = [");
    stream = fopen("/proc/net/nf_conntrack", "r");
    if ( stream )
    {
      sub_118AC();
      v7 = 32;
      n = v5 / 8;
      v9 = v5 & 0x80000007;
      v8 = v5 < 0;
      if ( v5 < 0 )
        --v9;
      v10 = v5 & 7;
      if ( v8 )
        v9 = ~(v9 << 29);
      v42 = v10;
      if ( v8 )
        v9 = -(v9 >> 29);
      v45 = 8 - v9;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !fgets(s, 512, stream) )
            return sub_13954("];\n");
          v11 = strstr(s, " mark=");
          if ( v11 )
          {
            v12 = atoi(v11 + 6);
            v13 = (unsigned __int8)v12;
            v37 = v12;
            if ( (unsigned __int8)v12 > 0xAu )
              v13 = 0;
            v14 = v13 == v39;
            if ( v13 != v39 )
              v14 = v39 == -1;
            if ( v14 && sscanf(s, "%*s %u %*s %u %u", &af, &v59, &v58) == 3 )
            {
              v15 = strstr(v47, "src=");
              v16 = v15;
              if ( v15 )
              {
                if ( sscanf(v15, "src=%s dst=%s %n", v49, v48, &v60) == 2 )
                  break;
              }
            }
          }
        }
        v17 = &v16[v60];
        v18 = v59 == 6;
        if ( v59 != 6 )
          v18 = v59 == 17;
        v19 = v18;
        if ( v18 )
        {
          if ( sscanf(v17, "sport=%s dport=%s %*s bytes=%s %n", v56, v55, v54, &v60) == 3 )
          {
            v17 += v60;
            v20 = strstr(v17, "bytes=");
            if ( v20 )
            {
              if ( sscanf(v20, "bytes=%s", v53) == 1 )
                goto LABEL_34;
            }
          }
        }
        else
        {
          v56[0] = v19;
          v55[0] = v19;
          v54[0] = v19;
          v53[0] = v19;
LABEL_34:
          v38 = (unsigned __int8)(v37 >> 20);
          if ( af == 2 )
          {
            if ( (inet_addr(v49) & v40) == v43 )
            {
              if ( !v4 )
                goto LABEL_68;
              v24 = inet_addr(v48) == v4;
LABEL_63:
              if ( !v24 )
                goto LABEL_68;
            }
            else
            {
              v21 = strstr(v17, "src=");
              if ( v21 )
              {
                v22 = v59 == 6;
                if ( v59 != 6 )
                  v22 = v59 == 17;
                if ( v22
                   ? sscanf(v21, "src=%s dst=%s sport=%s dport=%s", v48, v49, v55, v56) == 4
                   : sscanf(v21, "src=%s dst=%s", v48, v49) == 2 )
                {
LABEL_67:
                  v28 = v58;
                  v29 = v48;
                  v31 = v55;
                  v32 = v56;
                  v33 = v53;
                  v30 = v49;
                  v34 = v54;
                  v35 = v13;
                  v36 = v38;
                  goto LABEL_69;
                }
              }
            }
          }
          else
          {
            if ( af != 10 )
              goto LABEL_68;
            if ( inet_pton(10, v49, v50) > 0 )
            {
              inet_ntop(10, v50, v49, 0x2Eu);
              v25 = memcmp(buf, v50, n) || v42 && (*((unsigned __int8 *)v50 + n) ^ (unsigned __int8)buf[n]) >> v45 != 0;
              if ( inet_pton(10, v48, v50) > 0 )
              {
                inet_ntop(10, v50, v48, 0x2Eu);
                v26 = !v25;
                if ( !v4 )
                  v26 = 0;
                if ( v26 )
                {
                  if ( v52[0] != v50[0] || v52[1] != v50[1] || v52[2] != v50[2] )
                    goto LABEL_68;
                  v24 = v52[3] == v50[3];
                  goto LABEL_63;
                }
                if ( v25 )
                  goto LABEL_67;
LABEL_68:
                v28 = v58;
                v29 = v49;
                v31 = v56;
                v32 = v55;
                v33 = v54;
                v30 = v48;
                v34 = v53;
                v35 = v13;
                v36 = v38;
LABEL_69:
                v27 = v7;
                v7 = 44;
                sub_13970(
                  0,
                  "%c[%u,%u,'%s','%s','%s','%s','%s','%s',%d,%d]",
                  v27,
                  v59,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
              }
            }
          }
        }
      }
    }
    return sub_13954("];\n");
  }
  return result;
}
