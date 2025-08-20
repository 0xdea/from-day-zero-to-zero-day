__int64 __fastcall alias_compare(_QWORD *a1, _QWORD *a2)
{
  return strcasecmp_l(*a1, *a2, nl_C_locobj);
}
