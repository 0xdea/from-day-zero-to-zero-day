__int64 __fastcall IO_file_close_mmap(__int64 a1)
{
  munmap(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  return _close_nocancel(*(unsigned int *)(a1 + 112));
}
