const module = Process.getModuleByName('dwgread-stripped');
//const dwg_read_file = module.base.add(0x059fe0);
const dwg_read_file = module.base.add(0x0594c0);
Afl.setPersistentAddress(dwg_read_file);
Afl.done();