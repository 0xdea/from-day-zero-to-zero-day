// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall dl_aux_init(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // x19
  __int64 v2; // x0
  unsigned __int64 v3; // x1
  __int64 v4; // x2
  unsigned __int64 v5; // t1
  __int64 v6; // x1
  int v7; // w6
  __int64 *result; // x0
  _BYTE v9[24]; // [xsp+20h] [xbp+20h] BYREF
  __int64 v10; // [xsp+38h] [xbp+38h]
  __int64 v11; // [xsp+48h] [xbp+48h]
  __int64 v12; // [xsp+50h] [xbp+50h]
  void (__fastcall __noreturn *v13)(void (*)(void *), __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char); // [xsp+68h] [xbp+68h]
  __int64 v14; // [xsp+98h] [xbp+98h]
  __int64 v15; // [xsp+A0h] [xbp+A0h]
  __int64 v16; // [xsp+A8h] [xbp+A8h]
  int v17; // [xsp+B0h] [xbp+B0h]
  __int64 v18; // [xsp+D8h] [xbp+D8h]
  void *v19; // [xsp+E8h] [xbp+E8h]
  __int64 v20; // [xsp+F0h] [xbp+F0h]
  __int64 v21; // [xsp+108h] [xbp+108h]
  __int64 v22; // [xsp+110h] [xbp+110h]
  __int64 v23; // [xsp+128h] [xbp+128h]
  __int64 v24; // [xsp+1B8h] [xbp+1B8h]

  v1 = a1;
  dl_auxv = (__int64)a1;
  v2 = _memset_generic(v9, 0, 416);
  v3 = *v1;
  v4 = 0x10000;
  v12 = 0x10000;
  v13 = start;
  v24 = 5120;
  if ( v3 )
  {
    do
    {
      if ( v3 <= 0x33 )
        *(_QWORD *)(v2 + 8 * v3) = v1[1];
      v5 = v1[2];
      v1 += 2;
      v3 = v5;
    }
    while ( v5 );
    v4 = v12;
    v6 = v24;
    v7 = v17;
  }
  else
  {
    v6 = 5120;
    v7 = 0;
  }
  result = &dl_auxv;
  dl_pagesize = v4;
  dl_minsigstacksize = v6;
  _libc_enable_secure = v18;
  dl_random = v19;
  dl_hwcap2 = v20;
  dl_platform = v14;
  dl_hwcap = v15;
  dl_hwcap3 = v21;
  dl_fpu_control = v7;
  dl_hwcap4 = v22;
  dl_phdr = v10;
  dl_phnum = v11;
  dl_clktck = v16;
  dl_sysinfo_dso = v23;
  if ( !v10 )
  {
    dl_phdr = (__int64)&dword_400040;
    dl_phnum = 6;
  }
  return result;
}
