__int64 __fastcall sub_4071C0(int a1, __int64 *a2, sigset_t *a3)
{
  const sigset_t *v4; // x1
  __int64 v5; // x4
  unsigned int v6; // w0
  __int64 result; // x0
  __int128 v8; // q1
  __int128 v9; // q4
  __int128 v10; // q5
  __int128 v11; // q2
  __int128 v12; // q3
  __int128 v13; // q0
  __int128 v14; // q1
  __int64 v15; // x0
  _OWORD v16[8]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v17; // [xsp+88h] [xbp-8h]

  v17 = qword_48DD60;
  v4 = 0;
  if ( a2 )
  {
    v5 = *a2;
    if ( (*a2 & 0x180000000LL) != 0 )
    {
      v8 = *((_OWORD *)a2 + 1);
      v9 = *((_OWORD *)a2 + 2);
      v10 = *((_OWORD *)a2 + 3);
      v11 = *((_OWORD *)a2 + 4);
      v12 = *((_OWORD *)a2 + 5);
      v16[0] = *(_OWORD *)a2;
      v16[1] = v8;
      v4 = (const sigset_t *)v16;
      v13 = *((_OWORD *)a2 + 6);
      v14 = *((_OWORD *)a2 + 7);
      *(_QWORD *)&v16[0] = v5 & 0xFFFFFFFE7FFFFFFFLL;
      v16[2] = v9;
      v16[3] = v10;
      v16[4] = v11;
      v16[5] = v12;
      v16[6] = v13;
      v16[7] = v14;
    }
    else
    {
      v4 = (const sigset_t *)a2;
    }
  }
  v6 = linux_eabi_syscall(__NR_rt_sigprocmask, a1, v4, a3);
  if ( v6 > 0xFFFFF000 )
    result = -v6;
  else
    result = 0;
  if ( v17 != qword_48DD60 )
  {
    v15 = sub_412340(result, &qword_48DD60, 0, v17 - qword_48DD60);
    return sub_407280(v15);
  }
  return result;
}
