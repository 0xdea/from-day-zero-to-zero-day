char **__fastcall sub_41E880(int a1, char *a2)
{
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 i; // x25
  __int64 v7; // x26
  __int64 v8; // x27
  __int64 v9; // x28
  __int64 v10; // x22
  _BYTE *v11; // x0
  __int64 v12; // x27
  __int64 v13; // x0
  void (*v14)(void); // x0
  char **v15; // x20
  char *v16; // x0
  char *v17; // x22
  char **v19; // x0
  _QWORD *v20; // x0
  __int64 v21; // x0
  char *v22; // x24
  char *v23; // x27
  char ***v24; // x28
  void (*v25)(void); // x0
  char *v26; // x0
  char *v27; // x0
  char *v28; // x0
  _BYTE *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x24
  __int64 v32; // x28
  __int64 v33; // x26
  _BYTE *v34; // x0
  int v35; // w0
  int v36; // w0
  __int64 v37; // x0
  __int64 v38; // [xsp+8h] [xbp-108h]
  char **v39; // [xsp+18h] [xbp-F8h]
  __int64 v40; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v41; // [xsp+30h] [xbp-E0h] BYREF
  char *v42[13]; // [xsp+38h] [xbp-D8h] BYREF
  char *v43[13]; // [xsp+A0h] [xbp-70h] BYREF
  __int64 v44; // [xsp+108h] [xbp-8h]
  char *v45; // [xsp+120h] [xbp+10h]
  __int64 v46; // [xsp+128h] [xbp+18h]
  __int64 v47; // [xsp+140h] [xbp+30h]
  __int64 v48; // [xsp+148h] [xbp+38h]
  __int64 v49; // [xsp+150h] [xbp+40h]
  __int64 v50; // [xsp+158h] [xbp+48h]
  __int64 v51; // [xsp+160h] [xbp+50h]
  __int64 v52; // [xsp+168h] [xbp+58h]

  v10 = a1;
  v44 = qword_48DD60;
  if ( (unsigned __int64)a1 > 0xC )
  {
    v17 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  else
  {
    v46 = v3;
    v2 = a2;
    if ( !a2 )
    {
      v3 = v46;
      v17 = (char *)off_491820[a1 + 16];
      goto LABEL_28;
    }
    v48 = v5;
    v50 = v7;
    i = a1 + 16LL;
    sub_42E1E0((__int64)dword_4968B8);
    if ( !(unsigned int)sub_42F240(v2, off_491820[v10 + 16]) )
    {
      sub_42DFB0(dword_4968B8);
      v17 = (char *)off_491820[i];
      v3 = v46;
      v5 = v48;
      v7 = v50;
      goto LABEL_28;
    }
    v40 = 0;
    v41 = 0;
    v11 = (_BYTE *)sub_422890("LOCPATH");
    if ( v11 && *v11 && ((unsigned int)sub_42EE80() || (unsigned int)sub_42ED90(&v40, &v41, "/usr/lib/locale", 58)) )
    {
      v17 = 0;
      sub_42DFB0(dword_4968B8);
      v3 = v46;
      v5 = v48;
      v7 = v50;
      goto LABEL_28;
    }
    if ( (_DWORD)v10 != 6 )
    {
      v51 = v8;
      v52 = v9;
      v12 = qword_48F930[v10];
      v43[0] = v2;
      if ( v12 )
      {
        v13 = sub_43B3B0(v40, v41, (unsigned int)v10, v43);
        i = v13;
        if ( !v13 )
          goto LABEL_80;
        v2 = v43[0];
        if ( *(_DWORD *)(v13 + 40) != -1 )
          *(_DWORD *)(v13 + 40) = -1;
      }
      else
      {
        i = 0;
      }
      if ( v2 == "C" || (v43[0] = (char *)sub_42F380(v2)) != 0 )
      {
        v2 = (char *)sub_41E580(v10, v43);
        if ( v2 )
        {
          if ( v12 )
          {
            off_491820[v10] = (char **)i;
            v14 = (void (*)(void))off_48F9A0[v10];
            if ( v14 )
              v14();
          }
          v15 = (char **)v43[0];
          v16 = (char *)off_491820[v10 + 16];
          if ( v43[0] != v16 )
          {
            if ( v16 != "C" )
              sub_40C1A0(v16);
            off_491820[v10 + 16] = v15;
          }
          if ( v2 != off_4918D0[0] )
          {
            if ( off_4918D0[0] != "C" )
              sub_40C1A0(off_4918D0[0]);
            off_4918D0[0] = v2;
          }
          LODWORD(qword_496940) = qword_496940 + 1;
          goto LABEL_26;
        }
        if ( v43[0] != "C" )
          sub_40C1A0(v43[0]);
      }
LABEL_80:
      v43[0] = 0;
LABEL_26:
      sub_42DFB0(dword_4968B8);
      sub_40C1A0(v40);
      v17 = v43[0];
      v3 = v46;
      v5 = v48;
      v7 = v50;
      v8 = v51;
      v9 = v52;
      goto LABEL_28;
    }
    LODWORD(i) = 0;
    v19 = v42;
    v39 = v42;
    do
    {
      while ( (_DWORD)i == 6 )
      {
        v20 = v19 + 1;
        LODWORD(i) = 8;
        *v20 = v2;
        v19 = (char **)(v20 + 1);
      }
      LODWORD(i) = i + 1;
      *v19++ = v2;
    }
    while ( (_DWORD)i != 13 );
    v38 = sub_42F180(v2, 59);
    if ( v38 )
    {
      v38 = sub_42F380(v2);
      v29 = (_BYTE *)v38;
      if ( v38 )
      {
        v51 = v8;
        v52 = v9;
        while ( 1 )
        {
          v30 = sub_42F180(v29, 61);
          v31 = v30;
          if ( !v30 )
            break;
          v32 = v30 - (_QWORD)v29;
          v33 = 0;
          while ( 1 )
          {
            if ( v33 == 6 )
              v33 = 7;
            if ( v32 == byte_456930[v33]
              && !(unsigned int)sub_40DAC0(v29, &aLcCollate[(unsigned __int8)asc_45B298[v33]], v31 - (_QWORD)v29) )
            {
              break;
            }
            if ( ++v33 == 13 )
              goto LABEL_90;
          }
          v42[(int)v33] = (char *)(v31 + 1);
          v34 = (_BYTE *)sub_42F180(v31 + 1, 59);
          if ( !v34 )
            break;
          *v34 = 0;
          v29 = v34 + 1;
        }
        v35 = 0;
        while ( 1 )
        {
          if ( v35 == 6 )
          {
            ++v39;
            v35 = 7;
          }
          if ( *v39 == v2 )
            break;
          ++v35;
          ++v39;
          if ( v35 == 13 )
            goto LABEL_45;
        }
LABEL_90:
        sub_42DFB0(dword_4968B8);
        sub_40C1A0(v38);
        v8 = v51;
        v9 = v52;
        *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      }
      else
      {
        sub_42DFB0(dword_4968B8);
      }
      v3 = v46;
      v17 = 0;
      v5 = v48;
      v7 = v50;
    }
    else
    {
      while ( (_DWORD)i )
      {
        LODWORD(v17) = i - 1;
        if ( (_DWORD)i == 7 )
        {
          LODWORD(i) = 5;
        }
        else
        {
          v36 = i;
          LODWORD(i) = i - 1;
          LODWORD(v17) = v36;
        }
        v21 = sub_43B3B0(v40, v41, (unsigned int)i, &v42[(int)i]);
        v43[(int)i] = (char *)v21;
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 40) != -1 )
            *(_DWORD *)(v21 + 40) = -1;
          v22 = v42[(int)i];
          if ( v22 != "C" )
          {
            v51 = v8;
            v52 = v9;
            v23 = (char *)off_491820[(int)i + 16];
            if ( (unsigned int)sub_42F240(v22, v23) )
            {
              v27 = (char *)sub_42F380(v22);
              v42[(int)i] = v27;
              v8 = v51;
              v9 = v52;
              if ( !v27 )
                goto LABEL_68;
            }
            else
            {
              v42[(int)i] = v23;
LABEL_45:
              v8 = v51;
              v9 = v52;
            }
          }
        }
        else if ( v42[(int)i] != "C" )
        {
LABEL_68:
          if ( (_DWORD)v17 != 13 )
            goto LABEL_69;
LABEL_81:
          v17 = 0;
          goto LABEL_66;
        }
      }
      v17 = (char *)sub_41E580(6, v42);
      if ( !v17 )
      {
LABEL_69:
        v2 = (char *)((int)v17 + 1);
        do
        {
          if ( (_DWORD)v17 == 6 )
          {
            ++v2;
            LODWORD(v17) = 7;
          }
          v28 = v42[(_QWORD)v2 - 1];
          if ( v28 != "C" && v28 != (char *)*(&off_491898 + (_QWORD)v2) )
            sub_40C1A0(v28);
          LODWORD(v17) = (_DWORD)v17 + 1;
          ++v2;
        }
        while ( (_DWORD)v17 != 13 );
        goto LABEL_81;
      }
      v51 = v8;
      v52 = v9;
      v24 = off_491820;
      for ( i = 1; i != 14; ++i )
      {
        if ( (_DWORD)i == 7 )
        {
          ++v24;
          i = 8;
        }
        if ( qword_48F930[i - 1] )
        {
          *v24 = (char **)v43[i - 1];
          v25 = (void (*)(void))off_48F9A0[i - 1];
          if ( v25 )
            v25();
        }
        v26 = (char *)v24[16];
        v2 = v42[i - 1];
        if ( v2 != v26 )
        {
          if ( v26 != "C" )
            sub_40C1A0(v26);
          v24[16] = (char **)v2;
        }
        ++v24;
      }
      if ( v17 != off_4918D0[0] )
      {
        if ( off_4918D0[0] != "C" )
          sub_40C1A0(off_4918D0[0]);
        off_4918D0[0] = v17;
      }
      v8 = v51;
      v9 = v52;
      LODWORD(qword_496940) = qword_496940 + 1;
LABEL_66:
      sub_42DFB0(dword_4968B8);
      sub_40C1A0(v40);
      sub_40C1A0(v38);
      v3 = v46;
      v5 = v48;
      v7 = v50;
    }
  }
LABEL_28:
  if ( v44 == qword_48DD60 )
    return (char **)v17;
  v45 = v2;
  v46 = v3;
  v47 = v4;
  v48 = v5;
  v49 = i;
  v50 = v7;
  v51 = v8;
  v52 = v9;
  v37 = sub_412340();
  return (char **)sub_41EF50(v37);
}
