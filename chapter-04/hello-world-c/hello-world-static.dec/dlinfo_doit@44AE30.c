void __fastcall dlinfo_doit(__int64 a1)
{
  int v2; // w0
  __int64 v3; // x2
  _QWORD *v4; // x0
  int v5; // w0
  __int64 addr_soft; // x0

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( v2 == 6 )
  {
    strcpy(*(_QWORD **)(a1 + 16), *(_QWORD *)(v3 + 912));
  }
  else if ( v2 > 6 )
  {
    switch ( v2 )
    {
      case 10:
        addr_soft = 0;
        if ( *(_QWORD *)(v3 + 1176) )
          addr_soft = dl_tls_get_addr_soft(*(_QWORD *)a1);
        **(_QWORD **)(a1 + 16) = addr_soft;
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
    switch ( v2 )
    {
      case 4:
        dl_rtld_di_serinfo(*(__int64 **)a1, *(_QWORD *)(a1 + 16), 0);
        break;
      case 5:
        dl_rtld_di_serinfo(*(__int64 **)a1, *(_QWORD *)(a1 + 16), 1);
        break;
      case 1:
        **(_QWORD **)(a1 + 16) = *(_QWORD *)(v3 + 48);
        break;
      case 2:
        **(_QWORD **)(a1 + 16) = v3;
        return;
      default:
LABEL_20:
        *(_DWORD *)(a1 + 24) = -1;
        dl_signal_error(0, 0, 0, "unsupported dlinfo request");
    }
  }
}
