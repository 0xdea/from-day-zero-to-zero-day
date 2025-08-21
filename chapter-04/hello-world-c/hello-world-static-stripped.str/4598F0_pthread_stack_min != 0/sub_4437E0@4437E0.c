unsigned __int64 __fastcall sub_4437E0(__int64 a1)
{
  int v1; // w0
  unsigned __int64 v2; // x1
  int v5; // w0
  unsigned int v6; // w19
  unsigned __int64 i; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  __int64 v16; // x30
  __int64 v17; // x19
  int v18; // w0
  unsigned __int64 result; // x0
  __int64 v20; // x2
  int v21; // w19
  long double v22; // q0
  int v23; // w1
  __int64 v24; // x0
  __int64 v25; // x2
  unsigned int v26; // w21
  _DWORD *v27; // x22
  __int64 v28; // x20
  bool v29; // zf
  __int64 v30; // x0
  __int64 *v31; // x29
  __int64 v32; // x19
  _BYTE *v33; // x20
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 *v37; // x0
  unsigned __int8 v38; // w1
  char v39[40]; // [xsp+0h] [xbp-1C8h] BYREF
  __int64 v40; // [xsp+28h] [xbp-1A0h]
  unsigned int v41; // [xsp+68h] [xbp-160h]
  __int64 v42; // [xsp+70h] [xbp-158h]
  __int64 *v43; // [xsp+78h] [xbp-150h]
  __int64 v44; // [xsp+80h] [xbp-148h]
  __int64 v45; // [xsp+88h] [xbp-140h]
  unsigned __int64 v46; // [xsp+90h] [xbp-138h] BYREF
  _QWORD v47[4]; // [xsp+A0h] [xbp-128h] BYREF
  _QWORD v48[2]; // [xsp+C0h] [xbp-108h] BYREF
  _BYTE v49[32]; // [xsp+D0h] [xbp-F8h] BYREF
  __int64 v50; // [xsp+F0h] [xbp-D8h]
  __int64 *v51; // [xsp+F8h] [xbp-D0h]
  __int64 v52; // [xsp+100h] [xbp-C8h]
  __int64 v53; // [xsp+108h] [xbp-C0h]
  _BYTE *v54; // [xsp+110h] [xbp-B8h]
  __int64 *v55; // [xsp+118h] [xbp-B0h] BYREF
  __int64 v56; // [xsp+120h] [xbp-A8h]
  __int64 v57; // [xsp+128h] [xbp-A0h]
  _BYTE *v58; // [xsp+130h] [xbp-98h]
  _BYTE v59[16]; // [xsp+140h] [xbp-88h] BYREF
  int v60; // [xsp+150h] [xbp-78h]
  __int64 v61; // [xsp+1C0h] [xbp-8h]
  __int64 vars0; // [xsp+1C8h] [xbp+0h] BYREF

  v17 = (unsigned int)a1;
  v61 = qword_48DD60;
  if ( (sub_410930(a1, v59) & 0x80000000) != 0 )
    goto LABEL_10;
  if ( (v60 & 0xF000) != 0x4000 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 20;
    goto LABEL_10;
  }
  v18 = sub_410D20((unsigned int)v17, 3);
  if ( v18 == -1 )
  {
LABEL_10:
    result = 0;
    goto LABEL_7;
  }
  if ( (v18 & 0x200000) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 9;
    result = 0;
  }
  else if ( (v18 & 3) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    result = 0;
  }
  else
  {
    result = sub_430170((unsigned int)v17, 0);
  }
LABEL_7:
  if ( v61 == qword_48DD60 )
    return result;
  v51 = &vars0;
  v52 = v16;
  v53 = v17;
  v54 = v59;
  v21 = sub_412340();
  v50 = qword_48DD60;
  result = 0;
  if ( v21 == 187 )
  {
    result = 4 << (_ReadStatusReg(CTR_EL0) & 0xF);
    goto LABEL_16;
  }
  if ( v21 == 190 )
  {
    result = 4 << (((unsigned int)_ReadStatusReg(CTR_EL0) >> 16) & 0xF);
    goto LABEL_16;
  }
  if ( v21 > 139 )
  {
    switch ( v21 )
    {
      case 249:
        result = qword_490F18;
        if ( !qword_490F18 )
        {
          v55 = v13;
          v56 = v14;
          v57 = v15;
          if ( v50 == qword_48DD60 )
            sub_41F250(
              "GLRO(dl_minsigstacksize) != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf.c",
              0x57u,
              (__int64)"linux_sysconf");
          goto LABEL_126;
        }
LABEL_16:
        if ( v50 == qword_48DD60 )
          return result;
LABEL_125:
        v55 = v13;
        v56 = v14;
        v57 = v15;
        while ( 1 )
        {
LABEL_126:
          sub_412340();
LABEL_127:
          v55 = v13;
          v56 = v14;
          v57 = v15;
          if ( v50 == qword_48DD60 )
            sub_41F250(
              "pthread_stack_min != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf-pthread_stack_min.h",
              0x1Au,
              (__int64)"__get_pthread_stack_min");
        }
      case 250:
        v24 = qword_490F18;
        if ( !qword_490F18 )
        {
          v55 = v13;
          v56 = v14;
          v57 = v15;
          if ( v50 == qword_48DD60 )
            sub_41F250(
              "minsigstacksize != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf-sigstksz.h",
              0x19u,
              (__int64)"sysconf_sigstksz");
          goto LABEL_126;
        }
        if ( qword_490F18 < 5120 )
          v24 = 5120;
        result = 4 * v24;
        goto LABEL_16;
      case 149:
        goto LABEL_59;
    }
    if ( v21 > 178 )
    {
      switch ( v21 )
      {
        case 179:
        case 181:
        case 182:
        case 183:
        case 184:
        case 237:
        case 238:
        case 240:
        case 242:
        case 243:
        case 244:
        case 245:
        case 246:
          goto LABEL_35;
        case 180:
LABEL_110:
          result = 64;
          break;
        case 185:
        case 186:
        case 187:
        case 188:
        case 189:
        case 190:
        case 191:
        case 192:
        case 193:
        case 194:
        case 195:
        case 196:
        case 197:
        case 198:
        case 199:
LABEL_109:
          result = 0;
          break;
        case 235:
        case 236:
          goto LABEL_59;
        case 239:
          goto LABEL_66;
        default:
          goto LABEL_34;
      }
      goto LABEL_16;
    }
    goto LABEL_63;
  }
  if ( v21 > 137 )
    goto LABEL_59;
  switch ( v21 )
  {
    case 3:
      v55 = v13;
      v56 = v14;
      v26 = sub_410EE0("/proc/sys/kernel/ngroups_max", 0x80000, v20);
      if ( v26 == -1 )
      {
        v13 = v55;
        v14 = v56;
LABEL_81:
        result = 0x10000;
        goto LABEL_16;
      }
LABEL_49:
      v27 = (_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      while ( 1 )
      {
        v28 = sub_410FC0(v26, v49, 31);
        if ( v28 != -1 )
          break;
        if ( *v27 != 4 )
        {
          result = sub_410CD0(v26);
          goto LABEL_83;
        }
      }
      result = sub_410CD0(v26);
      if ( v28 <= 0 || (v49[v28] = 0, result = sub_423790(v49, v48, 10), (_BYTE *)v48[0] == v49) )
      {
LABEL_83:
        v13 = v55;
        v14 = v56;
      }
      else
      {
        v13 = v55;
        v14 = v56;
        if ( *(_BYTE *)v48[0] )
          v29 = *(_BYTE *)v48[0] == 10;
        else
          v29 = 1;
        if ( v29 )
          goto LABEL_16;
      }
      goto LABEL_58;
    case 34:
      if ( !(unsigned int)sub_4310B0(11, v48) )
      {
        result = v48[0];
        goto LABEL_16;
      }
      v55 = v13;
      v56 = v14;
      v26 = sub_410EE0("/proc/sys/kernel/rtsig-max", 0x80000, v25);
      if ( v26 == -1 )
      {
        v13 = v55;
        v14 = v56;
        result = -1;
        goto LABEL_16;
      }
      goto LABEL_49;
    case 0:
      v23 = sub_4310B0(3, v48);
      result = 0x20000;
      if ( !v23 && v48[0] > 0x7FFFFu )
      {
        result = v48[0] >> 2;
        if ( v48[0] >> 2 > 0x600000u )
          result = 6291456;
      }
      goto LABEL_16;
  }
  if ( v21 > 90 )
  {
    if ( v21 <= 124 )
    {
      if ( v21 > 100 )
      {
        result = 8;
        switch ( v21 )
        {
          case 'f':
          case 's':
LABEL_70:
            result = 255;
            break;
          case 'g':
            goto LABEL_109;
          case 'h':
          case 'y':
          case 'z':
          case '{':
          case '|':
LABEL_62:
            result = 0x7FFFFFFF;
            break;
          case 'i':
            result = 0xFFFFFFFF80000000LL;
            break;
          case 'j':
            goto LABEL_110;
          case 'k':
LABEL_61:
            result = 32;
            break;
          case 'l':
LABEL_77:
            result = 16;
            break;
          case 'm':
LABEL_69:
            result = 20;
            break;
          case 'n':
          case 'q':
LABEL_68:
            result = 0x7FFF;
            break;
          case 'o':
            result = 127;
            break;
          case 'p':
            result = -128;
            break;
          case 'r':
            result = -32768;
            break;
          case 't':
            result = 0xFFFFFFFFLL;
            break;
          case 'u':
            goto LABEL_35;
          case 'v':
            result = 0xFFFF;
            break;
          case 'w':
            result = 4096;
            break;
          case 'x':
LABEL_60:
            result = 2048;
            break;
          default:
            goto LABEL_16;
        }
        goto LABEL_16;
      }
      v35 = 1LL << ((unsigned __int8)v21 - 91);
      if ( (v35 & 0x38D) == 0 )
      {
        if ( (v35 & 0x30) != 0 )
          goto LABEL_59;
        if ( (v35 & 0x42) != 0 )
        {
          result = -1;
          goto LABEL_16;
        }
        goto LABEL_34;
      }
      goto LABEL_66;
    }
LABEL_63:
    v30 = 1LL << ((unsigned __int8)v21 - 125);
    if ( (v30 & 0x1FFF7A8FFFEE0BLL) != 0 )
      goto LABEL_35;
    if ( (v30 & 0x8430001180LL) != 0 )
      goto LABEL_59;
    if ( (v30 & 0x20000140000074LL) == 0 )
      goto LABEL_34;
LABEL_66:
    result = 1;
    goto LABEL_16;
  }
  if ( v21 > 70 )
  {
    switch ( v21 )
    {
      case 'H':
        goto LABEL_61;
      case 'I':
      case 'Z':
        result = 4;
        goto LABEL_16;
      case 'J':
        result = 1024;
        goto LABEL_16;
      case 'K':
        result = qword_490F18;
        if ( !qword_490F18 )
          goto LABEL_127;
        if ( qword_490F18 < 0x20000 )
          result = 0x20000;
        goto LABEL_16;
      case 'L':
        goto LABEL_35;
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
        goto LABEL_59;
      case 'S':
        result = (int)sub_411614(v22);
        goto LABEL_16;
      case 'T':
        result = (int)sub_4115D4(v22);
        goto LABEL_16;
      case 'U':
        if ( v50 != qword_48DD60 )
          goto LABEL_125;
        v55 = v51;
        v56 = v52;
        v31 = (__int64 *)&v55;
        v57 = v53;
        v58 = v54;
        v54 = (_BYTE *)qword_48DD60;
        sub_411BC0(v47, &qword_48DD60, 0);
        v1 = sub_4110B0();
        v32 = (unsigned int)v53;
        v2 = v1;
        v33 = (_BYTE *)v48[0];
        if ( (unsigned int)v53 > 1 && (unsigned __int64)v1 > 1 )
        {
          do
          {
            v32 = (unsigned int)v32 >> 1;
            v2 >>= 1;
          }
          while ( (unsigned int)v32 > 1 && v2 > 1 );
        }
        result = (unsigned int)v32 * v48[0];
        if ( v2 > 1 )
        {
          do
          {
            v2 >>= 1;
            result >>= 1;
          }
          while ( v2 != 1 );
        }
        if ( v54 == (_BYTE *)qword_48DD60 )
          return result;
        sub_412340();
LABEL_144:
        v43 = v31;
        v44 = v52;
        v45 = v32;
        v46 = (unsigned __int64)v33;
        v42 = qword_48DD60;
        sub_411BC0(v39, &qword_48DD60, 0);
        v5 = sub_4110B0();
        v6 = v41;
        for ( i = v5; v6 > 1 && i > 1; i >>= 1 )
          v6 >>= 1;
        result = v6 * v40;
        if ( i > 1 )
        {
          do
          {
            i >>= 1;
            result >>= 1;
          }
          while ( i != 1 );
        }
        if ( v42 != qword_48DD60 )
        {
          v10 = sub_412340();
          result = sub_4117C0(v10, v11, v12);
        }
        break;
      case 'V':
        if ( v50 != qword_48DD60 )
          goto LABEL_125;
        v31 = v51;
        v32 = v53;
        v33 = v54;
        goto LABEL_144;
      case 'W':
        goto LABEL_62;
      case 'X':
        result = 0x2000;
        goto LABEL_16;
      case 'Y':
        result = 700;
        goto LABEL_16;
      default:
        result = 256;
        goto LABEL_16;
    }
    return result;
  }
  if ( v21 > 45 )
  {
    v34 = 1LL << ((unsigned __int8)v21 - 46);
    if ( (v34 & 0x1FBF98) != 0 )
      goto LABEL_35;
    if ( (v34 & 0x600067) == 0 )
    {
      result = 1024;
      if ( ((1LL << ((unsigned __int8)v21 - 46)) & 0x1804000) != 0 )
        goto LABEL_16;
      goto LABEL_34;
    }
LABEL_59:
    result = 200809;
    goto LABEL_16;
  }
  if ( v21 < 0 )
  {
LABEL_34:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
LABEL_35:
    result = -1;
    goto LABEL_16;
  }
LABEL_58:
  switch ( v21 )
  {
    case 0:
    case 6:
    case 23:
    case 24:
    case 27:
    case 32:
    case 34:
    case 35:
      goto LABEL_35;
    case 1:
      if ( v50 != qword_48DD60 )
        goto LABEL_125;
      v47[1] = v51;
      v47[2] = v52;
      v47[0] = qword_48DD60;
      if ( (unsigned int)sub_4310B0(6, &v46) )
        result = -1;
      else
        result = v46;
      if ( v56 != qword_48DD60 )
      {
        v37 = (__int64 *)sub_412340();
        result = (unsigned __int64)sub_44B710(v37, v38);
      }
      break;
    case 2:
      result = (int)sub_443FF0(result);
      goto LABEL_16;
    case 3:
      goto LABEL_81;
    case 4:
      result = (int)sub_444020(result);
      goto LABEL_16;
    case 5:
      goto LABEL_77;
    case 7:
    case 8:
      goto LABEL_66;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 29:
      goto LABEL_59;
    case 25:
      goto LABEL_69;
    case 26:
    case 33:
      goto LABEL_62;
    case 28:
      result = 0x8000;
      goto LABEL_16;
    case 30:
      result = (int)sub_4110B0();
      goto LABEL_16;
    case 31:
    case 42:
      goto LABEL_61;
    case 36:
    case 38:
      result = 99;
      goto LABEL_16;
    case 37:
    case 43:
    case 45:
      goto LABEL_60;
    case 39:
      result = 1000;
      goto LABEL_16;
    case 40:
      goto LABEL_70;
    case 44:
      goto LABEL_68;
    default:
      goto LABEL_34;
  }
  return result;
}
