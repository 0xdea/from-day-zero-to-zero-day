#
# qlrun.py
#
# Use Qiling to emulate a MIPS binary with Unicorn engine and collect code coverage data.
#
# Usage:
# $ grep PRETTY /etc/os-release
# PRETTY_NAME="Ubuntu 24.04.2 LTS"
# $ python3 -m venv venv-unicorn
# $ source venv-unicorn/bin/activate
# (venv-unicorn) $ pip install qiling===1.4.6
# (venv-unicorn) $ pip install unicorn==2.0.1
# (venv-unicorn) $ python qlrun.py
# 

from qiling import Qiling
from qiling.extensions.coverage import utils as cov_utils
from qiling.const import QL_VERBOSE, QL_INTERCEPT


PROJECT_ROOT = "/home/raptor/freshtomato-mips/squashfs-root/"
BINARY_PATH = "usr/sbin/httpd"
ql = Qiling(
    [PROJECT_ROOT + BINARY_PATH, "-p", "127.0.0.1:8080"],
    PROJECT_ROOT,
    console=True,
    verbose=QL_VERBOSE.DEBUG
)

def my_daemon(ql: Qiling):
    ql.log.info(f'hijacking daemon')
    return 0

with cov_utils.collect_coverage(ql, 'drcov', 'output3.cov'):
    ql.os.set_api('daemon', my_daemon, QL_INTERCEPT.CALL)
    ql.run()