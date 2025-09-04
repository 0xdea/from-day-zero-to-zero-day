# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.supplemental.wssfile_test "/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/wssfile_test" "-t" "-v")
set_tests_properties(nng.supplemental.wssfile_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/CMakeLists.txt;16;nng_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/CMakeLists.txt;0;")
add_test(nng.supplemental.websocket_test "/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/websocket_test" "-t" "-v")
set_tests_properties(nng.supplemental.websocket_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/CMakeLists.txt;17;nng_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/websocket/CMakeLists.txt;0;")
