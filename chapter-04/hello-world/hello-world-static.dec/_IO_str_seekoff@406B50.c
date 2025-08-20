__int64 __fastcall IO_str_seekoff(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // w3
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x24
  __int64 v13; // x21
  __int64 v15; // x21
  __int64 v16; // x21
  __int64 v18; // x21

  v7 = *(_DWORD *)a1;
  v10 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  if ( !a4 )
  {
    a4 = v7 & 0x400;
    if ( (v7 & 0x400) != 0 )
    {
      if ( (v7 & 0x800) != 0 )
      {
        a4 = 2;
        if ( (v7 & 0x100) != 0 )
          goto LABEL_35;
      }
      else
      {
        if ( v9 <= v10 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          LOBYTE(a4) = 1;
          if ( *(_QWORD *)(a1 + 16) >= v9 )
            v9 = *(_QWORD *)(a1 + 16);
          v12 = v9 - v11;
          if ( a3 )
            goto LABEL_8;
LABEL_50:
          if ( a2 < 0 )
            goto LABEL_60;
          v15 = a2;
          goto LABEL_15;
        }
        a4 = 1;
        if ( (v7 & 0x100) != 0 )
        {
LABEL_35:
          v11 = *(_QWORD *)(a1 + 80);
          *(_DWORD *)a1 = v7 & 0xFFFFF7FF;
          *(_QWORD *)(a1 + 8) = v9;
          *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)(a1 + 24) = v11;
          if ( a4 )
          {
LABEL_36:
            v15 = -1;
            if ( *(_QWORD *)(a1 + 16) >= v9 )
              v9 = *(_QWORD *)(a1 + 16);
            v12 = v9 - v11;
            if ( (a4 & 1) == 0 )
              goto LABEL_17;
            goto LABEL_39;
          }
          return *(_QWORD *)(a1 + 8) - v11;
        }
      }
LABEL_32:
      v11 = *(_QWORD *)(a1 + 56);
      *(_DWORD *)a1 = v7 & 0xFFFFF7FF;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = v11;
      if ( a4 )
        goto LABEL_36;
      return *(_QWORD *)(a1 + 8) - v11;
    }
    if ( v9 <= v10 && (v7 & 0x800) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 24);
      return *(_QWORD *)(a1 + 8) - v11;
    }
LABEL_31:
    if ( (v7 & 0x100) != 0 )
      goto LABEL_35;
    goto LABEL_32;
  }
  if ( v9 > v10 || (v7 & 0x800) != 0 )
    goto LABEL_31;
  v15 = -1;
  v11 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) >= v9 )
    v9 = *(_QWORD *)(a1 + 16);
  v12 = v9 - v11;
  if ( (a4 & 1) == 0 )
    goto LABEL_17;
LABEL_39:
  if ( !a3 )
    goto LABEL_50;
LABEL_8:
  v13 = v12;
  if ( a3 == 1 )
    v13 = *(_QWORD *)(a1 + 8) - v11;
  if ( -v13 > a2 || 0x7FFFFFFFFFFFFFFFLL - v13 < a2 )
    goto LABEL_60;
  v15 = v13 + a2;
LABEL_15:
  if ( v12 < v15 )
  {
    if ( (unsigned int)enlarge_userbuf(a1, v15, 1) )
      return -1;
    v11 = *(_QWORD *)(a1 + 24);
    v9 = v11 + v12;
  }
  *(_QWORD *)(a1 + 8) = v11 + v15;
  *(_QWORD *)(a1 + 16) = v9;
LABEL_17:
  if ( (a4 & 2) != 0 )
  {
    if ( a3 )
    {
      v16 = v12;
      if ( a3 == 1 )
        v16 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32);
      if ( a2 > 0x7FFFFFFFFFFFFFFFLL - v16 || -v16 > a2 )
        goto LABEL_60;
      v18 = v16 + a2;
      goto LABEL_27;
    }
    if ( (a2 & 0x8000000000000000LL) == 0 )
    {
      v18 = a2;
LABEL_27:
      if ( v12 >= v18 || !(unsigned int)enlarge_userbuf(a1, v18, 0) )
      {
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32) + v18;
        return v18;
      }
      return -1;
    }
LABEL_60:
    v15 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  return v15;
}
