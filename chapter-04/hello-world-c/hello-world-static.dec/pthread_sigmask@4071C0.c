__int64 __fastcall pthread_sigmask(int a1, __int64 *a2, sigset_t *a3)
{
  const sigset_t *v4; // x1
  __int64 v5; // x4
  unsigned int v6; // w0
  __int128 v8; // q1
  __int128 v9; // q4
  __int128 v10; // q5
  __int128 v11; // q2
  __int128 v12; // q3
  __int128 v13; // q0
  __int128 v14; // q1
  _OWORD v15[8]; // [xsp+8h] [xbp-88h] BYREF

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
      v15[0] = *(_OWORD *)a2;
      v15[1] = v8;
      v4 = (const sigset_t *)v15;
      v13 = *((_OWORD *)a2 + 6);
      v14 = *((_OWORD *)a2 + 7);
      *(_QWORD *)&v15[0] = v5 & 0xFFFFFFFE7FFFFFFFLL;
      v15[2] = v9;
      v15[3] = v10;
      v15[4] = v11;
      v15[5] = v12;
      v15[6] = v13;
      v15[7] = v14;
    }
    else
    {
      v4 = (const sigset_t *)a2;
    }
  }
  v6 = linux_eabi_syscall(__NR_rt_sigprocmask, a1, v4, a3);
  if ( v6 > 0xFFFFF000 )
    return -v6;
  else
    return 0;
}
