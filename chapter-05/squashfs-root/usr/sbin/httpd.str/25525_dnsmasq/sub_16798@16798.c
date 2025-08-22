int sub_16798()
{
  FILE *v0; // r9
  const char *v1; // r0
  char *v2; // r0
  const char *v3; // r3
  char *v4; // r5
  int v5; // r11
  char *v6; // r0
  int v7; // r0
  const char *v9; // [sp+14h] [bp-584h]
  char s[1024]; // [sp+1Ch] [bp-57Ch] BYREF
  char v11; // [sp+41Ch] [bp-17Ch] BYREF
  char v12[36]; // [sp+51Ch] [bp-7Ch] BYREF
  char v13[28]; // [sp+544h] [bp-54h] BYREF
  const char *v14; // [sp+564h] [bp-34h] BYREF
  int v15; // [sp+568h] [bp-30h] BYREF
  unsigned __int8 v16; // [sp+56Fh] [bp-29h] BYREF

  sub_16624(0, 0);
  sub_159DC(0, 0);
  sub_13954("wldev = [");
  v16 = 32;
  foreach_wif(1, (int)&v16, (int)sub_162AC);
  sub_13954("];\n");
  v14 = "wan_ifname,wan2_ifname,wan3_ifname,wan4_ifname,wan_iface,wan2_iface,wan3_iface,wan4_iface,wan_proto,wan2_proto,w"
        "an3_proto,wan4_proto,wan_ifnameX,wan2_ifnameX,wan3_ifnameX,wan4_ifnameX,wan_ifnames,wan2_ifnames,wan3_ifnames,wa"
        "n4_ifnames,wan_ipaddr,wan2_ipaddr,wan3_ipaddr,wan4_ipaddr,wan_hwaddr,wan2_hwaddr,wan3_hwaddr,wan4_hwaddr,wan_ppp"
        "_get_ip,wan2_ppp_get_ip,wan3_ppp_get_ip,wan4_ppp_get_ip,wan_gateway_get,wan2_gateway_get,wan3_gateway_get,wan4_g"
        "ateway_get,wan_gateway,wan2_gateway,wan3_gateway,wan4_gateway,wan_pptp_dhcp,wan2_pptp_dhcp,wan3_pptp_dhcp,wan4_p"
        "ptp_dhcp,wan_pptp_server_ip,wan2_pptp_server_ip,wan3_pptp_server_ip,wan4_pptp_server_ip,lan_ifname,lan1_ifname,l"
        "an2_ifname,lan3_ifname,lan_ipaddr,lan1_ipaddr,lan2_ipaddr,lan3_ipaddr,lan_netmask,lan1_netmask,lan2_netmask,lan3"
        "_netmask,lan_ifnames,lan1_ifnames,lan2_ifnames,lan3_ifnames,web_svg,web_css,cstats_enable,cstats_labels,dhcpd_st"
        "atic,wl_ifname,wl_mode,wl_radio,wl_nband,wl_wds_enable";
  sub_12D3C((char *)1, (char *)&v14);
  sub_13954("dhcpd_lease = [");
  if ( sub_165B0("lan_proto") || sub_165B0("lan1_proto") || sub_165B0("lan2_proto") || sub_165B0("lan3_proto") )
  {
    f_write("/var/tmp/dhcp/leases.!", 0, 0, 0, 438);
    if ( !killall("dnsmasq", 12) )
      f_wait_notexists("/var/tmp/dhcp/leases.!", 5);
    v0 = fopen("/var/tmp/dhcp/leases", "r");
    if ( v0 )
    {
      v16 = 32;
      while ( fgets(s, 1024, v0) )
      {
        if ( sscanf(s, "%lu %17s %39s %255s", &v15, v13, v12, &v11) == 4 )
        {
          if ( v11 == 42 )
            v1 = &::s;
          else
            v1 = &v11;
          v2 = sub_E6BC(v1);
          if ( v2 )
            v3 = v2;
          else
            v3 = &::s;
          v4 = v2;
          v5 = v16;
          if ( v15 )
          {
            v9 = v3;
            v6 = sub_E81C(s, v15);
            v3 = v9;
          }
          else
          {
            v6 = "non-expiring";
          }
          sub_13970(0, "%c['%s','%s','%s','%s']", v5, v3, v12, v13, v6);
          free(v4);
          v16 = 44;
        }
      }
      fclose(v0);
    }
    unlink("/var/tmp/dhcp/leases");
  }
  sub_13954("];\n");
  sub_13954("gc_time = ");
  memset(s, 0, sizeof(s));
  if ( f_read_string("/proc/sys/net/ipv4/neigh/default/gc_stale_time", s, 1024) <= 0 )
  {
    sub_13954("65");
  }
  else
  {
    v7 = atoi(s);
    sub_13970(0, "%d", v7);
  }
  return sub_13954(";");
}
