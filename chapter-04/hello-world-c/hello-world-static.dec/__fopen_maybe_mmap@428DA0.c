__int64 __fastcall _fopen_maybe_mmap(__int64 result)
{
  __int64 v1; // x4
  void *v2; // x2

  if ( (*(_DWORD *)(result + 116) & 1) != 0 && (*(_DWORD *)result & 8) != 0 )
  {
    v1 = *(_QWORD *)(result + 160);
    v2 = &unk_48E208;
    if ( *(int *)(result + 192) <= 0 )
      v2 = &unk_48E010;
    *(_QWORD *)(result + 216) = v2;
    *(_QWORD *)(v1 + 224) = &unk_48E208;
  }
  return result;
}
