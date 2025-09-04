# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/sp/transport/tcp
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/sp/transport/tcp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.sp.transport.tcp.tcp_test "/home/raptor/nanomq-0.17.5/nng/src/sp/transport/tcp/tcp_test" "-t" "-v")
set_tests_properties(nng.sp.transport.tcp.tcp_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/transport/tcp/CMakeLists.txt;17;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/transport/tcp/CMakeLists.txt;0;")
