# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.sp.protocol.pubsub0.pub_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/pub_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pubsub0.pub_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;22;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;0;")
add_test(nng.sp.protocol.pubsub0.sub_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/sub_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pubsub0.sub_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;23;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;0;")
add_test(nng.sp.protocol.pubsub0.xsub_test "/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/xsub_test" "-t" "-v")
set_tests_properties(nng.sp.protocol.pubsub0.xsub_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;24;nng_test;/home/raptor/nanomq-0.17.5/nng/src/sp/protocol/pubsub0/CMakeLists.txt;0;")
