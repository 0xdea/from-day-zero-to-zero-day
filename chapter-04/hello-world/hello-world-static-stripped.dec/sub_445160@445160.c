__int64 __fastcall sub_445160(__int64 result, _QWORD *a2)
{
  unsigned __int64 v2; // x2
  unsigned __int64 v3; // x4

  *a2 = *(_QWORD *)(result + 920);
  a2[1] = *(_QWORD *)(result + 928);
  a2[2] = result;
  v2 = *(_QWORD *)(result + 752);
  v3 = v2 + 56LL * *(unsigned __int16 *)(result + 768);
  if ( v2 >= v3 )
  {
LABEL_6:
    a2[3] = 0;
  }
  else
  {
    while ( *(_DWORD *)v2 != 1685382480 )
    {
      v2 += 56LL;
      if ( v3 <= v2 )
        goto LABEL_6;
    }
    result = *(_QWORD *)(v2 + 16) + *(_QWORD *)result;
    a2[3] = result;
  }
  return result;
}
