bool __fastcall is_value_in_nvram(int a1, const char *a2)
{
  const char *v3; // r0

  v3 = (const char *)nvram_get();
  return v3 && strcmp(v3, a2) == 0;
}
