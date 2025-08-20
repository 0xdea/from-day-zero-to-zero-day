__int64 __fastcall sub_404FE4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v14; // x22
  unsigned int v15; // w2
  __int64 v16; // x0
  bool v17; // zf
  unsigned int v18; // w1
  __int64 v19; // x21
  __int64 result; // x0

  v14 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v14 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (*(unsigned int (__fastcall **)(__int64))(v14 + 96))(a1) != -1 )
  {
    v15 = *(_DWORD *)a1;
    v16 = *(_QWORD *)(a1 + 56);
    if ( a2 )
      v17 = a3 == 0;
    else
      v17 = 1;
    if ( v17 )
    {
      v18 = v15 | 2;
      v19 = a1 + 132;
      *(_DWORD *)a1 = v15 | 2;
      a2 = a1 + 131;
      if ( !v16 || (v15 & 1) != 0 )
        goto LABEL_11;
    }
    else
    {
      v18 = v15 & 0xFFFFFFFD;
      *(_DWORD *)a1 = v15 & 0xFFFFFFFD;
      v19 = a2 + a3;
      if ( !v16 || (v15 & 1) != 0 )
        goto LABEL_11;
    }
    sub_40C1A0(v16);
    v18 = *(_DWORD *)a1;
LABEL_11:
    result = a1;
    *(_DWORD *)a1 = v18 | 1;
    *(_QWORD *)(a1 + 56) = a2;
    *(_QWORD *)(a1 + 64) = v19;
    *(_OWORD *)(a1 + 8) = 0u;
    *(_OWORD *)(a1 + 24) = 0u;
    *(_OWORD *)(a1 + 40) = 0u;
    return result;
  }
  return 0;
}
