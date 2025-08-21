__int64 __fastcall IO_default_doallocate(unsigned int *a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  unsigned int v4; // w1
  __int64 v5; // x0

  v2 = malloc(0x2000);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = v2;
  v4 = *a1;
  v5 = *((_QWORD *)a1 + 7);
  if ( v5 )
  {
    if ( (v4 & 1) == 0 )
    {
      free(v5);
      v4 = *a1;
    }
  }
  *a1 = v4 & 0xFFFFFFFE;
  *((_QWORD *)a1 + 7) = v3;
  *((_QWORD *)a1 + 8) = v3 + 0x2000;
  return 1;
}
