__int64 __fastcall stat64(const char *a1, struct stat *a2)
{
  return fstatat64(-100, a1, a2, 0);
}
