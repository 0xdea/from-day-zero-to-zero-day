# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.sp.protocol.pair1.pair1_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/pair1_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pair1.pair1_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/CMakeLists.txt;19;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/CMakeLists.txt;0;")
add_test(nng.sp.protocol.pair1.pair1_poly_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/pair1_poly_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pair1.pair1_poly_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/CMakeLists.txt;20;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pair1/CMakeLists.txt;0;")
