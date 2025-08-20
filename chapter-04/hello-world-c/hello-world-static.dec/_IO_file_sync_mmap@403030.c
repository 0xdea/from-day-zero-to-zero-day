__int64 __fastcall IO_file_sync_mmap(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 - *(_QWORD *)(a1 + 56);
  if ( v2 == *(_QWORD *)(a1 + 16)
    || (v3 = lseek64(*(unsigned int *)(a1 + 112), v3, 0), *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 56) == v3) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    result = 0;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 144) = v3;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x20u;
  }
  return result;
}
