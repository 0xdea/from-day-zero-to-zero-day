__int64 __fastcall IO_str_underflow(__int64 a1)
{
  unsigned __int64 v1; // x3
  unsigned __int8 *v2; // x1
  __int64 v4; // x4

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(unsigned __int8 **)(a1 + 40);
  if ( (unsigned __int64)v2 > v1 )
  {
    v1 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 16) = v2;
  }
  if ( (*(_QWORD *)a1 & 0xC00LL) == 0xC00 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)a1 &= ~0x800u;
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 40) = v4;
  }
  else
  {
    v2 = *(unsigned __int8 **)(a1 + 8);
  }
  if ( v1 <= (unsigned __int64)v2 )
    return 0xFFFFFFFFLL;
  else
    return *v2;
}
