__int64 __fastcall sub_4022A4(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned int v9; // w21
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  unsigned int v19; // w20
  __int64 v20; // x20
  _OWORD *v21; // x1

  v9 = *(_DWORD *)(a1 + 112);
  if ( v9 != -1 )
  {
    v9 = 0;
    if ( (*(_QWORD *)a1 & 0x808LL) == 0x800 )
    {
      if ( *(int *)(a1 + 192) <= 0 )
        v9 = sub_402270(
               a1,
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9);
      else
        v9 = sub_42A900(
               a1,
               *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL),
               (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL)) >> 2);
    }
    sub_406170(a1);
    v19 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x20) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v20 - (_QWORD)&unk_48DD70) > 0x92F )
        sub_401A50(v11, v12, v13, v14, v15, v16, v17, v18);
      v19 = (*(__int64 (__fastcall **)(__int64))(v20 + 136))(a1);
    }
    if ( *(int *)(a1 + 192) > 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 64LL) )
        sub_42A030(a1);
      sub_4299A0(a1, 0, 0, 0);
      v21 = *(_OWORD **)(a1 + 160);
      *v21 = 0u;
      v21[1] = 0u;
      v21[2] = 0u;
    }
    IO_setb(a1, 0, 0, 0);
    *(_OWORD *)(a1 + 8) = 0u;
    *(_OWORD *)(a1 + 24) = 0u;
    *(_OWORD *)(a1 + 40) = 0u;
    sub_404410(a1);
    if ( v19 )
      v9 = v19;
    *(_DWORD *)a1 = -72539124;
    *(_DWORD *)(a1 + 112) = -1;
    *(_QWORD *)(a1 + 144) = -1;
  }
  return v9;
}
