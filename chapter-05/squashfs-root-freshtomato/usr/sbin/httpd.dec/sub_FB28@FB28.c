int sub_FB28()
{
  FILE *v0; // r0
  int v1; // r4
  FILE *v2; // r10
  int v3; // r5
  char *v4; // r1
  char *v5; // r1
  char *v6; // r0
  bool v7; // zf
  char *v8; // r2
  FILE *v9; // r8
  unsigned __int8 *v10; // r9
  int v11; // r10
  char v12; // r3
  int v13; // t1
  _BYTE *v14; // r2
  char *v15; // r2
  char s[512]; // [sp+10h] [bp-340h] BYREF
  char v18[14]; // [sp+210h] [bp-140h] BYREF
  _BYTE v19[26]; // [sp+21Eh] [bp-132h] BYREF
  char v20[40]; // [sp+238h] [bp-118h] BYREF
  char buf[40]; // [sp+260h] [bp-F0h] BYREF
  char dest[48]; // [sp+288h] [bp-C8h] BYREF
  int v23; // [sp+2B8h] [bp-98h] BYREF
  int v24; // [sp+2BCh] [bp-94h]
  int v25; // [sp+2C0h] [bp-90h]
  int v26; // [sp+2C4h] [bp-8Ch]
  _BYTE v27[20]; // [sp+2CCh] [bp-84h] BYREF
  char v28[16]; // [sp+2E0h] [bp-70h] BYREF
  char v29[16]; // [sp+2F0h] [bp-60h] BYREF
  char v30[16]; // [sp+300h] [bp-50h] BYREF
  int v31; // [sp+310h] [bp-40h] BYREF
  int v32; // [sp+314h] [bp-3Ch] BYREF
  in_addr in; // [sp+318h] [bp-38h] BYREF
  int v34; // [sp+31Ch] [bp-34h] BYREF
  struct in_addr v35; // [sp+320h] [bp-30h] BYREF
  struct in_addr v36; // [sp+324h] [bp-2Ch] BYREF
  _BYTE v37[40]; // [sp+328h] [bp-28h] BYREF

  sub_13954("\nactiveroutes = [");
  v0 = fopen("/proc/net/route", "r");
  if ( v0 )
  {
    v2 = v0;
    v3 = 0;
    while ( fgets(s, 512, v2) )
    {
      if ( sscanf(s, "%16s%lx%lx%lx%*s%*s%u%lx", v27, &v36, &v35, &v34, &v32, &in) == 6 && (v34 & 1) != 0 )
      {
        if ( v36.s_addr )
          v4 = inet_ntoa(v36);
        else
          v4 = "default";
        strcpy(v30, v4); // XXX
        if ( v35.s_addr )
          v5 = inet_ntoa(v35);
        else
          v5 = (char *)"*";
        strcpy(v29, v5); // XXX
        v6 = inet_ntoa(in);
        strcpy(v28, v6); // XXX
        v7 = v3++ == 0;
        v8 = (char *)&::s;
        if ( !v7 )
          v8 = ",";
        sub_13970(0, "%s['%s','%s','%s','%s',%u]", v8, v27, v30, v29, v28, v32);
      }
    }
    v1 = v3;
    v0 = (FILE *)fclose(v2);
  }
  else
  {
    v1 = 0;
  }
  if ( get_ipv6_service(v0) )
  {
    v9 = fopen("/proc/net/ipv6_route", "r");
    if ( v9 )
    {
      while ( fgets(s, 512, v9) )
      {
        if ( sscanf(s, "%32s%x%*s%*s%32s%x%*s%*s%lx%s\n", v19, &v31, &v20[7], &v32, &v34, v27) == 6 && (v34 & 1) != 0 ) // XXX
        {
          v10 = v19;
          v11 = 0;
          do
          {
            while ( 1 )
            {
              v13 = *v10++;
              v12 = v13;
              if ( v13 )
                break;
              if ( v11 != 40 )
                goto LABEL_45;
              v19[25] = 0;
            }
            v14 = &v37[v11++];
            *(v14 - 280) = v12;
            if ( !((v11 + 1) % 5) )
              v18[v11++] = 58;
          }
          while ( v11 <= 74 );
          inet_pton(10, v18, &v23);
          if ( v23 || v24 || v25 || v26 )
            inet_ntop(10, &v23, dest, 0x28u);
          else
            strcpy(dest, "default");
          inet_pton(10, v20, &v23);
          if ( v23 || v24 || v25 || v26 )
            inet_ntop(10, &v23, buf, 0x28u);
          else
            strcpy(buf, "*");
          v7 = v1++ == 0;
          v15 = (char *)&::s;
          if ( !v7 )
            v15 = ",";
          sub_13970(0, "%s['%s','%s','%s','%d',%u]", v15, v27, dest, buf, v31, v32);
        }
      }
LABEL_45:
      fclose(v9);
    }
  }
  return sub_13954("];\n");
}
