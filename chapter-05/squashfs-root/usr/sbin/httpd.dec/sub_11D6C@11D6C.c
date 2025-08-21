int __fastcall sub_11D6C(int result, const char **a2)
{
  const char *v2; // r0
  const char *v3; // r0
  in_addr_t v4; // r8
  int v5; // r6
  const char *v6; // r0
  FILE *v7; // r0
  int v8; // r9
  bool v9; // nf
  unsigned int v10; // r3
  int v11; // r6
  char *v12; // r0
  int v13; // r0
  int v14; // r7
  bool v15; // zf
  char *v16; // r0
  char *v17; // r6
  const char *v18; // r6
  bool v19; // zf
  char v20; // r3
  char *v21; // r0
  char *v22; // r0
  bool v23; // zf
  bool v25; // zf
  _BOOL4 v26; // r10
  _BOOL4 v27; // r3
  int v28; // r2
  int v29; // [sp+0h] [bp-358h]
  const char *v30; // [sp+4h] [bp-354h]
  const char *v31; // [sp+8h] [bp-350h]
  const char *v32; // [sp+Ch] [bp-34Ch]
  const char *v33; // [sp+10h] [bp-348h]
  const char *v34; // [sp+14h] [bp-344h]
  const char *v35; // [sp+18h] [bp-340h]
  int v36; // [sp+1Ch] [bp-33Ch]
  int v37; // [sp+20h] [bp-338h]
  unsigned int v38; // [sp+2Ch] [bp-32Ch]
  int v39; // [sp+2Ch] [bp-32Ch]
  int v40; // [sp+30h] [bp-328h]
  in_addr_t v41; // [sp+34h] [bp-324h]
  int n; // [sp+38h] [bp-320h]
  int v43; // [sp+3Ch] [bp-31Ch]
  int v44; // [sp+40h] [bp-318h]
  FILE *stream; // [sp+44h] [bp-314h]
  char v46; // [sp+48h] [bp-310h]
  char s[25]; // [sp+50h] [bp-308h] BYREF
  char v48[487]; // [sp+69h] [bp-2EFh] BYREF
  char v49[48]; // [sp+250h] [bp-108h] BYREF
  char v50[48]; // [sp+280h] [bp-D8h] BYREF
  _DWORD v51[4]; // [sp+2B0h] [bp-A8h] BYREF
  _BYTE buf[16]; // [sp+2C0h] [bp-98h] BYREF
  _DWORD v53[4]; // [sp+2D0h] [bp-88h] BYREF
  _BYTE v54[16]; // [sp+2E0h] [bp-78h] BYREF
  _BYTE v55[16]; // [sp+2F0h] [bp-68h] BYREF
  _BYTE v56[16]; // [sp+300h] [bp-58h] BYREF
  _BYTE v57[16]; // [sp+310h] [bp-48h] BYREF
  int af; // [sp+320h] [bp-38h] BYREF
  int v59; // [sp+324h] [bp-34h] BYREF
  int v60; // [sp+328h] [bp-30h] BYREF
  int v61; // [sp+32Ch] [bp-2Ch] BYREF

  if ( result == 1 )
  {
    v40 = atoi(*a2);
    v2 = sub_11858((int)"lan_netmask");
    v41 = inet_addr(v2);
    v3 = sub_11858((int)"lan_ipaddr");
    v4 = inet_addr(v3);
    v44 = v4 & v41;
    v5 = nvram_get_int("ipv6_prefix_length");
    if ( get_ipv6_service(v5) )
    {
      v6 = sub_11858((int)"ipv6_prefix");
      inet_pton(10, v6, buf);
      ipv6_router_address(v53);
    }
    if ( sub_11874("0") )
      v4 = 0;
    sub_13954("\nctdump = [");
    v7 = fopen("/proc/net/nf_conntrack", "r");
    stream = v7;
    if ( v7 )
    {
      sub_118AC(v7);
      v8 = 32;
      n = v5 / 8;
      v10 = v5 & 0x80000007;
      v9 = v5 < 0;
      if ( v5 < 0 )
        --v10;
      v11 = v5 & 7;
      if ( v9 )
        v10 = ~(v10 << 29);
      v43 = v11;
      if ( v9 )
        v10 = -(v10 >> 29);
      v46 = 8 - v10;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !fgets(s, 512, stream) )
            return sub_13954("];\n");
          v12 = strstr(s, " mark=");
          if ( v12 )
          {
            v13 = atoi(v12 + 6);
            v14 = (unsigned __int8)v13;
            v38 = v13;
            if ( (unsigned __int8)v13 > 0xAu )
              v14 = 0;
            v15 = v14 == v40;
            if ( v14 != v40 )
              v15 = v40 == -1;
            if ( v15 && sscanf(s, "%*s %u %*s %u %u", &af, &v60, &v59) == 3 )
            {
              v16 = strstr(v48, "src=");
              v17 = v16;
              if ( v16 )
              {
                if ( sscanf(v16, "src=%s dst=%s %n", v50, v49, &v61) == 2 )
                  break;
              }
            }
          }
        }
        v18 = &v17[v61];
        v19 = v60 == 6;
        if ( v60 != 6 )
          v19 = v60 == 17;
        v20 = v19;
        if ( v19 )
        {
          if ( sscanf(v18, "sport=%s dport=%s %*s bytes=%s %n", v57, v56, v55, &v61) == 3 )
          {
            v18 += v61;
            v21 = strstr(v18, "bytes=");
            if ( v21 )
            {
              if ( sscanf(v21, "bytes=%s", v54) == 1 )
                goto LABEL_34;
            }
          }
        }
        else
        {
          v57[0] = v20;
          v56[0] = v20;
          v55[0] = v20;
          v54[0] = v20;
LABEL_34:
          v39 = (unsigned __int8)(v38 >> 20);
          if ( af == 2 )
          {
            if ( (inet_addr(v50) & v41) == v44 )
            {
              if ( !v4 )
                goto LABEL_68;
              v25 = inet_addr(v49) == v4;
LABEL_63:
              if ( !v25 )
                goto LABEL_68;
            }
            else
            {
              v22 = strstr(v18, "src=");
              if ( v22 )
              {
                v23 = v60 == 6;
                if ( v60 != 6 )
                  v23 = v60 == 17;
                if ( v23
                   ? sscanf(v22, "src=%s dst=%s sport=%s dport=%s", v49, v50, v56, v57) == 4
                   : sscanf(v22, "src=%s dst=%s", v49, v50) == 2 )
                {
LABEL_67:
                  v29 = v59;
                  v30 = v49;
                  v32 = v56;
                  v33 = v57;
                  v34 = v54;
                  v31 = v50;
                  v35 = v55;
                  v36 = v14;
                  v37 = v39;
                  goto LABEL_69;
                }
              }
            }
          }
          else
          {
            if ( af != 10 )
              goto LABEL_68;
            if ( inet_pton(10, v50, v51) > 0 )
            {
              inet_ntop(10, v51, v50, 0x2Eu);
              v26 = memcmp(buf, v51, n) || v43 && (*((unsigned __int8 *)v51 + n) ^ (unsigned __int8)buf[n]) >> v46 != 0;
              if ( inet_pton(10, v49, v51) > 0 )
              {
                inet_ntop(10, v51, v49, 0x2Eu);
                v27 = !v26;
                if ( !v4 )
                  v27 = 0;
                if ( v27 )
                {
                  if ( v53[0] != v51[0] || v53[1] != v51[1] || v53[2] != v51[2] )
                    goto LABEL_68;
                  v25 = v53[3] == v51[3];
                  goto LABEL_63;
                }
                if ( v26 )
                  goto LABEL_67;
LABEL_68:
                v29 = v59;
                v30 = v50;
                v32 = v57;
                v33 = v56;
                v34 = v55;
                v31 = v49;
                v35 = v54;
                v36 = v14;
                v37 = v39;
LABEL_69:
                v28 = v8;
                v8 = 44;
                sub_13970(
                  0,
                  "%c[%u,%u,'%s','%s','%s','%s','%s','%s',%d,%d]",
                  v28,
                  v60,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
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
