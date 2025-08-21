void __fastcall sub_412800(unsigned __int64 a1)
{
  char *v1; // x7
  __int64 *v2; // x2
  unsigned __int64 v3; // x8
  unsigned __int64 *v4; // x3
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x6
  unsigned __int64 v7; // x10
  __int64 v8; // x5
  __int64 v9; // x4
  unsigned __int64 *v10; // x4
  __int64 v11; // x1
  __int64 v12; // x0
  _QWORD *v13; // x5
  __int64 v14; // x1
  __int64 v15; // x2

  v1 = &byte_4921E0;
  v2 = &qword_4921A0;
  v3 = qword_4921A0;
  if ( (byte_4921E0 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 1176) = ++qword_4921A0;
    return;
  }
  v4 = (unsigned __int64 *)qword_4921A8;
  v5 = qword_4921C8 + 1;
  if ( qword_4921C8 + 1 > (unsigned __int64)qword_4921A0 )
    goto LABEL_13;
  v6 = *(_QWORD *)qword_4921A8;
  v7 = qword_4921A0 + 1;
  v8 = 0;
  while ( 1 )
  {
    v9 = v5 - v8;
    if ( v5 - v8 >= v6 )
      goto LABEL_9;
    if ( !v4[2 * v9 + 3] )
      break;
    if ( v7 < ++v5 )
    {
      sub_41F250("result <= GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 150, "_dl_assign_tls_modid");
LABEL_9:
      v4 = (unsigned __int64 *)v4[1];
      v8 += v6;
      if ( !v4 )
        goto LABEL_12;
      v6 = *v4;
    }
  }
  v10 = &v4[2 * v9];
  v10[3] = a1;
  v10[2] = 0;
  v3 = *v2;
LABEL_12:
  if ( v5 <= v3 )
  {
LABEL_15:
    *(_QWORD *)(a1 + 1176) = v5;
  }
  else
  {
LABEL_13:
    if ( v5 == v3 + 1 )
    {
      v11 = *v2;
      *v1 = 0;
      v5 = v11 + 1;
      *v2 = v5;
      goto LABEL_15;
    }
    sub_41F250("result == GL(dl_tls_max_dtv_idx) + 1", "dl-tls.c", 169, "_dl_assign_tls_modid");
    if ( (byte_4921E0 & 1) != 0 )
    {
      v12 = 0;
      v13 = (_QWORD *)qword_4921A8;
      if ( qword_4921A8 )
      {
        do
        {
          v14 = 0;
          if ( *v13 )
          {
            do
            {
              v15 = 2 * v14++;
              if ( v13[v15 + 3] )
                ++v12;
            }
            while ( *v13 != v14 );
          }
          v13 = (_QWORD *)v13[1];
        }
        while ( v13 );
      }
    }
  }
}
