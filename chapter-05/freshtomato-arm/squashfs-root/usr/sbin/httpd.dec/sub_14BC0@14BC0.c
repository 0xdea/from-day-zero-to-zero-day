int __fastcall sub_14BC0(const void *a1)
{
  if ( !memcmp(a1, &unk_25C9C, 4u) )
    return 1;
  if ( !memcmp(a1, &unk_25CA0, 4u) )
    return 2;
  if ( !memcmp(a1, &unk_25CA4, 4u) )
    return 8;
  if ( !memcmp(a1, &unk_25CA8, 4u) )
    return 16;
  if ( !memcmp(a1, &unk_25CAC, 4u) )
    return 4;
  return 0;
}
