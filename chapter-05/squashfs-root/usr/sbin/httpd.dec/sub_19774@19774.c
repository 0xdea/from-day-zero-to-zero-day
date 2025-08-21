void __fastcall sub_19774(const char *a1, const char *a2)
{
  FILE *v4; // r4

  v4 = fopen(a1, "w");
  if ( v4 )
  {
    fputs(a2, v4);
    fclose(v4);
  }
  else
  {
    perror(a1);
  }
}
