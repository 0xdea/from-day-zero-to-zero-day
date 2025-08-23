int __fastcall sub_14DD0(unsigned __int8 *a1, unsigned int a2, _DWORD *a3)
{
  int v6; // r8
  int v7; // r6
  unsigned __int8 *v8; // r5
  int i; // r7
  int v10; // r0
  int v11; // r7
  int v12; // r8
  int v13; // r6
  unsigned __int8 *v14; // r5
  int v15; // r0

  *a3 = 1;
  a3[3] = 1;
  a3[1] = 8;
  a3[2] = 8;
  a3[4] = 0;
  a3[6] = 0;
  a3[5] = 0;
  if ( a2 < 8 || *a1 != 221 || a1[1] != a2 - 2 || memcmp(a1 + 2, &unk_25CD8, 4u) || (a1[6] | (a1[7] << 8)) != 1 )
    return -1;
  if ( (int)(a2 - 8) <= 3 )
  {
    if ( (int)(a2 - 8) <= 0 )
      return 0;
    return -1;
  }
  a3[2] = sub_14BC0(a1 + 8);
  if ( (int)(a2 - 12) <= 1 )
  {
    if ( a2 == 13 )
      return -1;
    return 0;
  }
  a3[1] = 0;
  v6 = a1[12] | (a1[13] << 8);
  if ( !v6 )
    return -1;
  v7 = a2 - 14;
  if ( v7 < 4 * v6 )
    return -1;
  v8 = a1 + 14;
  for ( i = 0; i < v6; ++i )
  {
    v7 -= 4;
    v10 = sub_14BC0(v8);
    v8 += 4;
    a3[1] |= v10;
  }
  if ( v7 <= 1 )
  {
    if ( v7 != 1 )
      return 0;
    return -1;
  }
  v11 = 0;
  a3[3] = 0;
  v12 = *v8 | (v8[1] << 8);
  if ( !v12 )
    return -1;
  v13 = v7 - 2;
  if ( v13 < 4 * v12 )
    return -1;
  v14 = v8 + 2;
  while ( v11 < v12 )
  {
    v13 -= 4;
    v15 = sub_14D18(v14);
    v14 += 4;
    ++v11;
    a3[3] |= v15;
  }
  if ( v13 > 1 )
  {
    v13 -= 2;
    a3[4] = *v14 | (v14[1] << 8);
  }
  if ( v13 > 0 )
    return -1;
  else
    return 0;
}
