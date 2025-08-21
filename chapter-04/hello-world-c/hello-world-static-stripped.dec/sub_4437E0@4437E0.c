unsigned __int64 __fastcall sub_4437E0(unsigned int a1)
{
  int v1; // w0
  unsigned __int64 v2; // x1
  int v5; // w0
  __u32 v6; // w19
  unsigned __int64 i; // x1
  void *v10; // x0
  size_t v11; // x1
  int v12; // w2
  __kernel_ulong_t v13; // x21
  __kernel_ulong_t v14; // x22
  __int64 v15; // x23
  __kernel_ulong_t v16; // x30
  __int64 v17; // x19
  void *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  unsigned int v24; // w0
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  __int64 v28; // x7
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  unsigned __int64 result; // x0
  int v38; // w19
  int v39; // w1
  __int64 v40; // x0
  int v41; // w21
  _DWORD *v42; // x22
  signed __int64 v43; // x20
  bool v44; // zf
  __int64 v45; // x0
  __kernel_ulong_t *p_totalhigh; // x29
  __int64 mem_unit; // x19
  rlim64_t totalram; // x20
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v52; // x0
  struct sysinfo v53; // [xsp+0h] [xbp-1C8h] BYREF
  __int64 v54; // [xsp+70h] [xbp-158h]
  __kernel_ulong_t *v55; // [xsp+78h] [xbp-150h]
  __kernel_ulong_t v56; // [xsp+80h] [xbp-148h]
  __int64 v57; // [xsp+88h] [xbp-140h]
  struct rlimit64 v58; // [xsp+90h] [xbp-138h] BYREF
  struct sysinfo v59; // [xsp+A0h] [xbp-128h] BYREF
  struct stat *v60; // [xsp+110h] [xbp-B8h]
  __kernel_ulong_t totalhigh; // [xsp+118h] [xbp-B0h] BYREF
  __kernel_ulong_t freehigh; // [xsp+120h] [xbp-A8h]
  __int64 v63; // [xsp+128h] [xbp-A0h]
  struct stat *v64; // [xsp+130h] [xbp-98h]
  char v65; // [xsp+138h] [xbp-90h]
  struct stat var88; // [xsp+140h] [xbp-88h] BYREF

  v17 = a1;
  var88.__unused[1] = qword_48DD60;
  if ( (sub_410930(a1, &var88) & 0x80000000) != 0 )
    goto LABEL_10;
  if ( (var88.st_nlink & 0xF000) != 0x4000 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 20;
    goto LABEL_10;
  }
  v24 = sub_410D20(v17, 3, v18, v19, v20, v21, v22, v23, v65);
  if ( v24 == -1 )
  {
LABEL_10:
    result = 0;
    goto LABEL_7;
  }
  if ( (v24 & 0x200000) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 9;
    result = 0;
  }
  else if ( (v24 & 3) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    result = 0;
  }
  else
  {
    result = sub_430170(v17, 0, v24, (__int64)&var88, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36);
  }
LABEL_7:
  if ( var88.__unused[1] == qword_48DD60 )
    return result;
  v59.totalhigh = (__kernel_ulong_t)&var88.__unused[2];
  v59.freehigh = v16;
  *(_QWORD *)&v59.mem_unit = v17;
  v60 = &var88;
  v38 = sub_412340();
  *(_QWORD *)&v59.procs = qword_48DD60;
  result = 0;
  if ( v38 == 187 )
  {
    result = 4 << (_ReadStatusReg(CTR_EL0) & 0xF);
    goto LABEL_16;
  }
  if ( v38 == 190 )
  {
    result = 4 << (((unsigned int)_ReadStatusReg(CTR_EL0) >> 16) & 0xF);
    goto LABEL_16;
  }
  if ( v38 > 139 )
  {
    switch ( v38 )
    {
      case 249:
        result = qword_490F18;
        if ( !qword_490F18 )
        {
          totalhigh = v13;
          freehigh = v14;
          v63 = v15;
          if ( *(_QWORD *)&v59.procs == qword_48DD60 )
            sub_41F250(
              "GLRO(dl_minsigstacksize) != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf.c",
              0x57u,
              (__int64)"linux_sysconf");
          goto LABEL_126;
        }
LABEL_16:
        if ( *(_QWORD *)&v59.procs == qword_48DD60 )
          return result;
LABEL_125:
        totalhigh = v13;
        freehigh = v14;
        v63 = v15;
        while ( 1 )
        {
LABEL_126:
          sub_412340();
LABEL_127:
          totalhigh = v13;
          freehigh = v14;
          v63 = v15;
          if ( *(_QWORD *)&v59.procs == qword_48DD60 )
            sub_41F250(
              "pthread_stack_min != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf-pthread_stack_min.h",
              0x1Au,
              (__int64)"__get_pthread_stack_min");
        }
      case 250:
        v40 = qword_490F18;
        if ( !qword_490F18 )
        {
          totalhigh = v13;
          freehigh = v14;
          v63 = v15;
          if ( *(_QWORD *)&v59.procs == qword_48DD60 )
            sub_41F250(
              "minsigstacksize != 0",
              (__int64)"../sysdeps/unix/sysv/linux/sysconf-sigstksz.h",
              0x19u,
              (__int64)"sysconf_sigstksz");
          goto LABEL_126;
        }
        if ( qword_490F18 < 5120 )
          v40 = 5120;
        result = 4 * v40;
        goto LABEL_16;
      case 149:
        goto LABEL_59;
    }
    if ( v38 > 178 )
    {
      switch ( v38 )
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
  if ( v38 > 137 )
    goto LABEL_59;
  switch ( v38 )
  {
    case 3:
      totalhigh = v13;
      freehigh = v14;
      v41 = sub_410EE0("/proc/sys/kernel/ngroups_max", 0x80000);
      if ( v41 == -1 )
      {
        v13 = totalhigh;
        v14 = freehigh;
LABEL_81:
        result = 0x10000;
        goto LABEL_16;
      }
LABEL_49:
      v42 = (_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      while ( 1 )
      {
        v43 = sub_410FC0(v41, &v59.sharedram, 0x1Fu);
        if ( v43 != -1 )
          break;
        if ( *v42 != 4 )
        {
          result = sub_410CD0(v41);
          goto LABEL_83;
        }
      }
      result = sub_410CD0(v41);
      if ( v43 <= 0
        || (*((_BYTE *)&v59.sharedram + v43) = 0,
            result = sub_423790((unsigned __int8 *)&v59.sharedram, (unsigned __int8 **)&v59.totalram, 10),
            (__kernel_ulong_t *)v59.totalram == &v59.sharedram) )
      {
LABEL_83:
        v13 = totalhigh;
        v14 = freehigh;
      }
      else
      {
        v13 = totalhigh;
        v14 = freehigh;
        if ( *(_BYTE *)v59.totalram )
          v44 = *(_BYTE *)v59.totalram == 10;
        else
          v44 = 1;
        if ( v44 )
          goto LABEL_16;
      }
      goto LABEL_58;
    case 34:
      if ( !(unsigned int)sub_4310B0(__RLIMIT_SIGPENDING, (struct rlimit64 *)&v59.totalram) )
      {
        result = v59.totalram;
        goto LABEL_16;
      }
      totalhigh = v13;
      freehigh = v14;
      v41 = sub_410EE0("/proc/sys/kernel/rtsig-max", 0x80000);
      if ( v41 == -1 )
      {
        v13 = totalhigh;
        v14 = freehigh;
        result = -1;
        goto LABEL_16;
      }
      goto LABEL_49;
    case 0:
      v39 = sub_4310B0(RLIMIT_STACK, (struct rlimit64 *)&v59.totalram);
      result = 0x20000;
      if ( !v39 && v59.totalram > 0x7FFFF )
      {
        result = v59.totalram >> 2;
        if ( v59.totalram >> 2 > 0x600000 )
          result = 6291456;
      }
      goto LABEL_16;
  }
  if ( v38 > 90 )
  {
    if ( v38 <= 124 )
    {
      if ( v38 > 100 )
      {
        result = 8;
        switch ( v38 )
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
      v50 = 1LL << ((unsigned __int8)v38 - 91);
      if ( (v50 & 0x38D) == 0 )
      {
        if ( (v50 & 0x30) != 0 )
          goto LABEL_59;
        if ( (v50 & 0x42) != 0 )
        {
          result = -1;
          goto LABEL_16;
        }
        goto LABEL_34;
      }
      goto LABEL_66;
    }
LABEL_63:
    v45 = 1LL << ((unsigned __int8)v38 - 125);
    if ( (v45 & 0x1FFF7A8FFFEE0BLL) != 0 )
      goto LABEL_35;
    if ( (v45 & 0x8430001180LL) != 0 )
      goto LABEL_59;
    if ( (v45 & 0x20000140000074LL) == 0 )
      goto LABEL_34;
LABEL_66:
    result = 1;
    goto LABEL_16;
  }
  if ( v38 > 70 )
  {
    switch ( v38 )
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
        result = (int)sub_411614();
        goto LABEL_16;
      case 'T':
        result = (int)sub_4115D4();
        goto LABEL_16;
      case 'U':
        if ( *(_QWORD *)&v59.procs != qword_48DD60 )
          goto LABEL_125;
        totalhigh = v59.totalhigh;
        freehigh = v59.freehigh;
        p_totalhigh = &totalhigh;
        v63 = *(_QWORD *)&v59.mem_unit;
        v64 = v60;
        v60 = (struct stat *)qword_48DD60;
        sub_411BC0(&v59);
        v1 = sub_4110B0();
        mem_unit = v59.mem_unit;
        v2 = v1;
        totalram = v59.totalram;
        if ( v59.mem_unit > 1 && (unsigned __int64)v1 > 1 )
        {
          do
          {
            mem_unit = (unsigned int)mem_unit >> 1;
            v2 >>= 1;
          }
          while ( (unsigned int)mem_unit > 1 && v2 > 1 );
        }
        result = (unsigned int)mem_unit * v59.totalram;
        if ( v2 > 1 )
        {
          do
          {
            v2 >>= 1;
            result >>= 1;
          }
          while ( v2 != 1 );
        }
        if ( v60 == (struct stat *)qword_48DD60 )
          return result;
        sub_412340();
LABEL_144:
        v55 = p_totalhigh;
        v56 = v59.freehigh;
        v57 = mem_unit;
        v58.rlim_cur = totalram;
        v54 = qword_48DD60;
        sub_411BC0(&v53);
        v5 = sub_4110B0();
        v6 = v53.mem_unit;
        for ( i = v5; v6 > 1 && i > 1; i >>= 1 )
          v6 >>= 1;
        result = v6 * v53.freeram;
        if ( i > 1 )
        {
          do
          {
            i >>= 1;
            result >>= 1;
          }
          while ( i != 1 );
        }
        if ( v54 != qword_48DD60 )
        {
          v10 = (void *)sub_412340();
          result = sub_4117C0(v10, v11, v12);
        }
        break;
      case 'V':
        if ( *(_QWORD *)&v59.procs != qword_48DD60 )
          goto LABEL_125;
        p_totalhigh = (__kernel_ulong_t *)v59.totalhigh;
        mem_unit = *(_QWORD *)&v59.mem_unit;
        totalram = (rlim64_t)v60;
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
  if ( v38 > 45 )
  {
    v49 = 1LL << ((unsigned __int8)v38 - 46);
    if ( (v49 & 0x1FBF98) != 0 )
      goto LABEL_35;
    if ( (v49 & 0x600067) == 0 )
    {
      result = 1024;
      if ( ((1LL << ((unsigned __int8)v38 - 46)) & 0x1804000) != 0 )
        goto LABEL_16;
      goto LABEL_34;
    }
LABEL_59:
    result = 200809;
    goto LABEL_16;
  }
  if ( v38 < 0 )
  {
LABEL_34:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
LABEL_35:
    result = -1;
    goto LABEL_16;
  }
LABEL_58:
  switch ( v38 )
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
      if ( *(_QWORD *)&v59.procs != qword_48DD60 )
        goto LABEL_125;
      v59.loads[0] = v59.totalhigh;
      v59.loads[1] = v59.freehigh;
      v59.uptime = qword_48DD60;
      if ( (unsigned int)sub_4310B0(__RLIMIT_NPROC, &v58) )
        result = -1;
      else
        result = v58.rlim_cur;
      if ( freehigh != qword_48DD60 )
      {
        v52 = sub_412340();
        result = sub_44B710(v52);
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
