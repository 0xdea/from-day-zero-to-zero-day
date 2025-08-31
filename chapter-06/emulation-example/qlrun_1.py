#
# Usage:
# $ pipx install qiling===1.4.6
# $ sudo apt install python3-unicorn # Version: 6.1.0-2build2
# $ pipx run --spec qiling python qlrun_1.py
# 

from qiling import Qiling
from qiling.extensions.coverage import utils as cov_utils
from qiling.const import QL_VERBOSE


PROJECT_ROOT = "/home/kali/Desktop/freshtomato/squashfs-root/"
BINARY_PATH = "usr/sbin/httpd"
ql = Qiling(
    [PROJECT_ROOT + BINARY_PATH],
    PROJECT_ROOT,
    console=True,
    verbose=QL_VERBOSE.DEBUG
)

with cov_utils.collect_coverage(ql, 'drcov', 'output.cov'):
    ql.run()