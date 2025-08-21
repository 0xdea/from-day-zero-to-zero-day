__int64 __fastcall sub_42D0B0(atomic_uint *a1)
{
  _DWORD *v1; // x21
  int v2; // w2
  int v4; // w20
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  unsigned __int64 v10; // x20
  int v11; // w0
  unsigned __int64 StatusReg; // x20
  int v14; // w1
  int v15; // w0
  int v16; // w21
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6
  int v22; // w1
  int v23; // w22
  int v24; // w20
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6

  v1 = (_DWORD *)((char *)a1 + 16);
  v2 = *((_DWORD *)a1 + 4);
  if ( (v2 & 0x7C) != 0 )
    JUMPOUT(0x42C9E0);
  if ( (v2 & 0x17F) == 0 )
    goto LABEL_3;
  if ( (*v1 & 0x7F) == 1 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v14 = *((_DWORD *)a1 + 2);
    v10 = StatusReg - 1856;
    if ( v14 != *(_DWORD *)(v10 + 0xD0) )
    {
      v16 = *v1 & 0x80;
      if ( v16 || !byte_490F08 || *(_DWORD *)a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, a1) )
          sub_406FC0(a1, v16, v17, v18, v19, v20, v21);
        v14 = *((_DWORD *)a1 + 2);
      }
      else
      {
        *(_DWORD *)a1 = 1;
      }
      if ( v14 )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x82u,
          (__int64)"___pthread_mutex_lock");
      *((_DWORD *)a1 + 1) = 1;
      goto LABEL_8;
    }
    v15 = *((_DWORD *)a1 + 1);
    if ( v15 != -1 )
    {
      *((_DWORD *)a1 + 1) = v15 + 1;
      return 0;
    }
    return 11;
  }
  else
  {
    if ( (*v1 & 0x7F) == 3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, a1) )
      {
        v23 = 2 * (*((_DWORD *)a1 + 5) + 5);
        if ( v23 > (__int16)dword_491908 )
          v23 = (__int16)dword_491908;
        if ( v23 <= 1 )
        {
          v23 = 1;
LABEL_43:
          v24 = v23;
          if ( _aarch64_cas4_acq(0, 1u, a1) )
            sub_406FC0(a1, *v1 & 0x80, v25, v26, v27, v28, v29);
        }
        else
        {
          v24 = 1;
          while ( *(_DWORD *)a1 || _aarch64_cas4_acq(0, 1u, a1) )
          {
            if ( v23 == ++v24 )
              goto LABEL_43;
          }
        }
        *((_DWORD *)a1 + 5) += (v24 - *((_DWORD *)a1 + 5)) / 8;
      }
      if ( *((_DWORD *)a1 + 2) )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0xA7u,
          (__int64)"___pthread_mutex_lock");
      goto LABEL_7;
    }
    v22 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0);
    if ( (*v1 & 0x7F) != 2 )
      sub_41F250(
        "PTHREAD_MUTEX_TYPE (mutex) == PTHREAD_MUTEX_ERRORCHECK_NP",
        (__int64)"pthread_mutex_lock.c",
        0xACu,
        (__int64)"___pthread_mutex_lock");
    if ( v22 != *((_DWORD *)a1 + 2) )
    {
LABEL_3:
      v4 = *v1 & 0x80;
      if ( v4 || !byte_490F08 || *(_DWORD *)a1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, a1) )
          sub_406FC0(a1, v4, v5, v6, v7, v8, v9);
      }
      else
      {
        *(_DWORD *)a1 = 1;
      }
      if ( *((_DWORD *)a1 + 2) )
        sub_41F250(
          "mutex->__data.__owner == 0",
          (__int64)"pthread_mutex_lock.c",
          0x5Eu,
          (__int64)"___pthread_mutex_lock");
LABEL_7:
      v10 = _ReadStatusReg(TPIDR_EL0) - 1856;
LABEL_8:
      v11 = *((_DWORD *)a1 + 3) + 1;
      *((_DWORD *)a1 + 2) = *(_DWORD *)(v10 + 0xD0);
      *((_DWORD *)a1 + 3) = v11;
      return 0;
    }
    return 35;
  }
}
