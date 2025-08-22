int sub_16DD4()
{
  int v0; // r0
  char v2; // [sp+4h] [bp-64h] BYREF
  char name[63]; // [sp+5h] [bp-63h] BYREF
  char dest[36]; // [sp+44h] [bp-24h] BYREF

  strcpy(dest, "/tmp/backupXXXXXX");
  v0 = mkstemp(dest);
  if ( v0 < 0 )
    exit(1);
  close(v0);
  dword_30B20 = (int)dest;
  snprintf(&v2, 0x40u, ">%s.msg", dest);
  if ( eval(&off_30B18, &v2, 0, 0) )
  {
    sub_E5AC(name);
    sub_B928(200, 0, "text/html; charset=utf-8", 0);
    sub_111F4();
  }
  else
  {
    sub_B928(200, 0, "application/tomato-binary-file", 0);
    sub_C3F0(dest);
    unlink(dest);
  }
  return unlink(name);
}
