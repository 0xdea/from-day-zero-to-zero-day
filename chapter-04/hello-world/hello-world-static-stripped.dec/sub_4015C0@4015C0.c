__int64 sub_4015C0()
{
  __int64 v0; // x19
  int *v1; // x20
  int *v2; // x0
  int v3; // w1
  __int64 v4; // x23
  _BYTE *v5; // x1
  unsigned __int64 v6; // x19
  __int64 v7; // x20
  int v8; // w0
  unsigned __int64 StatusReg; // x23
  __int64 v11; // x24
  unsigned __int64 v12; // x23
  __int64 v13; // x0

  v0 = ifunc_40DFD0();
  v1 = off_4905B8;
  if ( (*off_4905B8 & 0x8000) != 0 )
    goto LABEL_2;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v11 = *((_QWORD *)v1 + 17);
  v12 = StatusReg - 1856;
  v13 = *(_QWORD *)(v11 + 8);
  if ( byte_490F08 && !v13 )
  {
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 8) = v12;
LABEL_2:
    v2 = v1;
    goto LABEL_3;
  }
  if ( v12 == v13 )
  {
    ++*(_DWORD *)(v11 + 4);
    goto LABEL_2;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v1 + 17)) )
    sub_406F40(v11);
  v2 = off_4905B8;
  *(_QWORD *)(*((_QWORD *)v1 + 17) + 8LL) = v12;
LABEL_3:
  v3 = v2[48];
  if ( v3 )
  {
    if ( v3 != -1 )
    {
LABEL_18:
      LODWORD(v6) = -1;
      goto LABEL_12;
    }
  }
  else
  {
    v2[48] = -1;
  }
  v4 = *((_QWORD *)v2 + 27);
  if ( (unsigned __int64)(v4 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50();
  if ( v0 != (*(__int64 (**)(void))(v4 + 0x38))() )
    goto LABEL_18;
  v5 = (_BYTE *)*((_QWORD *)off_4905B8 + 5);
  if ( (unsigned __int64)v5 >= *((_QWORD *)off_4905B8 + 6) )
  {
    if ( (unsigned int)sub_4048E0(off_4905B8, 10) == -1 )
    {
      LODWORD(v6) = -1;
      goto LABEL_12;
    }
  }
  else
  {
    *((_QWORD *)off_4905B8 + 5) = v5 + 1;
    *v5 = 10;
  }
  v6 = v0 + 1;
  if ( v6 > 0x7FFFFFFF )
    LODWORD(v6) = 0x7FFFFFFF;
LABEL_12:
  if ( (*v1 & 0x8000) != 0 )
    return (unsigned int)v6;
  v7 = *((_QWORD *)v1 + 17);
  v8 = *(_DWORD *)(v7 + 4);
  if ( byte_490F08 )
  {
    if ( !v8 )
    {
      *(_DWORD *)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0;
      return (unsigned int)v6;
    }
  }
  else if ( !v8 )
  {
    *(_QWORD *)(v7 + 8) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v7) > 1 )
      sub_407040(v7);
    return (unsigned int)v6;
  }
  *(_DWORD *)(v7 + 4) = v8 - 1;
  return (unsigned int)v6;
}
