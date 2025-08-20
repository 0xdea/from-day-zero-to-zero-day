void __fastcall sub_41E260(__int64 *a1, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // x19
  int v5; // w0
  __int64 v6; // x1
  int v7; // w0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned __int64 v11; // x19
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x0

  if ( a2 )
    v3 = a2 == 3;
  else
    v3 = 1;
  v4 = *a1;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( a3 == v4 )
    {
      if ( v5 <= 0 )
      {
        v11 = sub_41F250("obj->counter > 0", "gconv_dl.c", 162, "do_release_shlib");
        v20 = *(_QWORD *)(v11 + 16);
        if ( v20 )
          v12 = sub_43B170(v20, v9, v10);
        sub_40C1A0(v11, v12, v13, v14, v15, v16, v17, v18, v19);
      }
      else
      {
        *(_DWORD *)(a3 + 8) = v5 - 1;
      }
    }
    else
    {
      v6 = (unsigned int)(v5 + 2);
      if ( (_DWORD)v6 == 2 || (unsigned int)v5 >= 0xFFFFFFFE )
      {
        v7 = v5 - 1;
        *(_DWORD *)(v4 + 8) = v7;
        if ( v7 == -3 )
        {
          v8 = *(_QWORD *)(v4 + 16);
          if ( v8 )
          {
            sub_43B170(v8, v6, a3);
            *(_QWORD *)(v4 + 16) = 0;
          }
        }
      }
    }
  }
}
