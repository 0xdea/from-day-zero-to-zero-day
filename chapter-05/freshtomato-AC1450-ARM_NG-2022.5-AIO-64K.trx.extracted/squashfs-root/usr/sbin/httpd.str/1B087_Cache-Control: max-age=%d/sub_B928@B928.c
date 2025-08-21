int __fastcall sub_B928(int a1, const char *a2, const char *a3, int a4)
{
  int v8; // r0
  struct tm *v9; // r0
  char *v10; // r0
  int result; // r0
  char v12[128]; // [sp+14h] [bp+0h] BYREF
  time_t timer; // [sp+94h] [bp+80h] BYREF

  v8 = time(0);
  timer = v8;
  if ( v8 <= 946684799 )
    timer = v8 + 946684800;
  v9 = gmtime(&timer);
  strftime(v12, 0x80u, "%a, %d %b %Y %H:%M:%S GMT", v9);
  v10 = sub_AEE4(a1);
  sub_13970(
    0,
    "%s %d %s\r\nServer: %s\r\nDate: %s\r\nX-Frame-Options: SAMEORIGIN\r\n",
    "HTTP/1.0",
    a1,
    v10,
    "httpd",
    v12);
  if ( a3 )
    sub_13970(0, "Content-Type: %s\r\n", a3);
  if ( a4 <= 0 || dword_30C88 )
    sub_13954(
      "Cache-Control: no-cache, no-store, must-revalidate, private\r\n"
      "Expires: Thu, 31 Dec 1970 00:00:00 GMT\r\n"
      "Pragma: no-cache\r\n");
  else
    sub_13970(0, "Cache-Control: max-age=%d\r\n", 3600 * a4);
  if ( a2 )
    sub_13970(0, "%s\r\n", a2);
  result = sub_13954("Connection: close\r\n\r\n");
  dword_30CB4 = 1;
  return result;
}
