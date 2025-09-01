int __fastcall sub_14C6C(const void *a1)
{
  if ( !memcmp(a1, &unk_25CB0, 4u) )
    return 1;
  if ( !memcmp(a1, &unk_25CB4, 4u) )
    return 2;
  if ( !memcmp(a1, &unk_25CB8, 4u) )
    return 8;
  if ( !memcmp(a1, &unk_25CBC, 4u) )
    return 16;
  if ( !memcmp(a1, &unk_25CC0, 4u) )
    return 4;
  return 0;
}
