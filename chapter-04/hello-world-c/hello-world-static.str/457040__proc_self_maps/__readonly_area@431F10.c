__int64 __fastcall _readonly_area(unsigned __int64 a1, unsigned __int64 a2)
{
  int *v4; // x0
  int *v5; // x21
  int v6; // w0
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x19
  _BYTE *v9; // x1
  _BYTE *v10; // x0
  unsigned __int64 v11; // x0
  _BYTE *v12; // x2
  unsigned __int64 v16; // x1
  unsigned int v17; // w1
  _BYTE *v18; // [xsp+8h] [xbp-28h] BYREF
  __int64 v19; // [xsp+10h] [xbp-20h] BYREF
  _BYTE *v20; // [xsp+18h] [xbp-18h] BYREF
  _BYTE *v21; // [xsp+20h] [xbp-10h] BYREF

  v4 = (int *)fopen64("/proc/self/maps");
  if ( v4 )
  {
    v5 = v4;
    v6 = *v4;
    *v5 = v6 | 0x8000;
    v18 = 0;
    v19 = 0;
    if ( (v6 & 0x10) == 0 )
    {
      v7 = a1 + a2;
      do
      {
        if ( getdelim(&v18, &v19, 10, v5) <= 0 )
          break;
        v8 = _isoc23_strtoumax(v18, &v20, 16);
        v9 = v20;
        if ( v20 == v18 )
          break;
        v10 = ++v20;
        if ( *v9 != 45 )
          break;
        v11 = _isoc23_strtoumax(v10, &v21, 16);
        v12 = v21;
        if ( v21 == v20 )
          break;
        ++v21;
        if ( *v12 != 32 )
          break;
        if ( v7 > v8 && a1 < v11 )
        {
          v21 = v12 + 2;
          if ( v12[1] != 114 )
            break;
          v21 = v12 + 3;
          if ( v12[2] != 45 )
            break;
          if ( a1 >= v8 && v7 <= v11 )
            goto LABEL_33;
          if ( a1 < v8 )
          {
            v16 = a2 - v7 + v8;
            a2 = a2 + v8 - v11;
            if ( v7 <= v11 )
              a2 = v16;
          }
          else
          {
            a2 = a1 + a2 - v11;
          }
          if ( !a2 )
          {
LABEL_33:
            fclose(v5);
            free(v18);
            return 1;
          }
        }
      }
      while ( (*v5 & 0x10) == 0 );
    }
    fclose(v5);
    free(v18);
    if ( a2 )
      return 0xFFFFFFFFLL;
    return 1;
  }
  v17 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( v17 <= 0x18 && ((0x1002004uLL >> v17) & 1) != 0 )
    return 1;
  return 0xFFFFFFFFLL;
}
