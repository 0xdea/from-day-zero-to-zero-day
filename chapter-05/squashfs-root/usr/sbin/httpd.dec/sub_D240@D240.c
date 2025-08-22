int __fastcall sub_D240(int a1, const char **a2)
{
  const char *v2; // r4
  int result; // r0
  char v4[24]; // [sp+0h] [bp-30h] BYREF
  int v5; // [sp+18h] [bp-18h]
  int v6; // [sp+1Ch] [bp-14h]

  strcpy(v4, "/usr/sbin/discovery.sh ");
  v5 = 0;
  v6 = 0;
  v2 = *a2;
  result = strncmp(*a2, "off", 3u);
  if ( result )
  {
    if ( !strncmp(v2, "traceroute", 0xAu) )
      strcat(v4, v2); // XXX
    return system(v4); // XXX
  }
  return result;
}
