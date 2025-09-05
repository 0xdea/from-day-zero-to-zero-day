#
# Example session:
# $ git clone https://github.com/gwentruong/utdbf
# $ cd utdbf
# $ make
# $ wget https://github.com/uds-se/FormatFuzzer/releases/download/v1.0/FormatFuzzer-v1.0.zip
# $ unzip FormatFuzzer-v1.0.zip
# $ sudo apt install -y git g++ make automake python3-pip zlib1g-dev libboost-dev
# $ pipenv install py010parser six intervaltree
# $ cd FormatFuzzer-v1.0
# $ ./ffcompile ../dbf.bt dbf.cpp
# $ sed -i '21i #include <ctime>' fuzzer.cp
# $ g++ -c -I . -std=c++17 -g -O3 -Wall fuzzer.cpp
# $ g++ -c -I . -std=c++17 -g -O3 -Wall dbf.cpp
# $ g++ -O3 dbf.o fuzzer.o -o dbf-fuzzer -lz
# $ cd ..
# $ chmod +x fuzz-utdbf.sh
# $ ulimit -c unlimited
# $ ./fuzz-utdbf.sh
# ...
# $ utdbf/utdbf fuzzed.dbf
# ...
# Segmentation fault (core dumped)
# $ pwndbg ./utdbf/utdbf  /var/lib/apport/coredump/core._home_raptor_utdbf_utdbf.1015.98b23ca7-9f3c-4ad7-8e24-e9e8cb22dc48.1741437.1659933464
# ...
#  ► 0x618568157cc0 <main+308>    mov    qword ptr [rdx], rax             <Cannot dereference [0]>
#    0x618568157cc3 <main+311>    add    dword ptr [rbp - 0x14c], 1
#    0x618568157cca <main+318>    mov    rax, qword ptr [rbp - 0x130]
#    0x618568157cd1 <main+325>    mov    rdi, rax
#    0x618568157cd4 <main+328>    call   parse_field                 <parse_field>
# 
#    0x618568157cd9 <main+333>    mov    qword ptr [rbp - 0x118], rax
#    0x618568157ce0 <main+340>    cmp    qword ptr [rbp - 0x118], 0
#    0x618568157ce8 <main+348>    jne    main+275                    <main+275>
# 
#    0x618568157cea <main+350>    nop
#    0x618568157ceb <main+351>    mov    rdx, qword ptr [rbp - 0x128]
#    0x618568157cf2 <main+358>    mov    rax, qword ptr [rbp - 0x130]
# ...
#  ► 0   0x618568157cc0 main+308
#    1   0x7fd91422a1ca None
#    2   0x7fd91422a28b __libc_start_main+139
#    3   0x6185681571e5 _start+37
#

while true
do
  FormatFuzzer-v1.0/dbf-fuzzer fuzz test.dbf 2>/dev/null
  # run utdbf for maximum 1 second on test case and exit
  timeout --preserve-status 1 utdbf/utdbf ./test.dbf <<< "0" >/dev/null
  status=$?
  #echo $status
  if [ $status -gt 0 ] && [ $status -lt 143 ]; then
    break
  fi
done
