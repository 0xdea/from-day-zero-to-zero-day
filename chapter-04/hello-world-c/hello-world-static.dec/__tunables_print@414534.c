__int64 _tunables_print()
{
  const char *v0; // x19
  __int64 result; // x0
  unsigned int v2; // w0
  const char *v3; // x2
  int v4; // w1

  v0 = "glibc.rtld.nns";
  do
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v0 + 12) == 3 && !*((_QWORD *)v0 + 11) )
      {
        result = dl_printf("%s:\n", v0);
        goto LABEL_4;
      }
      dl_printf("%s: ", v0);
      v2 = *((_DWORD *)v0 + 12);
      if ( v2 != 2 )
        break;
      result = dl_printf(
                 "0x%zx (min: 0x%zx, max: 0x%zx)\n",
                 *((_QWORD *)v0 + 11),
                 *((_QWORD *)v0 + 7),
                 *((_QWORD *)v0 + 8));
LABEL_4:
      v0 += 128;
      if ( v0 == (const char *)&dl_random )
        return result;
    }
    if ( v2 <= 2 )
    {
      if ( v2 )
        result = dl_printf(
                   "0x%lx (min: 0x%lx, max: 0x%lx)\n",
                   *((_QWORD *)v0 + 11),
                   *((_QWORD *)v0 + 7),
                   *((_QWORD *)v0 + 8));
      else
        result = dl_printf("%d (min: %d, max: %d)\n", *((_DWORD *)v0 + 22), *((_DWORD *)v0 + 14), *((_DWORD *)v0 + 16));
      goto LABEL_4;
    }
    v3 = (const char *)*((_QWORD *)v0 + 11);
    v4 = *((_DWORD *)v0 + 24);
    v0 += 128;
    result = dl_printf("%.*s\n", v4, v3);
  }
  while ( v0 != (const char *)&dl_random );
  return result;
}
