char *__fastcall sub_1844C(const char *a1)
{
  char *v2; // r0
  char *v3; // r4

  v2 = (char *)malloc(0x24u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x24u);
    strncpy(v3, a1, 0x10u);
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
  }
  return v3;
}
