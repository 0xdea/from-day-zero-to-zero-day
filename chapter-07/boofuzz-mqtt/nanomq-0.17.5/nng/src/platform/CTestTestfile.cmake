# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/platform
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/platform
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.platform.platform_test "/home/raptor/nanomq-0.17.5/nng/src/platform/platform_test" "-t" "-v")
set_tests_properties(nng.platform.platform_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/platform/CMakeLists.txt;16;nng_test;/home/raptor/nanomq-0.17.5/nng/src/platform/CMakeLists.txt;0;")
add_test(nng.platform.resolver_test "/home/raptor/nanomq-0.17.5/nng/src/platform/resolver_test" "-t" "-v")
set_tests_properties(nng.platform.resolver_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/platform/CMakeLists.txt;17;nng_test;/home/raptor/nanomq-0.17.5/nng/src/platform/CMakeLists.txt;0;")
subdirs("posix")
subdirs("windows")
