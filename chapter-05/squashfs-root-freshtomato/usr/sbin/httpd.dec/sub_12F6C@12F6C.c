int sub_12F6C()
{
  int v0; // r5
  FILE *v1; // r4
  char v3[20]; // [sp+0h] [bp-40h] BYREF
  _DWORD ptr[11]; // [sp+14h] [bp-2Ch] BYREF

  v0 = mtd_getinfo();
  if ( v0 )
  {
    snprintf(v3, 0x14u, "/dev/mtd%dro", ptr[6]);
    v1 = fopen(v3, "r");
    if ( v1 )
    {
      if ( fread(ptr, 0x14u, 1u, v1) == 1 && ptr[0] == 1213418566 )
        v0 = ptr[1];
      else
        v0 = 0;
      fclose(v1);
    }
    else
    {
      v0 = 0;
    }
  }
  return sub_13970(0, "\nnvstat = { size: %d, free: %d };\n", 0x10000, 0x10000 - v0);
}
