int __fastcall sub_151BC(int a1, int a2, int a3, int *a4)
{
  int v7; // r3
  int v8; // r0
  const char *v9; // r10
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  int v13; // r7
  int v14; // r9
  _DWORD *v16; // r6
  unsigned int v17; // r9
  int *v18; // r8
  __int16 v19; // r3
  unsigned int v20; // r5
  char v21; // r2
  char v22; // r2
  __int16 v23; // r0
  int v24; // r3
  int v25; // r0
  __int16 v26; // r3
  unsigned int v27; // r2
  char *v28; // r1
  char v29; // t1
  int v30; // r3
  bool v31; // zf
  bool v32; // zf
  int v33; // r3
  int v34; // r5
  int v35; // r10
  unsigned __int8 *v36; // r5
  int v37; // r2
  int v38; // r10
  unsigned __int8 *v39; // r5
  int v40; // r2
  int v41; // r3
  int v42; // r3
  char *v43; // r2
  char s[60]; // [sp+1Ch] [bp-3Ch] BYREF

  if ( a1 > 2 )
    return 0;
  v7 = *a4;
  if ( v7 >= 0 && v7 != a2 )
    return 0;
  v8 = wl_nvname("ifname");
  v9 = sub_13E24(v8);
  v10 = malloc(0x1008Cu);
  v11 = v10;
  if ( !v10 )
  {
    sub_149C8((int)v9, a2, a4[3 * a1 + 3], a4[3 * a1 + 4]);
    return 0;
  }
  v13 = 6;
  *v10 = 0x10000;
  v10[1] = 109;
  v14 = -1;
  while ( v13-- != 0 )
  {
    v14 = wl_ioctl(v9, 51, v11, 0x10000);
    if ( v14 >= 0 )
      break;
    usleep(0x7A120u);
  }
  sub_149C8((int)v9, a2, a4[3 * a1 + 3], a4[3 * a1 + 4]);
  if ( v14 >= 0 )
  {
    v16 = v11 + 3;
    v17 = 0;
    v18 = a4;
    while ( 1 )
    {
      if ( v17 >= v11[2] )
      {
        free(v11);
        return 1;
      }
      snprintf(
        s,
        0x12u,
        "%02X:%02X:%02X:%02X:%02X:%02X",
        *((unsigned __int8 *)v16 + 8),
        *((unsigned __int8 *)v16 + 9),
        *((unsigned __int8 *)v16 + 10),
        *((unsigned __int8 *)v16 + 11),
        *((unsigned __int8 *)v16 + 12),
        *((unsigned __int8 *)v16 + 13));
      strcpy(dest, s);
      memset(&dest[18], 0, 0x21u);
      memcpy(&dest[18], (char *)v16 + 19, *((unsigned __int8 *)v16 + 18));
      v19 = *((_WORD *)v16 + 36);
      v20 = (unsigned __int8)v19;
      byte_30DB0 = v19;
      v21 = *((_BYTE *)v16 + 88);
      if ( !v21 )
      {
        v21 = v19;
        if ( (v19 & 0x3800) == 0x1800 )
        {
          if ( (v19 & 0x3F00) == 0x1800 )
            v22 = -2;
          else
            v22 = 2;
        }
        else
        {
          if ( (v19 & 0x3800) != 0x2000 )
            goto LABEL_23;
          if ( (v19 & 0x700) == 0x100 )
            v22 = -2;
          else
            v22 = -6;
        }
        v21 = v19 + v22;
      }
LABEL_23:
      byte_30DB1 = v21;
      v23 = *((_WORD *)v16 + 39);
      if ( v23 < -50 )
      {
        if ( v23 >= -80 )
        {
          v25 = (26 * v23 + 2080) / 10 + 24;
LABEL_30:
          dword_30DAC = v25;
          goto LABEL_32;
        }
        if ( v23 >= -90 )
        {
          v25 = (26 * v23 + 2340) / 10;
          goto LABEL_30;
        }
        v24 = 0;
      }
      else
      {
        v24 = 100;
      }
      dword_30DAC = v24;
LABEL_32:
      v26 = *((_WORD *)v16 + 8);
      v27 = 0;
      dword_30DBC = 0;
      dword_30DB8 = (v26 & 0x10) != 0;
      if ( v20 > 0xE )
      {
        v33 = 2;
      }
      else
      {
        v28 = (char *)v16 + 55;
        while ( v27 < v16[13] )
        {
          v29 = *++v28;
          v30 = v29 & 0x7F;
          v31 = v30 == 2;
          if ( v30 != 2 )
            v31 = v30 == 4;
          if ( !v31 )
          {
            v32 = v30 == 11;
            if ( v30 != 11 )
              v32 = v30 == 22;
            if ( !v32 )
            {
              v33 = 3;
              goto LABEL_45;
            }
          }
          ++v27;
        }
        v33 = 1;
      }
LABEL_45:
      if ( *((_BYTE *)v16 + 81) )
      {
        if ( v33 == 2 )
        {
          if ( *((_BYTE *)v16 + 97) )
            v33 = 7;
          else
            v33 = 5;
        }
        else
        {
          v33 = 6;
        }
      }
      v34 = *((unsigned __int16 *)v16 + 58);
      dword_30DE0 = v33;
      v35 = v16[30];
      v36 = (unsigned __int8 *)v16 + v34;
      while ( v35 > 0 )
      {
        if ( *v36 == 48 && !sub_15180(v36, v36[1] + 2, &dword_30DC0) )
        {
LABEL_59:
          dword_30DBC = 1;
          goto LABEL_62;
        }
        v37 = v36[1];
        v35 += -2 - v37;
        v36 += v37 + 2;
      }
      v38 = v16[30];
      v39 = (unsigned __int8 *)v16 + *((unsigned __int16 *)v16 + 58);
      while ( v38 > 0 )
      {
        if ( *v39 == 221 && !sub_15180(v39, v39[1] + 2, &dword_30DC0) )
          goto LABEL_59;
        v40 = v39[1];
        v38 += -2 - v40;
        v39 += v40 + 2;
      }
LABEL_62:
      v41 = v16[18] & 0x3800;
      switch ( v41 )
      {
        case 0x2000:
          v42 = 80;
          break;
        case 0x1800:
          v42 = 40;
          break;
        case 0x1000:
          v42 = 20;
          break;
        default:
          v42 = 10;
          break;
      }
      sub_13970(
        0,
        "%c['%s','%s',%d,%d,%d,%d,",
        *((unsigned __int8 *)v18 + 4),
        dest,
        &dest[18],
        *((__int16 *)v16 + 39),
        (unsigned __int8)byte_30DB1,
        v42,
        dword_30DAC);
      *((_BYTE *)v18 + 4) = 44;
      if ( (unsigned int)dword_30DE0 > 1 )
      {
        switch ( dword_30DE0 )
        {
          case 2:
            sub_13970(0, "'%s',", "11a");
            break;
          case 7:
            sub_13970(0, "'%s',", "11ac");
            break;
          case 5:
            sub_13970(0, "'%s',", "11a/n");
            break;
          case 3:
            sub_13970(0, "'%s',", "11b/g");
            break;
          case 6:
            sub_13970(0, "'%s',", "11b/g/n");
            break;
          default:
            sub_13970(0, "'%s',", "unknown");
            break;
        }
      }
      else
      {
        sub_13970(0, "'%s',", "11b");
      }
      if ( dword_30DBC == 1 )
      {
        switch ( dword_30DCC )
        {
          case 1:
            sub_13970(0, "'%s',", "WPA-Enterprise");
            goto LABEL_98;
          case 64:
            sub_13970(0, "'%s',", "WPA2-Enterprise");
            goto LABEL_98;
          case 2:
            sub_13970(0, "'%s',", "WPA-Personal");
            goto LABEL_98;
          case 32:
            sub_13970(0, "'%s',", "WPA2-Personal");
            goto LABEL_98;
          case 4:
            sub_13970(0, "'%s',", "NONE");
            goto LABEL_98;
          case 8:
            sub_13970(0, "'%s',", "IEEE 802.1X");
            goto LABEL_98;
        }
LABEL_96:
        sub_13970(0, "'%s',", "Unknown");
        goto LABEL_98;
      }
      if ( dword_30DB8 == 1 )
        goto LABEL_96;
      sub_13970(0, "'%s',", "Open System");
LABEL_98:
      if ( dword_30DBC == 1 )
      {
        if ( dword_30DC4 != 1 )
        {
          if ( dword_30DC4 != 2 && dword_30DC4 != 4 )
          {
            switch ( dword_30DC4 )
            {
              case 8:
                sub_13970(0, "'%s',", "TKIP");
                break;
              case 16:
                sub_13970(0, "'%s',", "AES");
                break;
              case 24:
                sub_13970(0, "'%s',", "TKIP+AES");
                break;
              default:
                sub_13970(0, "'%s',", "Unknown");
                break;
            }
            goto LABEL_112;
          }
LABEL_110:
          sub_13970(0, "'%s',", "WEP");
          goto LABEL_112;
        }
      }
      else if ( dword_30DB8 == 1 )
      {
        goto LABEL_110;
      }
      sub_13970(0, "'%s',", "NONE");
LABEL_112:
      v43 = "5";
      ++v17;
      if ( (v16[18] & 0xC000) == 0 )
        v43 = "2.4";
      sub_13970(0, "'%s']", v43);
      v16 = (_DWORD *)((char *)v16 + v16[1]);
    }
  }
  free(v11);
  return 0;
}
