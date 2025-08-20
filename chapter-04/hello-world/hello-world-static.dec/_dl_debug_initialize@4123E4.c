int *__fastcall dl_debug_initialize(__int64 a1, __int64 a2)
{
  if ( !a2 && !r_debug_extended )
    r_debug_extended = 1;
  if ( !qword_4966F8 )
  {
    if ( !a1 )
      a1 = qword_496708;
    qword_4966F8 = (__int64)dl_debug_state;
    qword_496708 = a1;
    qword_496710 = 0;
  }
  if ( !qword_4966F0 )
    atomic_store((unsigned __int64)(&dl_ns)[21 * a2], (unsigned __int64 *)&qword_4966F0);
  return &r_debug_extended;
}
