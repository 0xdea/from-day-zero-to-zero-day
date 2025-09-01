int __fastcall sub_17C48(int a1)
{
  unsigned int v2; // r6
  FILE *v3; // r5
  int v4; // r2
  int v5; // r3
  int v7; // [sp+0h] [bp-430h]
  int v8; // [sp+4h] [bp-42Ch]
  int v9; // [sp+8h] [bp-428h]
  int v10; // [sp+Ch] [bp-424h]
  int v11; // [sp+10h] [bp-420h]
  int v12; // [sp+14h] [bp-41Ch]
  char v13[1048]; // [sp+18h] [bp-418h] BYREF

  v2 = 0;
  v3 = fopen("/proc/stat", "r");
  fgets(v13, 1024, v3);
  while ( v2 < dword_30CA8 )
  {
    ++v2;
    fgets(v13, 1024, v3);
    v4 = a1;
    v7 = a1 + 24;
    v8 = a1 + 28;
    v9 = a1 + 32;
    v10 = a1 + 36;
    v11 = a1 + 40;
    v12 = a1 + 44;
    v5 = a1 + 20;
    a1 += 48;
    sscanf(v13, "%s %u %u %u %u %u %u %u", v4, v5, v7, v8, v9, v10, v11, v12); // XXX
  }
  return fclose(v3);
}
