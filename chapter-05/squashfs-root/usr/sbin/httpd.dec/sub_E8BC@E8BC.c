int __fastcall sub_E8BC(int a1, int a2)
{
  FILE *v4; // r4
  char v6[256]; // [sp+0h] [bp-148h] BYREF
  char buf[7]; // [sp+100h] [bp-48h] BYREF
  char v8; // [sp+107h] [bp-41h] BYREF

  if ( word_30CEC == 2 )
  {
    inet_ntop(2, &unk_30CF0, buf, 0x2Eu);
    snprintf(v6, 0x100u, "ip neigh show %s", buf);
  }
  else if ( word_30CEC == 10 )
  {
    inet_ntop(10, &dword_30CF4, buf, 0x2Eu);
    if ( dword_30CF4 || dword_30CF8 || dword_30CFC != -65536 )
      snprintf(v6, 0x100u, "ip neigh show %s", buf);
    else
      snprintf(v6, 0x100u, "ip neigh show %s", &v8);
  }
  v4 = popen(v6, "r"); // XXX
  if ( !v4 )
    return 0;
  while ( fgets(v6, 256, v4) )
  {
    if ( sscanf(v6, "%*s dev %16s lladdr %17s %*s", a2, a1) == 2 )
    {
      pclose(v4);
      return 1;
    }
  }
  pclose(v4);
  return 0;
}
