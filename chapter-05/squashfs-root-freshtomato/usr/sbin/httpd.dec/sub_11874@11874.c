bool __fastcall sub_11874(const char *a1)
{
  const char *v2; // r0

  v2 = (const char *)nvram_get("t_hidelr");
  return v2 && strcmp(v2, a1) == 0;
}
