long double __fastcall sub_44AE30(__int64 a1)
{
  int v2; // w0
  __int64 v3; // x2
  _QWORD *v4; // x0
  int v5; // w0
  __int64 v6; // x0
  long double result; // q0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( v2 == 6 )
    return sub_4430C0((_QWORD *)*(_QWORD *)(a1 + 16), *(_QWORD *)(v3 + 912));
  if ( v2 > 6 )
  {
    switch ( v2 )
    {
      case 10:
        v6 = 0;
        if ( *(_QWORD *)(v3 + 1176) )
          v6 = sub_412BE4(*(_QWORD *)a1);
        **(_QWORD **)(a1 + 16) = v6;
        break;
      case 11:
        v5 = *(unsigned __int16 *)(v3 + 768);
        **(_QWORD **)(a1 + 16) = *(_QWORD *)(v3 + 752);
        *(_DWORD *)(a1 + 24) = v5;
        break;
      case 9:
        v4 = *(_QWORD **)(a1 + 16);
        *v4 = 0;
        *v4 = *(_QWORD *)(v3 + 1176);
        break;
      default:
        goto LABEL_20;
    }
  }
  else
  {
    if ( v2 == 4 || v2 == 5 )
      JUMPOUT(0x435D64);
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
      {
        **(_QWORD **)(a1 + 16) = v3;
        return result;
      }
LABEL_20:
      *(_DWORD *)(a1 + 24) = -1;
      sub_432250(0, 0, 0, "unsupported dlinfo request");
    }
    **(_QWORD **)(a1 + 16) = *(_QWORD *)(v3 + 48);
  }
  return result;
}
