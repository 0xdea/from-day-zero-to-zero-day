__int64 __fastcall sub_43A590(__int64 a1)
{
  __int64 v2; // x6
  const char *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x2
  unsigned __int16 v6; // w1
  __int64 *v7; // x0
  __int64 v8; // x0
  __int64 v10; // x0
  unsigned int v11; // w0
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x3
  __int64 v14; // [xsp+0h] [xbp-10010h] BYREF
  _BYTE v15[1008]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v16; // [xsp+400h] [xbp-FC10h]
  _BYTE v17[16]; // [xsp+10000h] [xbp-10h] BYREF

  if ( (dword_496770 & 1) != 0 )
    sub_438334(" search cache=%s\n", "/etc/ld.so.cache");
  v2 = qword_496A08;
  if ( !qword_496A08 )
  {
    v10 = sub_4374C0("/etc/ld.so.cache", &qword_496A10, 1);
    v2 = v10;
    if ( v10 == -1 )
      goto LABEL_17;
    if ( (unsigned __int64)qword_496A10 <= 0x30 )
    {
      if ( (unsigned __int64)qword_496A10 <= 0x10 )
      {
LABEL_16:
        sub_4118C0(v2, qword_496A10);
LABEL_17:
        qword_496A08 = -1;
        return 0;
      }
    }
    else if ( *(_QWORD *)v10 == 0x646C2D6362696C67LL
           && *(_QWORD *)(v10 + 8) == 0x686361632E6F732ELL
           && *(_DWORD *)(v10 + 16) == 825110885
           && *(unsigned int *)(v10 + 20) <= (qword_496A10 - 48) / 0x18uLL )
    {
      if ( *(_BYTE *)(v10 + 28) && (*(_BYTE *)(v10 + 28) & 3) != 2 )
      {
        sub_4118C0(v10, qword_496A10);
        qword_496A08 = -1;
        qword_496A18 = -1;
        return 0;
      }
      qword_496A08 = v10;
      qword_496A18 = v10;
      goto LABEL_5;
    }
    if ( *(_QWORD *)v10 == 0x2E312D6F732E646CLL && *(_WORD *)(v10 + 8) == 11831 && *(_BYTE *)(v10 + 10) == 48 )
    {
      v11 = *(_DWORD *)(v10 + 12);
      if ( v11 <= (qword_496A10 - 16) / 0xCuLL )
      {
        qword_496A08 = v2;
        v12 = (12LL * v11 + 23) & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v2 + v12;
        qword_496A18 = v2 + v12;
        if ( qword_496A10 < v12 + 48
          || *(_QWORD *)(v2 + v12) != 0x646C2D6362696C67LL
          || *(_QWORD *)(v13 + 8) != 0x686361632E6F732ELL
          || *(_DWORD *)(v13 + 16) != 825110885 )
        {
          qword_496A18 = -1;
          goto LABEL_5;
        }
        if ( !*(_BYTE *)(v13 + 28) || (*(_BYTE *)(v13 + 28) & 3) == 2 )
          goto LABEL_5;
        qword_496A08 = -1;
        qword_496A18 = -1;
        sub_4118C0(v2, qword_496A10);
        v2 = qword_496A08;
        if ( !qword_496A08 )
          sub_41F250("cache != NULL", (__int64)"dl-cache.c", 0x1DAu, (__int64)"_dl_load_cache_lookup");
        goto LABEL_4;
      }
    }
    goto LABEL_16;
  }
LABEL_4:
  if ( v2 == -1 )
    return 0;
LABEL_5:
  if ( qword_496A18 == -1 )
    v3 = (const char *)sub_43A3F0(
                         v2 + 12LL * *(unsigned int *)(v2 + 12) + 16,
                         (unsigned int)(qword_496A10 - (12 * *(_DWORD *)(v2 + 12) + 16)),
                         v2 + 16,
                         *(unsigned int *)(v2 + 12),
                         12,
                         a1);
  else
    v3 = (const char *)sub_43A3F0(
                         qword_496A18,
                         qword_496A10,
                         qword_496A18 + 48,
                         *(unsigned int *)(qword_496A18 + 20),
                         24,
                         a1);
  if ( (dword_496770 & 1) != 0 )
  {
    if ( v3 )
    {
      sub_438334("  trying file=%s\n", v3);
      goto LABEL_9;
    }
    return 0;
  }
  if ( !v3 )
    return 0;
LABEL_9:
  v4 = ifunc_40DFD0(v3);
  v5 = v4 + 1;
  v6 = (v4 + 16) & 0xFFF0;
  v7 = (__int64 *)&v17[-((v4 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v17 != (_BYTE *)v7 )
  {
    do
      v16 = 0;
    while ( &v14 != v7 );
  }
  v14 = 0;
  if ( v6 >= 0x400uLL )
    v16 = 0;
  v8 = j_ifunc_40DC90(v15, v3, v5);
  return sub_42F380(v8);
}
