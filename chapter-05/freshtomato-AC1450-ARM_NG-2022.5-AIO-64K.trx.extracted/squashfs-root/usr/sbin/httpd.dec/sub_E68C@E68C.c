bool __fastcall sub_E68C(int a1)
{
  const char *v1; // r0

  v1 = (const char *)nvram_get(a1);
  return v1 && strcmp(v1, "1") == 0;
}
