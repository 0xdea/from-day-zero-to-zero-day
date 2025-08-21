__int64 __fastcall sysconf(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x21
  __int64 v4; // x22
  __int64 v5; // x23
  __int64 result; // x0
  int v8; // w1
  __int64 v9; // x0
  __int64 v10; // x2
  unsigned int v11; // w21
  _DWORD *v12; // x22
  __int64 nocancel; // x20
  bool v14; // zf
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  _QWORD v18[2]; // [xsp+8h] [xbp-38h] BYREF
  _BYTE v19[32]; // [xsp+18h] [xbp-28h] BYREF
  __int64 v20; // [xsp+38h] [xbp-8h]
  __int64 v21; // [xsp+60h] [xbp+20h]
  __int64 v22; // [xsp+68h] [xbp+28h]
  __int64 v23; // [xsp+70h] [xbp+30h]

  result = 0;
  if ( a1 == 187 )
    return 4 << (_ReadStatusReg(CTR_EL0) & 0xF);
  if ( a1 == 190 )
    return 4 << (((unsigned int)_ReadStatusReg(CTR_EL0) >> 16) & 0xF);
  if ( a1 > 139 )
  {
    switch ( a1 )
    {
      case 249:
        result = dl_minsigstacksize;
        if ( !dl_minsigstacksize )
        {
          v21 = v3;
          v22 = v4;
          v23 = v5;
          _libc_assert_fail(
            "GLRO(dl_minsigstacksize) != 0",
            (__int64)"../sysdeps/unix/sysv/linux/sysconf.c",
            0x57u,
            (__int64)"linux_sysconf");
        }
        break;
      case 250:
        v9 = dl_minsigstacksize;
        if ( !dl_minsigstacksize )
        {
          v21 = v3;
          v22 = v4;
          v23 = v5;
          _libc_assert_fail(
            "minsigstacksize != 0",
            (__int64)"../sysdeps/unix/sysv/linux/sysconf-sigstksz.h",
            0x19u,
            (__int64)"sysconf_sigstksz");
        }
        if ( dl_minsigstacksize < 5120 )
          v9 = 5120;
        return 4 * v9;
      case 149:
        return 200809;
      default:
        if ( a1 <= 178 )
          goto LABEL_49;
        switch ( a1 )
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
            return -1;
          case 180:
LABEL_92:
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
LABEL_91:
            result = 0;
            break;
          case 235:
          case 236:
            return 200809;
          case 239:
            return 1;
          default:
            goto LABEL_21;
        }
        break;
    }
  }
  else
  {
    if ( a1 > 137 )
      return 200809;
    switch ( a1 )
    {
      case 3:
        v11 = _open_nocancel("/proc/sys/kernel/ngroups_max", 0x80000, a3);
        if ( v11 == -1 )
          return 0x10000;
        break;
      case 34:
        if ( !(unsigned int)getrlimit64(11, v18) )
          return v18[0];
        v11 = _open_nocancel("/proc/sys/kernel/rtsig-max", 0x80000, v10);
        if ( v11 == -1 )
          return -1;
        break;
      case 0:
        v8 = getrlimit64(3, v18);
        result = 0x20000;
        if ( !v8 && v18[0] > 0x7FFFFu )
        {
          result = v18[0] >> 2;
          if ( v18[0] >> 2 > 0x600000u )
            return 6291456;
        }
        return result;
      default:
        if ( a1 <= 90 )
        {
          if ( a1 > 70 )
          {
            switch ( a1 )
            {
              case 'H':
                goto LABEL_47;
              case 'I':
              case 'Z':
                result = 4;
                break;
              case 'J':
                result = 1024;
                break;
              case 'K':
                result = dl_minsigstacksize;
                if ( !dl_minsigstacksize )
                {
                  v21 = v3;
                  v22 = v4;
                  v23 = v5;
                  _libc_assert_fail(
                    "pthread_stack_min != 0",
                    (__int64)"../sysdeps/unix/sysv/linux/sysconf-pthread_stack_min.h",
                    0x1Au,
                    (__int64)"__get_pthread_stack_min");
                }
                if ( dl_minsigstacksize < 0x20000 )
                  result = 0x20000;
                break;
              case 'L':
                return -1;
              case 'M':
              case 'N':
              case 'O':
              case 'P':
              case 'Q':
              case 'R':
                return 200809;
              case 'S':
                result = (int)get_nprocs_conf();
                break;
              case 'T':
                result = (int)get_nprocs();
                break;
              case 'U':
                result = get_phys_pages(&_stack_chk_guard, 0, v20 - _stack_chk_guard);
                break;
              case 'V':
                result = get_avphys_pages(&_stack_chk_guard, 0, v20 - _stack_chk_guard);
                break;
              case 'W':
                goto LABEL_48;
              case 'X':
                result = 0x2000;
                break;
              case 'Y':
                result = 700;
                break;
              default:
                result = 256;
                break;
            }
            return result;
          }
          if ( a1 > 45 )
          {
            v16 = 1LL << ((unsigned __int8)a1 - 46);
            if ( (v16 & 0x1FBF98) != 0 )
              return -1;
            if ( (v16 & 0x600067) == 0 )
            {
              result = 1024;
              if ( ((1LL << ((unsigned __int8)a1 - 46)) & 0x1804000) != 0 )
                return result;
              goto LABEL_21;
            }
            return 200809;
          }
          if ( (a1 & 0x80000000) == 0 )
            goto LABEL_44;
LABEL_21:
          *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
          return -1;
        }
        if ( a1 <= 124 )
        {
          if ( a1 > 100 )
          {
            result = 8;
            switch ( a1 )
            {
              case 'f':
              case 's':
LABEL_56:
                result = 255;
                break;
              case 'g':
                goto LABEL_91;
              case 'h':
              case 'y':
              case 'z':
              case '{':
              case '|':
LABEL_48:
                result = 0x7FFFFFFF;
                break;
              case 'i':
                result = 0xFFFFFFFF80000000LL;
                break;
              case 'j':
                goto LABEL_92;
              case 'k':
LABEL_47:
                result = 32;
                break;
              case 'l':
LABEL_62:
                result = 16;
                break;
              case 'm':
LABEL_55:
                result = 20;
                break;
              case 'n':
              case 'q':
LABEL_54:
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
                return -1;
              case 'v':
                result = 0xFFFF;
                break;
              case 'w':
                result = 4096;
                break;
              case 'x':
LABEL_46:
                result = 2048;
                break;
              default:
                return result;
            }
            return result;
          }
          v17 = 1LL << ((unsigned __int8)a1 - 91);
          if ( (v17 & 0x38D) == 0 )
          {
            if ( (v17 & 0x30) != 0 )
              return 200809;
            if ( (v17 & 0x42) != 0 )
              return -1;
            goto LABEL_21;
          }
          return 1;
        }
LABEL_49:
        v15 = 1LL << ((unsigned __int8)a1 - 125);
        if ( (v15 & 0x1FFF7A8FFFEE0BLL) != 0 )
          return -1;
        if ( (v15 & 0x8430001180LL) != 0 )
          return 200809;
        if ( (v15 & 0x20000140000074LL) == 0 )
          goto LABEL_21;
        return 1;
    }
    v12 = (_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    while ( 1 )
    {
      nocancel = _read_nocancel(v11, v19, 31);
      if ( nocancel != -1 )
        break;
      if ( *v12 != 4 )
      {
        result = _close_nocancel(v11);
        goto LABEL_44;
      }
    }
    result = _close_nocancel(v11);
    if ( nocancel <= 0
      || (v19[nocancel] = 0, result = _isoc23_strtoll(v19, v18, 10), (_BYTE *)v18[0] == v19)
      || (*(_BYTE *)v18[0] ? (v14 = *(_BYTE *)v18[0] == 10) : (v14 = 1), !v14) )
    {
LABEL_44:
      switch ( a1 )
      {
        case 0:
        case 6:
        case 23:
        case 24:
        case 27:
        case 32:
        case 34:
        case 35:
          return -1;
        case 1:
          result = _get_child_max(&_stack_chk_guard, 0, v20 - _stack_chk_guard);
          break;
        case 2:
          result = (int)_getclktck(result);
          break;
        case 3:
          return 0x10000;
        case 4:
          result = (int)getdtablesize(result);
          break;
        case 5:
          goto LABEL_62;
        case 7:
        case 8:
          return 1;
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
          return 200809;
        case 25:
          goto LABEL_55;
        case 26:
        case 33:
          goto LABEL_48;
        case 28:
          result = 0x8000;
          break;
        case 30:
          result = (int)getpagesize();
          break;
        case 31:
        case 42:
          goto LABEL_47;
        case 36:
        case 38:
          result = 99;
          break;
        case 37:
        case 43:
        case 45:
          goto LABEL_46;
        case 39:
          result = 1000;
          break;
        case 40:
          goto LABEL_56;
        case 44:
          goto LABEL_54;
        default:
          goto LABEL_21;
      }
    }
  }
  return result;
}
