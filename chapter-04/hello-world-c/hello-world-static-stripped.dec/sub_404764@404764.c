__int64 __fastcall sub_404764(__int64 result)
{
  __int64 v1; // x2
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 v4; // x1

  v1 = *(_QWORD *)(result + 16);
  v2 = *(_QWORD *)(result + 24);
  v3 = *(_QWORD *)(result + 88);
  *(_DWORD *)result &= ~0x100u;
  v4 = *(_QWORD *)(result + 72);
  *(_QWORD *)(result + 8) = v4;
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 72) = v2;
  *(_QWORD *)(result + 88) = v1;
  return result;
}
