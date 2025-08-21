int __fastcall sub_10218(int result, const char **a2)
{
  int v3; // r12
  const char *v4; // r4
  struct statfs buf; // [sp+14h] [bp-5Ch] BYREF
  char v6; // [sp+54h] [bp-1Ch] BYREF

  if ( result == 2 )
  {
    if ( statfs(*a2, &buf) || buf.f_type == 1936814952 || buf.f_type == 1903388787 )
    {
      memset(&buf, 0, sizeof(buf));
      v4 = a2[1];
      if ( !strncmp(v4, "jffs", 4u) || !strncmp(v4, "brcmnand", 8u) )
      {
        v3 = mtd_getinfo(v4, &v6, &buf.f_blocks);
        if ( !v3 )
          return sub_13970(
                   0,
                   "\n%s = {\n\tmnt: %d,\n\tsize: %llu,\n\tfree: %llu\n};\n",
                   a2[1],
                   v3,
                   buf.f_bsize * (unsigned __int64)buf.f_blocks,
                   buf.f_bsize * (unsigned __int64)buf.f_bfree);
        buf.f_bsize = 1;
      }
      v3 = 0;
    }
    else
    {
      v3 = 1;
    }
    return sub_13970(
             0,
             "\n%s = {\n\tmnt: %d,\n\tsize: %llu,\n\tfree: %llu\n};\n",
             a2[1],
             v3,
             buf.f_bsize * (unsigned __int64)buf.f_blocks,
             buf.f_bsize * (unsigned __int64)buf.f_bfree);
  }
  return result;
}
