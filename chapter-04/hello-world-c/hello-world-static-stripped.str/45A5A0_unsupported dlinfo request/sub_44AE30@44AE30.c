__int64 __fastcall sub_44AE30(__int64 *a1, long double a2)
{
  int v3; // w0
  __int64 v4; // x2
  __int64 result; // x0

  v3 = *((_DWORD *)a1 + 2);
  v4 = *a1;
  if ( v3 == 6 )
    return sub_4430C0(a1[2], *(_QWORD *)(v4 + 912));
  if ( v3 > 6 )
  {
    switch ( v3 )
    {
      case 10:
        result = 0;
        if ( *(_QWORD *)(v4 + 1176) )
          result = sub_412BE4(*a1);
        *(_QWORD *)a1[2] = result;
        break;
      case 11:
        result = *(unsigned __int16 *)(v4 + 768);
        *(_QWORD *)a1[2] = *(_QWORD *)(v4 + 752);
        *((_DWORD *)a1 + 6) = result;
        break;
      case 9:
        result = a1[2];
        *(_QWORD *)result = 0;
        *(_QWORD *)result = *(_QWORD *)(v4 + 1176);
        break;
      default:
        goto LABEL_20;
    }
  }
  else
  {
    if ( v3 == 4 || v3 == 5 )
      JUMPOUT(0x435D64);
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        result = a1[2];
        *(_QWORD *)result = v4;
        return result;
      }
LABEL_20:
      *((_DWORD *)a1 + 6) = -1;
      sub_432250(0, 0, a2, 0, "unsupported dlinfo request");
    }
    result = a1[2];
    *(_QWORD *)result = *(_QWORD *)(v4 + 48);
  }
  return result;
}
