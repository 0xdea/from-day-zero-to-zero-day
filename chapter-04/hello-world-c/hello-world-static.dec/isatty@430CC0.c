bool __fastcall isatty(__int64 a1)
{
  _BYTE v2[64]; // [xsp+8h] [xbp-48h] BYREF

  return (unsigned int)tcgetattr(a1, v2, &_stack_chk_guard, 0) == 0;
}
