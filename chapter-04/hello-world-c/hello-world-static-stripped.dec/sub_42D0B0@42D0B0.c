__int64 __fastcall sub_42D0B0(_DWORD *a1)
{
  _DWORD *v1; // x21
  int v2; // w2
  int v4; // w20
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  unsigned __int64 v18; // x20
  int v19; // w0
  unsigned __int64 StatusReg; // x20
  int v22; // w1
  int v23; // w0
  int v24; // w21
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  double v30; // d0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7
  int v38; // w1
  int v39; // w22
  int v40; // w20
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  double v46; // d0
  double v47; // d1
  double v48; // d2
  double v49; // d3
  double v50; // d4
  double v51; // d5
  double v52; // d6
  double v53; // d7

  v1 = a1 + 4;
  v2 = a1[4];
  if ( (v2 & 0x7C) != 0 )
    JUMPOUT(0x42C9E0);
  if ( (v2 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (*v1 & 0x7F) == 1 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v22 = a1[2];
    v18 = StatusReg - 1856;
    if ( v22 != *(_DWORD *)(v18 + 0xD0) )
    {
      v24 = *v1 & 0x80;
      if ( v24 || !byte_490F08 || *a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          sub_406FC0(a1, v24, v30, v31, v32, v33, v34, v35, v36, v37, v25, v26, v27, v28, v29);
        v22 = a1[2];
      }
      else
      {
        *a1 = 1;
      }
      if ( v22 )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x82u,
          (__int64)"___pthread_mutex_lock");
      a1[1] = 1;
      goto LABEL_8;
    }
    v23 = a1[1];
    if ( v23 != -1 )
    {
      a1[1] = v23 + 1;
      return 0;
    }
    return 11;
  }
  else
  {
    if ( (*v1 & 0x7F) == 3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
      {
        v39 = 2 * (a1[5] + 5);
        if ( v39 > (__int16)dword_491908 )
          v39 = (__int16)dword_491908;
        if ( v39 <= 1 )
        {
          v39 = 1;
LABEL_43:
          v40 = v39;
          if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
            sub_406FC0(a1, *v1 & 0x80, v46, v47, v48, v49, v50, v51, v52, v53, v41, v42, v43, v44, v45);
        }
        else
        {
          v40 = 1;
          while ( *a1 || _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          {
            if ( v39 == ++v40 )
              goto LABEL_43;
          }
        }
        a1[5] += (v40 - a1[5]) / 8;
      }
      if ( a1[2] )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0xA7u,
          (__int64)"___pthread_mutex_lock");
      goto LABEL_7;
    }
    v38 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0);
    if ( (*v1 & 0x7F) != 2 )
      sub_41F250(
        "PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
        (__int64)"pthread_mutex_lock.c",
        0xACu,
        (__int64)"___pthread_mutex_lock");
    if ( v38 != a1[2] )
    {
LABEL_3:
      v4 = *v1 & 0x80;
      if ( v4 || !byte_490F08 || *a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
          sub_406FC0(a1, v4, v10, v11, v12, v13, v14, v15, v16, v17, v5, v6, v7, v8, v9);
      }
      else
      {
        *a1 = 1;
      }
      if ( a1[2] )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x5Eu,
          (__int64)"___pthread_mutex_lock");
LABEL_7:
      v18 = _ReadStatusReg(TPIDR_EL0) - 1856;
LABEL_8:
      v19 = a1[3] + 1;
      a1[2] = *(_DWORD *)(v18 + 0xD0);
      a1[3] = v19;
      return 0;
    }
    return 35;
  }
}
