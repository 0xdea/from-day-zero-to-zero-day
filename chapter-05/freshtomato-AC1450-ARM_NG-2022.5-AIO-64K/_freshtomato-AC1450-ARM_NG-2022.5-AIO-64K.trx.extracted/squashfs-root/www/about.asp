<!DOCTYPE html>
<html lang="en-GB">
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8">
<meta name="robots" content="noindex,nofollow">
<title>[<% ident(); %>] About</title>
<link rel="stylesheet" type="text/css" href="tomato.css">
<% css(); %>
<script src="tomato.js"></script>
<script>
//	<% nvram(''); %>	// http_id
function init() {
eventHandler();
}
</script>
</head>
<body onload="init()">
<table id="container">
<tr><td colspan="2" id="header">
<div class="title">FreshTomato</div>
<div class="version">Version <% version(); %> on <% nv("t_model_name"); %></div>
</td></tr>
<tr id="body"><td id="navi"><script>navi()</script></td>
<td id="content">
<div id="ident"><% ident(); %> | <script>wikiLink();</script></div>
<div class="about">
<b>FreshTomato Firmware <% version(1); %></b><br>
<br>
Linux kernel <% version(2); %> and Broadcom Wireless Driver <% version(3); %><br>
<br>
<b>FreshTomato project page: </b><a href="https://freshtomato.org" class="new_window"> https://freshtomato.org</a><br>
<b>Forums about Tomato</b> - EN: <a href="https://www.linksysinfo.org/index.php?forums/tomato-firmware.33/" class="new_window">https://linksysinfo.org</a> PL: <a href="https://openlinksys.info" class="new_window">https://openlinksys.info</a><br>
<b>Source code: </b><a href="https://bitbucket.org/pedro311/freshtomato-arm" class="new_window"> https://bitbucket.org</a><br>
<br>
<hr>
<br>
<b>TomatoUSB Team features:</b><br>
- USB support integration and GUI<br>
- IPv6 support<br>
- Dual-band and Wireless-N mode<br>
<i>Copyright (C) 2008-2011 Fedor Kozhevnikov, Ray Van Tassle, Wes Campaigne</i><br>
<a href="http://www.tomatousb.org/" class="new_window">http://www.tomatousb.org</a><br>
<br>
<b>"Shibby" features:</b><br>
- Transmission integration<br>
- GUI for Transmission<br>
- NFS utils integration and GUI<br>
- Custom log file path<br>
- SD-idle tool integration for kernel 2.6<br>
- 3G Modem support (big thanks for @LDevil)<br>
- 4G/LTE Modem support<br>
- MutliWAN feature (written by @Arctic, modified by @Shibby)<br>
- SNMP integration and GUI<br>
- APCUPSD integration and GUI (implemented by @arrmo)<br>
- DNScrypt-proxy integration and GUI<br>
- TOR Project integration and GUI<br>
- OpenVPN: Routing Policy<br>
- TomatoAnon project integration and GUI<br>
- TomatoThemeBase project integration and GUI<br>
- Ethernet Ports State<br>
- Extended MOTD (written by @Monter, modified by @Shibby)<br>
- Webmon Backup Script<br>
<i>Copyright (C) 2011-2014 Michał Rupental</i><br>
<a href="http://openlinksys.info" class="new_window">http://openlinksys.info</a><br>
<br>
<b>Tomato-RAF features:</b><br>
- Extended Sysinfo<br>
- Captive Portal (Based in NocatSplash)<br>
- Web Server (NGinX)<br>
- HFS / HFS+ filesystem integration<br>
<i>Copyright (C) 2007-2014 Ofer Chen &amp; Vicente Soriano</i><br>
<a href="http://victek.is-a-geek.com" class="new_window">http://victek.is-a-geek.com</a><br>
<br>
<b>"Teaman" features:</b><br>
- QOS-detailed &amp; ctrate filters<br>
- Realtime bandwidth monitoring of LAN clients<br>
- Static ARP binding<br>
- VLAN administration GUI<br>
- Multiple LAN support integration and GUI<br>
- Multiple/virtual SSID support<br>
- UDPxy integration and GUI<br>
- PPTP Server integration and GUI<br>
<i>Copyright (C) 2011 Augusto Bott</i><br>
<a href="http://code.google.com/p/tomato-sdhc-vlan/" class="new_window">Tomato-sdhc-vlan Homepage</a><br>
<br>
<b>"Lancethepants" features:</b><br>
- DNSSEC integration and GUI<br>
- DNSCrypt-Proxy selectable/manual resolver<br>
- Tinc Daemon integration and GUI<br>
- Comcast DSCP Fix GUI<br>
- ZFS filesystem integration<br>
<i>Copyright (C) 2014-2022 Lance Fredrickson</i><br>
<a href="mailto:lancethepants@gmail.com">lancethepants@gmail.com</a><br>
<br>
<b>"Toastman" features:</b><br>
- Configurable QOS class names<br>
- Comprehensive QOS rule examples set by default<br>
- GPT support for HDD by Yaniv Hamo<br>
- Tools-System refresh timer<br>
<i>Copyright (C) 2011 Toastman</i><br>
<a href="http://www.linksysinfo.org/index.php?threads/using-qos-tutorial-and-discussion.28349/" class="new_window">Using QoS - Tutorial and discussion</a><br>
<br>
<b>"JYAvenard" features:</b><br>
- OpenVPN enhancements &amp; username/password only authentication<br>
- PPTP VPN Client integration and GUI<br>
<i>Copyright (C) 2010-2012 Jean-Yves Avenard</i><br>
<a href="mailto:jean-yves@avenard.org">jean-yves@avenard.org</a><br>
<br>
<b>TomatoVPN feature:</b><br>
- OpenVPN integration and GUI<br>
<i>Copyright (C) 2010 Keith Moyer</i><br>
<a href="mailto:tomatovpn@keithmoyer.com">tomatovpn@keithmoyer.com</a><br>
<br>
<b>"TomatoEgg" feature:</b><br>
- Openvpn username/password verify feature and configure GUI.<br>
<br>
<b>Tomato-hyzoom feature:</b><br>
- MySQL Server integration and GUI<br>
<i>Copyright (C) 2014 Bao Weiquan, Hyzoom</i><br>
<a href="mailto:bwq518@gmail.com">bwq518@gmail.com</a><br>
<br>
<b>"Victek/PrinceAMD/Phykris/Shibby" feature:</b><br>
- Revised IP/MAC Bandwidth Limiter<br>
<br>
<b>"mobrembski" feature:</b><br>
- WWAN modem status<br>
- WWAN SMS Inbox support<br>
- IPerf integration<br>
- termlib based system command line<br>
- OpenVPN client config generator<br>
- Build progress indicator
<br>
<i>Copyright (C) 2017-2019 Michał Obrembski</i><br>
<a href="mailto:michal.o@szerszen.com">michal.o@szerszen.com</a><br>
<br>
<b>Special thanks:</b><br>
We want to express our gratitude to all people not mentioned here but contributed with patches, new models additions, bug solving and updates to Tomato firmware.<br>
<br>
<hr>
<br><b>FreshTomato-ARM - is an alternative, customized version, forked off from Tomato-ARM by Shibby</b>
<br>
Copyright (C) 2016-2022 by Pedro
<br>
<br>
Built on <% build_time(); %> by Pedro
<br>
<br>
<br>
<b>Click below to send a "Thank you" gift through PayPal:</b>
<br>
<br>
<form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">
<div>
<input type="hidden" name="cmd" value="_s-xclick">
<input type="image" src="donate.gif" style="border:0" name="submit" alt="Donate">
<input type="hidden" name="hosted_button_id" value="B4FDH9TH6Z8FU">
</div>
</form>
<br>
<div id="donate"><b>...Or by Bitcoin: </b> 1JDxBBQvcJ9XxgagJRNVrqC1nysq8F8B1Y</div>
<br>
<hr>
</div>
<div id="footer">
&nbsp;
</div>
</td></tr>
</table>
</body>
</html>
