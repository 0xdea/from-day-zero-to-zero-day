__int64 sub_411544()
{
  int v0; // w0
  __int64 result; // x0
  __int64 v2; // x0
  cpu_set_t v3[7]; // [xsp+8h] [xbp-1008h] BYREF
  __int64 v4; // [xsp+400h] [xbp-C10h]
  __int64 v5; // [xsp+1008h] [xbp-8h]

  v4 = 0;
  v5 = qword_48DD60;
  v0 = linux_eabi_syscall(__NR_sched_getaffinity, 0, 0x1000u, v3);
  if ( v0 > 0 )
    result = sub_430410(v0, v3);
  else
    result = (unsigned __int8)(v0 == -22) << 15;
  if ( v5 != qword_48DD60 )
  {
    v2 = sub_412340(result, &qword_48DD60, 0, v5 - qword_48DD60);
    return sub_4115D4(v2);
  }
  return result;
}
