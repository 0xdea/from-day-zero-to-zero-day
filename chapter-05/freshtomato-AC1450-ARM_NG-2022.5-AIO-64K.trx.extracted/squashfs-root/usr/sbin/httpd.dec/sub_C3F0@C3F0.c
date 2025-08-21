FILE *__fastcall sub_C3F0(const char *a1)
{
  FILE *result; // r0
  FILE *v2; // r4
  int v3; // r1
  _BYTE v4[1040]; // [sp+0h] [bp-410h] BYREF

  result = fopen(a1, "r");
  v2 = result;
  if ( result )
  {
    while ( 1 )
    {
      v3 = fread(v4, 1u, 0x400u, v2);
      if ( v3 <= 0 )
        break;
      sub_138EC(v4, v3);
    }
    return (FILE *)fclose(v2);
  }
  return result;
}
