function show() {
var d = eval('isup.'+serviceType);
var e = E('_'+serviceType+'_button');
if (E('_'+serviceType+'_notice')) E('_'+serviceType+'_notice').innerHTML = serviceType+' is currently '+(d ? 'running ' : 'stopped')+'&nbsp;';
e.value = (d ? 'Stop' : 'Start')+' Now';
e.setAttribute('onclick', 'javascript:toggle(\''+serviceType+'\','+d+');');
if (serviceLastUp != d) {
e.disabled = 0;
E('spin').style.display = 'none';
serviceLastUp = d;
}
if (E('_'+serviceType+'_interface')) E('_'+serviceType+'_interface').disabled = d ? 0 : 1;
if (E('_'+serviceType+'_status')) E('_'+serviceType+'_status').disabled = d ? 0 : 1;
var fom = E('t_fom');
if (d && changed) 
fom._service.value = (serviceType == 'pptpd' ? 'firewall-restart,'+serviceType+'-restart,dnsmasq-restart' : serviceType+'-restart');
else
fom._service.value = '';
}
function toggle(service, isup) {
if (typeof save_pre === 'function') { if (!save_pre()) return; }
if (changed) alert("Configuration changes were detected - they will be saved");
E('_'+service+'_button').disabled = 1;
if (E('_'+service+'_interface')) E('_'+service+'_interface').disabled = 1;
if (E('_'+service+'_status')) E('_'+service+'_status').disabled = 1;
E('spin').style.display = 'inline';
serviceLastUp = isup;
var fom = E('t_fom');
fom._service.value = (service == 'pptpd' ? 'firewall-restart,'+service+(isup ? '-stop' : '-start')+',dnsmasq-restart' : service+(isup ? '-stop' : '-start'));
save(1);
}
