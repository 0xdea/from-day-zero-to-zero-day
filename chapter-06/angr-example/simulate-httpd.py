import angr
import claripy

TARGET = "freshtomato-mips/squashfs-root/usr/sbin/httpd"

proj = angr.Project(TARGET, auto_load_libs=False)

# add command-line option symbol of length 12
argv1 = claripy.BVS('argv1', 12 * 8)

# insert symbol into simulation as command-line option
state = proj.factory.entry_state(args = [TARGET, argv1])
simgr = proj.factory.simulation_manager(state)

# execute until instruction address within options parsing block
simgr.explore(find=0x405184)

# print evaluated value of argv1 at found state
found = simgr.found[0]
print(found.solver.eval(argv1, cast_to=bytes))
print(found.solver.constraints)