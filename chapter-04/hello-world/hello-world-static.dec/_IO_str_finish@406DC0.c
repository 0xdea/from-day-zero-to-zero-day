__int64 *__fastcall IO_str_finish(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 && (*(_DWORD *)a1 & 1) == 0 )
  {
    free(v2);
    *(_QWORD *)(a1 + 56) = 0;
    return IO_default_finish((unsigned int *)a1);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
    return IO_default_finish((unsigned int *)a1);
  }
}
