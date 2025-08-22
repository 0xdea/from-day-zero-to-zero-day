int __fastcall sub_D940(_DWORD *a1, char *a2, int a3)
{
  const char *Var; // r0
  char *v7; // r4
  signed int v8; // r0
  unsigned int v9; // r3
  unsigned int v11; // [sp+14h] [bp-44h] BYREF
  unsigned int v12; // [sp+18h] [bp-40h] BYREF
  unsigned int v13; // [sp+1Ch] [bp-3Ch] BYREF
  unsigned int v14; // [sp+20h] [bp-38h] BYREF
  unsigned int v15; // [sp+24h] [bp-34h] BYREF
  unsigned int v16; // [sp+28h] [bp-30h] BYREF
  _BYTE buf[16]; // [sp+2Ch] [bp-2Ch] BYREF
  char *endptr; // [sp+3Ch] [bp-1Ch] BYREF

  Var = (const char *)WebsGetVar(a2);
  v7 = (char *)Var;
  if ( !Var )
    return 0;
  switch ( a1[1] )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v7 = (char *)sub_E7DC(Var);
LABEL_5:
      v8 = strlen(v7);
      goto LABEL_8;
    case 3:
      v8 = strtol(Var, &endptr, 10);
      if ( v7 == endptr || *endptr )
        goto LABEL_29;
LABEL_8:
      if ( v8 >= a1[2] && v8 <= a1[3] )
        goto LABEL_38;
      goto LABEL_29;
    case 4:
      if ( sscanf(Var, "%3u.%3u.%3u.%3u", &v11, &v12, &v13, &v14) != 4 || v11 > 0xFF || v12 > 0xFF || v13 > 0xFF )
        goto LABEL_29;
      v9 = v14;
      goto LABEL_24;
    case 5:
      if ( sscanf(Var, "%2x:%2x:%2x:%2x:%2x:%2x", &v11, &v12, &v13, &v14, &v15, &v16) != 6
        || v11 > 0xFF
        || v12 > 0xFF
        || v13 > 0xFF
        || v14 > 0xFF
        || v15 > 0xFF )
      {
        goto LABEL_29;
      }
      v9 = v16;
LABEL_24:
      if ( v9 > 0xFF )
      {
LABEL_29:
        if ( a1[1] == 2 )
          free(v7);
        a3 = -1;
      }
      else
      {
LABEL_38:
        if ( a3 )
        {
          if ( is_value_in_nvram_0((int)a2, v7) )
          {
            a3 = 0;
          }
          else
          {
            a3 = a1[1] != 7;
            nvram_set((int)a2, (int)v7);
          }
        }
        if ( a1[1] == 2 )
          free(v7);
      }
      break;
    case 6:
      if ( (*Var || a1[2]) && inet_pton(10, Var, buf) != 1 )
        goto LABEL_29;
      goto LABEL_38;
    default:
      goto LABEL_38;
  }
  return a3;
}
