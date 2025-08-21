int __fastcall sub_E60C(int a1, const char **a2)
{
  int v2; // r0
  int *v3; // r3
  const char *v5; // r0

  if ( !a1 )
  {
    v3 = &tomato_shortver;
    goto LABEL_8;
  }
  v2 = atoi(*a2);
  if ( v2 == 2 )
    return sub_13D58("uname -r", 0);
  if ( v2 != 3 )
  {
    v3 = &tomato_version;
LABEL_8:
    v5 = (const char *)*v3;
    return sub_13954(v5);
  }
  v5 = "6.37.14.126 (r561982)";
  return sub_13954(v5);
}
