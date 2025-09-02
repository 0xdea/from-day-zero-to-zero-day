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
# (venv-0day) $ pip install unicorn===2.0.1
# (venv-0day) $ python qlrun.py
#
# Alternatively, use pipenv:
# $ sudo apt install pipenv
# $ pipenv install qiling===1.4.6 unicorn===2.0.1
# $ pipenv shell
# (0day-book) $ python qlrun.py
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

def my_daemon(ql: Qiling):
    ql.log.info(f'hijacking daemon')
    return 0

with cov_utils.collect_coverage(ql, 'drcov', 'output3.cov'):
    ql.os.set_api('daemon', my_daemon, QL_INTERCEPT.CALL)
    ql.run()