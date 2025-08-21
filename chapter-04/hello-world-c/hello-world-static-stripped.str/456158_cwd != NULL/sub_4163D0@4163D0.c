__int64 *sub_4163D0()
{
  __int64 v0; // x26
  __int64 v1; // x22
  __int64 v2; // x19
  __int64 v3; // x23
  char *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x20
  char *v7; // x21
  __int64 v8; // x24
  __int16 *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x25
  long double v14; // q0
  long double v15; // q1
  long double v16; // q2
  long double v17; // q3
  long double v18; // q4
  long double v19; // q5
  long double v20; // q6
  long double v21; // q7
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x19
  _BYTE *v28; // x27
  __int64 *v29; // x28
  int v30; // w21
  __int64 v31; // x0
  _BYTE *v32; // x19
  unsigned __int64 v33; // x1
  unsigned __int64 v34; // x0
  __int64 *v35; // x0
  __int64 *result; // x0
  long double v37; // q0
  __int64 v38; // [xsp+0h] [xbp-10030h] BYREF
  _BYTE v39[1008]; // [xsp+10h] [xbp-10020h] BYREF
  __int64 v40; // [xsp+400h] [xbp-FC30h]
  __int64 v41; // [xsp+FFD8h] [xbp-58h]
  char v42[56]; // [xsp+FFE0h] [xbp-50h] BYREF
  __int64 *v43; // [xsp+10018h] [xbp-18h]
  char *v44; // [xsp+10020h] [xbp-10h] BYREF
  __int64 v45; // [xsp+10028h] [xbp-8h]

  v0 = qword_496878;
  v45 = qword_48DD60;
  if ( qword_496878 )
    goto LABEL_37;
  v1 = qword_496880;
  if ( qword_496880 )
  {
    v2 = ifunc_40DFD0(qword_496880);
    v3 = v2 + 34;
    v4 = &v42[-((v2 + 49) & 0xFFFFFFFFFFFF0000LL) + 32];
    if ( &v42[32] != v4 )
    {
      do
        v40 = 0;
      while ( &v38 != (__int64 *)v4 );
    }
    v38 = 0;
    if ( (((_WORD)v2 + 49) & 0xFFF0u) >= 0x400uLL )
      v40 = 0;
    v44 = v39;
    strcpy((char *)(j_ifunc_40DC90(v39, v1, v2) + v2), ":/usr/lib/aarch64-linux-gnu/gconv");
    v5 = sub_4305A0(0, 0);
    v1 = v5;
    if ( v5 )
    {
      v6 = ifunc_40DFD0(v5);
      v7 = v44;
      v8 = v6 + 1;
    }
    else
    {
      v7 = v44;
      v8 = 1;
      v6 = 0;
    }
    v13 = sub_42F180(v7, 58);
    if ( v13 )
      goto LABEL_10;
LABEL_31:
    v25 = 0;
    v22 = 1;
    v24 = 32;
    goto LABEL_16;
  }
  v41 = 0;
  v7 = v42;
  v8 = 1;
  v6 = 0;
  v3 = 33;
  v44 = v42;
  strcpy(v42, "/usr/lib/aarch64-linux-gnu/gconv");
  v13 = sub_42F180(v42, 58);
  if ( !v13 )
    goto LABEL_31;
LABEL_10:
  LODWORD(v22) = 1;
  while ( 1 )
  {
    if ( v13 != v0 + 1 )
      LODWORD(v22) = v22 + 1;
    v0 = v13;
    v23 = sub_42F180(v13 + 1, 58);
    if ( !v23 )
      break;
    v13 = v23;
  }
  v22 = (int)v22;
  v24 = 16LL * ((int)v22 + 1);
  v25 = ((int)v22 - 1) * v8;
LABEL_16:
  v26 = sub_40B890(v24 + v22 + v3 + v25, v14, v15, v16, v17, v18, v19, v20, v21, v24 + v22, v9, v10, v11, v12);
  v43 = (__int64 *)v26;
  if ( v26 )
  {
    v27 = v26 + 16 * (v22 + 1);
    qword_496888 = 0;
    v28 = (_BYTE *)sub_42F820(v7, ":", &v44);
    if ( v28 )
    {
      v29 = v43;
      v30 = 0;
      while ( 1 )
      {
        *v29 = v27;
        if ( *v28 != 47 )
        {
          if ( !v1 )
          {
            sub_41F250("cwd != NULL", "gconv_conf.c", 430, "__gconv_get_path");
            goto LABEL_34;
          }
          v31 = j_ifunc_40DC90(v27, v1, v6);
          *(_BYTE *)(v31 + v6) = 47;
          v27 = v31 + v6 + 1;
        }
        v32 = (_BYTE *)sub_42EFC0(v27, v28);
        if ( *(v32 - 1) != 47 )
          *v32++ = 47;
        v33 = qword_496888;
        v34 = (unsigned __int64)&v32[-*v29];
        v29[1] = v34;
        if ( v34 > v33 )
          qword_496888 = v34;
        *v32 = 0;
        v27 = (__int64)(v32 + 1);
        ++v30;
        v29 += 2;
        v28 = (_BYTE *)sub_42F820(0, ":", &v44);
        if ( !v28 )
        {
          v35 = &v43[2 * v30];
          *v35 = 0;
          v35[1] = 0;
          goto LABEL_28;
        }
      }
    }
    sub_41F250("elem != NULL", "gconv_conf.c", 424, "__gconv_get_path");
    goto LABEL_36;
  }
LABEL_34:
  v43 = (__int64 *)&unk_45AE10;
LABEL_28:
  qword_496878 = (__int64)v43;
  sub_40C1A0(v1);
  result = &qword_48DD60;
  if ( v45 != qword_48DD60 )
  {
LABEL_36:
    sub_412340();
LABEL_37:
    v37 = sub_41F250("result == NULL", "gconv_conf.c", 362, "__gconv_get_path");
    return (__int64 *)sub_416760(v37);
  }
  return result;
}
