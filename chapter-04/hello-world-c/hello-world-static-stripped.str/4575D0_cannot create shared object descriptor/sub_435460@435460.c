__int64 *__fastcall sub_435460(__int64 a1, char *a2, unsigned int a3, int a4, unsigned int a5, unsigned __int64 a6)
{
  unsigned __int64 v8; // x26
  __int64 *v13; // x27
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x28
  char v18; // w27
  long double v19; // q0
  _BYTE *v20; // x25
  unsigned __int64 v21; // x1
  char v22; // w0
  __int64 v23; // x4
  const char *v24; // x3
  const char *v25; // x0
  char v26; // w0
  __int64 *v27; // x3
  __int64 *v28; // x6
  unsigned int v29; // w0
  __int64 v30; // x28
  char i; // w0
  __int64 v32; // x0
  __int64 v33; // x24
  __int64 v34; // x0
  __int16 v35; // w2
  __int64 *v36; // x6
  const char *v37; // x27
  _QWORD *v38; // x5
  __int64 v39; // x3
  __int64 v40; // x28
  int v41; // w0
  __int64 v42; // x6
  __int64 v43; // x6
  long double v44; // q0
  int v45; // [xsp+E8h] [xbp+68h]
  int v46; // [xsp+E8h] [xbp+68h]
  unsigned int v47; // [xsp+F4h] [xbp+74h]
  _BYTE *v48; // [xsp+100h] [xbp+80h]
  char v49; // [xsp+100h] [xbp+80h]
  __int64 v50; // [xsp+100h] [xbp+80h]
  __int64 v51; // [xsp+108h] [xbp+88h]
  __int64 *v52; // [xsp+110h] [xbp+90h]
  __int64 v53; // [xsp+110h] [xbp+90h]
  _QWORD *v54; // [xsp+118h] [xbp+98h]
  char v55; // [xsp+13Fh] [xbp+BFh] BYREF
  _BYTE *v56; // [xsp+140h] [xbp+C0h] BYREF
  __int64 v57[2]; // [xsp+148h] [xbp+C8h] BYREF
  _BYTE v58[840]; // [xsp+158h] [xbp+D8h] BYREF

  if ( (a6 & 0x8000000000000000LL) != 0 )
    sub_41F250("nsid >= 0", (__int64)"dl-load.c", 0x7B7u, (__int64)"_dl_map_object");
  if ( a6 >= qword_490F20 )
    sub_41F250("nsid < GL(dl_nns)", (__int64)"dl-load.c", 0x7B8u, (__int64)"_dl_map_object");
  v8 = 4 * a6;
  v13 = (&off_4914A8)[21 * a6];
  if ( !v13 )
  {
LABEL_15:
    v47 = a5 & 0x10000000;
    v18 = dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
    {
      if ( a1 )
      {
        v24 = *(const char **)(a1 + 8);
        v25 = "\nfile=%s [%lu];  dynamically loaded by %s [%lu]\n";
        if ( (a5 & 0x10000000) == 0 )
          v25 = "\nfile=%s [%lu];  needed by %s [%lu]\n";
        if ( !*v24 )
        {
          v24 = (const char *)off_491918;
          if ( !off_491918 )
            v24 = "<main program>";
        }
        sub_438334(v25, a2, a6, v24, *(_QWORD *)(a1 + 48));
        v55 = 0;
        if ( sub_42F180(a2, 47) )
        {
LABEL_18:
          v56 = sub_433860(a1, (unsigned __int8 *)a2);
          v20 = v56;
          if ( !v56 )
            goto LABEL_24;
LABEL_19:
          LODWORD(v21) = sub_432B50((__int64)v20, (__int64)v58, &v55, 1);
          if ( (_DWORD)v21 != -1 )
          {
            if ( (a5 & 0x10000000) != 0 )
              a1 = 0;
LABEL_22:
            v57[0] = qword_48F7A8;
            return sub_434280(a2, v21, (__int64)v58, (__int64)v56, a1, a3, a5, (__int64)v57, a6);
          }
          sub_40C1A0(v20);
LABEL_24:
          if ( (a5 & 0x10000000) == 0 )
            goto LABEL_25;
          goto LABEL_40;
        }
        v51 = ifunc_40DFD0(a2) + 1;
        if ( (dword_496770 & 1) != 0 )
          sub_438334("find library=%s [%lu]; searching\n", a2, a6);
        goto LABEL_31;
      }
      v55 = 0;
      if ( sub_42F180(a2, 47) )
        goto LABEL_23;
      v51 = ifunc_40DFD0(a2) + 1;
      if ( (v18 & 1) != 0 )
        sub_438334("find library=%s [%lu]; searching\n", a2, a6);
    }
    else
    {
      v55 = 0;
      if ( sub_42F180(a2, 47) )
      {
        if ( a1 )
          goto LABEL_18;
LABEL_23:
        v56 = (_BYTE *)sub_42F380(a2);
        v20 = v56;
        if ( !v56 )
          goto LABEL_24;
        goto LABEL_19;
      }
      v51 = ifunc_40DFD0(a2) + 1;
      if ( (v18 & 1) != 0 )
        sub_438334("find library=%s [%lu]; searching\n", a2, a6);
      if ( a1 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 296) )
          goto LABEL_32;
        v52 = off_4914A8;
        v30 = a1;
        v49 = 0;
        for ( i = sub_433D80(v30, v30 + 880, 15, "RPATH"); ; i = sub_433D80(v30, v30 + 880, 15, "RPATH") )
        {
          if ( (i & 1) != 0 )
          {
            LODWORD(v21) = sub_433030(
                             (__int64)a2,
                             v51,
                             a5,
                             (__int64 *)(v30 + 880),
                             (__int64 *)&v56,
                             (__int64)v58,
                             a1,
                             &v55);
            if ( (_DWORD)v21 != -1 )
              goto LABEL_34;
            v49 |= v52 == (__int64 *)v30;
          }
          v30 = *(_QWORD *)(v30 + 808);
          if ( !v30 )
            break;
        }
        if ( (v49 & 1) != 0 )
        {
LABEL_32:
          if ( qword_48FAF8 != -1 )
          {
LABEL_33:
            LODWORD(v21) = sub_433030((__int64)a2, v51, a5, &qword_48FAF8, (__int64 *)&v56, (__int64)v58, a1, &v55);
            if ( (_DWORD)v21 != -1 )
              goto LABEL_34;
          }
LABEL_41:
          v22 = sub_433D80(a1, a1 + 1016, 29, "RUNPATH");
          v21 = a1 + 1016;
          if ( (v22 & 1) == 0 )
            goto LABEL_42;
          v27 = (__int64 *)(a1 + 1016);
          v28 = (__int64 *)a1;
LABEL_74:
          v29 = sub_433030((__int64)a2, v51, a5, v27, (__int64 *)&v56, (__int64)v58, (__int64)v28, &v55);
          v21 = v29;
          if ( v29 == -1 )
          {
LABEL_42:
            v56 = 0;
            if ( (a5 & 0x4000000) != 0 && dword_491570 || dword_496810 || (v23 = sub_43A590((__int64)a2)) == 0 )
            {
LABEL_91:
              v36 = (__int64 *)a1;
              if ( a1 )
                goto LABEL_92;
              goto LABEL_110;
            }
            if ( a1 )
            {
              if ( (*(_DWORD *)(a1 + 1060) & 0x800) == 0 )
                goto LABEL_47;
              goto LABEL_102;
            }
LABEL_101:
            if ( (*((_DWORD *)off_4914A8 + 265) & 0x800) == 0 )
            {
LABEL_47:
              v48 = (_BYTE *)v23;
              LODWORD(v21) = sub_432B50(v23, (__int64)v58, &v55, 0);
              v23 = (__int64)v48;
              if ( (_DWORD)v21 != -1 )
              {
                v56 = v48;
                if ( (dword_496770 & 1) != 0 )
                  goto LABEL_49;
LABEL_35:
                if ( v47 )
                  a1 = 0;
                goto LABEL_22;
              }
              goto LABEL_90;
            }
LABEL_102:
            v37 = "/lib/aarch64-linux-gnu/";
            v38 = &unk_45C2E0;
            v39 = 0;
            while ( 1 )
            {
              v40 = v38[v39];
              v50 = v23;
              v53 = v39;
              v54 = v38;
              v41 = sub_40DAC0(v23, v37, v40);
              v23 = v50;
              v38 = v54;
              if ( !v41 )
                break;
              v39 = v53 + 1;
              v37 += v40 + 1;
              if ( v53 == 3 )
                goto LABEL_47;
            }
LABEL_90:
            sub_40C1A0(v23);
            goto LABEL_91;
          }
LABEL_34:
          if ( (dword_496770 & 1) != 0 )
          {
            v46 = v21;
            sub_438334("\n");
            LODWORD(v21) = v46;
            if ( v47 )
              a1 = 0;
            goto LABEL_22;
          }
          goto LABEL_35;
        }
LABEL_67:
        v21 = (unsigned __int64)v52;
        if ( !v52 || (*((_WORD *)v52 + 434) & 3) == 2 )
          goto LABEL_71;
        v26 = sub_433D80(v52, v52 + 110, 15, "RPATH");
        v21 = (unsigned __int64)(v52 + 110);
        if ( (v26 & 1) != 0 )
        {
          if ( a1 )
            v42 = a1;
          else
            v42 = (__int64)v52;
          v21 = (unsigned int)sub_433030((__int64)a2, v51, a5, v52 + 110, (__int64 *)&v56, (__int64)v58, v42, &v55);
          if ( (a5 & 0x8000000) == 0 )
            goto LABEL_116;
          if ( (_DWORD)v21 != -1 )
            goto LABEL_34;
        }
        else if ( (a5 & 0x8000000) == 0 )
        {
LABEL_71:
          v27 = &qword_48FAF8;
          if ( qword_48FAF8 != -1 )
          {
            if ( !a1 )
            {
              v28 = off_4914A8;
              goto LABEL_74;
            }
            goto LABEL_33;
          }
          if ( !a1 )
          {
            v56 = 0;
            if ( (a5 & 0x4000000) != 0 )
            {
              v21 = (unsigned int)dword_496810;
              if ( !(dword_491570 | dword_496810) )
              {
                v23 = sub_43A590((__int64)a2);
                if ( v23 )
                  goto LABEL_101;
              }
            }
            else if ( !dword_496810 )
            {
              v23 = sub_43A590((__int64)a2);
              if ( v23 )
                goto LABEL_101;
            }
LABEL_110:
            v36 = (&(&(&off_4914A8)[4 * v8])[4 * a6])[a6];
            if ( !v36 )
            {
LABEL_93:
              if ( qword_48FB08 != -1 )
              {
                LODWORD(v21) = sub_433030(
                                 (__int64)a2,
                                 v51,
                                 a5,
                                 &qword_48FB08,
                                 (__int64 *)&v56,
                                 (__int64)v58,
                                 (__int64)v36,
                                 &v55);
                if ( (dword_496770 & 1) == 0 )
                {
LABEL_50:
                  if ( v47 )
                    a1 = 0;
                  if ( (_DWORD)v21 != -1 )
                    goto LABEL_22;
                  goto LABEL_25;
                }
LABEL_49:
                v45 = v21;
                sub_438334("\n");
                LODWORD(v21) = v45;
                goto LABEL_50;
              }
LABEL_38:
              if ( (dword_496770 & 1) != 0 )
              {
                sub_438334("\n", v21);
                if ( v47 )
                  a1 = 0;
                goto LABEL_25;
              }
              if ( !v47 )
              {
LABEL_25:
                if ( !a4 )
                {
                  if ( (v55 & 1) != 0 )
                    sub_432250(0, (__int64)a2, v19, 0, "wrong ELF class: ELFCLASS32");
                  sub_432250(
                    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40),
                    (__int64)a2,
                    v19,
                    0,
                    "cannot open shared object file");
                }
                v32 = sub_42F380(a2);
                v33 = v32;
                if ( !v32 || (v34 = sub_437850(v32, a2, a3, a1, a5, a6), (v13 = (__int64 *)v34) == 0) )
                {
                  sub_40C1A0(v33);
                  sub_432250(12, (__int64)a2, v44, 0, "cannot create shared object descriptor");
                }
                v35 = *(_WORD *)(v34 + 868) | 0x4008;
                *(_DWORD *)(v34 + 828) = 1;
                *(_QWORD *)(v34 + 856) = &unk_4542D4;
                *(_WORD *)(v34 + 868) = v35;
                sub_4377B0(v34, a6);
                return v13;
              }
LABEL_40:
              a1 = 0;
              goto LABEL_25;
            }
LABEL_92:
            if ( (*((_DWORD *)v36 + 265) & 0x800) != 0 )
              goto LABEL_38;
            goto LABEL_93;
          }
          goto LABEL_41;
        }
        if ( (*((_WORD *)v52 + 434) & 3) == 2 )
          goto LABEL_71;
        v57[0] = 0;
        if ( (sub_433D80(v52, v57, 29, "RUNPATH") & 1) == 0 )
          goto LABEL_71;
        if ( a1 )
          v43 = a1;
        else
          v43 = (__int64)v52;
        v21 = (unsigned int)sub_433030((__int64)a2, v51, a5, v57, (__int64 *)&v56, (__int64)v58, v43, &v55);
LABEL_116:
        if ( (_DWORD)v21 != -1 )
          goto LABEL_34;
        goto LABEL_71;
      }
    }
    v52 = off_4914A8;
    goto LABEL_67;
  }
  while ( 1 )
  {
    if ( !(((unsigned __int64)v13[108] >> 46) & 1 | ((unsigned __int64)v13[108] >> 50) & 1) )
    {
      if ( (unsigned int)sub_437560(a2, v13) )
        return v13;
      if ( (v13[108] & 0x200000000000LL) == 0 )
      {
        v14 = v13[22];
        if ( v14 )
        {
          v15 = 0;
          if ( (*((_BYTE *)v13 + 870) & 0x20) != 0 )
            v15 = *v13;
          v16 = *(_QWORD *)(v14 + 8) + *(_QWORD *)(v13[13] + 8) + v15;
          if ( !(unsigned int)sub_42F240(a2, v16) )
            break;
        }
      }
    }
    v13 = (__int64 *)v13[3];
    if ( !v13 )
      goto LABEL_15;
  }
  sub_433530((_QWORD *)v13[7], v16);
  *((_WORD *)v13 + 434) |= 0x2000u;
  return v13;
}
