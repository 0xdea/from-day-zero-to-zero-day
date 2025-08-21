int __fastcall sub_D2F8(int a1, const char **a2)
{
  const char *v3; // r8
  int v5; // r0
  const char *v6; // r4
  int v7; // r0
  _BOOL4 v8; // r6
  int result; // r0
  const char *v10; // r1
  const char *v11; // r2
  int v13; // r2

  v3 = &s;
  v5 = nvram_get("web_css");
  if ( v5 )
    v6 = (const char *)v5;
  else
    v6 = &s;
  v7 = nvram_get("ttb_css");
  if ( v7 )
    v3 = (const char *)v7;
  v8 = strcmp(v6, "tomato") != 0;
  if ( a1 )
  {
    if ( !strncmp(*a2, "svg-css", 7u) && v8 )
      sub_13970(0, "<?xml-stylesheet type=\"text/css\" href=\"/%s.css\" ?>", v6);
    result = strncmp(*a2, "svg-js", 6u);
    if ( !result )
    {
      result = nvram_get_int("web_adv_scripts");
      if ( result )
        return sub_13970(0, "<script href=\"/resize-charts.js\" />", v13);
    }
  }
  else
  {
    result = is_value_in_nvram_0("web_css", "online");
    if ( result )
    {
      result = 0;
      v10 = "<link rel=\"stylesheet\" type=\"text/css\" href=\"/ext/%s.css\">";
      v11 = v3;
      return sub_13970(result, v10, v11);
    }
    if ( v8 )
    {
      v10 = "<link rel=\"stylesheet\" type=\"text/css\" href=\"/%s.css\">";
      v11 = v6;
      return sub_13970(result, v10, v11);
    }
  }
  return result;
}
