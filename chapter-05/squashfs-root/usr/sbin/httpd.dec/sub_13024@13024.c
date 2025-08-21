int sub_13024()
{
  const char *v0; // r0

  v0 = (const char *)nvram_get("log_file");
  if ( v0 && !strcmp(v0, "1") )
    return 1;
  sub_E088("Internal logging disabled");
  sub_C30C("error.asp");
  return 0;
}
