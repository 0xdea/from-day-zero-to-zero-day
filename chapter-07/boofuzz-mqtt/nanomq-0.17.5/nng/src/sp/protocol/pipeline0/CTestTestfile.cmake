# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.sp.protocol.pipeline0.pull_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/pull_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pipeline0.pull_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/CMakeLists.txt;22;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/CMakeLists.txt;0;")
add_test(nng.sp.protocol.pipeline0.push_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/push_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pipeline0.push_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/CMakeLists.txt;23;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pipeline0/CMakeLists.txt;0;")
