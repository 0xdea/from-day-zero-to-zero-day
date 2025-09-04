# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.supplemental.hash_test "/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/hash_test" "-t" "-v")
set_tests_properties(nng.supplemental.hash_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/CMakeLists.txt;30;nng_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/CMakeLists.txt;0;")
add_test(nng.supplemental.dbtree_test "/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/dbtree_test" "-t" "-v")
set_tests_properties(nng.supplemental.dbtree_test PROPERTIES  TIMEOUT "180" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/cmake/NNGHelpers.cmake;109;add_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/CMakeLists.txt;31;nng_test;/home/raptor/nanomq-0.17.5/nng/src/supplemental/nanolib/CMakeLists.txt;0;")
