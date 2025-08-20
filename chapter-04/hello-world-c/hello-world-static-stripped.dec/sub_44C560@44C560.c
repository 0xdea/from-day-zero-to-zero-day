__int64 __fastcall sub_44C560(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  const char *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x23
  __int64 v12; // x19
  __int64 v13; // x23

  result = *(_QWORD *)(a1 + 40);
  if ( result == a1 )
  {
    result = *(unsigned __int16 *)(result + 868);
    if ( (result & 8) == 0 && (result & 3) != 0 )
      sub_41F250("l->l_relocated || l->l_type == lt_executable", (__int64)"dl-init.c", 0x23u, (__int64)"call_init");
    if ( (result & 0x10) == 0 )
    {
      v9 = *(const char **)(a1 + 8);
      result = *(unsigned __int16 *)(a1 + 868) | 0x10u;
      *(_WORD *)(a1 + 868) |= 0x10u;
      if ( *v9 )
      {
        if ( (dword_496770 & 2) == 0 )
        {
LABEL_7:
          v10 = *(_QWORD *)(a1 + 160);
          if ( v10 )
            ((void (__fastcall *)(_QWORD, __int64, __int64))(*(_QWORD *)a1 + *(_QWORD *)(v10 + 8)))(a2, a3, a4);
          result = *(_QWORD *)(a1 + 264);
          if ( result )
          {
            result = *(_QWORD *)(result + 8) + *(_QWORD *)a1;
            v11 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 8LL) >> 3;
            if ( (_DWORD)v11 )
            {
              v12 = result + 8;
              v13 = result + 8 + 8LL * (unsigned int)(v11 - 1);
              while ( 1 )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))result)(a2, a3, a4);
                result = v12;
                if ( v12 == v13 )
                  break;
                v12 += 8;
              }
            }
          }
          return result;
        }
      }
      else
      {
        if ( (result & 3) == 0 )
          return result;
        if ( (dword_496770 & 2) == 0 )
          goto LABEL_7;
        v9 = (const char *)off_491918;
        if ( !off_491918 )
          v9 = "<main program>";
      }
      sub_438334("\ncalling init: %s\n\n", v9);
      goto LABEL_7;
    }
  }
  return result;
}
