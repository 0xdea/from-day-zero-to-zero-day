unsigned __int64 __fastcall dl_unmap(__int64 a1)
{
  return munmap(*(void **)(a1 + 920), *(_QWORD *)(a1 + 928) - *(_QWORD *)(a1 + 920));
}
