const char *__fastcall sub_1923C(const char *a1)
{
  const char *result; // r0
  const char *v3; // r0
  char v4[48]; // [sp+0h] [bp-30h] BYREF

  snprintf(v4, 0x20u, "%s_proto", a1);
  if ( is_value_in_nvram_1(v4, "ppp3g") )
    goto LABEL_6;
  if ( !is_value_in_nvram_1(v4, "lte") )
  {
    v3 = "\nwwansms_error = 'WAN is not WWAN!'";
    goto LABEL_11;
  }
  snprintf(v4, 0x20u, "%s_modem_type", a1);
  if ( !is_value_in_nvram_1(v4, "non-hilink")
    && !is_value_in_nvram_1(v4, "huawei-non-hilink")
    && !is_value_in_nvram_1(v4, "hw-ether") )
  {
    v3 = "\nwwansms_error = 'WWAN is not supported!'";
LABEL_11:
    sub_13954(v3);
    return 0;
  }
LABEL_6:
  snprintf(v4, 0x20u, "%s_modem_dev", a1);
  result = (const char *)nvram_get(v4);
  if ( !result )
    return &s;
  return result;
}
