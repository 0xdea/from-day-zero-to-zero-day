__int64 __fastcall sub_43A590(_BYTE *a1)
{
  int *v2; // x6
  const char *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x2
  unsigned __int16 v6; // w1
  __int64 *v7; // x0
  __int64 v8; // x0
  int *v10; // x0
  unsigned int v11; // w0
  unsigned __int64 v12; // x0
  char *v13; // x3
  __int64 v14; // [xsp+0h] [xbp-10010h] BYREF
  char v15[1008]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v16; // [xsp+400h] [xbp-FC10h]
  _BYTE v17[16]; // [xsp+10000h] [xbp-10h] BYREF

  if ( (dword_496770 & 1) != 0 )
    sub_438334(" search cache=%s\n", "/etc/ld.so.cache");
  v2 = (int *)qword_496A08;
  if ( !qword_496A08 )
  {
    v10 = (int *)sub_4374C0("/etc/ld.so.cache", (size_t *)&qword_496A10, 1);
    v2 = v10;
    if ( v10 == (int *)-1LL )
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
           && *((_QWORD *)v10 + 1) == 0x686361632E6F732ELL
           && v10[4] == 825110885
           && (unsigned int)v10[5] <= (qword_496A10 - 48) / 0x18uLL )
    {
      if ( *((_BYTE *)v10 + 28) && (v10[7] & 3) != 2 )
      {
        sub_4118C0(v10, qword_496A10);
        qword_496A08 = -1;
        qword_496A18 = -1;
        return 0;
      }
      qword_496A08 = (__int64)v10;
      qword_496A18 = (__int64)v10;
      goto LABEL_5;
    }
    if ( *(_QWORD *)v10 == 0x2E312D6F732E646CLL && *((_WORD *)v10 + 4) == 11831 && *((_BYTE *)v10 + 10) == 48 )
    {
      v11 = v10[3];
      if ( v11 <= (qword_496A10 - 16) / 0xCuLL )
      {
        qword_496A08 = (__int64)v2;
        v12 = (12LL * v11 + 23) & 0xFFFFFFFFFFFFFFF8LL;
        v13 = (char *)v2 + v12;
        qword_496A18 = (__int64)v2 + v12;
        if ( qword_496A10 < v12 + 48
          || *(_QWORD *)((char *)v2 + v12) != 0x646C2D6362696C67LL
          || *((_QWORD *)v13 + 1) != 0x686361632E6F732ELL
          || *((_DWORD *)v13 + 4) != 825110885 )
        {
          qword_496A18 = -1;
          goto LABEL_5;
        }
        if ( !v13[28] || (v13[28] & 3) == 2 )
          goto LABEL_5;
        qword_496A08 = -1;
        qword_496A18 = -1;
        sub_4118C0(v2, qword_496A10);
        v2 = (int *)qword_496A08;
        if ( !qword_496A08 )
          sub_41F250("cache != NULL", (__int64)"dl-cache.c", 0x1DAu, (__int64)"_dl_load_cache_lookup");
        goto LABEL_4;
      }
    }
    goto LABEL_16;
  }
LABEL_4:
  if ( v2 == (int *)-1LL )
    return 0;
LABEL_5:
  if ( qword_496A18 == -1 )
    v3 = (const char *)sub_43A3F0(
                         (__int64)&v2[3 * v2[3] + 4],
                         (int)qword_496A10 - (12 * v2[3] + 16),
                         (__int64)(v2 + 4),
                         v2[3],
                         0xCu,
                         a1);
  else
    v3 = (const char *)sub_43A3F0(
                         qword_496A18,
                         qword_496A10,
                         qword_496A18 + 48,
                         *(_DWORD *)(qword_496A18 + 20),
                         0x18u,
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
