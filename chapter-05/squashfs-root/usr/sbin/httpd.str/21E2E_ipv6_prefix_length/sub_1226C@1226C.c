FILE *__fastcall sub_1226C(int a1, const char **a2)
{
  const char *v4; // r0
  const char *v5; // r0
  in_addr_t v6; // r7
  int v7; // r8
  const char *v8; // r0
  FILE *result; // r0
  int v10; // r10
  FILE *v11; // r6
  FILE *v12; // r5
  FILE *v13; // r0
  void *v14; // r4
  size_t v15; // r0
  int v16; // r11
  char v17; // r9
  __useconds_t v18; // r0
  FILE *v19; // r10
  unsigned int v20; // r3
  bool v21; // zf
  char *v22; // r0
  char *v23; // r0
  int v24; // r4
  bool v25; // zf
  _BOOL4 v26; // r3
  int v27; // r6
  int v28; // r8
  char *v29; // r0
  size_t v30; // r4
  char *v31; // r0
  char *v32; // r4
  char *v33; // r0
  int v34; // r4
  int v35; // r8
  int v36; // r6
  bool v37; // cc
  char *v38; // r0
  int v39; // r2
  const char *v40; // [sp+0h] [bp-558h]
  const char *v41; // [sp+4h] [bp-554h]
  const char *v42; // [sp+8h] [bp-550h]
  const char *v43; // [sp+Ch] [bp-54Ch]
  int v44; // [sp+10h] [bp-548h]
  int v45; // [sp+14h] [bp-544h]
  char *v46; // [sp+18h] [bp-540h]
  int v47; // [sp+1Ch] [bp-53Ch]
  char *s1; // [sp+20h] [bp-538h]
  in_addr_t v49; // [sp+24h] [bp-534h]
  int n; // [sp+28h] [bp-530h]
  int v51; // [sp+2Ch] [bp-52Ch]
  char v52; // [sp+30h] [bp-528h]
  int off; // [sp+34h] [bp-524h]
  char s[512]; // [sp+38h] [bp-520h] BYREF
  char v55[504]; // [sp+238h] [bp-320h] BYREF
  char v56[40]; // [sp+438h] [bp-120h] BYREF
  char v57[40]; // [sp+468h] [bp-F0h] BYREF
  char v58[24]; // [sp+498h] [bp-C0h] BYREF
  _DWORD cp[4]; // [sp+4B0h] [bp-A8h] BYREF
  _BYTE buf[16]; // [sp+4C0h] [bp-98h] BYREF
  _DWORD v61[4]; // [sp+4D0h] [bp-88h] BYREF
  _BYTE v62[16]; // [sp+4E0h] [bp-78h] BYREF
  _BYTE v63[16]; // [sp+4F0h] [bp-68h] BYREF
  int v64; // [sp+500h] [bp-58h] BYREF
  int v65; // [sp+504h] [bp-54h] BYREF
  int v66; // [sp+508h] [bp-50h] BYREF
  int v67; // [sp+50Ch] [bp-4Ch] BYREF
  int v68; // [sp+510h] [bp-48h] BYREF
  int af; // [sp+514h] [bp-44h] BYREF
  size_t v70; // [sp+518h] [bp-40h] BYREF
  int v71; // [sp+51Ch] [bp-3Ch] BYREF
  int v72; // [sp+520h] [bp-38h] BYREF
  int v73; // [sp+524h] [bp-34h] BYREF
  int v74; // [sp+528h] [bp-30h] BYREF
  char v75; // [sp+52Ch] [bp-2Ch] BYREF

  v4 = (const char *)sub_11858("lan_netmask");
  v49 = inet_addr(v4);
  v5 = (const char *)sub_11858("lan_ipaddr");
  v6 = inet_addr(v5);
  v51 = v6 & v49;
  v7 = nvram_get_int("ipv6_prefix_length");
  if ( get_ipv6_service(v7) )
  {
    v8 = (const char *)sub_11858("ipv6_prefix");
    inet_pton(10, v8, buf);
    ipv6_router_address(v61);
  }
  if ( sub_11874("0") )
    v6 = 0;
  sub_13954("\nctrate = [");
  result = (FILE *)memcpy(v58, "/proc/net/nf_conntrack", 0x17u);
  if ( a1 != 2 )
    return result;
  v10 = atoi(*a2);
  v47 = v10 * atoi(a2[1]);
  result = fopen(v58, "r");
  v11 = result;
  if ( !result )
    return result;
  v12 = tmpfile();
  if ( !v12 )
  {
    v13 = v11;
    return (FILE *)fclose(v13);
  }
  v14 = malloc(0x400u);
  while ( !feof(v11) )
  {
    v15 = fread(v14, 1u, 0x400u, v11);
    fwrite(v14, 1u, v15, v12);
  }
  v16 = 32;
  rewind(v12);
  v17 = v7;
  rewind(v11);
  v18 = 1000000 * v10;
  v19 = v11;
  usleep(v18);
  n = v7 / 8;
  v20 = v7 & 0x80000007;
  if ( v7 < 0 )
    v20 = -(~((v20 - 1) << 29) >> 29);
  v52 = 8 - v20;
  while ( fgets(v55, 512, v19) )
  {
    if ( sscanf(v55, "%*s %u %*s %u %u", &af, &v74, &v75) == 3 )
    {
      v21 = v74 == 17;
      if ( v74 != 17 )
        v21 = v74 == 6;
      if ( v21 )
      {
        v22 = strstr(v55, "src=");
        s1 = v22;
        if ( v22 )
        {
          if ( sscanf(v22, "src=%s dst=%s sport=%s dport=%s%n %*s bytes=%u %n", v57, v56, v63, v62, &v70, &v73, &v71) == 5 )
          {
            v23 = strstr(&s1[v71], "bytes=");
            if ( v23 )
            {
              v24 = sscanf(v23, "bytes=%u", &v72);
              if ( v24 == 1 )
              {
                if ( af == 2 )
                {
                  if ( (inet_addr(v57) & v49) != v51 )
                    goto LABEL_45;
                  if ( v6 )
                  {
                    v25 = inet_addr(v56) == v6;
LABEL_43:
                    if ( !v25 )
                      goto LABEL_44;
                  }
                  else
                  {
LABEL_44:
                    v24 = 0;
LABEL_45:
                    v27 = 0;
                    v28 = v24;
                    off = ftell(v12);
                    while ( fgets(s, 512, v12) )
                    {
                      if ( ++v27 == 10 )
                        break;
                      if ( sscanf(s, "%*s %u %*s %u %u", &v68, &v66, &v67) == 3 && v68 == af && v66 == v74 )
                      {
                        v29 = strstr(s, "src=");
                        if ( v29 )
                        {
                          v30 = v70;
                          v46 = v29;
                          if ( !strncmp(s1, v29, v70) )
                          {
                            v31 = strstr(&v46[v30], "bytes=");
                            v32 = v31;
                            if ( v31 )
                            {
                              if ( sscanf(v31, "bytes=%u", &v65) == 1 )
                              {
                                v33 = strstr(&v32[v70], "bytes=");
                                if ( v33 )
                                {
                                  if ( sscanf(v33, "bytes=%u", &v64) == 1 )
                                    break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v34 = v28;
                    if ( feof(v12) || v27 > 9 )
                    {
                      v65 = 0;
                      v64 = 0;
                      v67 = 0;
                      fseek(v12, off, 0);
                    }
                    v35 = v73 - v65;
                    v36 = v72 - v64;
                    v37 = v72 - v64 < v47;
                    if ( v72 - v64 < v47 )
                      v37 = v35 < v47;
                    if ( !v37 )
                    {
                      if ( v34 != 1 )
                      {
                        v44 = v73 - v65;
                        v45 = v72 - v64;
                        v40 = v57;
                        v41 = v56;
                        v42 = v63;
                        v43 = v62;
                        goto LABEL_71;
                      }
                      if ( af != 2
                        || (v38 = strstr(&s1[v71], "src=")) != 0
                        && sscanf(v38, "src=%s dst=%s sport=%s dport=%s", v56, v57, v62, v63) == 4 )
                      {
                        v44 = v36;
                        v45 = v35;
                        v40 = v56;
                        v41 = v57;
                        v42 = v62;
                        v43 = v63;
LABEL_71:
                        v39 = v16;
                        v16 = 44;
                        sub_13970(0, "%c[%u,'%s','%s','%s','%s',%li,%li]", v39, v74, v40, v41, v42, v43, v44, v45);
                      }
                    }
                  }
                }
                else if ( af == 10 && inet_pton(10, v57, cp) > 0 )
                {
                  inet_ntop(10, cp, v57, 0x2Eu);
                  if ( !memcmp(buf, cp, n) )
                  {
                    v24 = v17 & 7;
                    if ( (v17 & 7) != 0 )
                      v24 = (*((unsigned __int8 *)cp + n) ^ (unsigned __int8)buf[n]) >> v52 != 0;
                  }
                  else
                  {
                    v24 = 1;
                  }
                  if ( inet_pton(10, v56, cp) > 0 )
                  {
                    inet_ntop(10, cp, v56, 0x2Eu);
                    v26 = v24 == 0;
                    if ( !v6 )
                      v26 = 0;
                    if ( !v26 )
                      goto LABEL_45;
                    if ( v61[0] != cp[0] || v61[1] != cp[1] || v61[2] != cp[2] )
                      goto LABEL_44;
                    v25 = v61[3] == cp[3];
                    goto LABEL_43;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  sub_13954("];\n");
  fclose(v19);
  v13 = v12;
  return (FILE *)fclose(v13);
}
