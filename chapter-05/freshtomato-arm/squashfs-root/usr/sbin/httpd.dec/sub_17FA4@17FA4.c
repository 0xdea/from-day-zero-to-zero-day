int sub_17FA4()
{
  _BYTE *v0; // r5
  _BYTE *v1; // r4
  int result; // r0
  int i; // r6
  _BYTE v4[480]; // [sp+10h] [bp-3E8h] BYREF
  _BYTE v5[520]; // [sp+1F0h] [bp-208h] BYREF

  v0 = v5;
  dword_30CA8 = 1;
  sub_17C48((int)v5);
  v1 = v4;
  sleep(1u);
  sub_17C48((int)v4);
  result = dword_30CAC;
  for ( i = 0; ; ++i )
  {
    v0 += 48;
    v1 += 48;
    if ( i == dword_30CA8 )
      break;
    *(float *)&result = ((double)(unsigned int)(*((_DWORD *)v1 - 5) - *((_DWORD *)v0 - 5))
                       + (double)(unsigned int)(*((_DWORD *)v1 - 7) - *((_DWORD *)v0 - 7)))
                      * 100.0
                      / ((double)(unsigned int)(*((_DWORD *)v1 - 7)
                                              + *((_DWORD *)v1 - 6)
                                              + *((_DWORD *)v1 - 5)
                                              + *((_DWORD *)v1 - 4)
                                              + *((_DWORD *)v1 - 3)
                                              + *((_DWORD *)v1 - 2)
                                              + *((_DWORD *)v1 - 1))
                       - (double)(unsigned int)(*((_DWORD *)v0 - 7)
                                              + *((_DWORD *)v0 - 6)
                                              + *((_DWORD *)v0 - 5)
                                              + *((_DWORD *)v0 - 4)
                                              + *((_DWORD *)v0 - 3)
                                              + *((_DWORD *)v0 - 2)
                                              + *((_DWORD *)v0 - 1)));
  }
  dword_30CAC = result;
  return result;
}
