int __fastcall sub_14024(int a1, const char *a2, int a3, int a4, int a5)
{
  char *v9; // r0
  char *v10; // r4
  size_t v11; // r0
  size_t v12; // r10
  __int16 v13; // r2
  __int16 v14; // r3
  unsigned int v15; // r8
  char *v16; // r9
  int v17; // r10
  int v19; // t1
  int v20; // r0
  int v21; // r3

  v9 = (char *)malloc(0x2000u);
  v10 = v9;
  if ( v9 )
  {
    strcpy(v9, "chanspecs");
    v11 = strlen(v10);
    v12 = v11 + 1;
    if ( a3 == 1 )
      v13 = -16384;
    else
      v13 = 0;
    if ( a4 == 20 )
    {
      v14 = 4096;
    }
    else if ( a4 == 40 )
    {
      v14 = 6144;
    }
    else
    {
      v14 = 0x2000;
    }
    *(_WORD *)&v10[v12] = v14 | v13;
    strncpy(&v10[v11 + 3], a2, 4u);
    *(_DWORD *)&v10[v12 + 6] = 110;
    if ( wl_ioctl(a1, 262, v10, v12 + 450) < 0 )
    {
      free(v10);
      return 0;
    }
    v15 = 0;
    v16 = v10;
    v17 = 0;
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)v10 )
      {
        free(v10);
        return v17;
      }
      v19 = *((_DWORD *)v16 + 1);
      v16 += 4;
      LOWORD(v20) = v19;
      if ( a4 <= 39 || (v20 & 0x700) == a5 )
        break;
LABEL_25:
      ++v15;
    }
    v20 = (unsigned __int8)v20;
    if ( a4 == 40 )
    {
      if ( a5 == 256 )
        v21 = 2;
      else
        v21 = -2;
    }
    else
    {
      if ( a4 != 80 )
      {
LABEL_24:
        ++v17;
        sub_13E40(v20, a3);
        goto LABEL_25;
      }
      if ( a5 == 256 )
        v21 = -2;
      else
        v21 = -6;
    }
    v20 = (unsigned __int8)v20 + v21;
    goto LABEL_24;
  }
  return 0;
}
