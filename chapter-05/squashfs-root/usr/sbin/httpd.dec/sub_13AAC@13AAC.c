int __fastcall sub_13AAC(FILE *stream, int a2)
{
  int result; // r0
  char v5[2072]; // [sp+0h] [bp-818h] BYREF

  while ( 1 )
  {
    result = fread(v5, 1u, 0x7FFu, stream);
    if ( result <= 0 )
      break;
    v5[result] = 0;
    if ( a2 == 1 )
    {
      tty_vhangup_self_1((int)v5);
    }
    else if ( a2 == 2 )
    {
      tty_vhangup_self();
    }
    else
    {
      sub_13954(v5);
    }
  }
  return result;
}
