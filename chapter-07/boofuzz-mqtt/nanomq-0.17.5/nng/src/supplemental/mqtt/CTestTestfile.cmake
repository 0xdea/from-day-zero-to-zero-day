# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/mqtt
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/mqtt
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.supplemental.core.mqtt_test "/home/raptor/nanomq-0.17.5/nng/src/supplemental/mqtt/mqtt_test" "-t" "-v")
set_tests_properties(nng.supplemental.core.mqtt_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/mqtt/CMakeLists.txt;27;nng_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/mqtt/CMakeLists.txt;0;")
