unsigned __int64 __fastcall _deregister_frame_info_bases(_DWORD *a1)
{
  if ( a1 && *a1 )
    return _deregister_frame_info_bases_part_0((unsigned __int64)a1);
  else
    return 0;
}
