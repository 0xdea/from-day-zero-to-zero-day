__int64 __fastcall IO_file_seek(__int64 a1, __int64 a2, __int64 a3)
{
  return lseek64(*(unsigned int *)(a1 + 112), a2, a3);
}
