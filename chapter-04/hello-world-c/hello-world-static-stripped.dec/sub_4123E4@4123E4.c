int *__fastcall sub_4123E4(__int64 a1, __int64 a2)
{
  if ( !a2 && !dword_4966E8 )
    dword_4966E8 = 1;
  if ( !qword_4966F8 )
  {
    if ( !a1 )
      a1 = qword_496708;
    qword_4966F8 = (__int64)sub_412360;
    qword_496708 = a1;
    qword_496710 = 0;
  }
  if ( !qword_4966F0 )
    atomic_store((unsigned __int64)(&off_4914A8)[21 * a2], (unsigned __int64 *)&qword_4966F0);
  return &dword_4966E8;
}
