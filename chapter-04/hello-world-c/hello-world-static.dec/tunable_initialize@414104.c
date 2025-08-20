__int64 __fastcall tunable_initialize(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // w0
  __int64 v8; // x0
  __int64 v9; // [xsp+38h] [xbp+38h] BYREF
  unsigned __int64 v10; // [xsp+40h] [xbp+40h] BYREF
  __int64 v11; // [xsp+48h] [xbp+48h]

  v4 = *(_DWORD *)(a1 + 48);
  v10 = 0;
  v11 = 0;
  if ( v4 == 3 )
  {
    v10 = a2;
    v11 = a3;
LABEL_3:
    do_tunable_update_val(a1, &v10, 0, 0);
    return 1;
  }
  v9 = 0;
  v8 = dl_strtoul(a2, &v9);
  if ( v9 == a2 + a3 )
  {
    v10 = v8;
    goto LABEL_3;
  }
  return 0;
}
