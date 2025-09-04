# CMake generated Testfile for 
# Source directory: /home/raptor/nanomq-0.17.5/nng/src/tools/nngcat
# Build directory: /home/raptor/nanomq-0.17.5/nng/src/tools/nngcat
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(nng.nngcat_async "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_async_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_async PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;30;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_ambiguous "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_ambiguous_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_ambiguous PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;31;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_need_proto "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_need_proto_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_need_proto PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;32;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_dup_proto "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_dup_proto_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_dup_proto PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;33;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_help "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_help_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_help PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;34;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_incompat "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_incompat_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_incompat PROPERTIES  TIMEOUT "10" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;35;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_pubsub "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_pubsub_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_pubsub PROPERTIES  TIMEOUT "20" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;36;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_recvmaxsz "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_recvmaxsz_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_recvmaxsz PROPERTIES  TIMEOUT "20" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;37;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_unlimited "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_unlimited_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_unlimited PROPERTIES  TIMEOUT "20" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;38;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
add_test(nng.nngcat_stdin_pipe "/usr/bin/bash" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat_stdin_pipe_test.sh" "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/nngcat")
set_tests_properties(nng.nngcat_stdin_pipe PROPERTIES  TIMEOUT "20" _BACKTRACE_TRIPLES "/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;27;add_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;39;add_nngcat_test;/home/raptor/nanomq-0.17.5/nng/src/tools/nngcat/CMakeLists.txt;0;")
