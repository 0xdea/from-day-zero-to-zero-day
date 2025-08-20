unsigned __int64 __fastcall sub_43CB64(
        int a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  int v11; // w0

  if ( a1 )
  {
    if ( a1 == 2 )
      sub_443710(a2);
  }
  else
  {
    ((void (__fastcall *)(unsigned __int64))loc_4107D0)(a2);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      sub_4118C0(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16));
      v11 = *(_DWORD *)(a2 + 24);
    }
  }
  else
  {
    sub_40C1A0(*(_QWORD *)(a2 + 8), a3, a4, a5, a6, a7, a8, a9, a10);
    v11 = *(_DWORD *)(a2 + 24);
  }
  if ( v11 != 2 )
    sub_40C1A0(*(_QWORD *)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return sub_40C1A0(a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
