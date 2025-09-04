# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/sp/transport/ws
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/sp/transport/ws
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.sp.transport.ws.ws_test "/home/raptor/nanomq-0.17.5/nng/src/sp/transport/ws/ws_test" "-t" "-v")
set_tests_properties(nng.sp.transport.ws.ws_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;122;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/transport/ws/CMakeLists.txt;23;nng_test_if;/home/raptor/nanomq-0.17.5/nng/src/sp/transport/ws/CMakeLists.txt;0;")
