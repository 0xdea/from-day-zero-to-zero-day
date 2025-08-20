__int64 __fastcall sub_440264(__int64 a1)
{
  __int64 v2; // x21
  char *v3; // x20
  int v4; // w3
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned __int8 v7; // w2
  __int64 result; // x0
  unsigned __int64 v9; // x0
  _BYTE *v10; // x1

  v2 = a1 + 80;
  v3 = (char *)(a1 + 80);
  if ( (unsigned __int64)(a1 + 80) < *(_QWORD *)(a1 + 8) )
  {
    do
    {
      v4 = (unsigned __int8)*v3;
      if ( v4 == 44 )
      {
        v6 = *(_QWORD *)(a1 + 40);
        v7 = *(_BYTE *)(a1 + 57);
      }
      else if ( v4 == 46 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v7 = *(_BYTE *)(a1 + 56);
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 72);
        if ( !v5 || (unsigned __int8)(v4 - 48) > 9u )
        {
LABEL_13:
          v9 = *(_QWORD *)(a1 + 64);
          v10 = *(_BYTE **)(v9 + 8);
          if ( v10 == *(_BYTE **)(v9 + 16) )
          {
            sub_43E2F0(v9, *v3);
          }
          else
          {
            *(_QWORD *)(v9 + 8) = v10 + 1;
            *v10 = v4;
          }
          goto LABEL_9;
        }
        v6 = *(_QWORD *)(v5 + 8LL * (v4 - 7) + 56);
        v7 = *(_BYTE *)(*(_QWORD *)(v5 + 32) + v4 - 48 + 9LL);
      }
      if ( !v6 )
        goto LABEL_13;
      sub_43E650(*(_QWORD *)(a1 + 64), v6, v7);
LABEL_9:
      ++v3;
    }
    while ( *(_QWORD *)(a1 + 8) > (unsigned __int64)v3 );
  }
  result = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 32LL);
  if ( (_DWORD)result )
    *(_QWORD *)(a1 + 8) = v2;
  else
    *(_DWORD *)(a1 + 32) = 0;
  return result;
}
