__int64 sub_444020()
{
  __int64 result; // x0
  struct rlimit64 v1; // [xsp+8h] [xbp-18h] BYREF
  __int64 v2; // [xsp+18h] [xbp-8h]

  v2 = qword_48DD60;
  if ( (sub_4310B0(RLIMIT_NOFILE, &v1) & 0x80000000) != 0LL )
    result = 256;
  else
    result = LODWORD(v1.rlim_cur);
  if ( v2 != qword_48DD60 )
  {
    sub_412340();
    JUMPOUT(0x4440C0);
  }
  return result;
}
