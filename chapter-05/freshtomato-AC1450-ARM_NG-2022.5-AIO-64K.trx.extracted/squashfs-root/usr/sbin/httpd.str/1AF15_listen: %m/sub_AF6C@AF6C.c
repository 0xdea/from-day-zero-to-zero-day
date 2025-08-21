void __fastcall sub_AF6C(const char *a1, int a2, int a3, int a4)
{
  int v5; // r7
  int v7; // r6
  int v9; // r0
  int v10; // r4
  __int16 v11; // r3
  in_addr_t v12; // r0
  int v13; // r1
  int *v14; // r1
  sockaddr addr; // [sp+Ch] [bp-A4h] BYREF
  int v16; // [sp+1Ch] [bp-94h]
  int v17; // [sp+20h] [bp-90h]
  int v18; // [sp+8Ch] [bp-24h] BYREF

  if ( a3 )
    v5 = 10;
  else
    v5 = 2;
  v7 = a2;
  if ( dword_30B80[0] > 15 )
  {
    syslog(3, "number of listeners exceeded the max allowed (%d)", 16);
    return;
  }
  if ( a2 <= 0 )
  {
    v7 = 443;
    if ( !a4 )
      v7 = 80;
  }
  v9 = socket(v5, 1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    syslog(3, "create listening socket: %m");
    return;
  }
  fcntl(v9, 2, 1);
  v18 = 1;
  setsockopt(v10, 1, 2, &v18, 4u);
  v11 = (_WORD)v7 << 8;
  if ( a3 )
  {
    addr.sa_family = v5;
    *(_WORD *)addr.sa_data = BYTE1(v7) | v11;
    if ( a1 && *a1 )
    {
      inet_pton(v5, a1, &addr.sa_data[6]);
    }
    else
    {
      *(_DWORD *)&addr.sa_data[6] = in6addr_any;
      *(_DWORD *)&addr.sa_data[10] = unk_30B4C;
      v16 = unk_30B50;
      v17 = unk_30B54;
    }
    v18 = 1;
    setsockopt(v10, 41, 26, &v18, 4u);
  }
  else
  {
    addr.sa_family = v5;
    *(_WORD *)addr.sa_data = BYTE1(v7) | v11;
    if ( a1 )
    {
      if ( *a1 )
        v12 = inet_addr(a1);
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    *(_DWORD *)&addr.sa_data[2] = v12;
  }
  if ( bind(v10, &addr, 0x80u) < 0 )
  {
    if ( !a1 || !*a1 )
    {
      a1 = &s;
      if ( a3 )
        a1 = "::";
    }
    syslog(3, "bind: [%s]:%d: %m", a1, v7);
    goto LABEL_31;
  }
  if ( listen(v10, 64) < 0 )
  {
    syslog(3, "listen: %m");
LABEL_31:
    close(v10);
    return;
  }
  v13 = dword_30B80[0] + 16;
  ++dword_30B80[0];
  v14 = &dword_30B80[2 * v13];
  v14[1] = v10;
  v14[2] = a4;
  dword_30B80[((unsigned int)v10 >> 5) + 1] |= 1 << (v10 & 0x1F);
  if ( dword_30720 < v10 )
    dword_30720 = v10;
}
