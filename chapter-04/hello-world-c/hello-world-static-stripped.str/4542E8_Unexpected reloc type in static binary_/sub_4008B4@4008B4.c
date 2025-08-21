// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn sub_4008B4(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v9; // x0
  __int64 v11; // x25
  __int64 (*v12)(void); // x24
  __int64 (__fastcall ***v13)(); // x28
  char **v14; // x23
  void *v15; // x21
  unsigned __int64 StatusReg; // x0
  char v17; // w0
  unsigned __int8 v18; // w4
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 (__fastcall **v21)(); // x4
  __int64 *v22; // x27
  __int64 v23; // x22
  unsigned __int64 v24; // x21
  __int64 (__fastcall *v25)(); // x3
  __int64 v28; // [xsp+78h] [xbp+78h] BYREF
  __int64 v29; // [xsp+80h] [xbp+80h]
  __int64 v30; // [xsp+88h] [xbp+88h]

  v9 = (_QWORD *)(a3 + 8LL * (int)a2 + 8);
  qword_48F7A8 = a7;
  qword_4966D8 = (__int64)v9;
  while ( *v9++ )
    ;
  sub_4147D0(v9);
  sub_4143D4(qword_4966D8);
  sub_414684(5, &v28, 0);
  v11 = v28;
  if ( v28 )
  {
    v12 = *(__int64 (**)(void))(v28 + 8);
    v13 = (__int64 (__fastcall ***)())0x48C000;
    v14 = &off_48C2E0;
    LODWORD(v15) = 0;
    goto LABEL_5;
  }
  while ( 1 )
  {
LABEL_7:
    v14 = (char **)&unk_496000;
    StatusReg = WORD4(xmmword_496728) & 0x800;
    if ( (WORD4(xmmword_496728) & 0x800) != 0 )
      StatusReg = _ReadStatusReg(MIDR_EL1);
    while ( 1 )
    {
      qword_496818 = StatusReg;
      v17 = _ReadStatusReg(DCZID_EL0);
      if ( (v17 & 0x10) == 0 )
        dword_496820 = 4 << (v17 & 0xF);
      v15 = &unk_496000;
      byte_496825 = 0;
      byte_496824 = (qword_496738 & 0x20000) != 0;
      sub_414684(6, &v28, 0);
      v18 = v28;
      if ( (qword_496738 & 0x40000) == 0 )
        v18 = 0;
      byte_496825 = v18;
      v28 = v18;
      v29 = 0;
      sub_4143B4(6, &v28, 0, 0);
      v19 = 65527;
      if ( (byte_496825 & 4) != 0 )
        goto LABEL_17;
      v19 = 65523;
      if ( (byte_496825 & 2) != 0 )
        goto LABEL_17;
      if ( byte_496825 )
      {
        v19 = 65525;
LABEL_17:
        sub_411A40(55, v19 & 0xFFFFFFFF0000FFFFLL | 0x70000, 0, 0, 0);
      }
      byte_496826 = (DWORD2(xmmword_496728) & 0x400000) != 0;
      byte_496827 = (qword_496738 & 0x80000000000LL) != 0;
      v12 = init_proc;
      v20 = sub_400680();
      if ( &off_4001D8 >= (__int64 (__fastcall ***)())init_proc )
      {
LABEL_26:
        sub_400D20(v20);
        qword_48DD60 = *(_QWORD *)off_48F780 & 0xFFFFFFFFFFFFFF00LL;
        qword_48DD68 = *((_QWORD *)off_48F780 + 1);
        if ( a6 )
          sub_401350(a6, 0, 0);
        sub_415220(1);
        sub_415320(a2, a3, qword_4966D8);
        sub_401350(sub_4007D0, 0, 0);
        if ( dword_491570 )
          sub_400CF0();
        v23 = qword_4966D8;
        init_proc();
        if ( off_48C2D0 != off_48C2C0 )
        {
          v24 = 0;
          do
          {
            v25 = off_48C2C0[v24++];
            ((void (__fastcall *)(_QWORD, __int64, __int64))v25)(a2, a3, v23);
          }
          while ( off_48C2D0 - off_48C2C0 > v24 );
        }
        sub_4123E4(0, 0);
        sub_400820(a1, a2, a3);
      }
      v13 = &off_4001D8;
      v11 = 24;
      while ( 1 )
      {
        v22 = (__int64 *)*v13;
        if ( *((_DWORD *)v13 + 2) != 1032 )
          break;
        v21 = v13[2];
        v13 += 3;
        v28 = 24;
        v29 = *((_QWORD *)&xmmword_496728 + 1);
        v30 = qword_496738;
        v20 = ((__int64 (__fastcall *)(__int64, __int64 *))v21)(
                *((_QWORD *)&xmmword_496728 + 1) | 0x4000000000000000LL,
                &v28);
        *v22 = v20;
        if ( v13 >= (__int64 (__fastcall ***)())init_proc )
          goto LABEL_26;
      }
      sub_401A30("Unexpected reloc type in static binary.\n");
LABEL_23:
      if ( (unsigned int)sub_40DAC0(*(_QWORD *)v11, *v14, v12) )
        break;
      StatusReg = (unsigned __int64)v13[3 * (int)v15 + 94];
      if ( StatusReg == -1 )
        goto LABEL_7;
      v14 = (char **)&unk_496000;
    }
    while ( 1 )
    {
      LODWORD(v15) = (_DWORD)v15 + 1;
      v14 += 3;
      if ( (_DWORD)v15 == 8 )
        break;
LABEL_5:
      if ( v14[1] == (char *)v12 )
        goto LABEL_23;
    }
  }
}
