const char *sub_B76C()
{
  int *v0; // r1

  if ( word_30CEC == 2 )
  {
    v0 = (int *)&unk_30CF0;
  }
  else if ( word_30CEC == 10 )
  {
    v0 = &dword_30CF4;
  }
  else
  {
    v0 = 0;
  }
  return inet_ntop((unsigned __int16)word_30CEC, v0, buf, 0x2Eu);
}
