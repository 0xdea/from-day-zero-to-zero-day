# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/tools/perf
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/tools/perf
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.inproc_lat "/home/raptor/nanomq-0.17.5/nng/src/tools/perf/inproc_lat" "64" "10000")
set_tests_properties(nng.inproc_lat PROPERTIES  TIMEOUT "30" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/perf/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/perf/CMakeLists.txt;0;")
add_test(nng.inproc_thr "/home/raptor/nanomq-0.17.5/nng/src/tools/perf/inproc_thr" "1400" "10000")
set_tests_properties(nng.inproc_thr PROPERTIES  TIMEOUT "30" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/perf/CMakeLists.txt;30;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/perf/CMakeLists.txt;0;")
