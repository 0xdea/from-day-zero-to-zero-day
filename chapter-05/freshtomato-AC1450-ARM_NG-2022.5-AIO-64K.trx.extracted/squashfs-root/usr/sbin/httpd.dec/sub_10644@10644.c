int __fastcall sub_10644(const char *a1, char *a2)
{
  int v4; // r5
  struct addrinfo s; // [sp+14h] [bp-34h] BYREF
  struct addrinfo *pai; // [sp+34h] [bp-14h] BYREF

  memset(&s, 0, sizeof(s));
  s.ai_socktype = 1;
  v4 = getaddrinfo(a1, 0, &s, &pai);
  if ( !v4 )
  {
    v4 = getnameinfo(pai->ai_addr, pai->ai_addrlen, a2, 0x401u, 0, 0, 0);
    freeaddrinfo(pai);
  }
  return v4;
}
