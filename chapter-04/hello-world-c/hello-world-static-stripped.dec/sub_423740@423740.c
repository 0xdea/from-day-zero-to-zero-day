void sub_423740()
{
  _ReadStatusReg(TPIDR_EL0);
  JUMPOUT(0x4237C0);
}
