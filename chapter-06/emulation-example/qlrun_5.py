#
# qlrun.py
#
# Use Qiling to emulate a MIPS binary with Unicorn engine and collect code coverage data.
#
# Usage:
# $ grep PRETTY /etc/os-release
# PRETTY_NAME="Ubuntu 24.04.2 LTS"
# $ python3 -m venv venv-0day
# $ source venv-0day/bin/activate
# (venv-0day) $ pip install qiling===1.4.6
# (venv-0day) $ pip install unicorn==2.0.1
# (venv-0day) $ python qlrun.py
# 

from qiling import Qiling
from qiling.extensions.coverage import utils as cov_utils
from qiling.const import QL_VERBOSE, QL_INTERCEPT


PROJECT_ROOT = "freshtomato-mips/squashfs-root/"
BINARY_PATH = "usr/sbin/httpd"
ql = Qiling(
    [PROJECT_ROOT + BINARY_PATH, "-p", "127.0.0.1:8080"],
    PROJECT_ROOT,
    console=True,
    verbose=QL_VERBOSE.DEBUG
)

ql.add_fs_mapper(r'/dev/urandom', r'/dev/urandom')
ql.add_fs_mapper(r'/dev/nvram', r'/tmp/nvram')
ql.add_fs_mapper(r'/etc/TZ', r'/tmp/TZ')

def my_daemon(ql: Qiling):
    ql.log.info(f'hijacking daemon')
    return 0

def my_wait_action_idle(ql: Qiling):
    ql.log.info(f'hijacking wait_action_idle')
    return 0

def my_fork(ql: Qiling):
    ql.log.info(f'hijacking fork')
    return 0

with cov_utils.collect_coverage(ql, 'drcov', 'output5.cov'):
    ql.os.set_api('daemon', my_daemon, QL_INTERCEPT.CALL)
    ql.os.set_api('wait_action_idle', my_wait_action_idle, QL_INTERCEPT.CALL)
    #ql.os.set_syscall('fork', my_fork, QL_INTERCEPT.CALL) # overwriting built-in system call handlers may cause issues
    ql.run()