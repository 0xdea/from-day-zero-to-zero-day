void sub_423D24()
{
  _ReadStatusReg(TPIDR_EL0);
  JUMPOUT(0x423D80);
}
