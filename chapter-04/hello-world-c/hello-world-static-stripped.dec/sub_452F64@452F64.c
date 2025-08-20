_DWORD *__fastcall sub_452F64(_DWORD *result, __int64 a2)
{
  unsigned __int64 v3[2]; // [xsp+20h] [xbp+20h] BYREF

  if ( result )
  {
    if ( *result )
    {
      *(_QWORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 24) = result;
      *(_QWORD *)(a2 + 32) = 2040;
      *(_OWORD *)a2 = xmmword_45A900;
      sub_4514F0((__int64)&unk_496D08, (unsigned __int64)result, 1, a2);
      sub_452660(a2, v3);
      return (_DWORD *)sub_4514F0((__int64)&qword_496D20, v3[0], v3[1] - v3[0], a2);
    }
  }
  return result;
}
