void sub_423D00()
{
  _ReadStatusReg(TPIDR_EL0);
  JUMPOUT(0x423D80);
}
