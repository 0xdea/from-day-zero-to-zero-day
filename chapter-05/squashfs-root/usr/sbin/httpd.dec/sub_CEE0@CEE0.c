int __fastcall sub_CEE0(const char *a1, const char *a2, const char *a3)
{
  int v7; // r6
  size_t v8; // r0
  size_t v9; // r0
  char *v10; // r0
  char *v11; // r5
  size_t v12; // r0
  char v13[10240]; // [sp+0h] [bp-5020h] BYREF
  _BYTE v14[10272]; // [sp+2800h] [bp-2820h] BYREF

  if ( !a1 )
    return -1;
  strlcpy((int)v13, (int)a1, 10240);
  v7 = 0;
  memset(v14, 0, 0x2800u);
  while ( 1 )
  {
    v10 = strstr(v13, a2);
    v11 = v10;
    if ( !v10 )
      break;
    if ( v10 != v13 )
      memcpy(&v14[v7], v13, v10 - v13);
    v8 = strlen(a3);
    memcpy(&v14[&v11[v7] - v13], a3, v8);
    v7 += v11 - v13 + strlen(a3);
    v9 = strlen(a2);
    strlcpy((int)v13, (int)&v11[v9], 10240);
  }
  strlcat(v14, v13, 10240);
  v12 = strlen(a1);
  strlcpy((int)a1, (int)v14, v12 + 1);
  return 0;
}
