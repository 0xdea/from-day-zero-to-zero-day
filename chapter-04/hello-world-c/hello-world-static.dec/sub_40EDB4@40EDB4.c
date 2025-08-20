_OWORD *__fastcall sub_40EDB4(_OWORD *result, __int128 *a2, unsigned __int64 a3)
{
  char *v3; // x4
  char *v4; // x5
  __int128 v5; // q0
  __int128 v6; // q1
  __int128 v7; // q2
  __int128 v8; // q3
  __int128 v9; // q4
  __int128 v10; // q5
  __int128 v11; // q7

  v3 = (char *)a2 + a3;
  v4 = (char *)result + a3;
  v5 = *a2;
  v6 = a2[1];
  v7 = *(__int128 *)((char *)a2 + a3 - 32);
  v8 = *(__int128 *)((char *)a2 + a3 - 16);
  if ( a3 > 0x40 )
  {
    v9 = a2[2];
    v10 = a2[3];
    if ( a3 > 0x60 )
    {
      v11 = *((_OWORD *)v3 - 3);
      *((_OWORD *)v4 - 4) = *((_OWORD *)v3 - 4);
      *((_OWORD *)v4 - 3) = v11;
    }
    *result = v5;
    result[1] = v6;
    result[2] = v9;
    result[3] = v10;
    *((_OWORD *)v4 - 2) = v7;
    *((_OWORD *)v4 - 1) = v8;
  }
  else
  {
    *result = v5;
    result[1] = v6;
    *((_OWORD *)v4 - 2) = v7;
    *((_OWORD *)v4 - 1) = v8;
  }
  return result;
}
