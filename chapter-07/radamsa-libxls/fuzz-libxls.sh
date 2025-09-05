#
# Example session:
# $ git clone https://github.com/0xdea/rusty-radamsa
# $ cd rusty-radamsa/
# $ cargo build --release
# $ cd ..
# $ wget wget https://github.com/libxls/libxls/releases/download/v1.6.2/libxls-1.6.2.tar.gz
# $ tar xvfz libxls-1.6.2.tar.gz
# $ cd libxls-1.6.2
# $ sed -i -e '39,41d' -e '43d' include/libxls/xlstypes.h
# $ ./configure
# $ make
# $ cd ..
# $ chmod +x fuzz-libxls.sh
# $ ./fuzz-libxls.sh
# ...
# $ libxls-1.6.2/test2_libxls fuzzed.xls
# ...
# libxls : BOF
#    ID: 000Ah EOF (End of File)
#    Size: 0
# libxls : xls_getWorkSheet
# Segmentation fault (core dumped)
# $ pwndbg ./libxls-1.6.2/.libs/test2_libxls /var/lib/apport/coredump/core._home_raptor_libxls-1_6_2__libs_test2_libxls.1015.98b23ca7-9f3c-4ad7-8e24-e9e8cb22dc48.329248.1657532470
# ...
#  ► 0x70c1b91c6153 <xls_parseWorkSheet+35>    mov    eax, dword ptr [rdi]            <Cannot dereference [0]>
#    0x70c1b91c6155 <xls_parseWorkSheet+37>    mov    dword ptr [rsp + 0x38], eax
#    0x70c1b91c6159 <xls_parseWorkSheet+41>    mov    rax, qword ptr [rdi + 0x18]
#    0x70c1b91c615d <xls_parseWorkSheet+45>    lea    rdi, [rip + 0x377a]             RDI => 0x70c1b91c98de ◂— 'xls_parseWorkSheet'
#    0x70c1b91c6164 <xls_parseWorkSheet+52>    mov    qword ptr [rsp + 0x20], rax
#    0x70c1b91c6169 <xls_parseWorkSheet+57>    call   verbose@plt                 <verbose@plt>
# 
#    0x70c1b91c616e <xls_parseWorkSheet+62>    lea    rdi, [rip + 0x377c]             RDI => 0x70c1b91c98f1 ◂— 'xls_preparseWorkSheet'
#    0x70c1b91c6175 <xls_parseWorkSheet+69>    call   verbose@plt                 <verbose@plt>
# 
#    0x70c1b91c617a <xls_parseWorkSheet+74>    mov    rax, qword ptr [r14 + 0x18]
#    0x70c1b91c617e <xls_parseWorkSheet+78>    mov    esi, dword ptr [r14]
#    0x70c1b91c6181 <xls_parseWorkSheet+81>    mov    rdi, qword ptr [rax]
# ...
# In file: /home/raptor/libxls-1.6.2/src/xls.c:1226
#    1221
#    1222 xls_error_t xls_parseWorkSheet(xlsWorkSheet* pWS)
#    1223 {
#    1224     BOF tmp;
#    1225     BYTE* buf = NULL;
#  ► 1226         long offset = pWS->filepos;
#    1227     size_t read;
#    1228     xls_error_t retval = 0;
#    1229
#    1230         struct st_cell_data *cell = NULL;
#    1231         xlsWorkBook *pWB = pWS->workbook;
# ...
#  ► 0   0x70c1b91c6153 xls_parseWorkSheet+35
#    1   0x5f17c18c32c2 main+194
#    2   0x70c1b8e2a1ca None
#    3   0x70c1b8e2a28b __libc_start_main+139
#    4   0x5f17c18c3465 _start+37
#

#radamsa=radamsa/bin/radamsa
radamsa=rusty-radamsa/target/release/rustyradamsa

while true
do
  $radamsa libxls-1.6.2/test/files/test2.xls > fuzzed.xls
  libxls-1.6.2/test2_libxls fuzzed.xls > /dev/null
  test $? -gt 127 && break
done
