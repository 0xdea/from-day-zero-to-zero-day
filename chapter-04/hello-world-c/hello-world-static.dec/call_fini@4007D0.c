__int64 call_fini()
{
  signed __int64 i; // x19

  for ( i = ((char *)&cpu_list - (char *)_do_global_dtors_aux_fini_array_entry) >> 3; i; --i )
    _frame_dummy_init_array_entry[i]();
  return term_proc();
}
