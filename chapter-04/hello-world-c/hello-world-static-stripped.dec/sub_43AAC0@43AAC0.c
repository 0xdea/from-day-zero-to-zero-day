__int64 __fastcall sub_43AAC0(__int64 result, const char *a2)
{
  unsigned int i; // w2
  __int64 v3; // x3

  if ( (byte_496824 & 1) != 0 )
  {
    if ( (*(_BYTE *)(result + 1088) & 1) != 0 )
      sub_43A960(*(const char **)(result + 8), a2);
    for ( i = *(_DWORD *)(result + 784) - 1; i != -1; --i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(result + 1032) + 8LL * i);
      if ( (*(_BYTE *)(v3 + 1088) & 1) != 0 )
        sub_43A960(*(const char **)(v3 + 8), a2);
    }
  }
  return result;
}
