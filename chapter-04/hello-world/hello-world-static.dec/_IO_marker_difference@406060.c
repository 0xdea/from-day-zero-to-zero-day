__int64 __fastcall IO_marker_difference(__int64 a1, __int64 a2)
{
  return (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)(a2 + 16));
}
