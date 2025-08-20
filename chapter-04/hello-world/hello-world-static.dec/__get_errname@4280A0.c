char *__fastcall _get_errname(signed int a1)
{
  if ( (unsigned int)a1 <= 0x85 && (!a1 || sys_errnameidx[a1]) )
    return (char *)&sys_errname + sys_errnameidx[a1];
  else
    return 0;
}
