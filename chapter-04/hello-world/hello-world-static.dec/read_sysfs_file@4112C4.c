__int64 __fastcall read_sysfs_file(const char *a1)
{
  unsigned int v1; // w21
  int v2; // w0
  int v4; // w22
  __int64 v5; // x20
  int v6; // w2
  unsigned __int64 v7; // x0
  unsigned __int8 *v8; // x1
  unsigned __int64 v9; // x19
  unsigned __int8 *v10; // x20
  __int64 *v11; // [xsp+0h] [xbp-420h] BYREF
  unsigned __int8 *v12; // [xsp+8h] [xbp-418h] BYREF
  unsigned __int8 *v13; // [xsp+10h] [xbp-410h] BYREF
  char v14[1000]; // [xsp+18h] [xbp-408h] BYREF
  __int64 v15; // [xsp+400h] [xbp-20h]
  __int64 v16; // [xsp+418h] [xbp-8h] BYREF

  v15 = 0;
  v1 = 0;
  v11 = &v16;
  v12 = (unsigned __int8 *)&v16;
  v2 = _open_nocancel(a1, 0x80000);
  if ( v2 != -1 )
  {
    v4 = v2;
    v5 = next_line(v2, v14, &v11, (void **)&v12, (char *)&v16);
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = _isoc23_strtoumax(v5, &v13, 10);
        v8 = v13;
        v9 = v7;
        if ( v13 == (unsigned __int8 *)v5 )
          break;
        if ( *v13 != 45 )
          goto LABEL_9;
        v10 = v13 + 1;
        v7 = _isoc23_strtoumax(v13 + 1, &v13, 10);
        v8 = v13;
        if ( v13 == v10 )
          break;
        if ( v9 <= v7 )
LABEL_9:
          v1 += 1 + v7 - v9;
        if ( v12 <= v8 )
          goto LABEL_11;
        v6 = *v8;
        v5 = (__int64)v8;
        if ( v6 == 44 )
        {
          v5 = (__int64)(v8 + 1);
          if ( v12 <= v8 + 1 )
            goto LABEL_11;
          v6 = v8[1];
        }
        if ( v6 == 10 )
          goto LABEL_11;
      }
    }
    v1 = 0;
LABEL_11:
    _close_nocancel(v4);
  }
  return v1;
}
