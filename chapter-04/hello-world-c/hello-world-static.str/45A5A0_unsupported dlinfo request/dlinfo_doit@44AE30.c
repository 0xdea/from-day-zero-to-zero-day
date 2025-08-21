__int64 __fastcall dlinfo_doit(__int64 *a1)
{
  int v2; // w0
  __int64 v3; // x2
  __int64 result; // x0

  v2 = *((_DWORD *)a1 + 2);
  v3 = *a1;
  if ( v2 == 6 )
    return strcpy(a1[2], *(_QWORD *)(v3 + 912));
  if ( v2 > 6 )
  {
    switch ( v2 )
    {
      case 10:
        result = 0;
        if ( *(_QWORD *)(v3 + 1176) )
          result = dl_tls_get_addr_soft(*a1);
        *(_QWORD *)a1[2] = result;
        break;
      case 11:
        result = *(unsigned __int16 *)(v3 + 768);
        *(_QWORD *)a1[2] = *(_QWORD *)(v3 + 752);
        *((_DWORD *)a1 + 6) = result;
        break;
      case 9:
        result = a1[2];
        *(_QWORD *)result = 0;
        *(_QWORD *)result = *(_QWORD *)(v3 + 1176);
        break;
      default:
        goto LABEL_20;
    }
  }
  else
  {
    switch ( v2 )
    {
      case 4:
        return dl_rtld_di_serinfo((__int64 *)*a1, a1[2], 0);
      case 5:
        return dl_rtld_di_serinfo((__int64 *)*a1, a1[2], 1);
      case 1:
        result = a1[2];
        *(_QWORD *)result = *(_QWORD *)(v3 + 48);
        break;
      case 2:
        result = a1[2];
        *(_QWORD *)result = v3;
        return result;
      default:
LABEL_20:
        *((_DWORD *)a1 + 6) = -1;
        dl_signal_error(0, 0, 0, "unsupported dlinfo request");
    }
  }
  return result;
}
