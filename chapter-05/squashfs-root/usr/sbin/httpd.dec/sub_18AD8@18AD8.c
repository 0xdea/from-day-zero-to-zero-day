unsigned __int64 __fastcall sub_18AD8(const char *a1, int a2, int a3, unsigned int a4)
{
  int v4; // r0
  int v5; // r6
  unsigned __int64 v7; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+8h] [bp-18h]
  unsigned int v9; // [sp+Ch] [bp-14h] BYREF

  v8 = a3;
  v9 = a4;
  v7 = 0;
  v4 = open(a1, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( ioctl(v4, 0x80041272, &v7) < 0 )
    {
      v7 = 0;
      if ( ioctl(v5, 0x1260u, &v9) >= 0 )
        v7 = (unsigned __int64)v9 << 9;
    }
    close(v5);
  }
  return v7;
}
