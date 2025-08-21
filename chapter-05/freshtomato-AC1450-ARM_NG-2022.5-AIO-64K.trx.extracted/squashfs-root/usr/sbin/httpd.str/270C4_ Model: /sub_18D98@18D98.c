int sub_18D98()
{
  const char *v0; // r0
  FILE *v1; // r0
  int v2; // r4
  int v3; // r8
  FILE *v4; // r10
  int v5; // r5
  char *v6; // r0
  int v7; // r4
  char *v8; // r8
  char *v9; // r0
  bool v10; // zf
  char *v11; // r7
  char *v12; // r7
  char *v13; // r0
  const char *v14; // r3
  const char *v15; // r2
  char *v16; // r8
  char *v17; // r2
  int v18; // r0
  const char *d_name; // r6
  FILE *v20; // r10
  char *v21; // r1
  char *v22; // r0
  char *v23; // r7
  char *v24; // r0
  const char *v25; // r2
  char *v26; // r8
  const char *v27; // r1
  const char *v28; // r2
  struct dirent *v29; // r0
  const char *v31; // [sp+0h] [bp-F8h]
  const char *v32; // [sp+4h] [bp-F4h]
  DIR *haystack; // [sp+Ch] [bp-ECh]
  char s[18]; // [sp+10h] [bp-E8h] BYREF
  char v35[110]; // [sp+22h] [bp-D6h] BYREF
  char v36[32]; // [sp+90h] [bp-68h] BYREF
  char v37[72]; // [sp+B0h] [bp-48h] BYREF

  sub_13954("\nusbdev = [");
  v0 = (const char *)nvram_get("usb_enable");
  if ( v0 && !strcmp(v0, "1") )
  {
    v1 = fopen("/proc/scsi/scsi", "r");
    if ( v1 )
    {
      v3 = -1;
      v4 = v1;
      v5 = 0;
      while ( fgets(s, 128, v4) )
      {
        v6 = strstr(s, "Host: scsi");
        if ( v6 )
        {
          v7 = atoi(v6 + 10);
          if ( v7 != v3 )
          {
            if ( fgets(s, 128, v4) )
            {
              memset(v37, 0, 0x1Eu);
              memset(v36, 0, 0x1Eu);
              v8 = strstr(s, "  Vendor: ");
              v9 = strstr(v35, " Model: ");
              v10 = v9 == 0;
              if ( v9 )
                v10 = v8 == 0;
              v11 = v9;
              if ( !v10 )
              {
                strncpy(v37, v8 + 10, 8u);
                strncpy(v36, v11 + 8, 0x10u);
                v12 = sub_E6BC(v37);
                v13 = sub_E6BC(v36);
                v14 = &::s;
                if ( v12 )
                  v14 = v12;
                v15 = &::s;
                v16 = v13;
                if ( v13 )
                  v15 = v13;
                v10 = v5 == 0;
                v32 = v15;
                ++v5;
                v17 = (char *)&::s;
                if ( !v10 )
                  v17 = ",";
                sub_13970(0, "%s['Storage','%d','%s','%s','', [", v17, v7, v14, v32);
                free(v12);
                free(v16);
                v18 = sub_18D40(v7, 1);
                sub_13970(0, "], %d]", v18);
              }
            }
            v3 = v7;
          }
        }
      }
      v2 = v5;
      fclose(v4);
    }
    else
    {
      v2 = 0;
    }
    haystack = opendir("/proc/usblp");
    if ( haystack )
    {
LABEL_48:
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            v29 = readdir(haystack);
            if ( !v29 )
            {
              closedir(haystack);
              return sub_13954("];\n");
            }
            d_name = v29->d_name;
            if ( !strcmp(v29->d_name, "..") )
              continue;
            break;
          }
          if ( !strcmp(d_name, ".") )
            continue;
          break;
        }
        snprintf(s, 0x80u, "/proc/usblp/%s", d_name);
        v20 = fopen(s, "r");
        if ( !v20 )
          continue;
        break;
      }
      v37[0] = 0;
      v36[0] = 0;
      while ( 1 )
      {
        if ( !fgets(s, 128, v20) )
        {
          if ( v36[0] || v37[0] )
          {
            v23 = sub_E6BC(v37);
            v24 = sub_E6BC(v36);
            if ( v23 )
              v25 = v23;
            v26 = v24;
            if ( !v23 )
              v25 = &::s;
            if ( v24 )
              v27 = v24;
            else
              v27 = &::s;
            v10 = v2 == 0;
            v31 = v25;
            ++v2;
            v28 = ",";
            if ( v10 )
              v28 = &::s;
            sub_13970(0, "%s['Printer','%s','%s','%s','']", v28, d_name, v31, v27);
            free(v23);
            free(v26);
          }
          fclose(v20);
          goto LABEL_48;
        }
        if ( strstr(s, "Manufacturer") )
          break;
        if ( strstr(s, "Model") )
        {
          strtok(s, "=");
          v21 = strtok(0, "\n");
          v22 = v36;
LABEL_33:
          strncpy(v22, v21, 0x1Du);
        }
      }
      strtok(s, "=");
      v21 = strtok(0, "\n");
      v22 = v37;
      goto LABEL_33;
    }
  }
  return sub_13954("];\n");
}
