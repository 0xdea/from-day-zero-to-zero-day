__int64 get_nproc_stat()
{
  unsigned int v0; // w19
  int v1; // w0
  int v2; // w20
  _BYTE *v3; // x0
  __int64 *v5; // [xsp+8h] [xbp-418h] BYREF
  __int64 *v6; // [xsp+10h] [xbp-410h] BYREF
  _BYTE v7[1000]; // [xsp+18h] [xbp-408h] BYREF
  __int64 v8; // [xsp+400h] [xbp-20h]
  __int64 v9; // [xsp+418h] [xbp-8h] BYREF

  v8 = 0;
  v0 = 0;
  v5 = &v9;
  v6 = &v9;
  v1 = _open_nocancel("/proc/stat", 0x80000);
  if ( v1 != -1 )
  {
    v2 = v1;
    v0 = 0;
    while ( 1 )
    {
      v3 = (_BYTE *)next_line(v2, v7, &v5, (void **)&v6, (char *)&v9);
      if ( !v3 || *v3 != 99 || v3[1] != 112 || v3[2] != 117 )
        break;
      if ( (unsigned int)(unsigned __int8)v3[3] - 48 < 0xA )
        ++v0;
    }
    _close_nocancel(v2);
  }
  return v0;
}
