FILE *sub_EC24()
{
  FILE *result; // r0
  FILE *v1; // r4
  char *v2; // r5
  char *v3; // r0
  char s[64]; // [sp+4h] [bp-5Ch] BYREF
  char dest[28]; // [sp+44h] [bp-1Ch] BYREF

  strcpy(dest, "/proc/stat");
  result = fopen(dest, "r");
  v1 = result;
  if ( result )
  {
    fgets(s, 64, result);
    v2 = strchr(s, 32);
    if ( v2 )
      v2 += 2;
    v3 = strchr(s, 10);
    if ( v3 )
      *v3 = 0;
    sub_13970(0, "\njiffies = [ '");
    sub_13970(0, "%s", v2);
    sub_13954("' ];\n");
    return (FILE *)fclose(v1);
  }
  return result;
}
