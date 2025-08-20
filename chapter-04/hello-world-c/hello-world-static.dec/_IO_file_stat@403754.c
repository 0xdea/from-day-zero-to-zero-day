__int64 __fastcall IO_file_stat(__int64 a1)
{
  return fstat64(*(unsigned int *)(a1 + 112));
}
