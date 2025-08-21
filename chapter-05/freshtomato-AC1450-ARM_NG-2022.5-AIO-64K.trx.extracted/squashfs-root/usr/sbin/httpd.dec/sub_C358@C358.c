int __fastcall sub_C358(unsigned int *a1)
{
  unsigned int v2; // r1
  int result; // r0
  char v4[2064]; // [sp+0h] [bp-810h] BYREF

  do
  {
    v2 = *a1;
    if ( (int)*a1 <= 0 )
      return 0;
    if ( v2 >= 0x800 )
      v2 = 2048;
    result = sub_1389C(v4, v2);
    if ( !result )
      return result;
    *a1 -= strlen(v4);
  }
  while ( strcmp(v4, "\n") && strcmp(v4, "\r\n") );
  return 1;
}
