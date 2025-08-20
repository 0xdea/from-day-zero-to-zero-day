char *__fastcall sub_427E20(int *a1, __int64 a2, __int128 *a3, char a4)
{
  int v6; // w4
  int v9; // w0
  int v10; // w24
  __int128 v11; // q1
  unsigned int v12; // w20
  _DWORD *v14; // x19
  int v15; // w0
  unsigned __int64 v16; // x22
  __int64 v17; // x24
  unsigned __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  __int128 v40; // q1
  unsigned __int64 StatusReg; // x2
  signed int v42; // w0
  __int128 v43; // [xsp+10h] [xbp-100h] BYREF
  __int128 v44; // [xsp+20h] [xbp-F0h]
  _QWORD v45[4]; // [xsp+38h] [xbp-D8h] BYREF
  _BYTE v46[176]; // [xsp+58h] [xbp-B8h] BYREF
  __int64 v47; // [xsp+108h] [xbp-8h]

  v6 = a1[48];
  v47 = qword_48DD60;
  if ( v6 )
  {
    if ( v6 != -1 )
    {
      v12 = -1;
      goto LABEL_9;
    }
  }
  else
  {
    a1[48] = -1;
  }
  v9 = *a1;
  if ( (*a1 & 8) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *a1 = v9 | 0x20;
    v12 = -1;
    *(_DWORD *)(StatusReg + 40) = 9;
  }
  else if ( a2 )
  {
    if ( (a1[29] & 0x80) != 0 )
    {
      v45[1] = a1;
      v10 = 0;
      if ( (v9 & 0x8000) != 0 )
        goto LABEL_7;
      v45[0] = sub_43DFC0;
      sub_406E20((__int64)v45);
      if ( (*a1 & 0x8000) == 0 )
      {
        v16 = _ReadStatusReg(TPIDR_EL0);
        v17 = *((_QWORD *)a1 + 17);
        v18 = v16 - 1856;
        v19 = *(_QWORD *)(v17 + 8);
        if ( byte_490F08 && !v19 )
        {
          *(_DWORD *)v17 = 1;
          *(_QWORD *)(v17 + 8) = v18;
          v10 = 1;
          goto LABEL_7;
        }
        if ( v19 == v18 )
        {
          ++*(_DWORD *)(v17 + 4);
          v10 = 1;
LABEL_7:
          sub_43E5D0(v46, a1);
          v11 = a3[1];
          v43 = *a3;
          v44 = v11;
          sub_4262A0((__int64)v46, a2, (__int64 *)&v43, a4);
          v12 = sub_43E610(v46);
          if ( (*a1 & 0x8000) != 0 )
            goto LABEL_8;
          v14 = (_DWORD *)*((_QWORD *)a1 + 17);
          v15 = v14[1];
          if ( byte_490F08 )
          {
            if ( !v15 )
            {
              *v14 = 0;
              *((_QWORD *)v14 + 1) = 0;
              if ( !v10 )
                goto LABEL_9;
              goto LABEL_16;
            }
          }
          else if ( !v15 )
          {
            *((_QWORD *)v14 + 1) = 0;
            if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v14) > 1 )
              sub_407040(v14, v34, v35, v36, v37, v38, v39);
LABEL_8:
            if ( !v10 )
              goto LABEL_9;
LABEL_16:
            sub_406EA4((__int64)v45);
            goto LABEL_9;
          }
          v14[1] = v15 - 1;
          goto LABEL_8;
        }
        if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)a1 + 17)) )
          sub_406F40((_DWORD *)v17, v26, v27, v28, v29, v30, v31, v32, v33, v20, v21, v22, v23, v24, v25);
        *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) = v18;
      }
      v10 = 1;
      goto LABEL_7;
    }
    ((void (*)(void))sub_43E5D0)();
    v40 = a3[1];
    v43 = *a3;
    v44 = v40;
    sub_4262A0((__int64)v46, a2, (__int64 *)&v43, a4);
    v12 = sub_43E610(v46);
  }
  else
  {
    v12 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
LABEL_9:
  if ( v47 == qword_48DD60 )
    return (char *)v12;
  v42 = sub_412340();
  if ( (unsigned int)v42 <= 0x85 && (!v42 || word_45BCB0[v42]) )
    return (char *)&word_45BCB0[136] + word_45BCB0[v42];
  else
    return 0;
}
