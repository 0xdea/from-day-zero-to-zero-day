__int64 __fastcall sub_402924(
        int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  int v10; // w0
  unsigned __int8 *v11; // x1
  int *v12; // x22
  int v13; // w0
  unsigned __int64 v14; // x20
  __int64 v15; // x21
  unsigned __int64 v16; // x20
  int v17; // w1
  __int64 v18; // x2
  int *v19; // x1
  int v20; // w0
  int v21; // w0
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 v30; // x21
  __int64 v31; // x1
  __int64 v32; // x0
  bool v33; // zf
  __int64 v34; // x2
  __int64 result; // x0
  int v36; // w0
  int v37; // w1
  int v38; // w0
  __int64 v39; // x0
  __int64 v40; // x21
  unsigned __int64 StatusReg; // x2

  v10 = *a1;
  if ( (v10 & 0x10) != 0 )
    return 0xFFFFFFFFLL;
  if ( (v10 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *a1 = v10 | 0x20;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(StatusReg + 40) = 9;
    return result;
  }
  v11 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int64)v11 < *((_QWORD *)a1 + 2) )
    return *v11;
  if ( *((_QWORD *)a1 + 7) )
  {
    if ( (v10 & 0x202) == 0 )
      goto LABEL_18;
  }
  else
  {
    v39 = *((_QWORD *)a1 + 9);
    if ( v39 )
    {
      sub_40C1A0(v39);
      *a1 &= ~0x100u;
    }
    sub_404C44(a1);
    if ( (*a1 & 0x202) == 0 )
      goto LABEL_18;
  }
  v12 = off_4905B8;
  v13 = *off_4905B8;
  if ( (*off_4905B8 & 0x8000) != 0 )
  {
    if ( (*off_4905B8 & 0x288) != 0x280 )
      goto LABEL_18;
    goto LABEL_42;
  }
  v14 = _ReadStatusReg(TPIDR_EL0);
  v15 = *((_QWORD *)v12 + 17);
  v16 = v14 - 1856;
  v17 = (unsigned __int8)byte_490F08;
  v18 = *(_QWORD *)(v15 + 8);
  if ( byte_490F08 && !v18 )
  {
    *(_DWORD *)v15 = 1;
    *(_QWORD *)(v15 + 8) = v16;
    if ( (v13 & 0x288) != 0x280 )
    {
      v21 = *(_DWORD *)(v15 + 4);
LABEL_39:
      if ( !v21 )
      {
        *(_DWORD *)v15 = 0;
        *(_QWORD *)(v15 + 8) = 0;
        goto LABEL_18;
      }
      goto LABEL_46;
    }
    goto LABEL_42;
  }
  if ( v16 != v18 )
  {
    if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v12 + 17)) )
      sub_406F40(v15);
    v19 = off_4905B8;
    v20 = *off_4905B8 & 0x288;
    *(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) = v16;
    if ( v20 != 640 )
      goto LABEL_12;
    goto LABEL_43;
  }
  ++*(_DWORD *)(v15 + 4);
  if ( (v13 & 0x288) == 0x280 )
  {
LABEL_42:
    v19 = v12;
LABEL_43:
    v40 = *((_QWORD *)v19 + 27);
    if ( (unsigned __int64)(v40 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
    (*(void (__fastcall **)(int *, __int64))(v40 + 0x18))(off_4905B8, 0xFFFFFFFFLL);
LABEL_12:
    if ( (*v12 & 0x8000) != 0 )
      goto LABEL_18;
    v15 = *((_QWORD *)v12 + 17);
    v17 = (unsigned __int8)byte_490F08;
  }
  v21 = *(_DWORD *)(v15 + 4);
  if ( v17 )
    goto LABEL_39;
  if ( v21 )
  {
LABEL_46:
    *(_DWORD *)(v15 + 4) = v21 - 1;
    goto LABEL_18;
  }
  *(_QWORD *)(v15 + 8) = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v15) > 1 )
    sub_407040(v15);
LABEL_18:
  sub_4047E0(a1);
  v30 = *((_QWORD *)a1 + 27);
  v31 = *((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 1) = v31;
  *((_QWORD *)a1 + 2) = v31;
  *((_QWORD *)a1 + 3) = v31;
  *((_QWORD *)a1 + 4) = v31;
  *((_QWORD *)a1 + 5) = v31;
  *((_QWORD *)a1 + 6) = v31;
  if ( (unsigned __int64)(v30 - (_QWORD)&unk_48DD70) > 0x92F )
  {
    sub_401A50(v22, v23, v24, v25, v26, v27, v28, v29);
    v31 = *((_QWORD *)a1 + 7);
  }
  v32 = (*(__int64 (__fastcall **)(int *, __int64, __int64))(v30 + 112))(a1, v31, *((_QWORD *)a1 + 8) - v31);
  v33 = v32 == 0;
  if ( v32 <= 0 )
  {
    v36 = *a1;
    *((_QWORD *)a1 + 18) = -1;
    v37 = v36 | 0x10;
    v38 = v36 | 0x20;
    if ( v33 )
      v38 = v37;
    *a1 = v38;
    return 0xFFFFFFFFLL;
  }
  v34 = *((_QWORD *)a1 + 18);
  *((_QWORD *)a1 + 2) += v32;
  if ( v34 != -1 )
    *((_QWORD *)a1 + 18) = v34 + v32;
  return **((unsigned __int8 **)a1 + 1);
}
